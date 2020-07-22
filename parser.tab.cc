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
#line 59 "phase3.yy" // lalr1.cc:413

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

#line 95 "parser.tab.cc" // lalr1.cc:413


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
#line 181 "parser.tab.cc" // lalr1.cc:479

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
#line 133 "phase3.yy" // lalr1.cc:859
    {if(no_error) cout << yystack_[0].value.as< string > ();}
#line 692 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 136 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 698 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 137 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[1].value.as< string > () + "\n" + yystack_[0].value.as< string > ();}
#line 704 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 141 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "func " + yystack_[10].value.as< string > () + "\n";
			yylhs.value.as< string > () += yystack_[7].value.as< dec_struct > ().code;
			int i = 0;
			for(list<string>::iterator it = yystack_[7].value.as< dec_struct > ().ids.begin(); it != yystack_[7].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< string > () += "= " + *it + ", $" + to_string(i) + "\n";
				i++;
			}
			yylhs.value.as< string > () += yystack_[4].value.as< dec_struct > ().code;
			yylhs.value.as< string > () += yystack_[1].value.as< statement_struct > ().code;
			yylhs.value.as< string > () += "endfunc";
		}
#line 721 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 155 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< dec_struct > ().code=""; yylhs.value.as< dec_struct > ().ids=list<string>();}
#line 727 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 156 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< dec_struct > ().code = yystack_[2].value.as< dec_struct > ().code + yystack_[1].value.as< dec_struct > ().code;
			for(list<string>::iterator it = yystack_[2].value.as< dec_struct > ().ids.begin(); it != yystack_[2].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
			for(list<string>::iterator it = yystack_[1].value.as< dec_struct > ().ids.begin(); it != yystack_[1].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
		}
#line 741 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 165 "phase3.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 749 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 171 "phase3.yy" // lalr1.cc:859
    {
			for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
			    yylhs.value.as< dec_struct > ().code += ". " + *it + "\n";
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[2].value.as< list<string> > ();
		}
#line 760 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 178 "phase3.yy" // lalr1.cc:859
    { 
			for(list<string>::iterator it = yystack_[7].value.as< list<string> > ().begin(); it != yystack_[7].value.as< list<string> > ().end(); it++){
			    yylhs.value.as< dec_struct > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as< int > ()) + "\n";
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[7].value.as< list<string> > ();
		}
#line 771 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 187 "phase3.yy" // lalr1.cc:859
    { 
		  yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ()); 
		}
#line 779 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 191 "phase3.yy" // lalr1.cc:859
    { 
		  for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
				yylhs.value.as< list<string> > ().push_back(*it);
		  }
		  yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ());
		}
#line 790 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 199 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< statement_struct > ().code = "";}
#line 796 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 200 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().code = yystack_[2].value.as< statement_struct > ().code + yystack_[0].value.as< statement_struct > ().code;
		}
#line 804 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 206 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().code += yystack_[0].value.as< exp_struct > ().code;
			if(yystack_[2].value.as< var_struct > ().array == true) {
				yylhs.value.as< statement_struct > ().code += "[]= " + yystack_[2].value.as< var_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			}
			else {
				yylhs.value.as< statement_struct > ().code += "= " + yystack_[2].value.as< var_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			}
		}
#line 818 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 215 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[3].value.as< exp_struct > ().code + "\n";
			loop_flag++;
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			yylhs.value.as< statement_struct > ().code += yystack_[1].value.as< statement_struct > ().code;
			loop_flag--;
		}
#line 831 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 223 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
			yylhs.value.as< statement_struct > ().second = newLabel();
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[5].value.as< exp_struct > ().code + "\n";
			loop_flag++;
			yylhs.value.as< statement_struct > ().code += yystack_[1].value.as< statement_struct > ().code;
			yylhs.value.as< statement_struct > ().code += ":= " + yylhs.value.as< statement_struct > ().second + "\n";
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			loop_flag++;
			yylhs.value.as< statement_struct > ().code += yystack_[3].value.as< statement_struct > ().code;
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().second + "\n";
			loop_flag--;
		}
#line 849 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 236 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
                        yylhs.value.as< statement_struct > ().second = newLabel();
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[3].value.as< exp_struct > ().code + "\n";
			yylhs.value.as< statement_struct > ().code += ":= " + yylhs.value.as< statement_struct > ().second + "\n";
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			whileloop_flag = true;
			yylhs.value.as< statement_struct > ().code += yystack_[1].value.as< statement_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[3].value.as< exp_struct > ().code + "\n";
			whileloop_flag = false;
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().second + "\n";
		}
#line 866 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 248 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().first = newLabel();
			yylhs.value.as< statement_struct > ().code += ": " + yylhs.value.as< statement_struct > ().first + "\n";
			doloop_flag = true;
			yylhs.value.as< statement_struct > ().code += yystack_[3].value.as< statement_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "?:= " + yylhs.value.as< statement_struct > ().first + ", " + yystack_[0].value.as< exp_struct > ().code + "\n";
			doloop_flag = false;
		}
#line 879 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 256 "phase3.yy" // lalr1.cc:859
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
#line 895 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 267 "phase3.yy" // lalr1.cc:859
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
#line 911 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 278 "phase3.yy" // lalr1.cc:859
    {
			if(loop_flag >= 1 || whileloop_flag || doloop_flag){
				yylhs.value.as< statement_struct > ().code = "continue\n";	
			}else{
			/*error9*/
			}
		}
#line 923 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 285 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< statement_struct > ().code = yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< statement_struct > ().code += "ret " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 932 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 292 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< list<var_struct> > ().push_back(yystack_[0].value.as< var_struct > ());
		}
#line 940 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 296 "phase3.yy" // lalr1.cc:859
    {
			for(auto i : yystack_[2].value.as< list<var_struct> > ()){
				yylhs.value.as< list<var_struct> > ().push_back(i);
			}
			yylhs.value.as< list<var_struct> > ().push_back(yystack_[0].value.as< var_struct > ());
		}
#line 951 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 305 "phase3.yy" // lalr1.cc:859
    { 
			yylhs.value.as< var_struct > ().array = false;
			yylhs.value.as< var_struct > ().position = yystack_[0].value.as< string > ();
		}
#line 960 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 310 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< var_struct > ().array = true;
			yylhs.value.as< var_struct > ().position = yystack_[3].value.as< string > () + ", " + yystack_[1].value.as< exp_struct > ().position;
		}
#line 969 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 317 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
                        yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< exp_struct > ().code;	
		}
#line 978 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 321 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
                        yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
                        yylhs.value.as< exp_struct > ().code += "|| " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";	
		}
#line 989 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 329 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< exp_struct > ().code;
		}
#line 998 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 333 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "&& " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1009 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 342 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< string > () + " " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1020 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 349 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< string > () + " " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += "! " + yylhs.value.as< exp_struct > ().position + ", " + yylhs.value.as< exp_struct > ().position + "\n";
		}
#line 1032 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 357 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "1";
		}
#line 1042 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 363 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "0";
		}
#line 1052 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 369 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "0";
		}
#line 1062 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 375 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code = "1";
		}
#line 1072 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 381 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< exp_struct > ().code;
		}
#line 1082 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 387 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "! " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[1].value.as< exp_struct > ().position + "\n";;
		}
#line 1093 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 395 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "==";}
#line 1099 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 396 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "!=";}
#line 1105 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 397 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<";}
#line 1111 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 398 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">";}
#line 1117 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 399 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<=";}
#line 1123 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 400 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">=";}
#line 1129 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 404 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[0].value.as< exp_struct > ().code;
		}
#line 1139 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 410 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
		}
#line 1149 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 418 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< exp_struct > ().position;
			yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< exp_struct > ().code;
		}
#line 1158 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 423 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "+ " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1169 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 430 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< exp_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "- " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< exp_struct > ().position + "\n";
		}
#line 1180 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 439 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = yystack_[0].value.as< term_struct > ().position;
			yylhs.value.as< exp_struct > ().code = yystack_[0].value.as< term_struct > ().code;
		}
#line 1189 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 444 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< term_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "* " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< term_struct > ().position + "\n";
		}
#line 1200 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 451 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< term_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "/ " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< term_struct > ().position + "\n";
		}
#line 1211 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 458 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< exp_struct > ().position = newPosition();
			yylhs.value.as< exp_struct > ().code = ". " + yylhs.value.as< exp_struct > ().position + "\n";
			yylhs.value.as< exp_struct > ().code += yystack_[2].value.as< exp_struct > ().code + yystack_[0].value.as< term_struct > ().code;
			yylhs.value.as< exp_struct > ().code += "% " + yylhs.value.as< exp_struct > ().position + ", " + yystack_[2].value.as< exp_struct > ().position + ", " + yystack_[0].value.as< term_struct > ().position + "\n";
		}
#line 1222 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 467 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			if(yystack_[0].value.as< var_struct > ().array == false) {
				yylhs.value.as< term_struct > ().code += "= " + yylhs.value.as< term_struct > ().position + ", " + yystack_[0].value.as< var_struct > ().position + "\n";
			}
			else {
				yylhs.value.as< term_struct > ().code += "=[] " + yylhs.value.as< term_struct > ().position + ", " + yystack_[0].value.as< var_struct > ().position + "\n";
			}
			yylhs.value.as< term_struct > ().id_list.push_back(yystack_[0].value.as< var_struct > ());
		}
#line 1238 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 479 "phase3.yy" // lalr1.cc:859
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
#line 1255 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 492 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "= " + yylhs.value.as< term_struct > ().position + ", " + to_string(yystack_[0].value.as< int > ()) + "\n";
		}
#line 1265 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 498 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "- " + yylhs.value.as< term_struct > ().position + ", 0, " + to_string(yystack_[0].value.as< int > ()) + "\n";
		}
#line 1275 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 504 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().code = yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< term_struct > ().position = yystack_[1].value.as< exp_struct > ().position;
		}
#line 1284 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 509 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().code = yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< term_struct > ().position = yystack_[1].value.as< exp_struct > ().position;
			yylhs.value.as< term_struct > ().code += "- " + yylhs.value.as< term_struct > ().position + ", 0, " + yylhs.value.as< term_struct > ().position + "\n";	
		}
#line 1294 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 515 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "call " + yystack_[2].value.as< string > () + ", " + yylhs.value.as< term_struct > ().position + "\n";
		}
#line 1304 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 521 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< term_struct > ().position = newPosition();
			yylhs.value.as< term_struct > ().code = ". " + yylhs.value.as< term_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += yystack_[1].value.as< exp_struct > ().code;
			yylhs.value.as< term_struct > ().code += "param " + yystack_[1].value.as< exp_struct > ().position + "\n";
			yylhs.value.as< term_struct > ().code += "call " + yystack_[3].value.as< string > () + ", " + yylhs.value.as< term_struct > ().position + "\n";
		}
#line 1316 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1320 "parser.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -54;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
      39,     1,    55,   -54,    39,    18,   -54,   -54,    70,   -54,
       9,   -54,    72,    52,    21,   -54,   -54,    23,    91,     6,
     -54,    60,   -54,    99,    59,    63,    62,    71,     0,     0,
     100,   -54,   115,   115,     2,   111,    80,    74,   112,     2,
      16,    28,   -54,   -54,    -1,     0,   -54,   -54,   109,    -5,
     -54,    76,    57,   -54,   106,    63,    83,   -54,    83,     2,
     -54,   -54,    63,     2,   117,    81,     8,   -54,   -54,     0,
      76,     2,   -54,   -54,    84,    65,    63,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,     2,     2,     2,     2,     2,
       2,    63,   110,   115,    86,   -54,   -54,   -54,   -54,   -54,
      30,   -54,    87,     2,    88,   -54,   -54,    67,   -54,   113,
     -54,    -9,    -9,   -54,   -54,   -54,   114,   118,   -54,     2,
     -54,   -54,   -54,   -54,   -54,    63,   -54,     0,   -54,   121,
     -54,   -54
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
       0,    11,     0,     8,     0,     6,     7,     0,     0,     0,
       9,     0,    12,     0,     0,    13,     0,    26,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    34,    36,     0,     0,    57,    55,     0,    28,
      30,     0,    48,    51,     0,    13,    20,    24,    21,     0,
      23,     5,    13,     0,     0,     0,     0,    35,    37,     0,
       0,     0,    58,    56,     0,     0,    13,     0,     0,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,    14,    15,    10,    27,    61,
       0,    46,     0,     0,     0,    38,    59,     0,    31,    29,
      32,    50,    49,    52,    53,    54,     0,     0,    25,     0,
      62,    39,    33,    60,    16,    13,    18,     0,    47,     0,
      19,    17
  };

  const short int
  parser::yypgoto_[] =
  {
     -54,   -54,   135,   -54,   125,   -54,   -54,   -53,   -54,   108,
     -25,   -28,    64,    66,    75,   -54,   -23,    11,   -19
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    10,    13,    14,    35,    36,    56,
      47,    48,    49,    50,    85,   100,    51,    52,    53
  };

  const unsigned char
  parser::yytable_[] =
  {
      37,    54,    92,    27,    40,     5,    40,    57,    57,    95,
      11,    60,    40,    11,    23,    12,    65,    74,    70,    73,
      77,    78,    75,   107,    88,    89,    90,    41,    42,    43,
      37,    44,    40,    44,    20,    21,    94,    37,   116,    44,
      96,   102,     1,   101,    71,    45,    75,    59,   104,    72,
      46,    37,    46,    59,    99,     6,    67,    68,    46,    44,
       8,    66,   110,    39,    17,    18,    37,    27,   118,   113,
     114,   115,   129,    69,   119,     9,   120,    28,    46,    15,
     122,    29,    30,   124,   125,    31,    32,    33,    86,    87,
      88,    89,    90,    34,    16,    22,   128,   111,   112,   130,
      37,    79,    80,    81,    82,    83,    84,    24,    25,    26,
      38,   106,    79,    80,    81,    82,    83,    84,    39,    27,
      55,    61,    62,    63,    76,    64,    91,    93,    97,    98,
     105,   117,   106,   121,   123,   126,   127,   131,    77,     7,
      19,    58,   109,   108,     0,   103
  };

  const signed char
  parser::yycheck_[] =
  {
      25,    29,    55,     4,     4,     4,     4,    32,    33,    62,
       4,    34,     4,     4,     8,     6,    39,    45,    41,    44,
      25,    26,    45,    76,    33,    34,    35,    27,    28,    29,
      55,    31,     4,    31,    11,    12,    59,    62,    91,    31,
      63,    69,     3,    66,    45,    45,    69,    45,    71,    50,
      50,    76,    50,    45,    46,     0,    28,    29,    50,    31,
      42,    45,    85,    47,    43,    44,    91,     4,    93,    88,
      89,    90,   125,    45,    44,     5,    46,    14,    50,     7,
     103,    18,    19,    16,    17,    22,    23,    24,    31,    32,
      33,    34,    35,    30,    42,     4,   119,    86,    87,   127,
     125,    36,    37,    38,    39,    40,    41,    47,     9,    50,
      48,    46,    36,    37,    38,    39,    40,    41,    47,     4,
      20,    10,    42,    49,    15,    13,    20,    44,    11,    48,
      46,    21,    46,    46,    46,    21,    18,    16,    25,     4,
      15,    33,    78,    77,    -1,    70
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,    54,    55,    56,     4,     0,    55,    42,     5,
      57,     4,     6,    58,    59,     7,    42,    43,    44,    57,
      11,    12,     4,     8,    47,     9,    50,     4,    14,    18,
      19,    22,    23,    24,    30,    60,    61,    63,    48,    47,
       4,    27,    28,    29,    31,    45,    50,    63,    64,    65,
      66,    69,    70,    71,    64,    20,    62,    63,    62,    45,
      69,    10,    42,    49,    13,    69,    45,    28,    29,    45,
      69,    45,    50,    63,    64,    69,    15,    25,    26,    36,
      37,    38,    39,    40,    41,    67,    31,    32,    33,    34,
      35,    20,    60,    44,    69,    60,    69,    11,    48,    46,
      68,    69,    64,    67,    69,    46,    46,    60,    66,    65,
      69,    70,    70,    71,    71,    71,    60,    21,    63,    44,
      46,    46,    69,    46,    16,    17,    21,    18,    69,    60,
      64,    16
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    56,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    68,    68,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,     0,     3,     2,     3,
       8,     1,     3,     0,     3,     3,     5,     7,     5,     6,
       2,     2,     1,     2,     1,     3,     1,     4,     1,     3,
       1,     3,     3,     4,     1,     2,     1,     2,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     1,     2,     3,
       4,     3,     4
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
       0,   133,   133,   136,   137,   140,   155,   156,   165,   170,
     177,   186,   190,   199,   200,   205,   215,   223,   236,   248,
     256,   267,   278,   285,   291,   295,   304,   309,   316,   321,
     329,   333,   341,   348,   356,   362,   368,   374,   380,   386,
     395,   396,   397,   398,   399,   400,   403,   409,   417,   422,
     429,   438,   443,   450,   457,   466,   478,   491,   497,   503,
     508,   514,   520
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
#line 1780 "parser.tab.cc" // lalr1.cc:1167
#line 536 "phase3.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
