add_project(aws-cpp-sdk-payments "C++ SDK for AWS Payments" aws-cpp-sdk-core)

file(GLOB AWS_PAYMENTS_HEADERS
    "include/aws/payments/*.h"
)

file(GLOB AWS_PAYMENTS_MODEL_HEADERS
    "include/aws/payments/model/*.h"
)

file(GLOB AWS_PAYMENTS_INTERNAL_HEADERS
    "include/aws/payments/internal/*.h"
)

file(GLOB AWS_PAYMENTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PAYMENTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PAYMENTS_UNIFIED_HEADERS
    ${AWS_PAYMENTS_HEADERS}
    ${AWS_PAYMENTS_INTERNAL_HEADERS}
    ${AWS_PAYMENTS_MODEL_HEADERS}
)

file(GLOB PAYMENTS_UNITY_SRC
    ${AWS_PAYMENTS_SOURCE}
    ${AWS_PAYMENTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PAYMENTS" PAYMENTS_UNITY_SRC)
endif()

file(GLOB PAYMENTS_SRC
    ${PAYMENTS_UNIFIED_HEADERS}
    ${PAYMENTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\payments" FILES ${AWS_PAYMENTS_HEADERS})
        source_group("Header Files\\aws\\payments\\internal" FILES ${AWS_PAYMENTS_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\payments\\model" FILES ${AWS_PAYMENTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PAYMENTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PAYMENTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PAYMENTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PAYMENTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PAYMENTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PAYMENTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/payments)
install (FILES ${AWS_PAYMENTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/payments/model)

do_packaging()


