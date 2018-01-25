CORE_CFLAGS = -Wall -Wextra -Wshadow -Wpointer-arith -Wcast-qual \
	-Wmissing-prototypes -Wstrict-prototypes -Werror -pedantic -m64
	
DEBUG_CFLAGS = -g -Og

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
	# mingw flags
endif

# Use mingw as cygwin is only a compatibility layer, i.e. requires applications to be shipped with cygwin.dll
# May have to add specific flags for mingw to get support for certain features, e.g. threads
