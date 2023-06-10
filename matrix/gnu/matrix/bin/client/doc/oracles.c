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
struct $7FBARRAYIKvE {
	void* DATA;
	void* PTR;
	int64 SIZE;
	int64 ELEMENT_LEN;
	int64 DIMENSIONS;
	int64 FLAGS;
	struct $16__FB_ARRAYDIMTB$ DIMTB[8];
};
__FB_STATIC_ASSERT( sizeof( struct $7FBARRAYIKvE ) == 240 );
#define fb_D2L( value ) ((int64)__builtin_nearbyint( value ))
int32 fb_ArrayRedimEx( struct $7FBARRAYIvE*, uint64, int32, int32, uint64, ... );
int32 fb_ArrayErase( struct $7FBARRAYIvE* );
int64 fb_ArrayUBound( struct $7FBARRAYIKvE*, int64 );
void fb_Cls( int32 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetStrLarge( int32, int64, void*, int64 );
int32 fb_ConsoleInput( FBSTRING*, int32, int32 );
int32 fb_InputString( void*, int64, int32 );
int32 fb_FileFree( void );
int64 fb_FileSize( int32 );
void fb_Randomize( double, int32 );
double fb_Rnd( float );
void fb_PrintVoid( int32, int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrConcat( FBSTRING*, void*, int64, void*, int64 );
int32 fb_StrCompare( void*, int64, void*, int64 );
FBSTRING* fb_StrConcatAssign( void*, int64, void*, int64, int32 );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_StrMid( FBSTRING*, int64, int64 );
int64 fb_StrInstr( int64, FBSTRING*, FBSTRING* );
FBSTRING* fb_LEFT( FBSTRING*, int64 );
FBSTRING* fb_SPACE( int64 );
void fb_End( int32 );
void fb_Sleep( int32 );
static void fb_ctor__oracles( void ) __attribute__(( constructor ));
void SPLIT( FBSTRING*, FBSTRING*, int32, struct $7FBARRAYI8FBSTRINGE* );
void TXTFILE( FBSTRING* );
void ORACOL( void );
static FBSTRING BUFFER$;
static struct $7FBARRAYI8FBSTRINGE BIBLE$ = { (FBSTRING*)0ull, (FBSTRING*)0ull, 0ll, 24ll, 0ll, 8ll, {  } };

void SPLIT( FBSTRING* TEXT$1, FBSTRING* DELIM$1, int32 COUNT$1, struct $7FBARRAYI8FBSTRINGE* RET$1 )
{
	label$2:;
	int32 X$1;
	__builtin_memset( &X$1, 0, 4ll );
	int32 P$1;
	__builtin_memset( &P$1, 0, 4ll );
	if( (int64)COUNT$1 >= 1ll ) goto label$5;
	{
		label$6:;
		{
			int64 vr$5 = fb_StrInstr( (int64)X$1 + 1ll, (FBSTRING*)TEXT$1, (FBSTRING*)DELIM$1 );
			X$1 = (int32)vr$5;
			P$1 = (int32)((int64)P$1 + 1ll);
		}
		label$8:;
		if( (int64)X$1 != 0ll ) goto label$6;
		label$7:;
		COUNT$1 = (int32)((int64)P$1 + -1ll);
	}
	goto label$4;
	label$5:;
	if( (int64)COUNT$1 != 1ll ) goto label$9;
	{
		fb_ArrayRedimEx( (struct $7FBARRAYIvE*)RET$1, 24ull, -1, -1, 1ull, 0ll, (int64)COUNT$1 + -1ll );
		fb_StrAssign( (void*)*(int64*)RET$1, -1ll, (void*)TEXT$1, -1ll, 0 );
	}
	goto label$4;
	label$9:;
	{
		COUNT$1 = (int32)((int64)COUNT$1 + -1ll);
	}
	label$4:;
	struct $8FBARRAY1IiE {
		int32* DATA;
		int32* PTR;
		int64 SIZE;
		int64 ELEMENT_LEN;
		int64 DIMENSIONS;
		int64 FLAGS;
		struct $16__FB_ARRAYDIMTB$ DIMTB[1];
	};
	__FB_STATIC_ASSERT( sizeof( struct $8FBARRAY1IiE ) == 72 );
	struct $8FBARRAY1IiE RETVAL$1;
	*(int32**)&RETVAL$1 = (int32*)0ull;
	*(int32**)((uint8*)&RETVAL$1 + 8ll) = (int32*)0ull;
	*(int64*)((uint8*)&RETVAL$1 + 16ll) = 0ll;
	*(int64*)((uint8*)&RETVAL$1 + 24ll) = 4ll;
	*(int64*)((uint8*)&RETVAL$1 + 32ll) = 1ll;
	*(int64*)((uint8*)&RETVAL$1 + 40ll) = 17ll;
	__builtin_memset( (void*)((uint8*)&RETVAL$1 + 48ll), 0, 24ll );
	fb_ArrayRedimEx( (struct $7FBARRAYIvE*)&RETVAL$1, 4ull, -1, 0, 1ull, 0ll, (int64)COUNT$1 );
	X$1 = 0;
	P$1 = 0;
	label$10:;
	if( (int64)P$1 == (int64)COUNT$1 ) goto label$11;
	{
		int64 vr$29 = fb_StrInstr( (int64)X$1 + 1ll, (FBSTRING*)TEXT$1, (FBSTRING*)DELIM$1 );
		X$1 = (int32)vr$29;
		*(int32*)(((int64)P$1 << (2ll & 63ll)) + *(int64*)&RETVAL$1) = X$1;
		P$1 = (int32)((int64)P$1 + 1ll);
	}
	goto label$10;
	label$11:;
	fb_ArrayRedimEx( (struct $7FBARRAYIvE*)RET$1, 24ull, -1, -1, 1ull, 0ll, (int64)COUNT$1 );
	FBSTRING* vr$40 = fb_LEFT( (FBSTRING*)TEXT$1, (int64)*(int32*)*(int64*)&RETVAL$1 + -1ll );
	fb_StrAssign( (void*)*(int64*)RET$1, -1ll, (void*)vr$40, -1ll, 0 );
	P$1 = 1;
	label$12:;
	if( (int64)P$1 == (int64)COUNT$1 ) goto label$13;
	{
		FBSTRING* vr$60 = fb_StrMid( (FBSTRING*)TEXT$1, (int64)*(int32*)((uint8*)(((int64)P$1 << (2ll & 63ll)) + *(int64*)&RETVAL$1) + -4ll) + 1ll, ((int64)*(int32*)(((int64)P$1 << (2ll & 63ll)) + *(int64*)&RETVAL$1) - (int64)*(int32*)((uint8*)(((int64)P$1 << (2ll & 63ll)) + *(int64*)&RETVAL$1) + -4ll)) + -1ll );
		fb_StrAssign( (void*)(((int64)P$1 * 24ll) + *(int64*)RET$1), -1ll, (void*)vr$60, -1ll, 0 );
		P$1 = (int32)((int64)P$1 + 1ll);
	}
	goto label$12;
	label$13:;
	FBSTRING* vr$74 = fb_StrMid( (FBSTRING*)TEXT$1, (int64)*(int32*)((uint8*)(((int64)COUNT$1 << (2ll & 63ll)) + *(int64*)&RETVAL$1) + -4ll) + 1ll, -1ll );
	fb_StrAssign( (void*)(((int64)COUNT$1 * 24ll) + *(int64*)RET$1), -1ll, (void*)vr$74, -1ll, 0 );
	fb_ArrayErase( (struct $7FBARRAYIvE*)&RETVAL$1 );
	label$3:;
}

void TXTFILE( FBSTRING* F$1 )
{
	label$14:;
	fb_Cls( -65536 );
	int32 H$1;
	int32 vr$0 = fb_FileFree(  );
	H$1 = vr$0;
	fb_FileOpen( (FBSTRING*)F$1, 0u, 0u, 0u, H$1, 0 );
	int64 vr$1 = fb_FileSize( H$1 );
	FBSTRING* vr$2 = fb_SPACE( vr$1 );
	fb_StrAssign( (void*)&BUFFER$, -1ll, (void*)vr$2, -1ll, 0 );
	fb_FileGetStrLarge( H$1, 0ll, (void*)&BUFFER$, -1ll );
	fb_FileClose( H$1 );
	label$15:;
}

void ORACOL( void )
{
	label$19:;
	FBSTRING K$1;
	__builtin_memset( &K$1, 0, 24ll );
	int32 F$1;
	int32 vr$1 = fb_FileFree(  );
	F$1 = vr$1;
	FBSTRING Q$1;
	__builtin_memset( &Q$1, 0, 24ll );
	FBSTRING ORACLE$1;
	__builtin_memset( &ORACLE$1, 0, 24ll );
	label$21:;
	{
		int32 TMP$15$2;
		FBSTRING TMP$17$2;
		int32 TMP$18$2;
		int32 TMP$19$2;
		FBSTRING TMP$21$2;
		int32 TMP$22$2;
		fb_StrAssign( (void*)&ORACLE$1, -1ll, (void*)"", 1ll, 0 );
		FBSTRING* vr$5 = fb_StrAllocTempDescZEx( (uint8*)"hello, please enter your question for the oracle: ", 50ll );
		fb_ConsoleInput( (FBSTRING*)vr$5, 0, -1 );
		fb_InputString( (void*)&Q$1, -1ll, 0 );
		fb_PrintVoid( 0, 1 );
		{
			int64 I$3;
			I$3 = 0ll;
			int64 TMP$13$3;
			double vr$7 = fb_Rnd( 0x1.p+0f );
			TMP$13$3 = fb_D2L( __builtin_floor( (vr$7 * 0x1.9p+6) ) + 0x1.p+0 );
			goto label$24;
			label$27:;
			{
				double vr$12 = fb_Rnd( 0x1.p+0f );
				int64 vr$13 = fb_ArrayUBound( (struct $7FBARRAYIKvE*)&BIBLE$, 1ll );
				fb_StrConcatAssign( (void*)&ORACLE$1, -1ll, (void*)((fb_D2L( __builtin_floor( (vr$12 * (double)(vr$13 + 1ll)) ) ) * 24ll) + *(int64*)&BIBLE$), -1ll, 0 );
				fb_StrConcatAssign( (void*)&ORACLE$1, -1ll, (void*)" ", 2ll, 0 );
			}
			label$25:;
			I$3 = I$3 + 1ll;
			label$24:;
			if( I$3 <= TMP$13$3 ) goto label$27;
			label$26:;
		}
		fb_PrintString( 0, (FBSTRING*)&ORACLE$1, 1 );
		FBSTRING* vr$26 = fb_StrAllocTempDescZEx( (uint8*)"oracle.txt", 10ll );
		fb_FileOpen( (FBSTRING*)vr$26, 4u, 0u, 0u, F$1, 0 );
		TMP$15$2 = F$1;
		__builtin_memset( &TMP$17$2, 0, 24ll );
		FBSTRING* vr$30 = fb_StrConcat( &TMP$17$2, (void*)"question: ", 11ll, (void*)&Q$1, -1ll );
		fb_PrintString( TMP$15$2, (FBSTRING*)vr$30, 1 );
		TMP$18$2 = F$1;
		FBSTRING* vr$31 = fb_StrAllocTempDescZEx( (uint8*)"", 0ll );
		fb_PrintString( TMP$18$2, (FBSTRING*)vr$31, 1 );
		TMP$19$2 = F$1;
		__builtin_memset( &TMP$21$2, 0, 24ll );
		FBSTRING* vr$35 = fb_StrConcat( &TMP$21$2, (void*)"the oracle says: ", 18ll, (void*)&ORACLE$1, -1ll );
		fb_PrintString( TMP$19$2, (FBSTRING*)vr$35, 1 );
		TMP$22$2 = F$1;
		FBSTRING* vr$36 = fb_StrAllocTempDescZEx( (uint8*)"", 0ll );
		fb_PrintString( TMP$22$2, (FBSTRING*)vr$36, 1 );
		fb_FileClose( F$1 );
		fb_PrintVoid( 0, 1 );
		fb_PrintVoid( 0, 1 );
		FBSTRING* vr$37 = fb_StrAllocTempDescZEx( (uint8*)"ask the oracle again? (y/n): ", 29ll );
		fb_ConsoleInput( (FBSTRING*)vr$37, 0, -1 );
		fb_InputString( (void*)&K$1, -1ll, 0 );
	}
	label$23:;
	int32 vr$40 = fb_StrCompare( (void*)&K$1, -1ll, (void*)"n", 2ll );
	if( (int64)vr$40 != 0ll ) goto label$21;
	label$22:;
	fb_StrDelete( (FBSTRING*)&ORACLE$1 );
	fb_StrDelete( (FBSTRING*)&Q$1 );
	fb_StrDelete( (FBSTRING*)&K$1 );
	label$20:;
}

__attribute__(( constructor )) static void fb_ctor__oracles( void )
{
	FBSTRING TMP$11$0;
	label$0:;
	fb_Randomize( -0x1.p+0, 0 );
	FBSTRING C$0;
	__builtin_memset( &C$0, 0, 24ll );
	FBSTRING* vr$1 = fb_StrAllocTempDescZEx( (uint8*)"press key 1 for king james bible (english) or key 2 for pslams in hebrew: ", 74ll );
	fb_ConsoleInput( (FBSTRING*)vr$1, 0, -1 );
	fb_InputString( (void*)&C$0, -1ll, 0 );
	int32 vr$4 = fb_StrCompare( (void*)&C$0, -1ll, (void*)"1", 2ll );
	if( (int64)vr$4 != 0ll ) goto label$17;
	{
		FBSTRING TMP$6$1;
		__builtin_memset( &TMP$6$1, 0, 24ll );
		fb_StrAssign( (void*)&TMP$6$1, -1ll, (void*)"BibleKJV.txt", 13ll, 0 );
		TXTFILE( &TMP$6$1 );
		fb_StrDelete( (FBSTRING*)&TMP$6$1 );
	}
	goto label$16;
	label$17:;
	int32 vr$11 = fb_StrCompare( (void*)&C$0, -1ll, (void*)"2", 2ll );
	if( (int64)vr$11 != 0ll ) goto label$18;
	{
		FBSTRING TMP$9$1;
		__builtin_memset( &TMP$9$1, 0, 24ll );
		fb_StrAssign( (void*)&TMP$9$1, -1ll, (void*)"./bible-heb/Psalms.acc.txt", 27ll, 0 );
		TXTFILE( &TMP$9$1 );
		fb_StrDelete( (FBSTRING*)&TMP$9$1 );
	}
	goto label$16;
	label$18:;
	{
		FBSTRING* vr$17 = fb_StrAllocTempDescZEx( (uint8*)"INVALID INPUT! ERROR", 20ll );
		fb_PrintString( 0, (FBSTRING*)vr$17, 1 );
		fb_Sleep( 500 );
		fb_End( 0 );
	}
	label$16:;
	__builtin_memset( &TMP$11$0, 0, 24ll );
	fb_StrAssign( (void*)&TMP$11$0, -1ll, (void*)" ", 2ll, 0 );
	SPLIT( &BUFFER$, &TMP$11$0, -1, &BIBLE$ );
	fb_StrDelete( (FBSTRING*)&TMP$11$0 );
	ORACOL(  );
	fb_StrDelete( (FBSTRING*)&C$0 );
	label$1:;
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
