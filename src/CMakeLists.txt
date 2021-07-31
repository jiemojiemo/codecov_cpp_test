add_library(test_lib STATIC test_lib.cpp)
target_include_directories(test_lib PUBLIC "${CMAKE_SOURCE_DIR}/include")