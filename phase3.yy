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
#include <functional>
using namespace std;
	/* define the sturctures using as types for non-terminals */

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
	
	/* end of your code */
}

%token END 0 "end of file";

	/* specify tokens, type of non-terminals and terminals here */
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY
%token OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN
%token SUB ADD
%token MULT DIV MOD
%token EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token <ival> NUMBER
%token <id_val> IDENT
%token ERROR
	/* end of token specifications */

%%

%start prog_start;

	/* define your grammars here use the same grammars 
	 * you used in Phase 2 and modify their actions to generate codes
	 * assume that your grammars start with prog_start
	 */

prog_start: 	program {if(no_error) cout<<$1}
		;

program:	{$$ = "";}
		|function program {$$ = $1 + "\n" + $2;}
		;

function:	FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY
		{
			$$ = "func " + $2 + "\n"
			$$ += $5.code;
			int i =0;
			for(list<string>::iterator it =$5.ids.begin(); it != $5.ids.end(); it++){
				$$ +="= "  *it + ", $" + to_string(i) + "\n";
				i++;
			}
			$$ += $8.code;
			$$ += $11;
			$$ += "endfunc";
		}
		;

declarations: 	{$$.code=""; $$.ids=list<string>();}
		|declaration declarations{
			$$.code = $1.code + $2.code;
			$$.ids = $1.ids;
			for(list<string>::iterator it =$2.ids.begin(); it != $2.ids.end; it++){
				$$.ids.push_back(*it);
			}
		}
		;

declaration:	IDENT COLON INTEGER
		{
			$$.code = ". " + $1 + "\n";
			$$.ids.push_back($1);
		}

statements: 	{$$ = "";}
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
