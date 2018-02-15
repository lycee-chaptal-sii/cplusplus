# Add executable called "my_exe" that is built from the source files
# The extensions are automatically found.

file(GLOB_RECURSE sources
    "*.cpp"
)

add_executable(my_exe ${sources})

# Link to user libraries (if there are any)
if(libraries)
    target_link_libraries(my_exe ${libraries})
endif()
