add_project(aws-cpp-sdk-pricing-plan-manager "C++ SDK for the AWS pricing-plan-manager service" aws-cpp-sdk-core)

file(GLOB AWS_PRICING-PLAN-MANAGER_HEADERS
    "include/aws/pricing-plan-manager/*.h"
)

file(GLOB AWS_PRICING-PLAN-MANAGER_MODEL_HEADERS
    "include/aws/pricing-plan-manager/model/*.h"
)

file(GLOB AWS_PRICING-PLAN-MANAGER_INTERNAL_HEADERS
    "include/aws/pricing-plan-manager/internal/*.h"
)

file(GLOB AWS_PRICING-PLAN-MANAGER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PRICING-PLAN-MANAGER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PRICING-PLAN-MANAGER_UNIFIED_HEADERS
    ${AWS_PRICING-PLAN-MANAGER_HEADERS}
    ${AWS_PRICING-PLAN-MANAGER_INTERNAL_HEADERS}
    ${AWS_PRICING-PLAN-MANAGER_MODEL_HEADERS}
)

file(GLOB PRICING-PLAN-MANAGER_UNITY_SRC
    ${AWS_PRICING-PLAN-MANAGER_SOURCE}
    ${AWS_PRICING-PLAN-MANAGER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PRICING-PLAN-MANAGER" PRICING-PLAN-MANAGER_UNITY_SRC)
endif()

file(GLOB PRICING-PLAN-MANAGER_SRC
    ${PRICING-PLAN-MANAGER_UNIFIED_HEADERS}
    ${PRICING-PLAN-MANAGER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\pricing-plan-manager" FILES ${AWS_PRICING-PLAN-MANAGER_HEADERS})
        source_group("Header Files\\aws\\pricing-plan-manager\\internal" FILES ${AWS_PRICING-PLAN-MANAGER_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\pricing-plan-manager\\model" FILES ${AWS_PRICING-PLAN-MANAGER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PRICING-PLAN-MANAGER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PRICING-PLAN-MANAGER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PRICING-PLAN-MANAGER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PRICING-PLAN-MANAGER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PRICINGPLANMANAGER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PRICING-PLAN-MANAGER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pricing-plan-manager)
install (FILES ${AWS_PRICING-PLAN-MANAGER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pricing-plan-manager/model)

do_packaging()


