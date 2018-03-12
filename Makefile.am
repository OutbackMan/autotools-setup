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

  1 # To create libraries to test
  2 bin_PROGRAMS = main
  3 main_SOURCES = main.c
  4
  5 main_LDADD = libmoney.la
  6
  7 lib_LTLIBRARIES = libmoney.la
  8 libmoney_la_SOURCES = money.c money.h
  9
 10 TESTS = check_money
 11 check_PROGRAMS = check_money
 12 check_money_SOURCES = test-money.c money.h
 13 check_money_CPPFLAGS = @CHECK_CFLAGS@
 14 check_money_LDADD = libmoney.la @CHECK_LIBS@                                                  
