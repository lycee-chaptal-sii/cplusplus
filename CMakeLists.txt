# CMakeLists files in this project can
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required(VERSION 3.1)
project (HELLO CXX)

include(CMakeToolsHelpers OPTIONAL)

# Specify the C++ Standard version to use.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify where to put all the RUNTIME target files when built.
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add include directories to the build.
include_directories (include)

# Copy user libraries into the build folder
if(EXISTS "${CMAKE_SOURCE_DIR}/lib" AND IS_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
    file(GLOB_RECURSE libraries
        "lib/*${CMAKE_SHARED_LIBRARY_SUFFIX}"
        "lib/*${CMAKE_STATIC_LIBRARY_SUFFIX}"
    )

    foreach(library IN LISTS libraries)
        file(COPY ${library} DESTINATION ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
    endforeach()

    file(GLOB_RECURSE libraries
        "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/*${CMAKE_SHARED_LIBRARY_SUFFIX}"
        "${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/*${CMAKE_STATIC_LIBRARY_SUFFIX}"
    )
endif()

# Recurse into the "source" subdirectory. This does not actually
# cause another cmake executable to run. The same process will walk through
# the project's entire directory structure.
add_subdirectory (source)
