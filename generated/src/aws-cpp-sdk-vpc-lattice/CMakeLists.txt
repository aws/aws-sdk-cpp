add_project(aws-cpp-sdk-vpc-lattice "C++ SDK for the AWS vpc-lattice service" aws-cpp-sdk-core)

file(GLOB AWS_VPC-LATTICE_HEADERS
    "include/aws/vpc-lattice/*.h"
)

file(GLOB AWS_VPC-LATTICE_MODEL_HEADERS
    "include/aws/vpc-lattice/model/*.h"
)

file(GLOB AWS_VPC-LATTICE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_VPC-LATTICE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB VPC-LATTICE_UNIFIED_HEADERS
    ${AWS_VPC-LATTICE_HEADERS}
    ${AWS_VPC-LATTICE_MODEL_HEADERS}
)

file(GLOB VPC-LATTICE_UNITY_SRC
    ${AWS_VPC-LATTICE_SOURCE}
    ${AWS_VPC-LATTICE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("VPC-LATTICE" VPC-LATTICE_UNITY_SRC)
endif()

file(GLOB VPC-LATTICE_SRC
    ${VPC-LATTICE_UNIFIED_HEADERS}
    ${VPC-LATTICE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\vpc-lattice" FILES ${AWS_VPC-LATTICE_HEADERS})
        source_group("Header Files\\aws\\vpc-lattice\\model" FILES ${AWS_VPC-LATTICE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_VPC-LATTICE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_VPC-LATTICE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(VPC-LATTICE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${VPC-LATTICE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_VPCLATTICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_VPC-LATTICE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/vpc-lattice)
install (FILES ${AWS_VPC-LATTICE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/vpc-lattice/model)

do_packaging()


