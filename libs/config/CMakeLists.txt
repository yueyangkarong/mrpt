#  See "DeclareMRPTLib.cmake"
list(APPEND config_EXTRA_SRCS		"${MRPT_LIBS_ROOT}/config/*.cpp" "${MRPT_LIBS_ROOT}/config/*.h")
list(APPEND config_EXTRA_SRCS_NAME 	"config" "config")

if (NOT CMAKE_MRPT_HAS_SIMPLEINI_SYSTEM)
	list(APPEND config_EXTRA_SRCS       "${MRPT_LIBS_ROOT}/config/src/simpleini/*.h")
	list(APPEND config_EXTRA_SRCS_NAME  "config/simpleini")
endif()

define_mrpt_lib(
	config 		# Lib name
	# Dependencies:
	mrpt-core
	mrpt-system
	mrpt-expr
	)

if(BUILD_mrpt-config)
	target_include_directories(config PRIVATE "${SIMPLEINI_INCLUDE_DIRS}")
endif()
