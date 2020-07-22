%{
%}

%skeleton "lalr1.cc"
%require "3.0.4"
%defines
%define api.token.constructor
%define api.value.type variant
%define parse.error verbose
%locations


%code requires
{
	/* you may need these header files 
	 * add more header file if you need more
	 */
	#include <list>
	#include <string>
	#include <vector>
	#include <functional>
	using namespace std;
	
	/* define the sturctures using as types for non-terminals */
	struct dec_struct {
		string code;
		list<string> ids;
	};
	
	struct exp_struct {
		string code;
		string position;
	};
	
	struct var_struct {
		bool array;
		string code;
		string position;
	};
	
	struct statement_struct {
		string code;
		string first;
		string second;
	};
	
	struct term_struct {
		bool negative;
		string code;
		string position;
		list<var_struct> id_list;
	};
	
	/* end the structures for non-terminal types */
}


%code
{
#include "parser.tab.hh"

	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <sstream>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();

	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */
	bool no_error = true;
	
	extern yy::location loc;
	
	int loop_flag = 0;
	bool whileloop_flag;
	bool doloop_flag;

	extern yy::location loc;
	int positionCount = 0;
	string newPosition() {
		string temp = "__temp__" + to_string(positionCount);
		positionCount++;
		return temp;
	}
	
	int labelCount = 0;
	string newLabel(){
		string temp = "__label__" + to_string(labelCount);
		labelCount++;
		return temp;
	}
	
	/* end of your code */
}

%token END 0 "end of file";

	/* specify tokens, type of non-terminals and terminals here */
%token FUNCTION IDENT BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY
%token OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN
%token SUB ADD
%token MULT DIV MOD
%token EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token <int> NUMBER
%type <string> IDENT program function comp
%type <dec_struct> declarations declaration
%type <var_struct> var
%type <statement_struct> statements statement
%type <list<var_struct>> vars
%type <list<string>> identifiers
%type <exp_struct> expression expressions multiplicative_expression 
%type <exp_struct> relation_exp bool_exp relation_and_exp
%type <term_struct> term
%token ERROR
%right UMINUS	


	/* end of token specifications */

%%

%start prog_start;

	/* define your grammars here use the same grammars 
	 * you used in Phase 2 and modify their actions to generate codes
	 * assume that your grammars start with prog_start
	 */

prog_start: 	program {if(no_error) cout << $1;}
		;

program:	{$$ = "";}
		| function program {$$ = $1 + "\n" + $2;}
		;

function:	FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
		{
			$$ = "func " + $2 + "\n";
			$$ += $5.code;
			int i = 0;
			for(list<string>::iterator it = $5.ids.begin(); it != $5.ids.end(); it++){
				$$ += "= " + *it + ", $" + to_string(i) + "\n";
				i++;
			}
			$$ += $8.code;
			$$ += $11.code;
			$$ += "endfunc";
		}
		;

declarations: 	{$$.code=""; $$.ids=list<string>();}
		| declarations declaration SEMICOLON {
			$$.code = $1.code + $2.code;
			for(list<string>::iterator it = $1.ids.begin(); it != $1.ids.end(); it++){
				$$.ids.push_back(*it);
			}
			for(list<string>::iterator it = $2.ids.begin(); it != $2.ids.end(); it++){
				$$.ids.push_back(*it);
			}
		}
		| declarations declaration{
			/*error*/
		}
		;

declaration:	identifiers COLON INTEGER
		{
			for(list<string>::iterator it = $1.begin(); it != $1.end(); it++){
			    $$.code += ". " + *it + "\n";
			}
			$$.ids = $1;
		}
		| identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
		{ 
			for(list<string>::iterator it = $1.begin(); it != $1.end(); it++){
			    $$.code += ".[] " + *it + ", " + to_string($5) + "\n";
			}
			$$.ids = $1;
		}
		;

identifiers:	IDENT
		{ 
		  $$.push_back($1); 
		}
		| identifiers COMMA IDENT  
		{ 
		  for(list<string>::iterator it = $1.begin(); it != $1.end(); it++){
				$$.push_back(*it);
		  }
		  $$.push_back($3);
		}
		;

statements: 	{$$.code = "";}
		| statement SEMICOLON statements {
			$$.code = $1.code + $3.code;
		} 
		;

statement:	var ASSIGN expression
		{
			if($1.array == true) {
				$$.code += $3.code;
			}
			$$.code += "[]= " + $1.position + ", " + $3.position + "\n";
		}
		| IF bool_exp THEN statements ENDIF{
			$$.first = newLabel();
			$$.code += "?:= " + $$.first + ", " + $2.code + "\n";
			loop_flag++;
			$$.code += ": " + $$.first + "\n";
			$$.code += $4.code;
			loop_flag--;
		}
		| IF bool_exp THEN statements ELSE statements ENDIF{
			$$.first = newLabel();
			$$.second = newLabel();
			$$.code += "?:= " + $$.first + ", " + $2.code + "\n";
			loop_flag++;
			$$.code += $6.code;
			$$.code += ":= " + $$.second + "\n";
			$$.code += ": " + $$.first + "\n";
			loop_flag++;
			$$.code += $4.code;
			$$.code += ": " + $$.second + "\n";
			loop_flag--;
		}
		| WHILE bool_exp BEGINLOOP statements ENDLOOP{
			$$.first = newLabel();
                        $$.second = newLabel();
			$$.code += "?:= " + $$.first + ", " + $2.code + "\n";
			$$.code += ":= " + $$.second + "\n";
			$$.code += ": " + $$.first + "\n";
			whileloop_flag = true;
			$$.code += $4.code;
			$$.code += "?:= " + $$.first + ", " + $2.code + "\n";
			whileloop_flag = false;
			$$.code += ": " + $$.second + "\n";
		}
		| DO BEGINLOOP statements ENDLOOP WHILE bool_exp{
			$$.first = newLabel();
			$$.code += ": " + $$.first + "\n";
			doloop_flag = true;
			$$.code += $3.code + $6.code;
			$$.code += "?:= " + $$.first + ", " + $6.code + "\n";
			doloop_flag = false;
		}
		| READ vars{
			for(auto i : $2){
				$$.code += i.code;
				if (i.array == false) {
					$$.code += ".< " + i.position + "\n";
				}
				else {
					$$.code += ".[]< " + i.position + "\n";
				}
			}
		}
		| WRITE vars{
			for(auto i : $2){
				$$.code += i.code;
				if (i.array == false) {
					$$.code += ".> " + i.position + "\n";
				}
				else {
					$$.code += ".[]> " + i.position + "\n";
				}
			}
		}
		| CONTINUE{
			if(loop_flag >= 1 || whileloop_flag || doloop_flag){
				$$.code = "continue\n";	
			}else{
			/*error9*/
			}
		}
		| RETURN expression{
			$$.code = $2.code;
			$$.code += "ret " + $2.position + "\n";
		}
		;
		
vars:	var
		{
			$$.push_back($1);
		}
		| vars COMMA var
		{
			for(auto i : $1){
				$$.push_back(i);
			}
			$$.push_back($3);
		}
		;
		
var:	IDENT
		{ 
			$$.array = false;
			$$.code = ". " + $1 + "\n";
			$$.position = $1;
		}
		| IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			$$.array = true;
			$$.code = ".[] " + $1 + ", " + $3.position + "\n";
			$$.position = $1 + ", " + $3.position;
		}
		;

bool_exp:	relation_and_exp
		{
			$$.position = $1.position;
                        $$.code = $1.code;	
		}
		| relation_and_exp OR relation_and_exp{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
                        $$.code += $1.code + $3.code;
                        $$.code += "|| " + $$.position + ", " + $1.position + ", " + $3.position + "\n";	
		}
		;
		
relation_and_exp: relation_exp{
			$$.position = $1.position;
			$$.code = $1.code;
		}
		| relation_and_exp AND relation_exp{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += "&& " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		;

relation_exp:	expression comp expression
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += $2 + " " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| NOT expression comp expression
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $2.code + $4.code;
			$$.code += $3 + " " + $$.position + ", " + $2.position + ", " + $4.position + "\n";
			$$.code += "! " + $$.position + ", " + $$.position + "\n";
		}
		| TRUE
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code = "1";
		}
		| NOT TRUE
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code = "0";
		}
		| FALSE
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code = "0";
		}
		| NOT FALSE
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code = "1";
		}
		| L_PAREN bool_exp R_PAREN
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $2.code;
		}
		| NOT L_PAREN bool_exp R_PAREN
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $3.code;
			$$.code += "! " + $$.position + ", " + $3.position + "\n";;
		}
		;

comp:		EQ		{$$ = "==";}
		|	NEQ		{$$ = "!=";}
		|	LT		{$$ = "<";}
		|	GT		{$$ = ">";}
		|	LTE		{$$ = "<=";}
		|	GTE		{$$ = ">=";}
		;

expressions:	expression
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code;
		}
		| expressions COMMA expression
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
		}
		;

expression:	multiplicative_expression
		{
			$$.position = $1.position;
			$$.code = $1.code;
		}
		| multiplicative_expression ADD multiplicative_expression
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += "+ " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| multiplicative_expression SUB multiplicative_expression
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += "- " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		;

multiplicative_expression: term
		{
			$$.position = $1.position;
			$$.code += $1.code;
		}
		| multiplicative_expression MULT term
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += "* " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| multiplicative_expression DIV term
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += "/ " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| multiplicative_expression MOD term
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $1.code + $3.code;
			$$.code += "% " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		; 

term:	var
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			if($1.array == false) {
				$$.code += "= " + $$.position + ", " + $1.position + "\n";
			}
			else {
				$$.code += "[]= " + $$.position + ", " + $1.position + "\n";
			}
			$$.id_list.push_back($1);
		}
		| SUB var %prec UMINUS
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			if($2.array == false) {
				$$.code += "- " + $$.position + ", 0, " + $2.position + "\n";
			}
			else {
				$$.code += "[]= " + $$.position + ", " + $2.position + "\n";
				$$.code += "- " + $$.position + ", 0, " + $$.position + "\n";
			}
			$$.id_list.push_back($2);
		}
		| NUMBER
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += "= " + $$.position + ", " + to_string($1) + "\n";
		}
		| SUB NUMBER %prec UMINUS
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += "- " + $$.position + ", 0, " + to_string($2) + "\n";
		}
		| L_PAREN expression R_PAREN
		{
			$$.code = $2.code;
			$$.position = $2.position;
		}
		| SUB L_PAREN expression R_PAREN %prec UMINUS
		{
			$$.code = $3.code;
			$$.position = $3.position;
			$$.code += "- " + $$.position + ", 0, " + $$.position + "\n";	
		}
		| IDENT L_PAREN R_PAREN
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += "call " + $1 + ", " + $$.position + "\n";
		}
		| IDENT L_PAREN expressions R_PAREN
		{
			$$.position = newPosition();
			$$.code = ". " + $$.position + "\n";
			$$.code += $3.code;
			$$.code += "param " + $3.position + "\n";
			$$.code += "call " + $1 + ", " + $$.position + "\n";
		}
		;







%%

int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
