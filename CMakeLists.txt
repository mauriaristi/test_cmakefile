cmake_minimum_required (VERSION 2.6)
project (tutorial)



set(CMAKE_MACOSX_RPATH 1)

# The version number.
set (Tutorial_VERSION_MAJOR 2)
set (Tutorial_VERSION_MINOR 1)

set(CMAKE_BUILD_TYPE RELEASE)
set(CMAKE_C_FLAGS_DEBUG "-O2 -g")
set(CMAKE_C_FLAGS_RELEASE "-O3 -Wall")
 

 




# should we use our own math functions?
option (USE_MYMATH 
        "Use tutorial provided math implementation" ON) 

# add the MathFunctions library?
#
if (USE_MYMATH)
  include_directories ("${PROJECT_BINARY_DIR}/include")
  add_subdirectory (MathFunctions "${PROJECT_BINARY_DIR}/lib")
  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)


add_subdirectory (src "${PROJECT_BINARY_DIR}/bin")


