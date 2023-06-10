typedef   signed char       int8;
typedef unsigned char      uint8;
typedef   signed short      int16;
typedef unsigned short     uint16;
typedef   signed int        int32;
typedef unsigned int       uint32;
typedef   signed long long  int64;
typedef unsigned long long uint64;
typedef struct { char *data; int64 len; int64 size; } FBSTRING;
typedef int8 boolean;
struct $16__FB_ARRAYDIMTB$ {
	int64 ELEMENTS;
	int64 LBOUND;
	int64 UBOUND;
};
#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]
__FB_STATIC_ASSERT( sizeof( struct $16__FB_ARRAYDIMTB$ ) == 24 );
struct $7FBARRAYI8FBSTRINGE {
	FBSTRING* DATA;
	FBSTRING* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYI8FBSTRINGE ) == 240 );
struct $7FBARRAYIvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIvE ) == 240 );
int32 fb_ArrayRedimPresvEx( struct $7FBARRAYIvE*, uint64, int32, int32, uint64, ... );
void fb_ArrayStrErase( struct $7FBARRAYIvE* );
void fb_PrintVoid( int32, int32 );
void fb_PrintLongint( int32, int64, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrLen( void*, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
void fb_Sleep( int32 );
static void fb_ctor__split( void ) __attribute__(( constructor ));
int32 SPLIT( FBSTRING*, FBSTRING*, int32, struct $7FBARRAYI8FBSTRINGE* );

int32 SPLIT( FBSTRING* TEXT$1, FBSTRING* DELIM$1, int32 COUNT$1, struct $7FBARRAYI8FBSTRINGE* RET$1 )
{
	int32 fb$result$1;
	__builtin_memset( &fb$result$1, 0, 4ll );
	label$2:;
	if( (int64)COUNT$1 >= 0ll ) goto label$5;
	{
		COUNT$1 = 2147483647;
		label$5:;
	}
	if( (int64)COUNT$1 != 0ll ) goto label$7;
	{
		fb_ArrayStrErase( (struct $7FBARRAYIvE*)RET$1 );
		fb$result$1 = 0;
		goto label$3;
		label$7:;
	}
	int32 ISTART$1;
	ISTART$1 = 1;
	{
		int32 N$2;
		N$2 = 0;
		int32 TMP$3$2;
		TMP$3$2 = (int32)((int64)COUNT$1 + -1ll);
		goto label$8;
		label$11:;
		{
			fb_ArrayRedimPresvEx( (struct $7FBARRAYIvE*)RET$1, 24ull, -1, -1, 1ull, 0ll, (int64)N$2 );
			int64 IFOUND$3;
			int64 vr$8 = fb_StrInstr( (int64)ISTART$1, (FBSTRING*)TEXT$1, (FBSTRING*)DELIM$1 );
			IFOUND$3 = vr$8;
			if( IFOUND$3 != 0ll ) goto label$13;
			{
				FBSTRING* vr$10 = fb_StrMid( (FBSTRING*)TEXT$1, (int64)ISTART$1, -1ll );
				fb_StrAssign( (void*)(((int64)N$2 * 24ll) + *(int64*)RET$1), -1ll, (void*)vr$10, -1ll, 0 );
				fb$result$1 = (int32)((int64)N$2 + 1ll);
				goto label$3;
				label$13:;
			}
			FBSTRING* vr$22 = fb_StrMid( (FBSTRING*)TEXT$1, (int64)ISTART$1, IFOUND$3 - (int64)ISTART$1 );
			fb_StrAssign( (void*)(((int64)N$2 * 24ll) + *(int64*)RET$1), -1ll, (void*)vr$22, -1ll, 0 );
			if( IFOUND$3 != (int64)ISTART$1 ) goto label$15;
			{
				N$2 = (int32)((int64)N$2 + -1ll);
				label$15:;
			}
			int64 vr$32 = fb_StrLen( (void*)DELIM$1, -1ll );
			ISTART$1 = (int32)(IFOUND$3 + vr$32);
		}
		label$9:;
		N$2 = (int32)((int64)N$2 + 1ll);
		label$8:;
		if( (int64)N$2 <= (int64)TMP$3$2 ) goto label$11;
		label$10:;
	}
	fb$result$1 = COUNT$1;
	goto label$3;
	label$3:;
	return fb$result$1;
}

__attribute__(( constructor )) static void fb_ctor__split( void )
{
	FBSTRING TMP$5$0;
	FBSTRING TMP$6$0;
	FBSTRING TMP$12$0;
	FBSTRING TMP$13$0;
	FBSTRING TMP$18$0;
	FBSTRING TMP$19$0;
	FBSTRING TMP$23$0;
	FBSTRING TMP$25$0;
	FBSTRING TMP$29$0;
	FBSTRING TMP$31$0;
	label$0:;
	struct $7FBARRAYI8FBSTRINGE WORDS$0;
	*(FBSTRING**)&WORDS$0 = (FBSTRING*)0ull;
	*(FBSTRING**)((uint8*)&WORDS$0 + 8ll) = (FBSTRING*)0ull;
	*(int64*)((uint8*)&WORDS$0 + 16ll) = 0ll;
	*(int64*)((uint8*)&WORDS$0 + 24ll) = 24ll;
	*(int64*)((uint8*)&WORDS$0 + 32ll) = 0ll;
	*(int64*)((uint8*)&WORDS$0 + 40ll) = 8ll;
	__builtin_memset( (void*)((uint8*)&WORDS$0 + 48ll), 0, 192ll );
	int64 IWORDS$0;
	__builtin_memset( &IWORDS$0, 0, 8ll );
	__builtin_memset( &TMP$6$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$6$0, -1ll, (void*)" ", 2ll, 0 );
	__builtin_memset( &TMP$5$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$5$0, -1ll, (void*)"Hello World", 12ll, 0 );
	int32 vr$9 = SPLIT( &TMP$5$0, &TMP$6$0, 2147483647, &WORDS$0 );
	IWORDS$0 = (int64)vr$9;
	fb_StrDelete( (FBSTRING*)&TMP$6$0 );
	fb_StrDelete( (FBSTRING*)&TMP$5$0 );
	fb_PrintLongint( 0, IWORDS$0, 0 );
	{
		int64 N$1;
		N$1 = 0ll;
		int64 TMP$7$1;
		TMP$7$1 = IWORDS$0 + -1ll;
		goto label$16;
		label$19:;
		{
			FBSTRING TMP$10$2;
			FBSTRING TMP$11$2;
			__builtin_memset( &TMP$10$2, 0, 24ll );
			FBSTRING* vr$19 = fb_StrConcat( &TMP$10$2, (void*)" '", 3ll, (void*)((N$1 * 24ll) + *(int64*)&WORDS$0), -1ll );
			__builtin_memset( &TMP$11$2, 0, 24ll );
			FBSTRING* vr$22 = fb_StrConcat( &TMP$11$2, (void*)vr$19, -1ll, (void*)"'", 2ll );
			fb_PrintString( 0, (FBSTRING*)vr$22, 0 );
		}
		label$17:;
		N$1 = N$1 + 1ll;
		label$16:;
		if( N$1 <= TMP$7$1 ) goto label$19;
		label$18:;
	}
	fb_PrintVoid( 0, 1 );
	__builtin_memset( &TMP$13$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$13$0, -1ll, (void*)" ", 2ll, 0 );
	__builtin_memset( &TMP$12$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$12$0, -1ll, (void*)" ", 2ll, 0 );
	int32 vr$31 = SPLIT( &TMP$12$0, &TMP$13$0, 2147483647, &WORDS$0 );
	IWORDS$0 = (int64)vr$31;
	fb_StrDelete( (FBSTRING*)&TMP$13$0 );
	fb_StrDelete( (FBSTRING*)&TMP$12$0 );
	fb_PrintLongint( 0, IWORDS$0, 0 );
	{
		int64 N$1;
		N$1 = 0ll;
		int64 TMP$14$1;
		TMP$14$1 = IWORDS$0 + -1ll;
		goto label$20;
		label$23:;
		{
			FBSTRING TMP$15$2;
			FBSTRING TMP$16$2;
			__builtin_memset( &TMP$15$2, 0, 24ll );
			FBSTRING* vr$41 = fb_StrConcat( &TMP$15$2, (void*)" '", 3ll, (void*)((N$1 * 24ll) + *(int64*)&WORDS$0), -1ll );
			__builtin_memset( &TMP$16$2, 0, 24ll );
			FBSTRING* vr$44 = fb_StrConcat( &TMP$16$2, (void*)vr$41, -1ll, (void*)"'", 2ll );
			fb_PrintString( 0, (FBSTRING*)vr$44, 0 );
		}
		label$21:;
		N$1 = N$1 + 1ll;
		label$20:;
		if( N$1 <= TMP$14$1 ) goto label$23;
		label$22:;
	}
	fb_PrintVoid( 0, 1 );
	__builtin_memset( &TMP$19$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$19$0, -1ll, (void*)" ", 2ll, 0 );
	__builtin_memset( &TMP$18$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$18$0, -1ll, (void*)"Hello How are you", 18ll, 0 );
	int32 vr$53 = SPLIT( &TMP$18$0, &TMP$19$0, 2, &WORDS$0 );
	IWORDS$0 = (int64)vr$53;
	fb_StrDelete( (FBSTRING*)&TMP$19$0 );
	fb_StrDelete( (FBSTRING*)&TMP$18$0 );
	fb_PrintLongint( 0, IWORDS$0, 0 );
	{
		int64 N$1;
		N$1 = 0ll;
		int64 TMP$20$1;
		TMP$20$1 = IWORDS$0 + -1ll;
		goto label$24;
		label$27:;
		{
			FBSTRING TMP$21$2;
			FBSTRING TMP$22$2;
			__builtin_memset( &TMP$21$2, 0, 24ll );
			FBSTRING* vr$63 = fb_StrConcat( &TMP$21$2, (void*)" '", 3ll, (void*)((N$1 * 24ll) + *(int64*)&WORDS$0), -1ll );
			__builtin_memset( &TMP$22$2, 0, 24ll );
			FBSTRING* vr$66 = fb_StrConcat( &TMP$22$2, (void*)vr$63, -1ll, (void*)"'", 2ll );
			fb_PrintString( 0, (FBSTRING*)vr$66, 0 );
		}
		label$25:;
		N$1 = N$1 + 1ll;
		label$24:;
		if( N$1 <= TMP$20$1 ) goto label$27;
		label$26:;
	}
	fb_PrintVoid( 0, 1 );
	__builtin_memset( &TMP$25$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$25$0, -1ll, (void*)" H", 3ll, 0 );
	__builtin_memset( &TMP$23$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$23$0, -1ll, (void*)"Hello How are you", 18ll, 0 );
	int32 vr$75 = SPLIT( &TMP$23$0, &TMP$25$0, 2147483647, &WORDS$0 );
	IWORDS$0 = (int64)vr$75;
	fb_StrDelete( (FBSTRING*)&TMP$25$0 );
	fb_StrDelete( (FBSTRING*)&TMP$23$0 );
	fb_PrintLongint( 0, IWORDS$0, 0 );
	{
		int64 N$1;
		N$1 = 0ll;
		int64 TMP$26$1;
		TMP$26$1 = IWORDS$0 + -1ll;
		goto label$28;
		label$31:;
		{
			FBSTRING TMP$27$2;
			FBSTRING TMP$28$2;
			__builtin_memset( &TMP$27$2, 0, 24ll );
			FBSTRING* vr$85 = fb_StrConcat( &TMP$27$2, (void*)" '", 3ll, (void*)((N$1 * 24ll) + *(int64*)&WORDS$0), -1ll );
			__builtin_memset( &TMP$28$2, 0, 24ll );
			FBSTRING* vr$88 = fb_StrConcat( &TMP$28$2, (void*)vr$85, -1ll, (void*)"'", 2ll );
			fb_PrintString( 0, (FBSTRING*)vr$88, 0 );
		}
		label$29:;
		N$1 = N$1 + 1ll;
		label$28:;
		if( N$1 <= TMP$26$1 ) goto label$31;
		label$30:;
	}
	fb_PrintVoid( 0, 1 );
	__builtin_memset( &TMP$31$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$31$0, -1ll, (void*)"!", 2ll, 0 );
	__builtin_memset( &TMP$29$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$29$0, -1ll, (void*)"Hello How are you", 18ll, 0 );
	int32 vr$97 = SPLIT( &TMP$29$0, &TMP$31$0, 2147483647, &WORDS$0 );
	IWORDS$0 = (int64)vr$97;
	fb_StrDelete( (FBSTRING*)&TMP$31$0 );
	fb_StrDelete( (FBSTRING*)&TMP$29$0 );
	fb_PrintLongint( 0, IWORDS$0, 0 );
	{
		int64 N$1;
		N$1 = 0ll;
		int64 TMP$32$1;
		TMP$32$1 = IWORDS$0 + -1ll;
		goto label$32;
		label$35:;
		{
			FBSTRING TMP$33$2;
			FBSTRING TMP$34$2;
			__builtin_memset( &TMP$33$2, 0, 24ll );
			FBSTRING* vr$107 = fb_StrConcat( &TMP$33$2, (void*)" '", 3ll, (void*)((N$1 * 24ll) + *(int64*)&WORDS$0), -1ll );
			__builtin_memset( &TMP$34$2, 0, 24ll );
			FBSTRING* vr$110 = fb_StrConcat( &TMP$34$2, (void*)vr$107, -1ll, (void*)"'", 2ll );
			fb_PrintString( 0, (FBSTRING*)vr$110, 0 );
		}
		label$33:;
		N$1 = N$1 + 1ll;
		label$32:;
		if( N$1 <= TMP$32$1 ) goto label$35;
		label$34:;
	}
	fb_PrintVoid( 0, 1 );
	fb_Sleep( -1 );
	fb_ArrayStrErase( (struct $7FBARRAYIvE*)&WORDS$0 );
	label$1:;
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
