AC_INIT([rlayout], [0.0.1])
AC_PREREQ([2.68])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADERS([config.h])
AC_CANONICAL_HOST
AC_PROG_CC
AC_OUTPUT

AC_CHECK_PROGS([SPHINXBUILD], [sphinx-build sphinx-build2], [no])

# AM_PATH_SDL([2.0], [:], AC_MSG_ERROR(["SDL 2.0 not found"]))
# Now have $SDL_CFLAGS and $SDL_LIBS. Put in AM_DEFINE() ??
# -lSDL2, -lSDL2_image -lSDL2_ttf, -lSDL2_mixer

AC_ARG_ENABLE([release], [AS_HELP_STRING([--enable-release], [Enable release mode compilation])],
			[enable_release="yes"], 
			[enable_release="no"])

case "${enable_release}" in
	yes
esac 

AM_CONDITIONAL([RELEASE_ENABLED], [test "${enable_release}" = "yes"])

AM_INIT_AUTOMAKE([foreign subdir-objects])


building_for_posix=""
building_for_windows=""

case "${host_os}" in
	linux*|darwin*) 
			building_for_posix="yes"	
			;;
	mingw*)
			building_for_windows="yes"	
			;;
	*)
			AC_MSG_ERROR([Unsupported host operating system])
			;;
esac 

AM_CONDITIONAL([BUILDING_FOR_POSIX], [test "${building_for_posix}" = "yes"])
AM_CONDITIONAL([BUILDING_FOR_WINDOWS], [test "${building_for_windows}" = "yes"])

# To simulate obj/ for standalone Makefile, run ./configure inside of build/ folder
# AM_PROG_AS if using assembly code
# AC_PROG_LN_S check if $(ln -s) works on system

AC_ENABLE_SHARED
AC_ENABLE_STATIC
AC_PROG_LIBTOOL
LT_PREREQ([])
LT_INIT
