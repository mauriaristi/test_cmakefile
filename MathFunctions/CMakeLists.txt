# Example how to Define a library that has multiple sources.
add_library (MathFunctions SHARED mysqrt.c mylog.c)

# Copy the Header file to the "build/include" folder.
configure_file (MathFunctions.h ${PROJECT_BINARY_DIR}/include/MathFunctions.h COPYONLY)

install (TARGETS MathFunctions DESTINATION lib)
install (FILES MathFunctions.h DESTINATION include)