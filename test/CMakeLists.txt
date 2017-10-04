message(STATUS "==== Tests ====")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test)
include_directories(${LUMIX_ENGINE_INCLUDE})

message(STATUS "Test Building Directory " ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
add_executable(Test1 main.cpp)

add_executable(TestMath test_math.cpp)
target_link_libraries(TestMath LumixEngine)
