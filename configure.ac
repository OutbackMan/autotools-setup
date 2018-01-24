AC_INIT([rlayout], [0.0.1])
AC_PREREQ([2.68])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADERS([config.h])
AC_CANONICAL_HOST
AC_PROG_CC
AC_OUTPUT


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
