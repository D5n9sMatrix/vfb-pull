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
void fb_Cls( int32 );
int32 fb_FileOpen( FBSTRING*, uint32, uint32, uint32, int32, int32 );
int32 fb_FileClose( int32 );
int32 fb_FileGetStrLarge( int32, int64, void*, int64 );
int32 fb_FileFree( void );
int64 fb_FileSize( int32 );
void fb_PrintString( int32, FBSTRING*, int32 );
FBSTRING* fb_StrAssign( void*, int64, void*, int64, int32 );
void fb_StrDelete( FBSTRING* );
FBSTRING* fb_StrAllocTempDescZEx( uint8*, int64 );
FBSTRING* fb_SPACE( int64 );
static void fb_ctor__delight( void ) __attribute__(( constructor ));

void TXTFILE( FBSTRING* F$1 )
{
	label$2:;
	fb_Cls( -65536 );
	FBSTRING BUFFER$1;
	__builtin_memset( &BUFFER$1, 0, 24ll );
	int32 H$1;
	int32 vr$1 = fb_FileFree(  );
	H$1 = vr$1;
	int32 vr$2 = fb_FileOpen( (FBSTRING*)F$1, 0u, 1u, 0u, H$1, 0 );
	if( (int64)vr$2 == 0ll ) goto label$5;
	{
		FBSTRING* vr$4 = fb_StrAllocTempDescZEx( (uint8*)"file could not be opened!", 25ll );
		fb_PrintString( 0, (FBSTRING*)vr$4, 1 );
	}
	goto label$4;
	label$5:;
	int64 vr$5 = fb_FileSize( H$1 );
	if( vr$5 >= 1ll ) goto label$6;
	{
		FBSTRING* vr$6 = fb_StrAllocTempDescZEx( (uint8*)"file could not be read!", 23ll );
		fb_PrintString( 0, (FBSTRING*)vr$6, 1 );
	}
	goto label$4;
	label$6:;
	{
		int64 vr$7 = fb_FileSize( H$1 );
		FBSTRING* vr$8 = fb_SPACE( vr$7 );
		fb_StrAssign( (void*)&BUFFER$1, -1ll, (void*)vr$8, -1ll, 0 );
		fb_FileGetStrLarge( H$1, 0ll, (void*)&BUFFER$1, -1ll );
		fb_FileClose( H$1 );
		fb_PrintString( 0, (FBSTRING*)&BUFFER$1, 1 );
	}
	label$4:;
	fb_StrDelete( (FBSTRING*)&BUFFER$1 );
	label$3:;
}

static const char __attribute__((used, section(".fbctinf"))) __fbctinf[] = "-l\0fb";
