message(STATUS "Generating source file for introspection of version to ${CMAKE_PROJECT_VERSION} ")
configure_file(
        VersionConfig.h.in
        aws/core/VersionConfig.h
        @ONLY NEWLINE_STYLE UNIX
)

message(STATUS "Generating source file SDKConfig.h for setting memory management options")
configure_file(
        SDKConfig.h.in
        aws/core/SDKConfig.h
        @ONLY NEWLINE_STYLE UNIX
)

if (NOT LEGACY_BUILD)
    target_include_directories(
            aws-sdk-cpp-core
            BEFORE
            PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}> #For generated Headers as VersionConfig and SDKConfig
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}> #For generated Headers as VersionConfig and SDKConfig
            PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
    )
endif () # NOT LEGACY_BUILD
