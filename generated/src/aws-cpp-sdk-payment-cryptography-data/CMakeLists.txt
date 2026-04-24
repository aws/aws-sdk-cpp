add_project(aws-cpp-sdk-payment-cryptography-data "C++ SDK for the AWS payment-cryptography-data service" aws-cpp-sdk-core)

file(GLOB AWS_PAYMENT-CRYPTOGRAPHY-DATA_HEADERS
    "include/aws/payment-cryptography-data/*.h"
)

file(GLOB AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_HEADERS
    "include/aws/payment-cryptography-data/model/*.h"
)

file(GLOB AWS_PAYMENT-CRYPTOGRAPHY-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PAYMENT-CRYPTOGRAPHY-DATA_UNIFIED_HEADERS
    ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_HEADERS}
    ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_HEADERS}
)

file(GLOB PAYMENT-CRYPTOGRAPHY-DATA_UNITY_SRC
    ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_SOURCE}
    ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PAYMENT-CRYPTOGRAPHY-DATA" PAYMENT-CRYPTOGRAPHY-DATA_UNITY_SRC)
endif()

file(GLOB PAYMENT-CRYPTOGRAPHY-DATA_SRC
    ${PAYMENT-CRYPTOGRAPHY-DATA_UNIFIED_HEADERS}
    ${PAYMENT-CRYPTOGRAPHY-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\payment-cryptography-data" FILES ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_HEADERS})
        source_group("Header Files\\aws\\payment-cryptography-data\\model" FILES ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PAYMENT-CRYPTOGRAPHY-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PAYMENT-CRYPTOGRAPHY-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PAYMENTCRYPTOGRAPHYDATA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/payment-cryptography-data)
install (FILES ${AWS_PAYMENT-CRYPTOGRAPHY-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/payment-cryptography-data/model)

do_packaging()


