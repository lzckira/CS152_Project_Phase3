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
	}
	
	struct var_struct {
		bool array;
		string code;
		string position;
	};
	
	struct term_struct {
		bool negative;
		string code;
		string position;
		list<var_struct> id_list;
	}
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
	
	bool loop_bool = false;

	extern yy::location loc;
	int positionCount = 0;
	string newPosition(string &a) {
		string temp = ". " + "__temp__" + to_string(positionCount);
		positionCount++;
		return temp;
	}
	
	int labels_number = 0;
	string labels(){
		return "__label__" + to_string(label_number++)；
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
%type <string> IDENT program function statements statement comp
%type <dec_struct> declarations declaration
%type <var_struct> var
%type <list<var_struct>> vars
%type <list<string>> identifiers
%type <exp_struct> expression expressions multiplicative_expressions multiplicative_expression 
%type <exp_struct> relation_exp bool_exp relation_and_exp
%type <term_struct> terms term
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
			for(list<string>::iterator it = $8.ids.begin(); it != $8.ids.end(); it++){
				$$ += "= " + *it + ", $" + to_string(i) + "\n";
				i++;
			}
			$$ += $11;
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
		| identifiers INTEGER{
			/*error*/	
		}
		| identifiers ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER{
			/*error*/
		}

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

statements: 	{$$ = "";}
		| statement SEMICOLON statements{
			$$ = $1 + $3;
		} 
		| statements statement{
			/*error*/
		}
		;

statement:	var ASSIGN expression
		{
			$$.code += newPosition($$.position);
			if($$.array == true) {
				$$.code += $3.code;
			}
			$$.code += "[]= " + $1.position + ", " + $3.position + "\n";
		}
		| IF bool_exp THEN statements ENDIF{
			$$.first = labels();
			$$.code = "?:= " + $$.first + ", " + $2.code + "\n";
			$$.code = ": " + $$.first + "\n";
			$$.code = $4.code;
		}
		| IF bool_exp THEN statements ELSE statements ENDIF{
			$$.first = labels();
			$$.second = labels();
			$$.code = "?:= " + $$.first + ", " + $2.code + "\n";
			$$.code = $6.code;
			$$.code = ":= " + $$.second + "\n";
			$$.code = ": " + $$.first + "\n";
			$$.code = $4.code;
			$$.code = ": " + $$.second + "\n";
		}
		| WHILE bool_exp BEGINLOOP statements ENDLOOP{
			$$.first = labels();
                        $$.second = labels();
			$$.code = "?:= " + $$.first + ", " + $2.code + "\n";
			$$.code = ":= " + $$.second + "\n";
			$$.code = ": " + $$.first + "\n";
			$$.code = $2.code;
			$$.code = "?:= " + $$.first + ", " + $2.code + "\n";
			$$.code = ":= " + $$.second + "\n";
		}
		| DO BEGINLOOP statements ENDLOOP WHILE bool_exp{
			$$.first = labels();
                        $$.second = labels();
			$$.code = ": " + $$.first + "\n";
			$$.code = $3.code;
			$$.code = $6.code;
			$$.code = "?:= " + $$.first + ", " + $6.code + "\n";
			$$.code = ":= " + $$.second + "\n";
			$$.code = ": " + $$.second + "\n";
		}
		| READ vars{
			for(auto i : $2){
				$$.code += newPosition($$.position);
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
				$$.code += newPosition($$.position);
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
			/*ganmayongde?*/	
		}
		| RETURN expression{
			$$.code = newPosition($$.position);
			$$.code = $2.code + "ret " + $2.position + "\n";
		}
		| var error expression{
			/*error*/
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
			$$.code = ". " + $1 + "\n"
			$$.position = $1;
		}
		| IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			$$.array = true;
			$$.code = ".[] " + $1 + ", " + $3 + "\n"
			$$.position = $1 + ", " + $3;
		}
		;

bool_exp:	relation_and_exp
		{
			$$.position = $1.position;
                        $$.code = $1.code;	
		}
		| relation_and_exps OR relation_and_exp{
			$$.code = newPosition($$.position);
                        $$.code += $1.code + $3.code;
                        $$.code += "|| " + $$.position + ", " + $1.position + ", " + $3.position + "\n";	
		}
		;
		
relation_and_exp: relation_exp{
			$$.position = $1.position;
			$$.code = $1.code;
		}
		| relation_and_exp AND relation_exp{
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += "&& " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		;

relation_exp:	expression comp expression
		{
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += $2 + " " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| NOT expression comp expression
		{
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += $2 + " " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
			$$.code += "! " + $$.position + ", " + $$.position + "\n";
		}
		| TRUE
		{
			$$.code = "1";
		}
		| NOT TRUE
		{
			$$.code = "0";
		}
		| FALSE
		{
			$$.code = "0";
		}
		| NOT FALSE
		{
			$$.code = "1";
		}
		| L_PAREN bool_exp R_PAREN
		{
			$$.code = $2;
		}
		| NOT L_PAREN bool_exp R_PAREN
		{
			if($3 == "true") {
				$$ = "false";
			}
			else {
				$$ = "true";
			} 
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
			$$.push_back($1);
		}
		| expressions COMMA expression
		{
			for(list<string>::iterator it = $1.begin(); it != $1.end(); it++){
			    $$.push_back(*it);
			}
			$$.push_back($3);
		}
		;

expression:	multiplicative_expression
		{
			$$.position = $1.position;
			$$.code = $1.code;
		}
		| multiplicative_expressions ADD multiplicative_expression
		{
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += "+ " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| multiplicative_expressions SUB multiplicative_expression
		{
			$$.code = newPosition($$.position);
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
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += "* " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| multiplicative_expression DIV term
		{
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += "/ " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		| multiplicative_expression MOD term
		{
			$$.code = newPosition($$.position);
			$$.code += $1.code + $3.code;
			$$.code += "% " + $$.position + ", " + $1.position + ", " + $3.position + "\n";
		}
		; 

term:	var
		{
			$$.code = newPosition($$.position);
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
			$$.code = newPosition($$.position);
			if($1.array == false) {
				$$.code += "- " + $$.position + ", 0, " + $1.position + "\n";
			}
			else {
				$$.code += "[]= " + $$.position + ", " + $1.position + "\n";
				$$.code += "- " + $$.position + ", 0, " + $$.position + "\n";
			}
			$$.id_list.push_back($1);
		}
		| NUMBER
		{
			$$.code = newPosition($$.position);
			$$.code += "= " + $$.position + ", " + $1 + "\n";
		}
		| SUB NUMBER %prec UMINUS
		{
			$$.code = newPosition($$.position);
			$$.code += "- " + $$.position + ", 0, " + $1.position + "\n";
			$$.negative = true;
		}
		| L_PAREN expression R_PAREN
		{
			$$.code = $2.code;
			$$.position = $2.position;
			$$.negative = false;
		}
		| SUB L_PAREN expression R_PAREN %prec UMINUS
		{
			$$.code = $2.code;
			$$.position = $2.position;
			$$.code += "- " + $$.position + ", 0, " + $$.position + "\n";	
		}
		| IDENT L_PAREN R_PAREN
		{
			$$.code = newPosition($$.position);
			$$.code += "call " + $1.code + ", " + $$.position + "\n";
		}
		| IDENT L_PAREN expressions R_PAREN
		{
			$$.code = newPosition($$.position);
			$$.code += $3.code;
			$$.code += "param " + $3.position + "\n";
			$$.code += "call " + $1.code + ", " + $$.position + "\n";
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
