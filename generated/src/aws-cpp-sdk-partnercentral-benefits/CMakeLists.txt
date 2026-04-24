add_project(aws-cpp-sdk-partnercentral-benefits "C++ SDK for the AWS partnercentral-benefits service" aws-cpp-sdk-core)

file(GLOB AWS_PARTNERCENTRAL-BENEFITS_HEADERS
    "include/aws/partnercentral-benefits/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-BENEFITS_MODEL_HEADERS
    "include/aws/partnercentral-benefits/model/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-BENEFITS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PARTNERCENTRAL-BENEFITS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PARTNERCENTRAL-BENEFITS_UNIFIED_HEADERS
    ${AWS_PARTNERCENTRAL-BENEFITS_HEADERS}
    ${AWS_PARTNERCENTRAL-BENEFITS_MODEL_HEADERS}
)

file(GLOB PARTNERCENTRAL-BENEFITS_UNITY_SRC
    ${AWS_PARTNERCENTRAL-BENEFITS_SOURCE}
    ${AWS_PARTNERCENTRAL-BENEFITS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PARTNERCENTRAL-BENEFITS" PARTNERCENTRAL-BENEFITS_UNITY_SRC)
endif()

file(GLOB PARTNERCENTRAL-BENEFITS_SRC
    ${PARTNERCENTRAL-BENEFITS_UNIFIED_HEADERS}
    ${PARTNERCENTRAL-BENEFITS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\partnercentral-benefits" FILES ${AWS_PARTNERCENTRAL-BENEFITS_HEADERS})
        source_group("Header Files\\aws\\partnercentral-benefits\\model" FILES ${AWS_PARTNERCENTRAL-BENEFITS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PARTNERCENTRAL-BENEFITS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PARTNERCENTRAL-BENEFITS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PARTNERCENTRAL-BENEFITS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PARTNERCENTRAL-BENEFITS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PARTNERCENTRALBENEFITS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PARTNERCENTRAL-BENEFITS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-benefits)
install (FILES ${AWS_PARTNERCENTRAL-BENEFITS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-benefits/model)

do_packaging()


