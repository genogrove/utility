add_library(genogrove_utility INTERFACE)
target_include_directories(genogrove_utility INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)