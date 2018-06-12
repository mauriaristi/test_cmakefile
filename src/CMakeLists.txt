# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}/include")


# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/src/tutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/include/tutorialConfig.h"
  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}/include")

# add the executable
add_executable(tutorial tutorial.c)
# Link both libraries
target_link_libraries (tutorial ${EXTRA_LIBS})

install (TARGETS tutorial DESTINATION bin)

install (FILES ${PROJECT_BINARY_DIR}/include/TutorialConfig.h DESTINATION include)

