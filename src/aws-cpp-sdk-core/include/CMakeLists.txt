    message(STATUS "Generating source file for introspection of version to ${CMAKE_PROJECT_VERSION} ")
    configure_file(
            VersionConfig.h.in
            aws/core/VersionConfig.h
            @ONLY
    )

    message(STATUS "Generating source file SDKConfig.h for setting memory management options")
    configure_file(
            SDKConfig.h.in
            aws/core/SDKConfig.h
            @ONLY
    )