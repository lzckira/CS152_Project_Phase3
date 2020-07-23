// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 1 "phase3.yy" // lalr1.cc:404


#line 39 "parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.tab.hh"

// User implementation prologue.

#line 53 "parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 60 "phase3.yy" // lalr1.cc:413

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
	vector <string>  tokenName {
	"FUNCTION", "IDENT", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER", "ARRAY",
	"OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN",
	"SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE",
	"SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", 
	"function", "ident", "begin_params", "end_params", "begin_locals", "end_locals", "begin_body", "end_body", "integer", "array",
	"of", "if", "then", "endif", "else", "while", "do", "beginloop", "endloop", "continue", "read", "write", "and", "or", "not", "true", "false", "return",
	"sub", "add", "mult", "div", "mod", "eq", "neq", "lt", "gt", "lte", "gte",
	"semicolon", "colon", "comma", "l_paren", "r_paren", "l_square_bracket", "r_square_bracket", "assign", "number"
	};
	map <string, int> symbolTable;
	/* end of your code */

#line 105 "parser.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 191 "parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 57: // declarations
      case 58: // declaration
        value.move< dec_struct > (that.value);
        break;

      case 64: // bool_exp
      case 65: // relation_and_exp
      case 66: // relation_exp
      case 68: // expressions
      case 69: // expression
      case 70: // multiplicative_expression
        value.move< exp_struct > (that.value);
        break;

      case 50: // NUMBER
        value.move< int > (that.value);
        break;

      case 59: // identifiers
        value.move< list<string> > (that.value);
        break;

      case 62: // vars
        value.move< list<var_struct> > (that.value);
        break;

      case 60: // statements
      case 61: // statement
        value.move< statement_struct > (that.value);
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 67: // comp
        value.move< string > (that.value);
        break;

      case 71: // term
        value.move< term_struct > (that.value);
        break;

      case 63: // var
        value.move< var_struct > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 57: // declarations
      case 58: // declaration
        value.copy< dec_struct > (that.value);
        break;

      case 64: // bool_exp
      case 65: // relation_and_exp
      case 66: // relation_exp
      case 68: // expressions
      case 69: // expression
      case 70: // multiplicative_expression
        value.copy< exp_struct > (that.value);
        break;

      case 50: // NUMBER
        value.copy< int > (that.value);
        break;

      case 59: // identifiers
        value.copy< list<string> > (that.value);
        break;

      case 62: // vars
        value.copy< list<var_struct> > (that.value);
        break;

      case 60: // statements
      case 61: // statement
        value.copy< statement_struct > (that.value);
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 67: // comp
        value.copy< string > (that.value);
        break;

      case 71: // term
        value.copy< term_struct > (that.value);
        break;

      case 63: // var
        value.copy< var_struct > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 57: // declarations
      case 58: // declaration
        yylhs.value.build< dec_struct > ();
        break;

      case 64: // bool_exp
      case 65: // relation_and_exp
      case 66: // relation_exp
      case 68: // expressions
      case 69: // expression
      case 70: // multiplicative_expression
        yylhs.value.build< exp_struct > ();
        break;

      case 50: // NUMBER
        yylhs.value.build< int > ();
        break;

      case 59: // identifiers
        yylhs.value.build< list<string> > ();
        break;

      case 62: // vars
        yylhs.value.build< list<var_struct> > ();
        break;

      case 60: // statements
      case 61: // statement
        yylhs.value.build< statement_struct > ();
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 67: // comp
        yylhs.value.build< string > ();
        break;

      case 71: // term
        yylhs.value.build< term_struct > ();
        break;

      case 63: // var
        yylhs.value.build< var_struct > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 144 "phase3.yy" // lalr1.cc:859
    {if(no_error) cout << yystack_[0].value.as< string > ();}
#line 702 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 147 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 708 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 148 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[1].value.as< string > () + "\n" + yystack_[0].value.as< string > ();}
#line 714 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 152 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "func " + yystack_[10].value.as< string > () + "\n";
			symbolTable.insert(pair<string, int>(yystack_[10].value.as< string > (), 0));
			yylhs.value.as< string > () += yystack_[7].value.as< dec_struct > ().code;
			int i = 0;
			for(list<string>::iterator it = yystack_[7].value.as< dec_struct > ().ids.begin(); it != yystack_[7].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< string > () += "= " + *it + ", $" + to_string(i) + "\n";
				i++;
			}
			yylhs.value.as< string > () += yystack_[4].value.as< dec_struct > ().code;
			yylhs.value.as< string > () += yystack_[1].value.as< statement_struct > ().code;
			yylhs.value.as< string > () += "endfunc\n";
		}
#line 732 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 167 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< dec_struct > ().code=""; yylhs.value.as< dec_struct > ().ids=list<string>();}
#line 738 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 168 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< dec_struct > ().code = yystack_[2].value.as< dec_struct > ().code + yystack_[0].value.as< dec_struct > ().code;
			for(list<string>::iterator it = yystack_[2].value.as< dec_struct > ().ids.begin(); it != yystack_[2].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
			for(list<string>::iterator it = yystack_[0].value.as< dec_struct > ().ids.begin(); it != yystack_[0].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
		}
#line 752 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 180 "phase3.yy" // lalr1.cc:859
    {
			for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
				if(find(tokenName.begin(), tokenName.end(), *it) != tokenName.end()) {
					no_error = false;
					yy::parser::error(yystack_[2].location, "Identifier " + *it + " is a reserved keyword");
				}
				if(symbolTable.find(*it) != symbolTable.end()) {
					no_error = false;
					yy::parser::error(yystack_[2].location, "Identifier " + *it + " is multiply-defined");
				}
			    yylhs.value.as< dec_struct > ().code += ". " + *it + "\n";
			    symbolTable.insert(pair<string, int>(*it, 1));
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[2].value.as< list<string> > ();
		}
#line 772 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 196 "phase3.yy" // lalr1.cc:859
    { 
			for(list<string>::iterator it = yystack_[7].value.as< list<string> > ().begin(); it != yystack_[7].value.as< list<string> > ().end(); it++){
				if(find(tokenName.begin(), tokenName.end(), *it) != tokenName.end()) {
					no_error = false;
					yy::parser::error(yystack_[7].location, "Identifier " + *it + " is a reserved keyword");
				}
				if(symbolTable.find(*it) != symbolTable.end()) {
					no_error = false;
					yy::parser::error(yystack_[7].location, "Identifier " + *it + " is multiply-defined");
				}
			    yylhs.value.as< dec_struct > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as< int > ()) + "\n";
			    symbolTable.insert(pair<string, int>(*it, 2));
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[7].value.as< list<string> > ();
		}
#line 792 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 214 "phase3.yy" // lalr1.cc:859
    { 
		  yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ()); 
		}
#line 800 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 218 "phase3.yy" // lalr1.cc:859
    { 
		  yylhs.value.as< list<string> > ().push_back(yystack_[2].value.as< string > ());
		  for(list<string>::iterator it = yystack_[0].value.as< list<string> > ().begin(); it != yystack_[0].value.as< list<string> > ().end(); it++){
				yylhs.value.as< list<string> > ().push_back(*it);
		  }
		}
#line 811 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 226 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< statement_struct > ().code = "";}
#line 817 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 227 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().code = yystack_[2].value.as< statement_struct > ().code + yystack_[1].value.as< statement_struct > ().code;
		}
#line 825 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 233 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().code += yystack_[0].value.as< exp_struct > ().code;
			if(yystack_[2].value.as< var_struct > ().array == true) {
				yylhs.value.as< statement_struct > ().code += yystack_[2].value.as< var_struct > ().code;
				yylhs.value.as< statement_struct > ().code += "[]= " + yystack_[2].value.as< var_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			}
			else {
				yylhs.value.as< statement_struct > ().code += "= " + yystack_[2].value.as< var_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			}
		}
#line 840 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 243 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
			yylhs.value.as< statement_struct > ().second = newLabel();
			yylhs.value.as< statement_struct > ().code = yystack_[3].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[3].value.as< exp_struct > ().position + "\n";
			yylhs.value.as< statement_struct > ().code += ":= " + yylhs.value.as< statement_struct > ().second + "\n";
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			loop_flag++;
			yylhs.value.as< statement_struct > ().code += yystack_[1].value.as< statement_struct > ().code;
			loop_flag--;
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().second + "\n";			
		}
#line 857 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 255 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
			yylhs.value.as< statement_struct > ().second = newLabel();
			yylhs.value.as< statement_struct > ().code = yystack_[5].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[5].value.as< exp_struct > ().position + "\n";
			loop_flag++;
			yylhs.value.as< statement_struct > ().code += yystack_[1].value.as< statement_struct > ().code;
			yylhs.value.as< statement_struct > ().code += ":= " + yylhs.value.as< statement_struct > ().second + "\n";
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			loop_flag++;
			yylhs.value.as< statement_struct > ().code += yystack_[3].value.as< statement_struct > ().code;
			loop_flag--;
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().second + "\n";
		}
#line 876 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 269 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
            yylhs.value.as< statement_struct > ().second = newLabel();
            yylhs.value.as< statement_struct > ().third = newLabel();
			yylhs.value.as< statement_struct > ().code = ": " + yylhs.value.as< statement_struct > ().third + "\n";
			yylhs.value.as< statement_struct > ().code += yystack_[3].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[3].value.as< exp_struct > ().position + "\n";
			whileloop_flag = false;
			yylhs.value.as< statement_struct > ().code += ":= " + yylhs.value.as< statement_struct > ().second + "\n";
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			whileloop_flag = true;
			yylhs.value.as< statement_struct > ().code += yystack_[1].value.as< statement_struct > ().code;
			yylhs.value.as< statement_struct > ().code += ":= " + yylhs.value.as< statement_struct > ().third + "\n";
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().second + "\n";
		}
#line 896 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 284 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			doloop_flag = true;
			yylhs.value.as< statement_struct > ().code += yystack_[3].value.as< statement_struct > ().code;
			yylhs.value.as< statement_struct > ().code += yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			doloop_flag = false;
		}
#line 910 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 293 "phase3.yy" // lalr1.cc:859
    {
			for(auto i : yystack_[0].value.as< list<var_struct> > ()){
				yylhs.value.as< statement_struct > ().code += i.code;
				if (i.array == false) {
					yylhs.value.as< statement_struct > ().code += ".< " + i.position + "\n";
				}
				else {
					yylhs.value.as< statement_struct > ().code += ".[]< " + i.position + "\n";
				}
			}
		}
#line 926 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 304 "phase3.yy" // lalr1.cc:859
    {
			for(auto i : yystack_[0].value.as< list<var_struct> > ()){
				yylhs.value.as< statement_struct > ().code += i.code;
				if (i.array == false) {
					yylhs.value.as< statement_struct > ().code += ".> " + i.position + "\n";
				}
				else {
					yylhs.value.as< statement_struct > ().code += ".[]> " + i.position + "\n";
				}
			}
		}
#line 942 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 315 "phase3.yy" // lalr1.cc:859
    {
			/*if(loop_flag > 0 || whileloop_flag || doloop_flag){*/
				yylhs.value.as< statement_struct > ().code = "continue\n";	
			/*}
			else {
				no_error = false;
				yy::parser::error(@1, "CONTINUE must in a loop");
			}*/
		}
#line 956 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 324 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().code = yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "ret " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 965 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 331 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< list<var_struct> > ().push_back(yystack_[0].value.as< var_struct > ());
		}
#line 973 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 335 "phase3.yy" // lalr1.cc:859
    {
			for(auto i : yystack_[2].value.as< list<var_struct> > ()){
				yylhs.value.as< list<var_struct> > ().push_back(i);
			}
			yylhs.value.as< list<var_struct> > ().push_back(yystack_[0].value.as< var_struct > ());
		}
#line 984 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 344 "phase3.yy" // lalr1.cc:859
    { 
			yylhs.value.as< var_struct > ().array = false;
			yylhs.value.as< var_struct > ().code = "";
			yylhs.value.as< var_struct > ().position = yystack_[0].value.as< string > ();
			if(symbolTable.find(yystack_[0].value.as< string > ()) == symbolTable.end()) {
				no_error = false;
				yy::parser::error(yystack_[0].location, "Identifier " + yystack_[0].value.as< string > () + " is not defined");
			}
		}
#line 998 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 354 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< var_struct > ().array = true;
			yylhs.value.as< var_struct > ().code = yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< var_struct > ().position = yystack_[3].value.as< string > () + ", " + yystack_[1].value.as< exp_struct > ().position;
			if(symbolTable.find(yystack_[3].value.as< string > ()) == symbolTable.end()) {
				no_error = false;
				yy::parser::error(yystack_[3].location, "Identifier " + yystack_[3].value.as< string > () + " is not defined");
			}
		}
#line 1012 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 366 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
            yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< exp_struct > ().code;	
		}
#line 1021 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 370 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
            yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
            yylhs.value.as< exp_struct > ().code += "|| " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";	
		}
#line 1032 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 378 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< exp_struct > ().code;
		}
#line 1041 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 382 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "&& " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1052 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 391 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< string > () + " " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1063 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 398 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< string > () + " " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += "! " + yylhs.value.as< exp_struct > ().position + ", " + yylhs.value.as< exp_struct > ().position + "\n";
		}
#line 1075 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 406 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "1";
		}
#line 1085 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 412 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "0";
		}
#line 1095 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 418 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "0";
		}
#line 1105 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 424 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "1";
		}
#line 1115 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 430 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[1].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< exp_struct > ().code;
		}
#line 1124 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 435 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[1].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "! " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[1].value.as< exp_struct > ().position + "\n";;
		}
#line 1134 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 442 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "==";}
#line 1140 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 443 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "!=";}
#line 1146 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 444 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<";}
#line 1152 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 445 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">";}
#line 1158 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 446 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<=";}
#line 1164 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 447 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">=";}
#line 1170 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 451 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code += yystack_[0].value.as< exp_struct > ().code;
		}
#line 1179 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 456 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
		}
#line 1189 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 464 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< exp_struct > ().code;
		}
#line 1198 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 469 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "+ " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1209 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 476 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "- " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1220 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 485 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< term_struct > ().position;
			yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< term_struct > ().code;
		}
#line 1229 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 490 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< term_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "* " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< term_struct > ().position + "\n";
		}
#line 1240 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 497 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< term_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "/ " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< term_struct > ().position + "\n";
		}
#line 1251 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 504 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< term_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "% " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< term_struct > ().position + "\n";
		}
#line 1262 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 513 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			if(yystack_[0].value.as< var_struct > ().array == false) {
				yylhs.value.as< term_struct > ().code += "= " + yylhs.value.as< term_struct > ().position + ", " + yystack_[0].value.as< var_struct > ().position + "\n";
			}
			else {
				yylhs.value.as< term_struct > ().code += yystack_[0].value.as< var_struct > ().code;
				yylhs.value.as< term_struct > ().code += "=[] " + yylhs.value.as< term_struct > ().position + ", " + yystack_[0].value.as< var_struct > ().position + "\n";
			}
			yylhs.value.as< term_struct > ().id_list.push_back(yystack_[0].value.as< var_struct > ());
		}
#line 1279 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 526 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			if(yystack_[0].value.as< var_struct > ().array == false) {
				yylhs.value.as< term_struct > ().code += "- " + yylhs.value.as< term_struct > ().position + ", 0, " + yystack_[0].value.as< var_struct > ().position + "\n";
			}
			else {
				yylhs.value.as< term_struct > ().code += "[]= " + yylhs.value.as< term_struct > ().position + ", " + yystack_[0].value.as< var_struct > ().position + "\n";
				yylhs.value.as< term_struct > ().code += "- " + yylhs.value.as< term_struct > ().position + ", 0, " + yylhs.value.as< term_struct > ().position + "\n";
			}
			yylhs.value.as< term_struct > ().id_list.push_back(yystack_[0].value.as< var_struct > ());
		}
#line 1296 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 539 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "= " + yylhs.value.as< term_struct > ().position + ", " + to_string(yystack_[0].value.as< int > ()) + "\n";
		}
#line 1306 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 545 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "- " + yylhs.value.as< term_struct > ().position + ", 0, " + to_string(yystack_[0].value.as< int > ()) + "\n";
		}
#line 1316 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 551 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().code = yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< term_struct > ().position = yystack_[1].value.as< exp_struct > ().position;
		}
#line 1325 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 556 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().code = yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< term_struct > ().position = yystack_[1].value.as< exp_struct > ().position;
			yylhs.value.as< term_struct > ().code += "- " + yylhs.value.as< term_struct > ().position + ", 0, " + yylhs.value.as< term_struct > ().position + "\n";	
		}
#line 1335 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 562 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "call " + yystack_[2].value.as< string > () + ", " + yylhs.value.as< term_struct > ().position + "\n";
		}
#line 1345 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 568 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< term_struct > ().code += "param " + yystack_[1].value.as< exp_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "call " + yystack_[3].value.as< string > () + ", " + yylhs.value.as< term_struct > ().position + "\n";
		}
#line 1357 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1361 "parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -57;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
       1,     6,    20,   -57,     1,   -10,   -57,   -57,    30,    64,
      -1,    44,    34,    40,    64,    77,    64,    43,   -57,    64,
     -57,   -57,    48,    83,    55,    84,    50,   -57,    97,   102,
     100,    49,   -57,     2,     2,    93,   -57,   110,   110,     3,
      75,    69,   -57,     3,    41,    11,   -57,   -57,    32,     2,
     -57,   -57,   107,   -12,   -57,   155,    -9,   -57,   103,   -57,
      86,   -57,    86,     3,    31,   -57,     3,   -20,    14,   -57,
     -57,     2,   155,     3,   -57,   -57,    81,   144,   -57,     2,
       2,     3,     3,   -57,   -57,   -57,   -57,   -57,   -57,     3,
       3,     3,     3,   -57,   115,   110,    26,    31,   -57,   -57,
      46,    31,    82,     3,    39,   -57,   -57,    85,   -57,   106,
      -9,    -9,    31,   -57,   -57,   -57,   136,   117,   -57,     3,
     -57,   -57,    31,   -57,   -57,   -57,   -57,     2,    31,   149,
     -57,   -57
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
      10,     0,     0,     0,     0,     0,     6,     0,    11,     6,
       7,     8,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    25,     5,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     9,     0,    25,     0,    33,    35,     0,     0,
      56,    54,     0,    27,    29,     0,    47,    50,     0,    12,
      19,    23,    20,     0,    22,    13,     0,     0,     0,    34,
      36,     0,     0,     0,    57,    55,     0,     0,    12,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,    12,     0,     0,     0,    14,    26,    60,
       0,    45,     0,     0,     0,    37,    58,     0,    30,    28,
      49,    48,    31,    51,    52,    53,     0,     0,    24,     0,
      61,    38,    32,    59,    15,    12,    17,     0,    46,     0,
      18,    16
  };

  const short int
  parser::yypgoto_[] =
  {
     -57,   -57,   137,   -57,   -14,   -57,   128,   -56,   -57,   105,
     -29,   -33,    66,    65,    76,   -57,   -22,    -2,   -17
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    11,    12,    13,    29,    40,    60,
      51,    52,    53,    54,    89,   100,    55,    56,    57
  };

  const unsigned char
  parser::yytable_[] =
  {
      41,    58,    20,    94,     1,    23,    44,    44,    61,    61,
       5,    81,    82,    79,    80,    44,    76,    64,    44,    75,
       6,    67,   107,    72,    90,    91,    92,    77,    98,    45,
      46,    47,     8,    48,    48,     9,    31,   116,   102,    69,
      70,    96,    48,    14,    97,    48,   101,    49,    63,    77,
      15,   104,    50,    50,    21,    22,    71,    81,    82,    63,
      99,    50,    81,    82,    50,    41,   118,   112,    10,   129,
      81,    82,   106,   113,   114,   115,    16,    73,    41,   110,
     111,   122,    74,    17,    19,   123,    68,    41,    43,    31,
     119,    25,   120,    27,   130,    24,    43,   128,    28,    33,
      41,   124,   125,    34,    35,    26,    31,    36,    37,    38,
      30,    42,    32,    59,    31,    39,    33,    65,    66,    31,
      34,    35,    78,    93,    36,    37,    38,   105,   121,    33,
      95,    79,    39,    34,    35,   127,   117,    36,    37,    38,
      31,     7,    18,    62,   108,    39,   109,     0,   103,     0,
      33,     0,     0,    31,    34,    35,     0,   126,    36,    37,
      38,     0,     0,    33,     0,   131,    39,    34,    35,     0,
       0,    36,    37,    38,     0,    81,    82,     0,     0,    39,
      83,    84,    85,    86,    87,    88,    81,    82,     0,     0,
     106,    83,    84,    85,    86,    87,    88
  };

  const short int
  parser::yycheck_[] =
  {
      29,    34,    16,    59,     3,    19,     4,     4,    37,    38,
       4,    31,    32,    25,    26,     4,    49,    39,     4,    48,
       0,    43,    78,    45,    33,    34,    35,    49,    48,    27,
      28,    29,    42,    31,    31,     5,     4,    93,    71,    28,
      29,    63,    31,    44,    66,    31,    68,    45,    45,    71,
       6,    73,    50,    50,    11,    12,    45,    31,    32,    45,
      46,    50,    31,    32,    50,    94,    95,    89,     4,   125,
      31,    32,    46,    90,    91,    92,    42,    45,   107,    81,
      82,   103,    50,    43,     7,    46,    45,   116,    47,     4,
      44,     8,    46,     9,   127,    47,    47,   119,    48,    14,
     129,    16,    17,    18,    19,    50,     4,    22,    23,    24,
      13,    11,    10,    20,     4,    30,    14,    42,    49,     4,
      18,    19,    15,    20,    22,    23,    24,    46,    46,    14,
      44,    25,    30,    18,    19,    18,    21,    22,    23,    24,
       4,     4,    14,    38,    79,    30,    80,    -1,    72,    -1,
      14,    -1,    -1,     4,    18,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    14,    -1,    16,    30,    18,    19,    -1,
      -1,    22,    23,    24,    -1,    31,    32,    -1,    -1,    30,
      36,    37,    38,    39,    40,    41,    31,    32,    -1,    -1,
      46,    36,    37,    38,    39,    40,    41
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,    54,    55,    56,     4,     0,    55,    42,     5,
       4,    57,    58,    59,    44,     6,    42,    43,    59,     7,
      57,    11,    12,    57,    47,     8,    50,     9,    48,    60,
      13,     4,    10,    14,    18,    19,    22,    23,    24,    30,
      61,    63,    11,    47,     4,    27,    28,    29,    31,    45,
      50,    63,    64,    65,    66,    69,    70,    71,    64,    20,
      62,    63,    62,    45,    69,    42,    49,    69,    45,    28,
      29,    45,    69,    45,    50,    63,    64,    69,    15,    25,
      26,    31,    32,    36,    37,    38,    39,    40,    41,    67,
      33,    34,    35,    20,    60,    44,    69,    69,    48,    46,
      68,    69,    64,    67,    69,    46,    46,    60,    66,    65,
      70,    70,    69,    71,    71,    71,    60,    21,    63,    44,
      46,    46,    69,    46,    16,    17,    21,    18,    69,    60,
      64,    16
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,     0,     3,     3,     8,
       1,     3,     0,     3,     3,     5,     7,     5,     6,     2,
       2,     1,     2,     1,     3,     1,     4,     1,     3,     1,
       3,     3,     4,     1,     2,     1,     2,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     1,     2,     3,     4,
       3,     4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "FUNCTION", "IDENT",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE",
  "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT",
  "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON",
  "COLON", "COMMA", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", "ERROR", "UMINUS", "$accept",
  "prog_start", "program", "function", "declarations", "declaration",
  "identifiers", "statements", "statement", "vars", "var", "bool_exp",
  "relation_and_exp", "relation_exp", "comp", "expressions", "expression",
  "multiplicative_expression", "term", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   144,   144,   147,   148,   151,   167,   168,   179,   195,
     213,   217,   226,   227,   232,   243,   255,   269,   284,   293,
     304,   315,   324,   330,   334,   343,   353,   365,   370,   378,
     382,   390,   397,   405,   411,   417,   423,   429,   434,   442,
     443,   444,   445,   446,   447,   450,   455,   463,   468,   475,
     484,   489,   496,   503,   512,   525,   538,   544,   550,   555,
     561,   567
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1831 "parser.tab.cc" // lalr1.cc:1167
#line 583 "phase3.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
