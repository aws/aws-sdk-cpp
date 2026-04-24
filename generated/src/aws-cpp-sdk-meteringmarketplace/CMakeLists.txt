add_project(aws-cpp-sdk-meteringmarketplace "C++ SDK for the AWS meteringmarketplace service" aws-cpp-sdk-core)

file(GLOB AWS_METERINGMARKETPLACE_HEADERS
    "include/aws/meteringmarketplace/*.h"
)

file(GLOB AWS_METERINGMARKETPLACE_MODEL_HEADERS
    "include/aws/meteringmarketplace/model/*.h"
)

file(GLOB AWS_METERINGMARKETPLACE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_METERINGMARKETPLACE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB METERINGMARKETPLACE_UNIFIED_HEADERS
    ${AWS_METERINGMARKETPLACE_HEADERS}
    ${AWS_METERINGMARKETPLACE_MODEL_HEADERS}
)

file(GLOB METERINGMARKETPLACE_UNITY_SRC
    ${AWS_METERINGMARKETPLACE_SOURCE}
    ${AWS_METERINGMARKETPLACE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("METERINGMARKETPLACE" METERINGMARKETPLACE_UNITY_SRC)
endif()

file(GLOB METERINGMARKETPLACE_SRC
    ${METERINGMARKETPLACE_UNIFIED_HEADERS}
    ${METERINGMARKETPLACE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\meteringmarketplace" FILES ${AWS_METERINGMARKETPLACE_HEADERS})
        source_group("Header Files\\aws\\meteringmarketplace\\model" FILES ${AWS_METERINGMARKETPLACE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_METERINGMARKETPLACE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_METERINGMARKETPLACE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(METERINGMARKETPLACE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${METERINGMARKETPLACE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MARKETPLACEMETERING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_METERINGMARKETPLACE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/meteringmarketplace)
install (FILES ${AWS_METERINGMARKETPLACE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/meteringmarketplace/model)

do_packaging()


