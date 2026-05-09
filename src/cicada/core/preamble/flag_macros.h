#ifndef CICADA_CORE_PREAMBLE_FLAG_MACROS_H_
# define CICADA_CORE_PREAMBLE_FLAG_MACROS_H_

# if (!defined(CICADA_NO_DEBUG) && !defined(CICADA_DEBUG)) \
    && (defined(_DEBUG) || defined(DEBUG))
/// Macro `CICADA_DEBUG` is defined whenever the program is compiled in debug mode. This macro
/// enables a number of debug-only checks, markers and profilers.
///
/// Generation of this macro can be disabled by defining the macro `CICADA_NO_DEBUG` prior to
/// including this header.
#  define CICADA_DEBUG
# endif

# if (!defined(CICADA_NO_PRAGMA_ONCE) && !defined(CICADA_PRAGMA_ONCE)) \
    && ((defined(_MSC_VER) && (_MSC_VER >= 1020))) // MSVC >= v4.2
/// Macro `CICADA_PRAGMA_ONCE` is defined whenever the compiler supports using the preprocessor
/// directive `#pragma once`. While this prepocessor directive is technically nonstandard, it is 
/// supported on most major compilers and using it is known to signficantly improve compilation 
/// performance.
///
/// Use of `#pragma once` can be disabled by defining the macro `CICADA_NO_PRAGMA_ONCE` prior to
/// including this header.
#  define CICADA_PRAGMA_ONCE
# endif

# ifdef CICADA_PRAGMA_ONCE
#  pragma once
# endif

#endif
