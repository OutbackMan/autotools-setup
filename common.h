#ifndef __common_h__
#define __common_h__

// C standard
#if __STDC__VERSION__ < 199901L
#error "Require C99 compiler"
#endif

// Utilities
#define tostring(x) #x
#define stringify(x) tostring(x)

// Check compiler
#if defined(__GNUC__)
#define RLAYOUT_COMPILER "gcc-"stringify(__GNUC__)"." \
	stringify(__GNUC_MINOR__)"."stringify(__GNUC_PATCHLEVEL__)
#elif defined(__clang__)
#define RLAYOUT_COMPILER "clang-"stringify(__clang_major__)"." \
	stringify(__clang_minor__)"."stringify(__clang_patchlevel__)
#elif defined(_MSC_VER)
#define RLAYOUT_COMPILER "MSCV"
#else
#define RLAYOUT_COMPILER "Unknown" 
#endif

// Architecture
#define RLAYOUT_ARCH "x86_64"
#define RLAYOUT_ARCH_SUPPORT "Native"

// Cache
#define CACHE_LINE_SIZE 64

// Alignment
#if defined(__GNUC__)
#define rlayout_align(decl, value) decl __attribute__ ((aligned(value))
#elif defined(_MSC_VER)
#define rlayout_align(decl, value) __declspec(align(value)) decl 
#else
#define rlayout_align(decl, value) decl value
#endif

// Hot and cold functions
#if defined(__GNUC__)
#define rlayout_hot __attribute__((hot))
#define rlayout_cold __attribute__((cold))
#else
#define rlayout_hot 
#define rlayout_cold 
#endif

// Flatten
#if defined(__GNUC__)
#define rlayout_flatten __attribute__((flatten))
#else
#define rlayout_flatten
#endif

// Likely and unlikely
#if defined(__GNUC__)
#define likely(expr) __builtin_expect(!!(expr), 1) 
#define unlikely(expr) __builtin_expect(!!(expr), 0)
#else
#define likely(expr) expr
#define unlikely(expr) expr
#endif

// Unused
#if defined(__GNUC__)
#define unused(decl) __attribute__((unused)) decl
#else
#define unused(decl) decl
#endif

// Endianness
#define IS_BIG_ENDIAN (!*(unsigned char *)&(unsigned int){1})

#if defined(__GNUC__)
#define htonll(x) __builtin_bswap64(x)
#define ntohll(x) __builtin_bswap64(x)
#else
#define htonll(x) x
#define ntohll(x) x
#endif

static inline uint32_t byteswap_32(uint32_t word)
{
	return ((word >> 24) & 0x000000FF) | \
		
}




