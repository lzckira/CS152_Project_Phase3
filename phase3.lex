%{
#include <iostream>
#define YY_DECL yy::parser::symbol_type yylex()
#include "parser.tab.hh"

static yy::location loc;
%}

%option noyywrap 

%{
#define YY_USER_ACTION loc.columns(yyleng);
%}

	/* your definitions here */

	/* your definitions end */

%%

%{
loc.step(); 
%}

	/* your rules here */

	/* use this structure to pass the Token :
	 * return yy::parser::make_TokenName(loc)
	 * if the token has a type you can pass it's value
	 * as the first argument. as an example we put
	 * the rule to return token function.
	 */

function       	{return yy::parser::make_FUNCTION(loc);}
beginparams	{return yy::parser::make_BEGIN_PARAMS(loc);}
endparams	{return yy::parser::make_END_PARAMS(loc);}
beginlocals	{return yy::parser::make_BEGIN_LOCALS(loc);}
endlocals	{return yy::parser::make_END_LOCALS(loc);}
beginbody	{return yy::parser::make_BEGIN_BODY(loc);}
endbody		{return yy::parser::make_END_BODY(loc);}
integer		{return yy::parser::make_INTETER(loc);}

";"		{return yy::parser::make_SEMICOLON(loc);}
":"		{return yy::parser::make_COLON(loc);}

[a-zA-Z]	{return yy::parser::make_IDENT(yytext,loc);}

"\n"		{}
[ \t]+		{}

 <<EOF>>	{return yy::parser::make_END(loc);}
	/* your rules end */

%%
