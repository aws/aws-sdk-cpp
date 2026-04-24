add_project(aws-cpp-sdk-access-management 
    "C++ interface for Amazon Access Management"
    aws-cpp-sdk-cognito-identity 
    aws-cpp-sdk-iam
    aws-cpp-sdk-core)

file(GLOB AWS_ACCESS_MANAGEMENT_HEADERS
    "include/aws/access-management/*.h"
)

file(GLOB AWS_ACCESS_MANAGEMENT_SOURCE
     "source/*.cpp"
 )

if(MSVC)
    source_group("Header Files\\aws\\access-management" FILES ${AWS_ACCESS_MANAGEMENT_HEADERS})

    source_group("Source Files" FILES ${AWS_ACCESS_MANAGEMENT_SOURCE})
endif()

file(GLOB ACCESS_MANAGEMENT_SRC
  ${AWS_ACCESS_MANAGEMENT_HEADERS}
  ${AWS_ACCESS_MANAGEMENT_SOURCE}
)

set(ACCESS_MANAGEMENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${ACCESS_MANAGEMENT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ACCESS_MANAGEMENT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${ACCESS_MANAGEMENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ACCESS_MANAGEMENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/access-management)

do_packaging()
