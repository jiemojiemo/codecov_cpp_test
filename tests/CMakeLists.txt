add_subdirectory(googletest)

add_executable(test_hellocov test_hellocov.cpp)
target_link_libraries(test_hellocov PRIVATE test_lib gmock gmock_main)

enable_testing()
add_test(
        NAME test_hellocov
        WORKING_DIRECTORY ./
        COMMAND test_hellocov
)