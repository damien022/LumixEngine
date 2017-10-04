message(STATUS "==== Tests ====")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test)
message(STATUS "Test Building Directory " ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
add_executable(Test1 main.cpp)
