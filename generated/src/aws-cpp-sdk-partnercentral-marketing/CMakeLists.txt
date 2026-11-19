add_project(aws-cpp-sdk-partnercentral-marketing "C++ SDK for Partner Central Marketing API" aws-cpp-sdk-core)

file(GLOB AWS_PARTNERCENTRAL-MARKETING_HEADERS
    "include/aws/partnercentral-marketing/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-MARKETING_MODEL_HEADERS
    "include/aws/partnercentral-marketing/model/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-MARKETING_INTERNAL_HEADERS
    "include/aws/partnercentral-marketing/internal/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-MARKETING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PARTNERCENTRAL-MARKETING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PARTNERCENTRAL-MARKETING_UNIFIED_HEADERS
    ${AWS_PARTNERCENTRAL-MARKETING_HEADERS}
    ${AWS_PARTNERCENTRAL-MARKETING_INTERNAL_HEADERS}
    ${AWS_PARTNERCENTRAL-MARKETING_MODEL_HEADERS}
)

file(GLOB PARTNERCENTRAL-MARKETING_UNITY_SRC
    ${AWS_PARTNERCENTRAL-MARKETING_SOURCE}
    ${AWS_PARTNERCENTRAL-MARKETING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PARTNERCENTRAL-MARKETING" PARTNERCENTRAL-MARKETING_UNITY_SRC)
endif()

file(GLOB PARTNERCENTRAL-MARKETING_SRC
    ${PARTNERCENTRAL-MARKETING_UNIFIED_HEADERS}
    ${PARTNERCENTRAL-MARKETING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\partnercentral-marketing" FILES ${AWS_PARTNERCENTRAL-MARKETING_HEADERS})
        source_group("Header Files\\aws\\partnercentral-marketing\\internal" FILES ${AWS_PARTNERCENTRAL-MARKETING_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\partnercentral-marketing\\model" FILES ${AWS_PARTNERCENTRAL-MARKETING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PARTNERCENTRAL-MARKETING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PARTNERCENTRAL-MARKETING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PARTNERCENTRAL-MARKETING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PARTNERCENTRAL-MARKETING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PARTNERCENTRALMARKETING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PARTNERCENTRAL-MARKETING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-marketing)
install (FILES ${AWS_PARTNERCENTRAL-MARKETING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-marketing/model)

do_packaging()


