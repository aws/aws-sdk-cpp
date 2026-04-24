add_project(aws-cpp-sdk-partnercentral-selling "C++ SDK for the AWS partnercentral-selling service" aws-cpp-sdk-core)

file(GLOB AWS_PARTNERCENTRAL-SELLING_HEADERS
    "include/aws/partnercentral-selling/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-SELLING_MODEL_HEADERS
    "include/aws/partnercentral-selling/model/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-SELLING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PARTNERCENTRAL-SELLING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PARTNERCENTRAL-SELLING_UNIFIED_HEADERS
    ${AWS_PARTNERCENTRAL-SELLING_HEADERS}
    ${AWS_PARTNERCENTRAL-SELLING_MODEL_HEADERS}
)

file(GLOB PARTNERCENTRAL-SELLING_UNITY_SRC
    ${AWS_PARTNERCENTRAL-SELLING_SOURCE}
    ${AWS_PARTNERCENTRAL-SELLING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PARTNERCENTRAL-SELLING" PARTNERCENTRAL-SELLING_UNITY_SRC)
endif()

file(GLOB PARTNERCENTRAL-SELLING_SRC
    ${PARTNERCENTRAL-SELLING_UNIFIED_HEADERS}
    ${PARTNERCENTRAL-SELLING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\partnercentral-selling" FILES ${AWS_PARTNERCENTRAL-SELLING_HEADERS})
        source_group("Header Files\\aws\\partnercentral-selling\\model" FILES ${AWS_PARTNERCENTRAL-SELLING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PARTNERCENTRAL-SELLING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PARTNERCENTRAL-SELLING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PARTNERCENTRAL-SELLING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PARTNERCENTRAL-SELLING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PARTNERCENTRALSELLING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PARTNERCENTRAL-SELLING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-selling)
install (FILES ${AWS_PARTNERCENTRAL-SELLING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-selling/model)

do_packaging()


