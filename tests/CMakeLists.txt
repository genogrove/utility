message(STATUS "Building tests")
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.16.0
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# gather all test sources
set(TEST_SOURCES
        ranges-test.cpp
)

add_executable(genogrove_utility_tests ${TEST_SOURCES})
target_link_libraries(genogrove_utility_tests
        genogrove_utility
        GTest::gtest
        GTest::gtest_main
)
gtest_discover_tests(genogrove_utility_tests)
