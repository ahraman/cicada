#ifndef CICADA_CORE_PRELUDE_TARGET_MACROS_H_
# define CICADA_CORE_PRELUDE_TARGET_MACROS_H_

# include "cicada/core/prelude/flag_macros.h"

# ifdef CICADA_PRAGMA_ONCE
#  pragma once
# endif

# ifdef _WIN32
#  define CICADA_OS_WINDOWS 1
#  define CICADA_OS_NAME    "windows"

#  ifdef _WIN64
#   define CICADA_ARCHITECTURE_X64 1
#   define CICADA_ARCHITECTURE_NAME "x64"
#  else
#   define CICADA_ARCHITECTURE_X86 1
#   define CICADA_ARCHITECTURE_NAME "x86"
#  endif
# else
#   define CICADA_OS_UNKNOWN 1
#   define CICADA_OS_NAME "unknown"

#   define CICADA_ARCHITECTURE_UNKNOWN 1
#   define CICADA_ARCHITECTURE_NAME "unknown"
# endif

# ifdef _MSC_VER
#   define CICADA_COMPILER_MSVC 1
#   define CICADA_COMPILER_NAME "msvc"
# else
#  define CICADA_COMPILER_NAME "unknown"
# endif

#endif
