#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

cmake_minimum_required(VERSION 2.8.12)
set(PROJECT_NAME "testing-resources")
set(PROJECT_STRING    "${PROJECT_NAME}_${PROJECT_VERSION}")
set(PROJECT_DESCRIPTION "C++ interface for AWS Elasticbeanstalk")
set(PROJECT_TARNAME   "${PROJECT_NAME}-${PROJECT_VERSION}")
set(PROJECT_LIBS "")
list(APPEND PROJECT_LIBS "AWS::aws-cpp-sdk-core")

cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0054 NEW)
cmake_policy(SET CMP0056 NEW)

project("${PROJECT_NAME}" VERSION "${PROJECT_VERSION}" LANGUAGES CXX)

include(GenerateExportHeader)

file(GLOB AWS_TESTING_HEADERS "include/aws/testing/*.h")
file(GLOB AWS_TESTING_EXTERNAL_HEADERS "include/aws/external/*.h")
file(GLOB AWS_TESTING_AUTH_MOCKS_HEADERS "include/aws/testing/mocks/aws/auth/*.h")
file(GLOB AWS_TESTING_HTTP_MOCKS_HEADERS "include/aws/testing/mocks/http/*.h")
file(GLOB AWS_TESTING_PLATFORM_HEADERS "include/aws/testing/platform/*.h")

file(GLOB AWS_TESTING_SOURCE "source/*.cpp")
file(GLOB AWS_TESTING_EXTERNAL_SOURCE "source/external/*.cc")

file(GLOB TestingResources_SHARED_SRC
  ${AWS_TESTING_HEADERS}
  ${AWS_TESTING_EXTERNAL_HEADERS}
  ${AWS_TESTING_AUTH_MOCKS_HEADERS}
  ${AWS_TESTING_HTTP_MOCKS_HEADERS}
  ${AWS_TESTING_PLATFORM_HEADERS}
  ${AWS_TESTING_SOURCE}
  ${AWS_TESTING_EXTERNAL_SOURCE}
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
    source_group("Header Files\\aws\\testing\\mocks\\aws\\auth" FILES ${AWS_TESTING_AUTH_MOCKS_HEADERS})
    source_group("Header Files\\aws\\testing\\mocks\\http" FILES ${AWS_TESTING_HTTP_MOCKS_HEADERS})

    source_group("Source Files" FILES ${AWS_TESTING_SOURCE})
    source_group("Source Files\\external" FILES ${AWS_TESTING_EXTERNAL_SOURCE})
    source_group("Source Files\\platform\\windows" FILES ${TestingResources_PLATFORM_SRC})
  endif(MSVC)
endif()

file(GLOB TestingResources_SRC
  ${TestingResources_SHARED_SRC}
  ${TestingResources_PLATFORM_SRC}
)

set(INCLUDES
  "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
  add_definitions(-DAWS_TESTING_EXPORTS=1)
  add_definitions(-DGTEST_CREATE_SHARED_LIBRARY=1)
endif()

if(PLATFORM_WINDOWS)
  add_definitions("-DDISABLE_HOME_DIR_REDIRECT")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${TestingResources_SRC})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if(COMMAND add_custom_testing_link_libraries)
  add_custom_testing_link_libraries()
endif()

if(COMMAND add_custom_testing_target_compile_definitions)
  add_custom_testing_target_compile_definitions()
endif()
