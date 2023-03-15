cmake_minimum_required(VERSION 3.25)
project(gl_demo)

set(CMAKE_CXX_STANDARD 17)
include(FetchContent)
FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/youseeseeyouself/glfw.git
        GIT_TAG 3.3
)
FetchContent_MakeAvailable(glfw)

include_directories(lib/glad/include)
add_library(glad lib/glad/src/glad.c)
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
        glfw
        glad
        )
