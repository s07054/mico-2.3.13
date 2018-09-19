#define yyFlexLexer rrFlexLexer

#line 4 "RightsConfig.cc"
/* A lexical scanner generated by flex */

/* Scanner skeleton version:
 * $Header: /home/mico/cvsroot/mico/orb/security/RightsConfig.cc,v 1.3 2003/03/14 14:50:31 gardas Exp $
 */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5



/* cfront 1.2 defines "c_plusplus" instead of "__cplusplus" */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif


#ifdef __cplusplus

#include <stdlib.h>
//class istream;
#include <unistd.h>
#include <iostream>
/* Use prototypes in function declarations. */
#define YY_USE_PROTOS

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

#if __STDC__

#define YY_USE_PROTOS
#define YY_USE_CONST

#endif	/* __STDC__ */
#endif	/* ! __cplusplus */

#ifdef __TURBOC__
 #pragma warn -rch
 #pragma warn -use
#include <io.h>
#include <stdlib.h>
#define YY_USE_CONST
#define YY_USE_PROTOS
#endif

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif


#ifdef YY_USE_PROTOS
#define YY_PROTO(proto) proto
#else
#define YY_PROTO(proto) ()
#endif

/* Returned upon end-of-file. */
#define YY_NULL 0

/* Promotes a possibly negative, possibly signed char to an unsigned
 * integer for use as an array index.  If the signed char is negative,
 * we want to instead treat it as an 8-bit unsigned char, hence the
 * double cast.
 */
#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)

/* Enter a start condition.  This macro really ought to take a parameter,
 * but we do it the disgusting crufty way forced on us by the ()-less
 * definition of BEGIN.
 */
#define BEGIN yy_start = 1 + 2 *

/* Translate the current start state into a value that can be later handed
 * to BEGIN to return to the state.  The YYSTATE alias is for lex
 * compatibility.
 */
#define YY_START ((yy_start - 1) / 2)
#define YYSTATE YY_START

/* Action number for EOF rule of a given start state. */
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

/* Special action meaning "start processing a new file". */
#define YY_NEW_FILE yyrestart( yyin )

#define YY_END_OF_BUFFER_CHAR 0

/* Size of default input buffer. */
#define YY_BUF_SIZE 16384

typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern int yyleng;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

/* The funky do-while in the following #define is used to turn the definition
 * int a single C statement (which needs a semi-colon terminator).  This
 * avoids problems with code like:
 *
 * 	if ( condition_holds )
 *		yyless( 5 );
 *	else
 *		do_something_else();
 *
 * Prior to using the do-while the compiler would get upset at the
 * "else" because it interpreted the "if" statement as being all
 * done when it reached the ';' after the yyless() call.
 */

/* Return all but the first 'n' matched characters back to the input stream. */

#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		*yy_cp = yy_hold_char; \
		YY_RESTORE_YY_MORE_OFFSET \
		yy_c_buf_p = yy_cp = yy_bp + n - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )

#define unput(c) yyunput( c, yytext_ptr )

/* The following is because we cannot portably get our hands on size_t
 * (without autoconf's help, which isn't available because we want
 * flex-generated scanners to compile on their own).
 */
typedef unsigned int yy_size_t;


struct yy_buffer_state
	{
	std::istream* yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;
#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
	/* When an EOF's been seen but there's still some text to process
	 * then we mark the buffer as YY_EOF_PENDING, to indicate that we
	 * shouldn't try reading from the input source any more.  We might
	 * still have a bunch of tokens to match, though, because of
	 * possible backing-up.
	 *
	 * When we actually see the EOF, we change the status to "new"
	 * (via yyrestart()), so that the user can continue scanning by
	 * just pointing yyin at a new input file.
	 */
#define YY_BUFFER_EOF_PENDING 2
	};


/* We provide macros for accessing buffer states in case in the
 * future we want to put the buffer states in a more general
 * "scanner state".
 */
#define YY_CURRENT_BUFFER yy_current_buffer



static void *yy_flex_alloc YY_PROTO(( yy_size_t ));
static void *yy_flex_realloc YY_PROTO(( void *, yy_size_t ));
static void yy_flex_free YY_PROTO(( void * ));

#define yy_new_buffer yy_create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (yy_current_buffer->yy_at_bol)


#define YY_USES_REJECT

#define yywrap() 1
#define YY_SKIP_YYWRAP
typedef unsigned char YY_CHAR;
#define yytext_ptr yytext
#define YY_INTERACTIVE

#include <FlexLexer.h>
int yyFlexLexer::yylex()
	{
	LexerError( "yyFlexLexer::yylex invoked but %option yyclass used" );
	return 0;
	}

#define YY_DECL int RightsConfig::yylex()


/* Done after the current pattern has been matched and before the
 * corresponding action - sets up yytext.
 */
#define YY_DO_BEFORE_ACTION \
	yytext_ptr = yy_bp; \
	yyleng = (int) (yy_cp - yy_bp); \
	yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yy_c_buf_p = yy_cp;

#define YY_NUM_RULES 12
#define YY_END_OF_BUFFER 13
static yyconst short int yy_acclist[43] =
    {   0,
       13,   11,   12,    1,   11,   12,    1,   12,    2,   11,
       12,    4,   11,   12,   12,   11,   12,   11,   12,   11,
       12,    3,   12,    7,   11,   12,   11,   12,   11,   12,
    16394,    9,   11,   12,    1,    4,    5,    6,    3,    8,
     8202,16394
    } ;

static yyconst short int yy_accept[48] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    2,
        4,    7,    9,   12,   15,   16,   18,   20,   22,   24,
       27,   29,   32,   35,   36,   37,   37,   38,   39,   39,
       39,   40,   41,   41,   42,   43,   43
    } ;

static yyconst int yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    1,    1,    4,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    5,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    6,    1,    1,
        1,    1,    1,    1,    7,    7,    7,    7,    7,    7,
        7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
        7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
        8,    1,    9,    1,    1,    1,    7,    7,    7,    7,

        7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
        7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
        7,    7,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static yyconst int yy_meta[10] =
    {   0,
        1,    2,    2,    1,    1,    1,    1,    3,    1
    } ;

static yyconst short int yy_base[52] =
    {   0,
        0,    0,    8,    0,   43,   42,   42,   41,    0,    0,
       44,   43,   11,    0,    0,    0,   14,    0,   45,   52,
       36,   35,   52,   52,   52,   21,   16,   25,   52,   52,
       18,   24,   52,    0,   52,    6,   52,   52,    0,   11,
       52,   52,    0,    0,    0,   52,   31,   33,   36,   39,
       11
    } ;

static yyconst short int yy_def[52] =
    {   0,
       46,    1,    1,    3,    3,    3,    3,    3,    3,    3,
       47,   47,    3,   13,    3,    3,    3,   17,   46,   46,
       48,   48,   46,   46,   46,   49,   46,   50,   46,   46,
       46,   46,   46,   22,   46,   49,   46,   46,   27,   50,
       46,   46,   31,   51,   32,    0,   46,   46,   46,   46,
       46
    } ;

static yyconst short int yy_nxt[62] =
    {   0,
       20,   21,   22,   23,   20,   20,   20,   24,   20,   20,
       25,   20,   44,   41,   37,   20,   30,   31,   32,   33,
       32,   38,   39,   42,   43,   44,   44,   41,   45,   37,
       45,   28,   28,   28,   34,   34,   36,   36,   36,   40,
       40,   40,   35,   35,   46,   29,   29,   27,   27,   26,
       26,   19,   46,   46,   46,   46,   46,   46,   46,   46,
       46
    } ;

static yyconst short int yy_chk[62] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
        3,    3,   51,   40,   36,    3,   13,   13,   17,   17,
       17,   27,   27,   31,   31,   32,   32,   28,   32,   26,
       32,   47,   47,   47,   48,   48,   49,   49,   49,   50,
       50,   50,   22,   21,   19,   12,   11,    8,    7,    6,
        5,   46,   46,   46,   46,   46,   46,   46,   46,   46,
       46
    } ;

#define YY_TRAILING_MASK 0x2000
#define YY_TRAILING_HEAD_MASK 0x4000
#define REJECT \
{ \
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */ \
yy_cp = yy_full_match; /* restore poss. backed-over text */ \
yy_lp = yy_full_lp; /* restore orig. accepting pos. */ \
yy_state_ptr = yy_full_state; /* restore orig. state */ \
yy_current_state = *yy_state_ptr; /* restore curr. state */ \
++yy_lp; \
goto find_rule; \
}
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
#line 1 "rightsconf.lex"
#define INITIAL 0
#line 2 "rightsconf.lex"
#include <mico/security/DomainManager_impl.h>
#include <mico/security/RightsConfig.h>


using namespace std;

// Security::SecAttribute attr;
// Security::RightsList rlist;
// Security::Right right;
// MICOSL2::AccessRights_impl * r_rights;
#define section 1
#define atvalue 2
#define attype 3
#define domain 4
#define comment 5
#define rtype 6
#define polcomb 7
#define rigs 8

#line 396 "RightsConfig.cc"

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap YY_PROTO(( void ));
#else
extern int yywrap YY_PROTO(( void ));
#endif
#endif


#ifndef yytext_ptr
static void yy_flex_strncpy YY_PROTO(( char *, yyconst char *, int ));
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen YY_PROTO(( yyconst char * ));
#endif

#ifndef YY_NO_INPUT
#endif

#if YY_STACK_USED
static int yy_start_stack_ptr = 0;
static int yy_start_stack_depth = 0;
static int *yy_start_stack = 0;
#ifndef YY_NO_PUSH_STATE
static void yy_push_state YY_PROTO(( int new_state ));
#endif
#ifndef YY_NO_POP_STATE
static void yy_pop_state YY_PROTO(( void ));
#endif
#ifndef YY_NO_TOP_STATE
static int yy_top_state YY_PROTO(( void ));
#endif

#else
#define YY_NO_PUSH_STATE 1
#define YY_NO_POP_STATE 1
#define YY_NO_TOP_STATE 1
#endif

#ifdef YY_MALLOC_DECL
YY_MALLOC_DECL
#else
#if __STDC__
#ifndef __cplusplus
#include <stdlib.h>
#endif
#else
/* Just try to get by without declaring the routines.  This will fail
 * miserably on non-ANSI systems for which sizeof(size_t) != sizeof(int)
 * or sizeof(void*) != sizeof(int).
 */
#endif
#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif

/* Copy whatever the last rule matched to the standard output. */

#ifndef ECHO
#define ECHO LexerOutput( yytext, yyleng )
#endif

/* Gets input and stuffs it into "buf".  number of characters read, or YY_NULL,
 * is returned in "result".
 */
#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( (result = LexerInput( (char *) buf, max_size )) < 0 ) \
		YY_FATAL_ERROR( "input in flex scanner failed" );
#endif

/* No semi-colon after return; correct usage is to write "yyterminate();" -
 * we don't want an extra ';' after the "return" because that will cause
 * some compilers to complain about unreachable statements.
 */
#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Report a fatal error. */
#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) LexerError( msg )
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL int yyFlexLexer::yylex()
#endif

/* Code executed at the beginning of each rule, after yytext and yyleng
 * have been set up.
 */
#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

/* Code executed at the end of each rule. */
#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	YY_USER_ACTION

YY_DECL
	{
	register yy_state_type yy_current_state;
	register char *yy_cp = NULL, *yy_bp = NULL;
	register int yy_act;

#line 13 "rightsconf.lex"


#line 526 "RightsConfig.cc"

	if ( yy_init )
		{
		yy_init = 0;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! yy_start )
			yy_start = 1;	/* first start state */

		if ( ! yyin )
			yyin = &cin;

		if ( ! yyout )
			yyout = &cout;

		if ( ! yy_current_buffer )
			yy_current_buffer =
				yy_create_buffer( yyin, YY_BUF_SIZE );

		yy_load_buffer_state();
		}

	while ( 1 )		/* loops until end-of-file is reached */
		{
		yy_cp = yy_c_buf_p;

		/* Support of yytext. */
		*yy_cp = yy_hold_char;

		/* yy_bp points to the position in yy_ch_buf of the start of
		 * the current run.
		 */
		yy_bp = yy_cp;

		yy_current_state = yy_start;
		yy_state_ptr = yy_state_buf;
		*yy_state_ptr++ = yy_current_state;
yy_match:
		do
			{
			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 47 )
					yy_c = yy_meta[(unsigned int) yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
			*yy_state_ptr++ = yy_current_state;
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 52 );

yy_find_action:
		yy_current_state = *--yy_state_ptr;
		yy_lp = yy_accept[yy_current_state];
find_rule: /* we branch to this label when backing up */
		for ( ; ; ) /* until we find what rule we matched */
			{
			if ( yy_lp && yy_lp < yy_accept[yy_current_state + 1] )
				{
				yy_act = yy_acclist[yy_lp];
				if ( yy_act & YY_TRAILING_HEAD_MASK ||
				     yy_looking_for_trail_begin )
					{
					if ( yy_act == yy_looking_for_trail_begin )
						{
						yy_looking_for_trail_begin = 0;
						yy_act &= ~YY_TRAILING_HEAD_MASK;
						break;
						}
					}
				else if ( yy_act & YY_TRAILING_MASK )
					{
					yy_looking_for_trail_begin = yy_act & ~YY_TRAILING_MASK;
					yy_looking_for_trail_begin |= YY_TRAILING_HEAD_MASK;
					}
				else
					{
					yy_full_match = yy_cp;
					yy_full_state = yy_state_ptr;
					yy_full_lp = yy_lp;
					break;
					}
				++yy_lp;
				goto find_rule;
				}
			--yy_cp;
			yy_current_state = *--yy_state_ptr;
			yy_lp = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;


do_action:	/* This label is used only to access EOF actions. */


		switch ( yy_act )
	{ /* beginning of action switch */
case 1:
YY_RULE_SETUP
#line 15 "rightsconf.lex"

	YY_BREAK
case 2:
YY_RULE_SETUP
#line 16 "rightsconf.lex"
{// comment
						 BEGIN(comment);
						}
	YY_BREAK
case 3:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp -= 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
#line 19 "rightsconf.lex"
{
						 // comment here, nothing to do
						 BEGIN(INITIAL);
						}
	YY_BREAK
case 4:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp -= 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
#line 23 "rightsconf.lex"
{// x509 started
						 BEGIN(atvalue);
						}
	YY_BREAK
case YY_STATE_EOF(INITIAL):
case YY_STATE_EOF(section):
case YY_STATE_EOF(atvalue):
case YY_STATE_EOF(attype):
case YY_STATE_EOF(domain):
case YY_STATE_EOF(comment):
case YY_STATE_EOF(rtype):
case YY_STATE_EOF(polcomb):
case YY_STATE_EOF(rigs):
#line 26 "rightsconf.lex"
{// End of file
						 if (error)
						   *yyout << "\n** syntax error(s)!\n";
						 return 0;
						}
	YY_BREAK
case 5:
YY_RULE_SETUP
#line 31 "rightsconf.lex"
{// attr. value here
						 string str(YYText());
						 int len = str.length();
						 attr.value.length(len - 1);
						 for (int i = 1; i < len - 1; i++)
						 	attr.value[i - 1] = str[i];
						 attr.value[len - 2] = 0;	
						 	
						 BEGIN(attype);
						}
	YY_BREAK
case 6:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp -= 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
#line 42 "rightsconf.lex"
{// AccessId, PrimaryGroupId, etc.
						  string str(YYText());
						  attr.attribute_type.attribute_family.family_definer = 0;
						  attr.attribute_type.attribute_family.family = 1;

						  if (str == "AccessId")
						  	attr.attribute_type.attribute_type = Security::AccessId;
						  else if (str == "PrimaryGroupId")
						    attr.attribute_type.attribute_type = Security::PrimaryGroupId;
						  else if (str == "GroupId")
						  	attr.attribute_type.attribute_type = Security::PrimaryGroupId;
						  else if (str == "Public")
						  	attr.attribute_type.attribute_type = Security::Public;
						  else {
						  	*yyout << "** Unknown attribute - " << str << endl;
						  	error = 1;
						  	return 0;
						  }
						  BEGIN(rtype);
						 }
	YY_BREAK
case 7:
YY_RULE_SETUP
#line 62 "rightsconf.lex"

	YY_BREAK
case 8:
*yy_cp = yy_hold_char; /* undo effects of setting up yytext */
yy_c_buf_p = yy_cp -= 1;
YY_DO_BEFORE_ACTION; /* set up yytext again */
YY_RULE_SETUP
#line 63 "rightsconf.lex"
{// rights type - "corba", etc.
						  string str(YYText());
						  right.rights_family.family_definer = 0; // OMG
						  if (str == "corba")
						    right.rights_family.family = 1; // corba
						  else {
						  	*yyout << "** Unknown type of rights - " << str << endl;
						  	error = 1;
						  	return 0;
						  }
						  BEGIN(rigs);
						 }
	YY_BREAK
case 9:
YY_RULE_SETUP
#line 75 "rightsconf.lex"

	YY_BREAK
case 10:
YY_RULE_SETUP
#line 76 "rightsconf.lex"
{// Rights "msgu" or or "-"
									  string str(YYText());
									  int len = str.length();
									  if (str != "-") { // "-" means "no rights at all"
									    rlist.length(len);
									    string opt;
									    for (int i = 0; i < len; i++) {
									      opt = str.substr(i, 1);
									  	  right.rights_list = CORBA::string_dup(opt.c_str());
									  	  rlist[i] = right;
									    }
									  }
									  else {
									  	rlist.length(0);
									  }
									  
									  r_rights->grant_rights(attr, Security::SecInitiator, rlist);
									  
				  		 			  BEGIN(INITIAL);
			 						 }
	YY_BREAK
case 11:
YY_RULE_SETUP
#line 97 "rightsconf.lex"
{error = 1; ECHO;}
	YY_BREAK
case 12:
YY_RULE_SETUP
#line 99 "rightsconf.lex"
ECHO;
	YY_BREAK
#line 783 "RightsConfig.cc"

	case YY_END_OF_BUFFER:
		{
		/* Amount of text matched not including the EOB char. */
		int yy_amount_of_matched_text = (int) (yy_cp - yytext_ptr) - 1;

		/* Undo the effects of YY_DO_BEFORE_ACTION. */
		*yy_cp = yy_hold_char;
		YY_RESTORE_YY_MORE_OFFSET

		if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_NEW )
			{
			/* We're scanning a new file or input source.  It's
			 * possible that this happened because the user
			 * just pointed yyin at a new source and called
			 * yylex().  If so, then we have to assure
			 * consistency between yy_current_buffer and our
			 * globals.  Here is the right place to do so, because
			 * this is the first action (other than possibly a
			 * back-up) that will match for the new input source.
			 */
			yy_n_chars = yy_current_buffer->yy_n_chars;
			yy_current_buffer->yy_input_file = yyin;
			yy_current_buffer->yy_buffer_status = YY_BUFFER_NORMAL;
			}

		/* Note that here we test for yy_c_buf_p "<=" to the position
		 * of the first EOB in the buffer, since yy_c_buf_p will
		 * already have been incremented past the NUL character
		 * (since all states make transitions on EOB to the
		 * end-of-buffer state).  Contrast this with the test
		 * in input().
		 */
		if ( yy_c_buf_p <= &yy_current_buffer->yy_ch_buf[yy_n_chars] )
			{ /* This was really a NUL. */
			yy_state_type yy_next_state;

			yy_c_buf_p = yytext_ptr + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state();

			/* Okay, we're now positioned to make the NUL
			 * transition.  We couldn't have
			 * yy_get_previous_state() go ahead and do it
			 * for us because it doesn't know how to deal
			 * with the possibility of jamming (and we don't
			 * want to build jamming into it because then it
			 * will run more slowly).
			 */

			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = yytext_ptr + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				/* Consume the NUL. */
				yy_cp = ++yy_c_buf_p;
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = yy_c_buf_p;
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer() )
			{
			case EOB_ACT_END_OF_FILE:
				{
				yy_did_buffer_switch_on_eof = 0;

				if ( yywrap() )
					{
					/* Note: because we've taken care in
					 * yy_get_next_buffer() to have set up
					 * yytext, we can now set up
					 * yy_c_buf_p so that if some total
					 * hoser (like flex itself) wants to
					 * call the scanner after we return the
					 * YY_NULL, it'll still work - another
					 * YY_NULL will get returned.
					 */
					yy_c_buf_p = yytext_ptr + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				yy_c_buf_p =
					yytext_ptr + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state();

				yy_cp = yy_c_buf_p;
				yy_bp = yytext_ptr + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				yy_c_buf_p =
				&yy_current_buffer->yy_ch_buf[yy_n_chars];

				yy_current_state = yy_get_previous_state();

				yy_cp = yy_c_buf_p;
				yy_bp = yytext_ptr + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} /* end of action switch */
		} /* end of scanning one token */
	} /* end of yylex */

yyFlexLexer::yyFlexLexer( istream* arg_yyin, ostream* arg_yyout )
	{
	yyin = arg_yyin;
	yyout = arg_yyout;
	yy_c_buf_p = 0;
	yy_init = 1;
	yy_start = 0;
	yy_flex_debug = 0;
	yylineno = 1;	// this will only get updated if %option yylineno

	yy_did_buffer_switch_on_eof = 0;

	yy_looking_for_trail_begin = 0;
	yy_more_flag = 0;
	yy_more_len = 0;
	yy_more_offset = yy_prev_more_offset = 0;

	yy_start_stack_ptr = yy_start_stack_depth = 0;
	yy_start_stack = 0;

	yy_current_buffer = 0;

#ifdef YY_USES_REJECT
	yy_state_buf = new yy_state_type[YY_BUF_SIZE + 2];
#else
	yy_state_buf = 0;
#endif
	}

yyFlexLexer::~yyFlexLexer()
	{
	delete yy_state_buf;
	yy_delete_buffer( yy_current_buffer );
	}

void yyFlexLexer::switch_streams( istream* new_in, ostream* new_out )
	{
	if ( new_in )
		{
		yy_delete_buffer( yy_current_buffer );
		yy_switch_to_buffer( yy_create_buffer( new_in, YY_BUF_SIZE ) );
		}

	if ( new_out )
		yyout = new_out;
	}

#ifdef YY_INTERACTIVE
int yyFlexLexer::LexerInput( char* buf, int /* max_size */ )
#else
int yyFlexLexer::LexerInput( char* buf, int max_size )
#endif
	{
	if ( yyin->eof() || yyin->fail() )
		return 0;

#ifdef YY_INTERACTIVE
	yyin->get( buf[0] );

	if ( yyin->eof() )
		return 0;

	if ( yyin->bad() )
		return -1;

	return 1;

#else
	(void) yyin->read( buf, max_size );

	if ( yyin->bad() )
		return -1;
	else
		return yyin->gcount();
#endif
	}

void yyFlexLexer::LexerOutput( const char* buf, int size )
	{
	(void) yyout->write( buf, size );
	}

/* yy_get_next_buffer - try to read in a new buffer
 *
 * Returns a code representing an action:
 *	EOB_ACT_LAST_MATCH -
 *	EOB_ACT_CONTINUE_SCAN - continue scanning from current position
 *	EOB_ACT_END_OF_FILE - end of file
 */

int yyFlexLexer::yy_get_next_buffer()
	{
	register char *dest = yy_current_buffer->yy_ch_buf;
	register char *source = yytext_ptr;
	register int number_to_move, i;
	int ret_val;

	if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( yy_current_buffer->yy_fill_buffer == 0 )
		{ /* Don't try to fill the buffer, so this is an EOF. */
		if ( yy_c_buf_p - yytext_ptr - YY_MORE_ADJ == 1 )
			{
			/* We matched a single character, the EOB, so
			 * treat this as a final EOF.
			 */
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			/* We matched some text prior to the EOB, first
			 * process it.
			 */
			return EOB_ACT_LAST_MATCH;
			}
		}

	/* Try to read more data. */

	/* First move last chars to start of buffer. */
	number_to_move = (int) (yy_c_buf_p - yytext_ptr) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_EOF_PENDING )
		/* don't do the read, it's not guaranteed to return an EOF,
		 * just force an EOF
		 */
		yy_current_buffer->yy_n_chars = yy_n_chars = 0;

	else
		{
		int num_to_read =
			yy_current_buffer->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ /* Not enough room in the buffer - grow it. */
#ifdef YY_USES_REJECT
			YY_FATAL_ERROR(
"input buffer overflow, can't enlarge buffer because scanner uses REJECT" );
#else

			/* just a shorter name for the current buffer */
			YY_BUFFER_STATE b = yy_current_buffer;

			int yy_c_buf_p_offset =
				(int) (yy_c_buf_p - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					/* Include room in for 2 EOB chars. */
					yy_flex_realloc( (void *) b->yy_ch_buf,
							 b->yy_buf_size + 2 );
				}
			else
				/* Can't grow it, we don't own it. */
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = yy_current_buffer->yy_buf_size -
						number_to_move - 1;
#endif
			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		/* Read in more data. */
		YY_INPUT( (&yy_current_buffer->yy_ch_buf[number_to_move]),
			yy_n_chars, num_to_read );

		yy_current_buffer->yy_n_chars = yy_n_chars;
		}

	if ( yy_n_chars == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart( yyin );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			yy_current_buffer->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	yy_n_chars += number_to_move;
	yy_current_buffer->yy_ch_buf[yy_n_chars] = YY_END_OF_BUFFER_CHAR;
	yy_current_buffer->yy_ch_buf[yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;

	yytext_ptr = &yy_current_buffer->yy_ch_buf[0];

	return ret_val;
	}


/* yy_get_previous_state - get the state just before the EOB char was reached */

yy_state_type yyFlexLexer::yy_get_previous_state()
	{
	register yy_state_type yy_current_state;
	register char *yy_cp;

	yy_current_state = yy_start;
	yy_state_ptr = yy_state_buf;
	*yy_state_ptr++ = yy_current_state;

	for ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )
		{
		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 47 )
				yy_c = yy_meta[(unsigned int) yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
		*yy_state_ptr++ = yy_current_state;
		}

	return yy_current_state;
	}


/* yy_try_NUL_trans - try to make a transition on the NUL character
 *
 * synopsis
 *	next_state = yy_try_NUL_trans( current_state );
 */

yy_state_type yyFlexLexer::yy_try_NUL_trans( yy_state_type yy_current_state )
	{
	register int yy_is_jam;

	register YY_CHAR yy_c = 1;
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 47 )
			yy_c = yy_meta[(unsigned int) yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
	yy_is_jam = (yy_current_state == 46);
	if ( ! yy_is_jam )
		*yy_state_ptr++ = yy_current_state;

	return yy_is_jam ? 0 : yy_current_state;
	}


void yyFlexLexer::yyunput( int c, register char* yy_bp )
	{
	register char *yy_cp = yy_c_buf_p;

	/* undo effects of setting up yytext */
	*yy_cp = yy_hold_char;

	if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
		{ /* need to shift things up to make room */
		/* +2 for EOB chars. */
		register int number_to_move = yy_n_chars + 2;
		register char *dest = &yy_current_buffer->yy_ch_buf[
					yy_current_buffer->yy_buf_size + 2];
		register char *source =
				&yy_current_buffer->yy_ch_buf[number_to_move];

		while ( source > yy_current_buffer->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		yy_current_buffer->yy_n_chars =
			yy_n_chars = yy_current_buffer->yy_buf_size;

		if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;


	yytext_ptr = yy_bp;
	yy_hold_char = *yy_cp;
	yy_c_buf_p = yy_cp;
	}


int yyFlexLexer::yyinput()
	{
	int c;

	*yy_c_buf_p = yy_hold_char;

	if ( *yy_c_buf_p == YY_END_OF_BUFFER_CHAR )
		{
		/* yy_c_buf_p now points to the character we want to return.
		 * If this occurs *before* the EOB characters, then it's a
		 * valid NUL; if not, then we've hit the end of the buffer.
		 */
		if ( yy_c_buf_p < &yy_current_buffer->yy_ch_buf[yy_n_chars] )
			/* This was really a NUL. */
			*yy_c_buf_p = '\0';

		else
			{ /* need more input */
			int offset = yy_c_buf_p - yytext_ptr;
			++yy_c_buf_p;

			switch ( yy_get_next_buffer() )
				{
				case EOB_ACT_LAST_MATCH:
					/* This happens because yy_g_n_b()
					 * sees that we've accumulated a
					 * token and flags that we need to
					 * try matching the token before
					 * proceeding.  But for input(),
					 * there's no matching to consider.
					 * So convert the EOB_ACT_LAST_MATCH
					 * to EOB_ACT_END_OF_FILE.
					 */

					/* Reset buffer status. */
					yyrestart( yyin );

					/* fall through */

				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap() )
						return EOF;

					if ( ! yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					yy_c_buf_p = yytext_ptr + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) yy_c_buf_p;	/* cast for 8-bit char's */
	*yy_c_buf_p = '\0';	/* preserve yytext */
	yy_hold_char = *++yy_c_buf_p;


	return c;
	}


void yyFlexLexer::yyrestart( istream* input_file )
	{
	if ( ! yy_current_buffer )
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE );

	yy_init_buffer( yy_current_buffer, input_file );
	yy_load_buffer_state();
	}


void yyFlexLexer::yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )
	{
	if ( yy_current_buffer == new_buffer )
		return;

	if ( yy_current_buffer )
		{
		/* Flush out information for old buffer. */
		*yy_c_buf_p = yy_hold_char;
		yy_current_buffer->yy_buf_pos = yy_c_buf_p;
		yy_current_buffer->yy_n_chars = yy_n_chars;
		}

	yy_current_buffer = new_buffer;
	yy_load_buffer_state();

	/* We don't actually know whether we did this switch during
	 * EOF (yywrap()) processing, but the only time this flag
	 * is looked at is after yywrap() is called, so it's safe
	 * to go ahead and always set it.
	 */
	yy_did_buffer_switch_on_eof = 1;
	}


void yyFlexLexer::yy_load_buffer_state()
	{
	yy_n_chars = yy_current_buffer->yy_n_chars;
	yytext_ptr = yy_c_buf_p = yy_current_buffer->yy_buf_pos;
	yyin = yy_current_buffer->yy_input_file;
	yy_hold_char = *yy_c_buf_p;
	}


YY_BUFFER_STATE yyFlexLexer::yy_create_buffer( istream* file, int size )
	{
	YY_BUFFER_STATE b;

	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_buf_size = size;

	/* yy_ch_buf has to be 2 characters longer than the size given because
	 * we need to put in 2 end-of-buffer characters.
	 */
	b->yy_ch_buf = (char *) yy_flex_alloc( b->yy_buf_size + 2 );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer( b, file );

	return b;
	}


void yyFlexLexer::yy_delete_buffer( YY_BUFFER_STATE b )
	{
	if ( ! b )
		return;

	if ( b == yy_current_buffer )
		yy_current_buffer = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yy_flex_free( (void *) b->yy_ch_buf );

	yy_flex_free( (void *) b );
	}


extern "C" int isatty YY_PROTO(( int ));
void yyFlexLexer::yy_init_buffer( YY_BUFFER_STATE b, istream* file )

	{
	yy_flush_buffer( b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

	b->yy_is_interactive = 0;
	}


void yyFlexLexer::yy_flush_buffer( YY_BUFFER_STATE b )
	{
	if ( ! b )
		return;

	b->yy_n_chars = 0;

	/* We always need two end-of-buffer characters.  The first causes
	 * a transition to the end-of-buffer state.  The second causes
	 * a jam in that state.
	 */
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == yy_current_buffer )
		yy_load_buffer_state();
	}


#ifndef YY_NO_SCAN_BUFFER
#endif


#ifndef YY_NO_SCAN_STRING
#endif


#ifndef YY_NO_SCAN_BYTES
#endif


#ifndef YY_NO_PUSH_STATE
void yyFlexLexer::yy_push_state( int new_state )
	{
	if ( yy_start_stack_ptr >= yy_start_stack_depth )
		{
		yy_size_t new_size;

		yy_start_stack_depth += YY_START_STACK_INCR;
		new_size = yy_start_stack_depth * sizeof( int );

		if ( ! yy_start_stack )
			yy_start_stack = (int *) yy_flex_alloc( new_size );

		else
			yy_start_stack = (int *) yy_flex_realloc(
					(void *) yy_start_stack, new_size );

		if ( ! yy_start_stack )
			YY_FATAL_ERROR(
			"out of memory expanding start-condition stack" );
		}

	yy_start_stack[yy_start_stack_ptr++] = YY_START;

	BEGIN(new_state);
	}
#endif


#ifndef YY_NO_POP_STATE
void yyFlexLexer::yy_pop_state()
	{
	if ( --yy_start_stack_ptr < 0 )
		YY_FATAL_ERROR( "start-condition stack underflow" );

	BEGIN(yy_start_stack[yy_start_stack_ptr]);
	}
#endif


#ifndef YY_NO_TOP_STATE
int yyFlexLexer::yy_top_state()
	{
	return yy_start_stack[yy_start_stack_ptr - 1];
	}
#endif

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif


void yyFlexLexer::LexerError( yyconst char msg[] )
	{
	cerr << msg << '\n';
	exit( YY_EXIT_FAILURE );
	}


/* Redefine yyless() so it works in section 3 code. */

#undef yyless
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		yytext[yyleng] = yy_hold_char; \
		yy_c_buf_p = yytext + n; \
		yy_hold_char = *yy_c_buf_p; \
		*yy_c_buf_p = '\0'; \
		yyleng = n; \
		} \
	while ( 0 )


/* Internal utility routines. */

#ifndef yytext_ptr
#ifdef YY_USE_PROTOS
static void yy_flex_strncpy( char *s1, yyconst char *s2, int n )
#else
static void yy_flex_strncpy( s1, s2, n )
char *s1;
yyconst char *s2;
int n;
#endif
	{
	register int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
	}
#endif

#ifdef YY_NEED_STRLEN
#ifdef YY_USE_PROTOS
static int yy_flex_strlen( yyconst char *s )
#else
static int yy_flex_strlen( s )
yyconst char *s;
#endif
	{
	register int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
	}
#endif


#ifdef YY_USE_PROTOS
static void *yy_flex_alloc( yy_size_t size )
#else
static void *yy_flex_alloc( size )
yy_size_t size;
#endif
	{
	return (void *) malloc( size );
	}

#ifdef YY_USE_PROTOS
static void *yy_flex_realloc( void *ptr, yy_size_t size )
#else
static void *yy_flex_realloc( ptr, size )
void *ptr;
yy_size_t size;
#endif
	{
	/* The cast to (char *) in the following accommodates both
	 * implementations that use char* generic pointers, and those
	 * that use void* generic pointers.  It works with the latter
	 * because both ANSI C and C++ allow castless assignment from
	 * any pointer type to void*, and deal with argument conversions
	 * as though doing an assignment.
	 */
	return (void *) realloc( (char *) ptr, size );
	}

#ifdef YY_USE_PROTOS
static void yy_flex_free( void *ptr )
#else
static void yy_flex_free( ptr )
void *ptr;
#endif
	{
	free( ptr );
	}

#if YY_MAIN
int main()
	{
	yylex();
	return 0;
	}
#endif
#line 99 "rightsconf.lex"

