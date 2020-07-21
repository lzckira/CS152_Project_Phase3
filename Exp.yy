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
	
	struct var_struct {
		bool array;
		int index;
		string id;
	};
	
	struct vars_struct {
		list<var_struct> var_list;
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
%type <string> IDENT
%type <string> program function statements statement comp
%type <dec_struct> declarations declaration
%type <list<string>> identifiers
%type <var_struct> var
%type <vars_struct> vars
%type <string> expressions expression multiplicative_expressions multiplicative_expression terms term
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
		  $$.push_back($1);
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
			/* $$.code = "= " + $1 + ", " + $3 + "\n"; */
		}
		| IF bool_exp THEN statements ENDIF{
		
		}
		| IF bool_exp THEN statements ELSE statements ENDIF{

		}
		| WHILE bool_exp BEGINLOOP statements ENDLOOP{

		}
		| DO BEGINLOOP statements ENDLOOP WHILE bool_exp{

		}
		| READ vars{
			for(list<var_struct>::iterator it = $2.var_list.begin(); it != $2.var_list.end(); it++){
				/*$$ += ".< " + *it.id + "\n";*/
				cout << *it << endl;
			}

		}
		| WRITE vars{
			for(list<var_struct>::iterator it = $2.var_list.begin(); it != $2.var_list.end(); it++){
				/*$$ += ".> " + *it.id + "\n";*/
			}
		}
		| CONTINUE{

		}
		| RETURN expression{

		}
		| var error expression{
			/*error*/
		}
		;
		
vars:	var
		{
			$$.var_list.push_back($1);
		}
		| vars COMMA var
		{
			for(list<string>::iterator it = $1.var_list.begin(); it != $1.var_list.end(); it++){
				$$.var_list.push_back(*it);
			}
			$$.var_list.push_back($3);
		}
		;
		
var:	IDENT
		{ 
			$$.array = false;
			$$.id = $1;
		}
		| IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET
		{
			$$.array = true;
			$$.id = $1 + "[" + $3 + "]";
			$$.index = $3;
		}
		;

bool_exp:	relation_and_exp
		{
			
		}
		| relation_and_exps relation_and_exp
		{
			
		}
		;

relation_and_exps: relation_and_exp OR
		{
			
		}
		| relation_and_exps OR relation_and_exp
		{
			
		}
		;
		
relation_and_exp: relation_exp
		{
			
		}
		| relation_exps relation_exp 
		{
			
		}
		;

relation_exps: relation_exp AND
		{
			
		}
		| relation_exps AND relation_exp
		{
			
		}
		;

relation_exp:	expression comp expression
		{
			
		}
		| NOT expression comp expression
		{
			
		}
		| TRUE
		{
			$$ = "true";
		}
		| NOT TRUE
		{
			$$ = "false";
		}
		| FALSE
		{
			$$ = "false";
		}
		| NOT FALSE
		{
			$$ = "true";
		}
		| L_PAREN bool_exp R_PAREN
		{
			$$ = bool_exp;
		}
		| NOT L_PAREN bool_exp R_PAREN
		{
			if(bool_exp == "true") {
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
			
		}
		| expression COMMA expressions
		{
			
		}
		;

expression:	multiplicative_expression
		{
			
		}
		| multiplicative_expressions multiplicative_expression
		{
			
		}
		;

multiplicative_expressions:  multiplicative_expression ADD
		{
			
		}
		| multiplicative_expression SUB
		{
			
		}
		| multiplicative_expressions ADD multiplicative_expression
		{
			
		}
		| multiplicative_expressions SUB multiplicative_expression
		{
			
		}
		;

multiplicative_expression: term
		{
			
		}
		| terms term
		{
			
		}
		; 
		
terms:  term MULT
		{
			
		}
		| term DIV
		{
			
		}
		| term MOD
		{
			
		}
		| terms MULT term
		{
			
		}
		| terms DIV term
		{
			
		}
		| terms MOD term
		{
			
		}
		;

term:	var
		{
			
		}
		| SUB var %prec UMINUS
		{
			
		}
		| NUMBER
		{
			
		}
		| SUB NUMBER %prec UMINUS
		{
			
		}
		| L_PAREN expression R_PAREN
		{
			
		}
		| SUB L_PAREN expression R_PAREN %prec UMINUS
		{
			
		}
		| IDENT L_PAREN R_PAREN
		{
			
		}
		| IDENT L_PAREN expressions R_PAREN
		{
			
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
