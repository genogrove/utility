# require at least C++17 - this has to be set in CMakeLists this is called from
if(NOT CMAKE_CXX_STANDARD)
    message(STATUS "CMAKE_CXX_STANDARD not set - defaulting to C++20")
    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
elseif(CMAKE_CXX_STANDARD LESS 17)
    message(FATAL_ERROR "CMAKE_CXX_STANDARD must be at least C++17")
endif()

add_library(genogrove_utility INTERFACE)
target_include_directories(genogrove_utility INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# if using c++17, link range-v3 library
if(CMAKE_CXX_STANDARD LESS 20)
    include(FetchContent)
    FetchContent_Declare(
            range-v3
            GIT_REPOSITORY https://github.com/ericniebler/range-v3.git
            GIT_TAG        0.12.0

    )
    FetchContent_MakeAvailable(range-v3)
    target_link_libraries(genogrove_utility INTERFACE range-v3::range-v3)
endif()


