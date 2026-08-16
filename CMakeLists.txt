cmake_minimum_required(VERSION 3.20)
project(ray-base++
  VERSION 0.0.1
  LANGUAGES C CXX
)

# C++23 settings
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
# Export compile commands
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

# raylib dependencies(raylib & raylib-cpp)
FetchContent_Declare(
  raylib
  GIT_REPOSITORY https://github.com/raysan5/raylib.git
  GIT_TAG 6.0
)

FetchContent_Declare(
  raylib-cpp
  GIT_REPOSITORY https://github.com/RobLoach/raylib-cpp.git
  GIT_TAG v6.0.3
)

FetchContent_MakeAvailable(raylib raylib-cpp)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)

file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
)
# Executable setup
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADERS})

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
    ${raylib_SOURCE_DIR}/src
    ${raylib-cpp_SOURCE_DIR}/include
)

# Compiler setup
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /permissive-)
else()
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Link targets
target_link_libraries(${PROJECT_NAME} PRIVATE raylib_cpp raylib)
