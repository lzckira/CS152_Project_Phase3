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
#line 44 "phase3.yy" // lalr1.cc:413

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

#line 78 "parser.tab.cc" // lalr1.cc:413


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
#line 164 "parser.tab.cc" // lalr1.cc:479

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

      case 50: // NUMBER
        value.move< int > (that.value);
        break;

      case 59: // identifiers
        value.move< list<string> > (that.value);
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 60: // statements
      case 61: // statement
      case 69: // comp
      case 70: // expressions
      case 71: // expression
      case 72: // multiplicative_expressions
      case 73: // multiplicative_expression
      case 74: // terms
      case 75: // term
        value.move< string > (that.value);
        break;

      case 63: // var
        value.move< var_struct > (that.value);
        break;

      case 62: // vars
        value.move< vars_struct > (that.value);
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

      case 50: // NUMBER
        value.copy< int > (that.value);
        break;

      case 59: // identifiers
        value.copy< list<string> > (that.value);
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 60: // statements
      case 61: // statement
      case 69: // comp
      case 70: // expressions
      case 71: // expression
      case 72: // multiplicative_expressions
      case 73: // multiplicative_expression
      case 74: // terms
      case 75: // term
        value.copy< string > (that.value);
        break;

      case 63: // var
        value.copy< var_struct > (that.value);
        break;

      case 62: // vars
        value.copy< vars_struct > (that.value);
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

      case 50: // NUMBER
        yylhs.value.build< int > ();
        break;

      case 59: // identifiers
        yylhs.value.build< list<string> > ();
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 60: // statements
      case 61: // statement
      case 69: // comp
      case 70: // expressions
      case 71: // expression
      case 72: // multiplicative_expressions
      case 73: // multiplicative_expression
      case 74: // terms
      case 75: // term
        yylhs.value.build< string > ();
        break;

      case 63: // var
        yylhs.value.build< var_struct > ();
        break;

      case 62: // vars
        yylhs.value.build< vars_struct > ();
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
#line 99 "phase3.yy" // lalr1.cc:859
    {if(no_error) cout << yystack_[0].value.as< string > ();}
#line 645 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 102 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 651 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 103 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[1].value.as< string > () + "\n" + yystack_[0].value.as< string > ();}
#line 657 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 107 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "func " + yystack_[10].value.as< string > () + "\n";
			yylhs.value.as< string > () += yystack_[7].value.as< dec_struct > ().code;
			int i = 0;
			for(list<string>::iterator it = yystack_[7].value.as< dec_struct > ().ids.begin(); it != yystack_[7].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< string > () += "= " + *it + ", $" + to_string(i) + "\n";
				i++;
			}
			yylhs.value.as< string > () += yystack_[4].value.as< dec_struct > ().code;
			for(list<string>::iterator it = yystack_[4].value.as< dec_struct > ().ids.begin(); it != yystack_[4].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< string > () += "= " + *it + ", $" + to_string(i) + "\n";
				i++;
			}
			yylhs.value.as< string > () += yystack_[1].value.as< string > ();
			yylhs.value.as< string > () += "endfunc";
		}
#line 678 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 125 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< dec_struct > ().code=""; yylhs.value.as< dec_struct > ().ids=list<string>();}
#line 684 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 126 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< dec_struct > ().code = yystack_[2].value.as< dec_struct > ().code + yystack_[1].value.as< dec_struct > ().code;
			for(list<string>::iterator it = yystack_[2].value.as< dec_struct > ().ids.begin(); it != yystack_[2].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
			for(list<string>::iterator it = yystack_[1].value.as< dec_struct > ().ids.begin(); it != yystack_[1].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
		}
#line 698 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 135 "phase3.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 706 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 141 "phase3.yy" // lalr1.cc:859
    {
			for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
			    yylhs.value.as< dec_struct > ().code += ". " + *it + "\n";
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[2].value.as< list<string> > ();
		}
#line 717 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 148 "phase3.yy" // lalr1.cc:859
    { 
			for(list<string>::iterator it = yystack_[7].value.as< list<string> > ().begin(); it != yystack_[7].value.as< list<string> > ().end(); it++){
			    yylhs.value.as< dec_struct > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as< int > ()) + "\n";
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[7].value.as< list<string> > ();
		}
#line 728 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 154 "phase3.yy" // lalr1.cc:859
    {
			/*error*/	
		}
#line 736 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 157 "phase3.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 744 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 162 "phase3.yy" // lalr1.cc:859
    { 
		  yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ()); 
		}
#line 752 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 166 "phase3.yy" // lalr1.cc:859
    { 
		  yylhs.value.as< list<string> > ().push_back(yystack_[2].value.as< string > ());
		  for(list<string>::iterator it = yystack_[0].value.as< list<string> > ().begin(); it != yystack_[0].value.as< list<string> > ().end(); it++){
				yylhs.value.as< list<string> > ().push_back(*it);
		  }
		}
#line 763 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 174 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 769 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 175 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();
		}
#line 777 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 178 "phase3.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 785 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 184 "phase3.yy" // lalr1.cc:859
    {
			/* $$.code = "= " + $1 + ", " + $3 + "\n"; */
		}
#line 793 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 187 "phase3.yy" // lalr1.cc:859
    {
		
		}
#line 801 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 190 "phase3.yy" // lalr1.cc:859
    {

		}
#line 809 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 193 "phase3.yy" // lalr1.cc:859
    {

		}
#line 817 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 196 "phase3.yy" // lalr1.cc:859
    {

		}
#line 825 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 199 "phase3.yy" // lalr1.cc:859
    {
			for(list<var_struct>::iterator it = yystack_[0].value.as< vars_struct > ().var_list.begin(); it != yystack_[0].value.as< vars_struct > ().var_list.end(); it++){
				/*$$ += ".< " + *it.id + "\n";*/
				cout << *it << endl;
			}

		}
#line 837 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 206 "phase3.yy" // lalr1.cc:859
    {
			for(list<var_struct>::iterator it = yystack_[0].value.as< vars_struct > ().var_list.begin(); it != yystack_[0].value.as< vars_struct > ().var_list.end(); it++){
				/*$$ += ".> " + *it.id + "\n";*/
			}
		}
#line 847 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 211 "phase3.yy" // lalr1.cc:859
    {

		}
#line 855 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 214 "phase3.yy" // lalr1.cc:859
    {

		}
#line 863 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 217 "phase3.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 871 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 223 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< vars_struct > ().var_list.push_back(yystack_[0].value.as< var_struct > ());
		}
#line 879 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 227 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< vars_struct > ().var_list.push_back(yystack_[2].value.as< var_struct > ());
			for(list<string>::iterator it = yystack_[0].value.as< vars_struct > ().var_list.begin(); it != yystack_[0].value.as< vars_struct > ().var_list.end(); it++){
				yylhs.value.as< vars_struct > ().var_list.push_back(*it);
			}
		}
#line 890 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 236 "phase3.yy" // lalr1.cc:859
    { 
			yylhs.value.as< var_struct > ().array = false;
			yylhs.value.as< var_struct > ().id = yystack_[0].value.as< string > ();
		}
#line 899 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 241 "phase3.yy" // lalr1.cc:859
    {
			yylhs.value.as< var_struct > ().array = true;
			yylhs.value.as< var_struct > ().id = yystack_[3].value.as< string > () + "[" + yystack_[1].value.as< string > () + "]";
			yylhs.value.as< var_struct > ().index = yystack_[1].value.as< string > ();
		}
#line 909 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 249 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 917 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 253 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 925 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 259 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 933 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 263 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 941 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 269 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 949 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 273 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 957 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 279 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 965 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 283 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 973 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 289 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 981 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 293 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 989 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 297 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 997 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 301 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1005 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 305 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1013 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 309 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1021 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 313 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1029 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 317 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1037 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 322 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "==";}
#line 1043 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 323 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "!=";}
#line 1049 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 324 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<";}
#line 1055 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 325 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">";}
#line 1061 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 326 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<=";}
#line 1067 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 327 "phase3.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">=";}
#line 1073 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 331 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1081 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 335 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1089 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 341 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1097 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 345 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1105 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 351 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1113 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 355 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1121 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 359 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1129 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 363 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1137 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 369 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1145 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 373 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1153 "parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 379 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1161 "parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 383 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1169 "parser.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 387 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1177 "parser.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 391 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1185 "parser.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 395 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1193 "parser.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 399 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1201 "parser.tab.cc" // lalr1.cc:859
    break;

  case 70:
#line 405 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1209 "parser.tab.cc" // lalr1.cc:859
    break;

  case 71:
#line 409 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1217 "parser.tab.cc" // lalr1.cc:859
    break;

  case 72:
#line 413 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1225 "parser.tab.cc" // lalr1.cc:859
    break;

  case 73:
#line 417 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1233 "parser.tab.cc" // lalr1.cc:859
    break;

  case 74:
#line 421 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1241 "parser.tab.cc" // lalr1.cc:859
    break;

  case 75:
#line 425 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1249 "parser.tab.cc" // lalr1.cc:859
    break;

  case 76:
#line 429 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1257 "parser.tab.cc" // lalr1.cc:859
    break;

  case 77:
#line 433 "phase3.yy" // lalr1.cc:859
    {
			
		}
#line 1265 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1269 "parser.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -52;

  const signed char parser::yytable_ninf_ = -75;

  const short int
  parser::yypact_[] =
  {
      14,    23,    44,   -52,    14,    17,   -52,   -52,    60,   -52,
      10,    27,    66,    33,   102,    75,   -52,   -52,   -52,    34,
      26,   -52,     2,    41,   -52,    48,    88,    76,    73,   235,
     113,    85,    87,     1,     1,   120,   -52,   137,   137,   105,
     171,   106,     3,   140,   139,   105,   -14,    65,   -52,   -52,
      35,     1,   -52,   -52,   138,   130,   134,   241,   112,    30,
     104,   -10,   141,   235,   -52,   119,   -52,   105,   -52,   -52,
     -52,   235,   105,   105,   -52,   153,   121,    18,   -52,   -52,
       1,   241,   105,   -52,   -52,   128,   230,   235,     1,   -52,
       1,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   105,   115,
     105,   -52,   -52,   -52,   105,   105,   105,   -52,   -52,   -52,
     -52,   235,   184,   137,   133,   235,   -52,   -52,   -52,   -52,
     -52,   136,   142,   145,   105,   146,   -52,   -52,   154,   130,
     134,   -52,   105,    22,    72,   -52,   -52,   -52,   -52,   -52,
     205,   162,   -52,   -52,   105,   -52,   -52,   -52,   -52,   235,
     -52,   -52,   150,   -52,     1,   -52,   218,    97,   -52,   -52
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
       0,    13,     0,     8,     0,     0,     6,     7,    11,     0,
       0,    14,     0,     0,     9,     0,     0,     0,     0,    15,
       0,     0,    30,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    42,    44,
       0,     0,    72,    70,     0,    32,    36,     0,     0,    56,
       0,    62,     0,    15,    23,    28,    24,     0,    26,     5,
      17,    15,     0,     0,    12,     0,     0,     0,    43,    45,
       0,     0,     0,    73,    71,     0,     0,    15,     0,    33,
       0,    37,    48,    49,    50,    51,    52,    53,     0,     0,
       0,    57,    59,    58,     0,     0,     0,    63,    64,    65,
      66,    15,     0,     0,     0,    16,    27,    18,    10,    31,
      76,     0,    54,     0,     0,     0,    46,    74,     0,    34,
      38,    40,     0,    73,    71,    61,    60,    67,    68,    69,
       0,     0,    29,    77,     0,    47,    41,    75,    19,    15,
      35,    39,     0,    21,     0,    55,     0,    75,    22,    20
  };

  const short int
  parser::yypgoto_[] =
  {
     -52,   -52,   179,   -52,   181,   -52,   172,   -51,   -38,   -35,
     -29,   -33,    70,   116,    80,   110,   131,    69,   -32,   -52,
      67,   -52,   -17
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    10,    13,    14,    40,    41,    64,
      53,    54,    89,    55,    91,    56,    98,   121,    57,    58,
      59,    60,    61
  };

  const short int
  parser::yytable_[] =
  {
      42,    62,    70,    66,    72,    46,    11,    68,    65,    65,
      26,    42,   112,    76,    11,    81,    12,     1,    85,    86,
     115,    84,    46,   108,   109,   110,   -72,     5,    47,    48,
      49,    77,    50,    45,    42,   114,   128,    24,    25,    32,
     116,   117,    42,   107,     6,   122,    51,   123,    86,    50,
     125,    52,    73,   -72,   -72,   -72,   -72,   -72,    42,     8,
     140,   102,   103,    67,   120,     9,   131,   -72,    52,    46,
     134,    15,   -72,    16,    70,    17,   -70,    70,   142,    11,
      82,    23,    42,    42,    65,    83,    42,   137,   138,   139,
      70,    27,   146,    78,    79,    28,    50,    29,   156,    42,
     152,   -74,    70,   -70,   -70,   -70,   -70,   -70,    46,    46,
      80,    42,   122,    18,    19,    52,    46,   -70,    70,    46,
      42,   158,   -70,    31,    30,   101,    43,    42,   -74,   -74,
     -74,   -74,   -74,    44,    45,    50,    50,   104,   105,   106,
      63,    32,   -74,    99,   100,    20,    50,   -74,    71,    67,
      67,    74,    75,    87,    52,    52,    88,    67,    32,    90,
     132,   111,    52,   113,   118,   133,   135,   136,    33,   119,
     148,   149,    34,    35,   126,    32,    36,    37,    38,   127,
     154,    69,   143,     7,    39,    33,   144,    21,    32,    34,
      35,   145,   147,    36,    37,    38,   157,    22,    33,   150,
     130,    39,    34,    35,   129,   141,    36,    37,    38,    32,
     151,     0,   124,   155,    39,     0,     0,     0,     0,    33,
       0,     0,    32,    34,    35,     0,   153,    36,    37,    38,
       0,     0,    33,     0,   159,    39,    34,    35,     0,    32,
      36,    37,    38,     0,     0,     0,     0,     0,    39,    33,
       0,     0,     0,    34,    35,     0,     0,    36,    37,    38,
       0,     0,     0,     0,     0,    39,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,   127,    92,    93,    94,
      95,    96,    97
  };

  const short int
  parser::yycheck_[] =
  {
      29,    34,    40,    38,     1,     4,     4,    39,    37,    38,
       8,    40,    63,    45,     4,    47,     6,     3,    51,    51,
      71,    50,     4,    33,    34,    35,     4,     4,    27,    28,
      29,    45,    31,    47,    63,    67,    87,    11,    12,     4,
      72,    73,    71,    60,     0,    77,    45,    80,    80,    31,
      82,    50,    49,    31,    32,    33,    34,    35,    87,    42,
     111,    31,    32,    45,    46,     5,    98,    45,    50,     4,
      99,    44,    50,     7,   112,    42,     4,   115,   113,     4,
      45,    47,   111,   112,   113,    50,   115,   104,   105,   106,
     128,    50,   124,    28,    29,    47,    31,     9,   149,   128,
     132,     4,   140,    31,    32,    33,    34,    35,     4,     4,
      45,   140,   144,    11,    12,    50,     4,    45,   156,     4,
     149,   154,    50,    50,    48,    58,    13,   156,    31,    32,
      33,    34,    35,    48,    47,    31,    31,    33,    34,    35,
      20,     4,    45,    31,    32,    43,    31,    50,    42,    45,
      45,    11,    13,    15,    50,    50,    26,    45,     4,    25,
      45,    20,    50,    44,    11,    50,    99,   100,    14,    48,
      16,    17,    18,    19,    46,     4,    22,    23,    24,    46,
      18,    10,    46,     4,    30,    14,    44,    15,     4,    18,
      19,    46,    46,    22,    23,    24,    46,    16,    14,   129,
      90,    30,    18,    19,    88,    21,    22,    23,    24,     4,
     130,    -1,    81,   144,    30,    -1,    -1,    -1,    -1,    14,
      -1,    -1,     4,    18,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    14,    -1,    16,    30,    18,    19,    -1,     4,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    14,
      -1,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    36,    37,    38,
      39,    40,    41
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,    54,    55,    56,     4,     0,    55,    42,     5,
      57,     4,     6,    58,    59,    44,     7,    42,    11,    12,
      43,    59,    57,    47,    11,    12,     8,    50,    47,     9,
      48,    50,     4,    14,    18,    19,    22,    23,    24,    30,
      60,    61,    63,    13,    48,    47,     4,    27,    28,    29,
      31,    45,    50,    63,    64,    66,    68,    71,    72,    73,
      74,    75,    64,    20,    62,    63,    62,    45,    71,    10,
      61,    42,     1,    49,    11,    13,    71,    45,    28,    29,
      45,    71,    45,    50,    63,    64,    71,    15,    26,    65,
      25,    67,    36,    37,    38,    39,    40,    41,    69,    31,
      32,    73,    31,    32,    33,    34,    35,    75,    33,    34,
      35,    20,    60,    44,    71,    60,    71,    71,    11,    48,
      46,    70,    71,    64,    69,    71,    46,    46,    60,    66,
      68,    71,    45,    50,    63,    73,    73,    75,    75,    75,
      60,    21,    62,    46,    44,    46,    71,    46,    16,    17,
      65,    67,    71,    21,    18,    70,    60,    46,    64,    16
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    55,    55,    56,    57,    57,    57,    58,
      58,    58,    58,    59,    59,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,    12,     0,     3,     2,     3,
       8,     2,     7,     1,     3,     0,     3,     2,     3,     5,
       7,     5,     6,     2,     2,     1,     2,     3,     1,     3,
       1,     4,     1,     2,     2,     3,     1,     2,     2,     3,
       3,     4,     1,     2,     1,     2,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     2,     3,     3,     3,
       1,     2,     1,     2,     3,     4,     3,     4
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
  "relation_and_exps", "relation_and_exp", "relation_exps", "relation_exp",
  "comp", "expressions", "expression", "multiplicative_expressions",
  "multiplicative_expression", "terms", "term", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,    99,    99,   102,   103,   106,   125,   126,   135,   140,
     147,   154,   157,   161,   165,   174,   175,   178,   183,   187,
     190,   193,   196,   199,   206,   211,   214,   217,   222,   226,
     235,   240,   248,   252,   258,   262,   268,   272,   278,   282,
     288,   292,   296,   300,   304,   308,   312,   316,   322,   323,
     324,   325,   326,   327,   330,   334,   340,   344,   350,   354,
     358,   362,   368,   372,   378,   382,   386,   390,   394,   398,
     404,   408,   412,   416,   420,   424,   428,   432
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
#line 1769 "parser.tab.cc" // lalr1.cc:1167
#line 445 "phase3.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
