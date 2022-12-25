# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

add_project(testing-resources
    "Testing utility library for the AWS C++ SDK"
    aws-cpp-sdk-core)

include(GenerateExportHeader)

file(GLOB AWS_TESTING_HEADERS "include/aws/testing/*.h")
file(GLOB AWS_TESTING_EXTERNAL_HEADERS "include/aws/external/*.h")
file(GLOB AWS_TESTING_GTEST_HEADERS "include/aws/external/gtest/*.h")
file(GLOB AWS_TESTING_GTEST_HEADERS_INTERNAL "include/aws/external/gtest/internal/*.h")
file(GLOB AWS_TESTING_GTEST_HEADERS_INTERNAL_CUSTOM "include/aws/external/gtest/internal/custom/*.h")
file(GLOB AWS_TESTING_AUTH_MOCKS_HEADERS "include/aws/testing/mocks/aws/auth/*.h")
file(GLOB AWS_TESTING_EVENT_MOCKS_HEADERS "include/aws/testing/mocks/event/*.h")
file(GLOB AWS_TESTING_HTTP_MOCKS_HEADERS "include/aws/testing/mocks/http/*.h")
file(GLOB AWS_TESTING_CLIENT_MOCKS_HEADERS "include/aws/testing/mocks/aws/client/*.h")
file(GLOB AWS_TESTING_MONITORING_MOCKS_HEADERS "include/aws/testing/mocks/monitoring/*.h")
file(GLOB AWS_TESTING_PLATFORM_HEADERS "include/aws/testing/platform/*.h")

file(GLOB AWS_TESTING_SOURCE "source/*.cpp")
file(GLOB AWS_TESTING_EXTERNAL_SOURCE "source/external/*.cc")
file(GLOB AWS_TESTING_GTEST_SOURCE "source/external/gtest/*.cc")

file(GLOB TestingResources_SHARED_SRC
    ${AWS_TESTING_HEADERS}
    ${AWS_TESTING_EXTERNAL_HEADERS}
    ${AWS_TESTING_GTEST_HEADERS}
    ${AWS_TESTING_GTEST_HEADERS_INTERNAL}
    ${AWS_TESTING_GTEST_HEADERS_INTERNAL_CUSTOM}
    ${AWS_TESTING_AUTH_MOCKS_HEADERS}
    ${AWS_TESTING_EVENT_MOCKS_HEADERS}
    ${AWS_TESTING_HTTP_MOCKS_HEADERS}
    ${AWS_TESTING_CLIENT_MOCKS_HEADERS}
    ${AWS_TESTING_MONITORING_MOCKS_HEADERS}
    ${AWS_TESTING_PLATFORM_HEADERS}
    ${AWS_TESTING_SOURCE}
    ${AWS_TESTING_EXTERNAL_SOURCE}
    ${AWS_TESTING_GTEST_SOURCE}
)

if(PLATFORM_ANDROID)
    file(GLOB AWS_TESTING_PLATFORM_ANDROID_HEADERS "include/aws/testing/platform/android/*.h")
    file(GLOB AWS_TESTING_PLATFORM_ANDROID_SOURCE "source/platform/android/*.cpp")

    file(GLOB TestingResources_PLATFORM_SRC ${AWS_TESTING_ANDROID_HEADERS} ${AWS_TESTING_ANDROID_SOURCE})
    file(GLOB TestingResources_PLATFORM_SRC ${AWS_TESTING_PLATFORM_ANDROID_HEADERS} ${AWS_TESTING_PLATFORM_ANDROID_SOURCE})
elseif(PLATFORM_WINDOWS)
    file(GLOB TestingResources_PLATFORM_SRC "source/platform/windows/*.cpp")
elseif(PLATFORM_LINUX OR PLATFORM_APPLE)
    file(GLOB TestingResources_PLATFORM_SRC "source/platform/linux-shared/*.cpp")
elseif(PLATFORM_CUSTOM)
    gather_custom_testing_source(TestingResources_PLATFORM_SRC)
endif()

if(PLATFORM_WINDOWS)
    if(MSVC)
        source_group("Header Files\\aws\\testing" FILES ${AWS_TESTING_HEADERS})
        source_group("Header Files\\aws\\testing\\platform" FILES ${AWS_TESTING_PLATFORM_HEADERS})
        source_group("Header Files\\aws\\external" FILES ${AWS_TESTING_EXTERNAL_HEADERS})
        source_group("Header Files\\aws\\external\\gtest" FILES ${AWS_TESTING_GTEST_HEADERS})
        source_group("Header Files\\aws\\external\\gtest\\internal" FILES ${AWS_TESTING_GTEST_HEADERS_INTERNAL})
        source_group("Header Files\\aws\\external\\gtest\\internal\\custom" FILES ${AWS_TESTING_GTEST_HEADERS_INTERNAL_CUSTOM})
        source_group("Header Files\\aws\\testing\\mocks\\aws\\auth" FILES ${AWS_TESTING_AUTH_MOCKS_HEADERS})
        source_group("Header Files\\aws\\testing\\mocks\\event" FILES ${AWS_TESTING_EVENT_MOCKS_HEADERS})
        source_group("Header Files\\aws\\testing\\mocks\\http" FILES ${AWS_TESTING_HTTP_MOCKS_HEADERS})
        source_group("Header Files\\aws\\testing\\mocks\\aws\\client" FILES ${AWS_TESTING_CLIENT_MOCKS_HEADERS})
        source_group("Header Files\\aws\\testing\\mocks\\monitoring" FILES ${AWS_TESTING_MONITORING_MOCKS_HEADERS})
        source_group("Source Files" FILES ${AWS_TESTING_SOURCE})
        source_group("Source Files\\external" FILES ${AWS_TESTING_EXTERNAL_SOURCE})
        source_group("Source Files\\external\\gtest" FILES ${AWS_TESTING_GTEST_SOURCE})
        source_group("Source Files\\platform\\windows" FILES ${TestingResources_PLATFORM_SRC})
    endif(MSVC)
endif()

file(GLOB TestingResources_SRC
    ${TestingResources_SHARED_SRC}
    ${TestingResources_PLATFORM_SRC}
)

set(INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/external/"
    "${CMAKE_CURRENT_SOURCE_DIR}/source/external/gtest/"
)

if(PLATFORM_CUSTOM)
  if(COMMAND add_custom_core_include_directories)
    add_custom_core_include_directories(CUSTOM_INCLUDE)
    set(INCLUDES ${INCLUDES} ${CUSTOM_INCLUDE})
  endif()
  if(COMMAND add_custom_definitions)
    add_custom_definitions()
  endif()
endif()

include_directories(${INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions(-DAWS_TESTING_EXPORTS=1)
    add_definitions(-DGTEST_CREATE_SHARED_LIBRARY=1)
endif()

if(PLATFORM_WINDOWS)
    add_definitions("-DDISABLE_HOME_DIR_REDIRECT")
endif()

add_library(${PROJECT_NAME} ${TestingResources_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(PLATFORM_CUSTOM)
  add_custom_testing_target_compile_definitions()
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/aws/external>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

if(COMMAND add_custom_testing_link_libraries)
    add_custom_testing_link_libraries()
endif()

if(COMMAND add_custom_testing_target_compile_definitions)
    add_custom_testing_target_compile_definitions()
endif()

setup_install()

install (FILES ${AWS_TESTING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing)
install (FILES ${AWS_TESTING_EXTERNAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/external)
install (FILES ${AWS_TESTING_GTEST_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/external/gtest)
install (FILES ${AWS_TESTING_GTEST_HEADERS_INTERNAL} DESTINATION ${INCLUDE_DIRECTORY}/aws/external/gtest/internal)
install (FILES ${AWS_TESTING_GTEST_HEADERS_INTERNAL_CUSTOM} DESTINATION ${INCLUDE_DIRECTORY}/aws/external/gtest/internal/custom)
install (FILES ${AWS_TESTING_PLATFORM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing/platform)
install (FILES ${AWS_TESTING_AUTH_MOCKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing/mocks/aws/auth)
install (FILES ${AWS_TESTING_CLIENT_MOCKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing/mocks/aws/client)
install (FILES ${AWS_TESTING_EVENT_MOCKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing/mocks/event)
install (FILES ${AWS_TESTING_HTTP_MOCKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing/mocks/http)
install (FILES ${AWS_TESTING_MONITORING_MOCKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/testing/mocks/monitoring)

do_packaging()
