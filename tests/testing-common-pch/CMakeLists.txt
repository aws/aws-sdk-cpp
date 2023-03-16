# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

add_project(testing-common-pch
    "Testing utility library generating precompiled headers for the AWS C++ SDK tests"
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_TESTING_PCH_HEADER "include/aws/testing-common-pch/*.h")
file(GLOB AWS_TESTING_PCH_SOURCE "source/*.cpp")

file(GLOB TestingCommonPCH_SHARED_SRC
    ${AWS_TESTING_PCH_HEADER}
    ${AWS_TESTING_PCH_SOURCE}
)

# Configure precompiled headers for MSVS
if(PLATFORM_WINDOWS)
    if(MSVC)
        source_group("Header Files\\aws\\testing-common-pch" FILES ${AWS_TESTING_PCH_HEADER})
        source_group("Source Files" FILES ${AWS_TESTING_PCH_SOURCE})
        
        SET(PrecompiledBinary "${CMAKE_CURRENT_BINARY_DIR}/AwsTestingCommonPCH.pch")

        SET_SOURCE_FILES_PROPERTIES("source/AwsTestingCommonPCH.cpp"
                                    PROPERTIES COMPILE_FLAGS "/Yc\"aws/testing-common-pch/AwsTestingCommonPCH.h\" /Fp\"${PrecompiledBinary}\""
                                               OBJECT_OUTPUTS "${PrecompiledBinary}")
    endif(MSVC)
endif()

file(GLOB TestingCommonPCH_SRC
    ${TestingCommonPCH_SHARED_SRC}
)

set(INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${INCLUDES})
add_library(${PROJECT_NAME} STATIC "${TestingCommonPCH_SRC}")

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(PLATFORM_CUSTOM)
  add_custom_testing_target_compile_definitions()
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

if(COMMAND add_custom_testing_target_compile_definitions)
    add_custom_testing_target_compile_definitions()
endif()

setup_install()

install (FILES ${AWS_TESTING_PCH_HEADER} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing-common-pch)

do_packaging()
