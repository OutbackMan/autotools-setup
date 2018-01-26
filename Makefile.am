# Warnings as errors, all warnings, extra warnings, variable shadowed, , cast removes type qualifier,, no variables in prototype
# generate warnings if don't conform to certain base standards
CORE_CFLAGS = -Werror -Wall -Wextra -Wshadow -Wcast-qual \
	-Wmissing-prototypes -Wstrict-prototypes -std=gnu11 -Wpedantic
	
DEBUG_CFLAGS = -ggdb -Og

# Link time optimisation
RELEASE_CFLAGS = -O3 -flto

if RELEASE_ENABLED
	AM_CFLAGS = $(CORE_CFLAGS) $(RELEASE_CFLAGS)
else
	AM_CFLAGS = $(CORE_CFLAGS) $(DEBUG_CFLAGS)	
endif

CORE_SOURCES += \

POSIX_SOURCES += \

WINDOWS_SOURCES += \

bin_PROGRAMS = rlayout

if BUILDING_FOR_POSIX
	rlayout_SOURCES = $(CORE_SOURCES) $(POSIX_SOURCES)
	# gcc flags
endif
	
if BUILDING_FOR_WINDOWS
	rlayout_SOURCES = $(CORE_SOURCES) $(WINDOWS_SOURCES)
	# mingw flags (x86 windows options in docs), -mconsole, -mwindows, -mthread, -lgdi32
endif

# Use mingw as cygwin is only a compatibility layer, i.e. requires applications to be shipped with cygwin.dll
