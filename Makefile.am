CORE_CFLAGS = -Wall -Wextra -Wshadow -Wpointer-arith -Wcast-qual \
	-Wmissing-prototypes -Wstrict-prototypes -Werror -pedantic -m64
	
DEBUG_CFLAGS = -g -Og

RELEASE_CFLAGS = -O3 -flto

if RELEASE_ENABLED
	AM_CFLAGS = $(CORE_CFLAGS) $(RELEASE_CFLAGS)
else
	AM_CFLAGS = $(CORE_CFLAGS) $(DEBUG_CFLAGS)	
endif


bin_PROGRAMS =

CORE_SOURCES += \

POSIX_SOURCES += \

WINDOWS_SOURCES += \

if BUILDING_FOR_POSIX
	bin_PROGRAMS += rlayout
	rlayout_SOURCES += $(CORE_SOURCES) $(POSIX_SOURCES)
endif

if BUILDING_FOR_WINDOWS
# May have to add specific flags for mingw to get support for certain features, e.g. threads
	bin_PROGRAMS += rlayout_win
	rlayout_win_SOURCES += $(CORE_SOURCES) $(WINDOWS_SOURCES)
endif
