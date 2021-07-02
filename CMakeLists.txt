cmake_minimum_required (VERSION 3.20)

project("SolutionName")

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

set(CMAKE_SUPPRESS_REGENERATION true)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(VCPKG_TARGET_TRIPLET "x64-windows-static")

add_definitions(-DGLEW_STATIC)

find_package(OpenGL REQUIRED)
find_package(GLEW 2.1.0 REQUIRED)
find_package(glfw3 3.3.4 REQUIRED)
find_package(EABase 2.09.12 REQUIRED)
find_package(EASTL 3.16.05 REQUIRED)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")

add_executable(${CMAKE_PROJECT_NAME} Main.cpp)
set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY
             MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE OpenGL32 GLEW::GLEW glfw EABase EASTL)
