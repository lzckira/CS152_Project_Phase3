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
#line 1 "Exp.yy" // lalr1.cc:404


#line 39 "Exp.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "Exp.tab.hh"

// User implementation prologue.

#line 53 "Exp.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 41 "Exp.yy" // lalr1.cc:413

#include "Exp.tab.hh"

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

#line 78 "Exp.tab.cc" // lalr1.cc:413


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
#line 164 "Exp.tab.cc" // lalr1.cc:479

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

      case 62: // vars
        value.move< list<var_struct> > (that.value);
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 60: // statements
      case 61: // statement
      case 64: // bool_exp
      case 65: // relation_and_exps
      case 66: // relation_and_exp
      case 67: // relation_exps
      case 68: // relation_exp
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

      case 62: // vars
        value.copy< list<var_struct> > (that.value);
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 60: // statements
      case 61: // statement
      case 64: // bool_exp
      case 65: // relation_and_exps
      case 66: // relation_and_exp
      case 67: // relation_exps
      case 68: // relation_exp
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

      case 62: // vars
        yylhs.value.build< list<var_struct> > ();
        break;

      case 4: // IDENT
      case 55: // program
      case 56: // function
      case 60: // statements
      case 61: // statement
      case 64: // bool_exp
      case 65: // relation_and_exps
      case 66: // relation_and_exp
      case 67: // relation_exps
      case 68: // relation_exp
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
#line 96 "Exp.yy" // lalr1.cc:859
    {if(no_error) cout << yystack_[0].value.as< string > ();}
#line 660 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 99 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 666 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 100 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = yystack_[1].value.as< string > () + "\n" + yystack_[0].value.as< string > ();}
#line 672 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 104 "Exp.yy" // lalr1.cc:859
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
#line 693 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 122 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< dec_struct > ().code=""; yylhs.value.as< dec_struct > ().ids=list<string>();}
#line 699 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 123 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< dec_struct > ().code = yystack_[2].value.as< dec_struct > ().code + yystack_[1].value.as< dec_struct > ().code;
			for(list<string>::iterator it = yystack_[2].value.as< dec_struct > ().ids.begin(); it != yystack_[2].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
			for(list<string>::iterator it = yystack_[1].value.as< dec_struct > ().ids.begin(); it != yystack_[1].value.as< dec_struct > ().ids.end(); it++){
				yylhs.value.as< dec_struct > ().ids.push_back(*it);
			}
		}
#line 713 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 132 "Exp.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 721 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 138 "Exp.yy" // lalr1.cc:859
    {
			for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
			    yylhs.value.as< dec_struct > ().code += ". " + *it + "\n";
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[2].value.as< list<string> > ();
		}
#line 732 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 145 "Exp.yy" // lalr1.cc:859
    { 
			for(list<string>::iterator it = yystack_[7].value.as< list<string> > ().begin(); it != yystack_[7].value.as< list<string> > ().end(); it++){
			    yylhs.value.as< dec_struct > ().code += ".[] " + *it + ", " + to_string(yystack_[3].value.as< int > ()) + "\n";
			}
			yylhs.value.as< dec_struct > ().ids = yystack_[7].value.as< list<string> > ();
		}
#line 743 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 151 "Exp.yy" // lalr1.cc:859
    {
			/*error*/	
		}
#line 751 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 154 "Exp.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 759 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 159 "Exp.yy" // lalr1.cc:859
    { 
		  yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ()); 
		}
#line 767 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 163 "Exp.yy" // lalr1.cc:859
    { 
		  for(list<string>::iterator it = yystack_[2].value.as< list<string> > ().begin(); it != yystack_[2].value.as< list<string> > ().end(); it++){
				yylhs.value.as< list<string> > ().push_back(*it);
		  }
		  yylhs.value.as< list<string> > ().push_back(yystack_[0].value.as< string > ());
		}
#line 778 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 171 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "";}
#line 784 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 172 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = yystack_[2].value.as< string > () + yystack_[0].value.as< string > ();
		}
#line 792 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 175 "Exp.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 800 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 181 "Exp.yy" // lalr1.cc:859
    {
			/* $$.code = "= " + $1 + ", " + $3 + "\n"; */
		}
#line 808 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 184 "Exp.yy" // lalr1.cc:859
    {
		
		}
#line 816 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 187 "Exp.yy" // lalr1.cc:859
    {

		}
#line 824 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 190 "Exp.yy" // lalr1.cc:859
    {

		}
#line 832 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 193 "Exp.yy" // lalr1.cc:859
    {

		}
#line 840 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 196 "Exp.yy" // lalr1.cc:859
    {
			/*for(list<vars_struct>::iterator it = $2.var_list.begin(); it != $2.var_list.end(); it++){
				$$ += ".< " + *it.id + "\n";
			}*/
			for(auto i : yystack_[0].value.as< list<var_struct> > ()){
				if (i.array == false) {
					yylhs.value.as< string > () += ".< " + i.id + "\n";
				}
				else {
					yylhs.value.as< string > () += ".[]< " + i.id + ", " + i.index + "\n";
				}
			}

		}
#line 859 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 210 "Exp.yy" // lalr1.cc:859
    {
			/*for(list<vars_structe>::iterator it = $2.var_list.begin(); it != $2.var_list.end(); it++){
				$$ += ".> " + *it.id + "\n";
			}*/
			for(auto i : yystack_[0].value.as< list<var_struct> > ()){
				if (i.array == false) {
					yylhs.value.as< string > () += ".> " + i.id + "\n";
				}
				else {
					yylhs.value.as< string > () += ".[]> " + i.id + ", " + i.index + "\n";
				}
			}
		}
#line 877 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 223 "Exp.yy" // lalr1.cc:859
    {

		}
#line 885 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 226 "Exp.yy" // lalr1.cc:859
    {

		}
#line 893 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 229 "Exp.yy" // lalr1.cc:859
    {
			/*error*/
		}
#line 901 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 235 "Exp.yy" // lalr1.cc:859
    { 
			yylhs.value.as< list<var_struct> > ().push_back(yystack_[0].value.as< var_struct > ());
		}
#line 909 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 239 "Exp.yy" // lalr1.cc:859
    {
			for(auto i : yystack_[2].value.as< list<var_struct> > ()){
				yylhs.value.as< list<var_struct> > ().push_back(i);
			}
			yylhs.value.as< list<var_struct> > ().push_back(yystack_[0].value.as< var_struct > ());
		}
#line 920 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 248 "Exp.yy" // lalr1.cc:859
    { 
			yylhs.value.as< var_struct > ().array = false;
			yylhs.value.as< var_struct > ().id = yystack_[0].value.as< string > ();
		}
#line 929 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 253 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< var_struct > ().array = true;
			yylhs.value.as< var_struct > ().id = yystack_[3].value.as< string > () + "[" + yystack_[1].value.as< string > () + "]";
			yylhs.value.as< var_struct > ().index = yystack_[1].value.as< string > ();
		}
#line 939 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 261 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 947 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 265 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 955 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 271 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 963 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 275 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 971 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 281 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 979 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 285 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 987 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 291 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 995 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 295 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1003 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 301 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1011 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 305 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1019 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 309 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "true";
		}
#line 1027 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 313 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "false";
		}
#line 1035 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 317 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "false";
		}
#line 1043 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 321 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = "true";
		}
#line 1051 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 325 "Exp.yy" // lalr1.cc:859
    {
			yylhs.value.as< string > () = yystack_[1].value.as< string > ();
		}
#line 1059 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 329 "Exp.yy" // lalr1.cc:859
    {
			if(yystack_[1].value.as< string > () == "true") {
				yylhs.value.as< string > () = "false";
			}
			else {
				yylhs.value.as< string > () = "true";
			} 
		}
#line 1072 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 339 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "==";}
#line 1078 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 340 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "!=";}
#line 1084 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 341 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<";}
#line 1090 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 342 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">";}
#line 1096 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 343 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = "<=";}
#line 1102 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 344 "Exp.yy" // lalr1.cc:859
    {yylhs.value.as< string > () = ">=";}
#line 1108 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 348 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1116 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 352 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1124 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 358 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1132 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 362 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1140 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 368 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1148 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 372 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1156 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 376 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1164 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 380 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1172 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 386 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1180 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 390 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1188 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 396 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1196 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 400 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1204 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 404 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1212 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 408 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1220 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 412 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1228 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 416 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1236 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 70:
#line 422 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1244 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 71:
#line 426 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1252 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 72:
#line 430 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1260 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 73:
#line 434 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1268 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 74:
#line 438 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1276 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 75:
#line 442 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1284 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 76:
#line 446 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1292 "Exp.tab.cc" // lalr1.cc:859
    break;

  case 77:
#line 450 "Exp.yy" // lalr1.cc:859
    {
			
		}
#line 1300 "Exp.tab.cc" // lalr1.cc:859
    break;


#line 1304 "Exp.tab.cc" // lalr1.cc:859
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


  const signed char parser::yypact_ninf_ = -62;

  const signed char parser::yytable_ninf_ = -75;

  const short int
  parser::yypact_[] =
  {
       3,    10,    17,   -62,     3,    -9,   -62,   -62,    33,   -62,
      18,   -62,    34,     6,   162,   -62,   -62,   -62,     8,    23,
      61,    12,    19,   -62,    30,   -62,    70,    41,    32,   274,
      78,    45,    36,   138,   138,    75,   -62,    93,    93,   149,
     210,    71,     2,   110,   109,   149,   -20,   150,   -62,   -62,
      69,   138,   -62,   -62,   111,    35,   101,    80,   103,   280,
     139,    14,   127,    -4,   112,   274,    89,   -62,    89,   149,
     -62,   -62,   -62,   274,   149,   149,   -62,   123,    87,    22,
     -62,   -62,   138,   280,   149,   -62,   -62,    90,   269,   274,
     138,   -62,   -62,   138,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   149,   151,   149,   -62,   -62,   -62,   149,   149,
     149,   -62,   -62,   -62,   -62,   274,   223,    93,    98,   274,
     -62,   -62,   -62,   -62,   -62,   104,   108,   117,   149,   122,
     -62,   -62,   193,   -62,   -62,   -62,   149,    67,   106,   -62,
     -62,   -62,   -62,   -62,   244,   157,   -62,   -62,   149,   -62,
     -62,   -62,   -62,   274,   130,   -62,   138,   -62,   257,   114,
     -62,   -62
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
       0,    13,     0,     8,     0,     6,     7,    11,     0,     0,
       0,     0,     0,     9,     0,    14,     0,     0,     0,    15,
       0,     0,    30,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    42,    44,
       0,     0,    72,    70,     0,     0,    32,     0,    36,     0,
       0,    56,     0,    62,     0,    15,    23,    28,    24,     0,
      26,     5,    17,    15,     0,     0,    12,     0,     0,     0,
      43,    45,     0,     0,     0,    73,    71,     0,     0,    15,
       0,    33,    34,     0,    37,    38,    48,    49,    50,    51,
      52,    53,     0,     0,     0,    57,    59,    58,     0,     0,
       0,    63,    64,    65,    66,    15,     0,     0,     0,    16,
      27,    18,    10,    31,    76,     0,    54,     0,     0,     0,
      46,    74,     0,    35,    39,    40,     0,    73,    71,    61,
      60,    67,    68,    69,     0,     0,    29,    77,     0,    47,
      41,    75,    19,    15,     0,    21,     0,    55,     0,    75,
      22,    20
  };

  const short int
  parser::yypgoto_[] =
  {
     -62,   -62,   153,   -62,   170,   -62,   -62,   -61,   -38,   148,
     -29,   -33,   -62,   -50,   -62,   -34,   107,    39,   -32,   -62,
     -28,   -62,   -52
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    10,    13,    14,    40,    41,    66,
      53,    54,    55,    56,    57,    58,   102,   125,    59,    60,
      61,    62,    63
  };

  const short int
  parser::yytable_[] =
  {
      42,    64,    72,    74,   116,    91,     1,    70,    67,    67,
     111,    42,   119,    78,     5,    83,    11,     6,    87,    88,
      26,    86,    11,    94,    12,    79,    46,    45,   132,   112,
     113,   114,   105,     8,    23,    24,    42,   118,     9,    46,
     133,    15,   120,   121,    42,   106,   107,   126,    16,   127,
      88,    75,   129,    50,   144,    22,   141,   142,   143,   134,
      42,    90,    47,    48,    49,    25,    50,    69,   124,    27,
     135,   -72,    52,    32,   138,   139,   140,    28,    72,    29,
      51,    72,    31,    45,    46,    52,    42,    42,   146,    30,
      42,    43,   158,    44,    72,    65,   150,    32,   -72,   -72,
     -72,   -72,   -72,    42,   154,    93,    72,    47,    48,    49,
     -70,    50,   -72,    73,    84,    42,   126,   -72,   -74,    85,
      72,    76,    77,   160,    42,    51,    89,    92,    95,    42,
      52,    46,   115,   117,   122,   123,   130,   -70,   -70,   -70,
     -70,   -70,    46,    46,   131,   -74,   -74,   -74,   -74,   -74,
     147,   -70,   148,    46,    46,    46,   -70,     7,    50,   -74,
     108,   109,   110,   149,   -74,    47,    48,    49,   151,    50,
     103,   104,    69,    17,    18,   156,   159,    52,    80,    81,
      50,    50,    50,    51,    69,    21,    68,   157,    52,    52,
     128,     0,     0,     0,    69,    82,   136,    32,     0,    52,
      52,   137,     0,     0,     0,    19,    20,    33,     0,   152,
     153,    34,    35,     0,    32,    36,    37,    38,     0,     0,
      71,     0,     0,    39,    33,     0,     0,    32,    34,    35,
       0,     0,    36,    37,    38,     0,     0,    33,     0,     0,
      39,    34,    35,     0,   145,    36,    37,    38,    32,     0,
       0,     0,     0,    39,     0,     0,     0,     0,    33,     0,
       0,    32,    34,    35,     0,   155,    36,    37,    38,     0,
       0,    33,     0,   161,    39,    34,    35,     0,    32,    36,
      37,    38,     0,     0,     0,     0,     0,    39,    33,     0,
       0,     0,    34,    35,     0,     0,    36,    37,    38,     0,
       0,     0,     0,     0,    39,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,   131,    96,    97,    98,    99,
     100,   101
  };

  const short int
  parser::yycheck_[] =
  {
      29,    34,    40,     1,    65,    55,     3,    39,    37,    38,
      62,    40,    73,    45,     4,    47,     4,     0,    51,    51,
       8,    50,     4,    57,     6,    45,     4,    47,    89,    33,
      34,    35,    60,    42,    11,    12,    65,    69,     5,     4,
      90,     7,    74,    75,    73,    31,    32,    79,    42,    82,
      82,    49,    84,    31,   115,    47,   108,   109,   110,    93,
      89,    26,    27,    28,    29,     4,    31,    45,    46,    50,
     102,     4,    50,     4,   103,   103,   104,    47,   116,     9,
      45,   119,    50,    47,     4,    50,   115,   116,   117,    48,
     119,    13,   153,    48,   132,    20,   128,     4,    31,    32,
      33,    34,    35,   132,   136,    25,   144,    27,    28,    29,
       4,    31,    45,    42,    45,   144,   148,    50,     4,    50,
     158,    11,    13,   156,   153,    45,    15,    26,    25,   158,
      50,     4,    20,    44,    11,    48,    46,    31,    32,    33,
      34,    35,     4,     4,    46,    31,    32,    33,    34,    35,
      46,    45,    44,     4,     4,     4,    50,     4,    31,    45,
      33,    34,    35,    46,    50,    27,    28,    29,    46,    31,
      31,    32,    45,    11,    12,    18,    46,    50,    28,    29,
      31,    31,    31,    45,    45,    15,    38,   148,    50,    50,
      83,    -1,    -1,    -1,    45,    45,    45,     4,    -1,    50,
      50,    50,    -1,    -1,    -1,    43,    44,    14,    -1,    16,
      17,    18,    19,    -1,     4,    22,    23,    24,    -1,    -1,
      10,    -1,    -1,    30,    14,    -1,    -1,     4,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    14,    -1,    -1,
      30,    18,    19,    -1,    21,    22,    23,    24,     4,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    14,    -1,
      -1,     4,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    14,    -1,    16,    30,    18,    19,    -1,     4,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    14,    -1,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    36,    37,    38,    39,
      40,    41
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,    54,    55,    56,     4,     0,    55,    42,     5,
      57,     4,     6,    58,    59,     7,    42,    11,    12,    43,
      44,    57,    47,    11,    12,     4,     8,    50,    47,     9,
      48,    50,     4,    14,    18,    19,    22,    23,    24,    30,
      60,    61,    63,    13,    48,    47,     4,    27,    28,    29,
      31,    45,    50,    63,    64,    65,    66,    67,    68,    71,
      72,    73,    74,    75,    64,    20,    62,    63,    62,    45,
      71,    10,    61,    42,     1,    49,    11,    13,    71,    45,
      28,    29,    45,    71,    45,    50,    63,    64,    71,    15,
      26,    66,    26,    25,    68,    25,    36,    37,    38,    39,
      40,    41,    69,    31,    32,    73,    31,    32,    33,    34,
      35,    75,    33,    34,    35,    20,    60,    44,    71,    60,
      71,    71,    11,    48,    46,    70,    71,    64,    69,    71,
      46,    46,    60,    66,    68,    71,    45,    50,    63,    73,
      73,    75,    75,    75,    60,    21,    63,    46,    44,    46,
      71,    46,    16,    17,    71,    21,    18,    70,    60,    46,
      64,    16
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
       0,    96,    96,    99,   100,   103,   122,   123,   132,   137,
     144,   151,   154,   158,   162,   171,   172,   175,   180,   184,
     187,   190,   193,   196,   210,   223,   226,   229,   234,   238,
     247,   252,   260,   264,   270,   274,   280,   284,   290,   294,
     300,   304,   308,   312,   316,   320,   324,   328,   339,   340,
     341,   342,   343,   344,   347,   351,   357,   361,   367,   371,
     375,   379,   385,   389,   395,   399,   403,   407,   411,   415,
     421,   425,   429,   433,   437,   441,   445,   449
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
#line 1815 "Exp.tab.cc" // lalr1.cc:1167
#line 462 "Exp.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}
