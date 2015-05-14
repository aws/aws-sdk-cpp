cmake_minimum_required(VERSION 2.6)
project(testing-resources)
include(GenerateExportHeader)

file(GLOB AWS_TESTING_HEADERS "include/aws/testing/*.h")
file(GLOB AWS_TESTING_EXTERNAL_HEADERS "include/aws/external/*.h")
file(GLOB AWS_TESTING_AUTH_MOCKS_HEADERS "include/aws/testing/mocks/aws/auth/*.h")
file(GLOB AWS_TESTING_HTTP_MOCKS_HEADERS "include/aws/testing/mocks/http/*.h")

file(GLOB AWS_TESTING_SOURCE "source/*.cpp")
file(GLOB AWS_TESTING_EXTERNAL_SOURCE "source/external/*.cc")

file(GLOB TestingResources_SHARED_SRC
  ${AWS_TESTING_HEADERS}
  ${AWS_TESTING_EXTERNAL_HEADERS}
  ${AWS_TESTING_AUTH_MOCKS_HEADERS}
  ${AWS_TESTING_HTTP_MOCKS_HEADERS}
  ${AWS_TESTING_SOURCE}
  ${AWS_TESTING_EXTERNAL_SOURCE}
) 

if(PLATFORM_ANDROID)
  file(GLOB AWS_TESTING_ANDROID_HEADERS "include/aws/testing/android/*.h")
  file(GLOB AWS_TESTING_ANDROID_SOURCE "source/android/*.cpp")

  file(GLOB TestingResources_PLATFORM_SRC ${AWS_TESTING_ANDROID_HEADERS} ${AWS_TESTING_ANDROID_SOURCE})
endif()

if(PLATFORM_WINDOWS)
  if(MSVC)
    source_group("Header Files\\aws\\testing" FILES ${AWS_TESTING_HEADERS})
    source_group("Header Files\\aws\\external" FILES ${AWS_TESTING_EXTERNAL_HEADERS})
    source_group("Header Files\\aws\\testing\\mocks\\aws\\auth" FILES ${AWS_TESTING_AUTH_MOCKS_HEADERS})
    source_group("Header Files\\aws\\testing\\mocks\\http" FILES ${AWS_TESTING_HTTP_MOCKS_HEADERS})

    source_group("Source Files" FILES ${AWS_TESTING_SOURCE})
    source_group("Source Files\\external" FILES ${AWS_TESTING_EXTERNAL_SOURCE})
  endif(MSVC)
endif()

file(GLOB TestingResources_SRC
  ${TestingResources_SHARED_SRC}
  ${TestingResources_PLATFORM_SRC}
)

set(INCLUDES
  "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  "${CORE_DIR}/include/"
)

include_directories(${INCLUDES})

if(PLATFORM_WINDOWS AND MSVC AND BUILD_SHARED_LIBS)
  add_definitions("-DAWS_TESTING_EXPORTS=1")
  add_definitions("-DGTEST_CREATE_SHARED_LIBRARY=1")
endif()

add_library(testing-resources ${LIBTYPE} ${TestingResources_SRC})
target_link_libraries(testing-resources aws-cpp-sdk-core)

