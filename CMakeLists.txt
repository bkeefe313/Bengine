cmake_minimum_required(VERSION 3.14)
project(a2)
set(CMAKE_CXX_Debug 17)
set(SOURCE_FILES main.cpp Bengine.hpp Bengine.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# update the include directory location
include_directories("C:/OpenGL/include")
# update the lib directory location
target_link_directories(${PROJECT_NAME} PUBLIC "C:/OpenGL/libs")
target_link_libraries(${PROJECT_NAME} opengl32 glfw3 glew32d.dll gdi32)