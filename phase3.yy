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
%type <string> program function statements
%type <dec_struct> declarations declaration
%type <list<string>> identifiers
%type <var_struct> var
%type <list<var_struct>> vars
%token ERROR


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
			$$.ids.push_back($2);
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
		| IDENT COMMA identifiers
		{ 
		  $$.push_back($1);
		  for(list<string>::iterator it = $3.begin(); it != $3.end(); it++){
				$$.push_back(*it);
		  }
		}
		;

statements: 	{$$.code = "";}
		|statement SEMICOLON statements{
			$$.code = $1.code + $3.code;
		} 
		|statements statement{
			/*error*/
		}
		;

statement:	var ASSIGN expression
		{
			$$.code = "= " + $1 + ", " + $3 + "\n";
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
			for(list<string>::iterator it = $2.begin(); it != $2.end(); it++){
				$$.code += ".< " + *it + "\n";
			}

		}
		| WRITE vars{
			for(list<string>::iterator it = $2.begin(); it != $2.end(); it++){
				$$.code += ".> " + *it + "\n";
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
			$$.push_back($1);
		}
		| var COMMA vars
		{
			$$.push_back($1);
			for(list<string>::iterator it = $3.begin(); it != $3.end(); it++){
				$$.push_back(*it);
			}
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
			$$.id = $1;
			$$.index = $3;
		}
		;

bool_exp:	relation_and_exp{printf("bool_exp -> relation_and_exp\n");}
		| relation_and_exp relation_and_exps{printf("bool_exp -> relation_and_exp relation_and_exps\n");}
		;

relation_and_exps: OR relation_and_exp{printf("relation_and_exps -> OR relation_and_exp\n");}
		| OR relation_and_exp relation_and_exps{printf("relation_and_exps -> OR relation_and_exp relation_and_exps\n");}
		;
		
relation_and_exp: relation_exp{printf("relation_and_exp -> relation_exp\n");}
		| relation_exp relation_exps{printf("relation_and_exp -> relation_exp relation_exps\n");}
		;

relation_exps: AND relation_exp {printf("relation_exps -> AND relation_exp\n");}
		| AND relation_exp relation_exps {printf("relation_exps -> AND relation_exp relation_exps\n");}
		;

relation_exp:	expression comp expression{printf("relation_exp -> expression comp expression\n");}
		| NOT expression comp expression{printf("relation_exp -> NOT expression comp expression\n");}
		| TRUE{printf("relation_exp -> TRUE\n");}
		| NOT TRUE{printf("relation_exp -> NOT TRUE\n");}
		| FALSE{printf("relation_exp -> FALSE\n");}
		| NOT FALSE{printf("relation_exp -> NOT FALSE\n");}
		| L_PAREN bool_exp R_PAREN{printf("relation_exp -> L_PAREN bool_exp R_PAREN\n");}
		| NOT L_PAREN bool_exp R_PAREN{printf("relation_exp -> NOT L_PAREN bool_exp R_PAREN\n");} 
		;

comp:		EQ		{$$.code = "==";}
		|	NEQ		{$$.code = "!=";}
		|	LT		{$$.code = "<";}
		|	GT		{$$.code = ">";}
		|	LTE		{$$.code = "<=";}
		|	GTE		{$$.code = ">=";}
		;

expressions:	expression{printf("expressions -> expression\n");}
		| expression COMMA expressions{printf("expressions -> expression COMMA expressions\n");}
		;

expression:	multiplicative_expression{printf("expression -> multiplicative_expression\n");}
		| multiplicative_expressions multiplicative_expression {printf("expression -> multiplicative_expressions multiplicative_expression\n");}
		;

multiplicative_expressions:  multiplicative_expression ADD{printf("multiplicative_expressions -> multiplicative_expression ADD\n");}
		| multiplicative_expression SUB{printf("multiplicative_expressions -> multiplicative_expression SUB\n");}
		| multiplicative_expressions ADD multiplicative_expression {printf("multiplicative_expressions -> multiplicative_expressions ADD multiplicative_expression\n");}
		| multiplicative_expressions SUB multiplicative_expression {printf("multiplicative_expressions -> multiplicative_expressions SUB multiplicative_expression\n");}
		;

multiplicative_expression: term{printf("multiplicative_expression -> term\n");}
		| terms term {printf("multiplicative_expression -> terms term\n");}
		; 
		
terms:  term MULT {printf("terms -> term MULT\n");}
		| term DIV {printf("terms -> term DIV\n");}
		| term MOD {printf("terms -> term MOD\n");}
		| terms MULT term {printf("terms -> terms MULT term\n");}
		| terms DIV term {printf("terms -> terms DIV term\n");}
		| terms MOD term {printf("terms -> terms MOD term\n");}
		;

term:	var{printf("term -> var\n");}
		| SUB var %prec UMINUS{printf("term -> SUB var\n");}
		| NUMBER{printf("term -> NUMBER\n");}
		| SUB NUMBER %prec UMINUS{printf("term -> SUB NUMBER\n");}
		| L_PAREN expression R_PAREN{printf("term -> L_PAREN expression R_PAREN\n");}
		| SUB L_PAREN expression R_PAREN %prec UMINUS{printf("term -> SUB L_PAREN expression R_PAREN\n");}
		| IDENT L_PAREN R_PAREN{printf("term -> IDENT L_PAREN R_PAREN\n");}
		| IDENT L_PAREN expressions R_PAREN{printf("term -> IDENT L_PAREN expressions R_PAREN\n");}
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
