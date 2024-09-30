<#-- Convert projectName to uppercase -->
<#assign projectNameCaps = projectName?upper_case />
<#-- Generate awsProjectGeneratedTestSrc string -->
<#assign awsProjectGeneratedTestSrc = "AWS_" + projectNameCaps + "_GENERATED_SMOKE_TEST_SRC" />
<#assign templateProjectName = "$\{PROJECT_NAME}" />
<#assign templateProjectLibs = "$\{PROJECT_LIBS}" />
<#assign templateCmakeCommand = "$\{CMAKE_COMMAND}" />
<#assign templateAwsLd =  "$\{AWS_AUTORUN_LD_LIBRARY_PATH}" />
<#assign command = "COMMAND ${templateCmakeCommand} -E env LD_LIBRARY_PATH=${templateAwsLd}:$ENV{LD_LIBRARY_PATH} $<TARGET_FILE:${templateProjectName}> "/>
<#assign fullTitle = "Tests for the AWS  ${projectNameCaps}  C++ SDK"?string >
<#noparse>
add_project(${projectName}-smoke-tests
</#noparse>
    ${fullTitle}
<#noparse>
    testing-resources
    aws-cpp-sdk-${projectName}
    aws-cpp-sdk-core
    )

file(GLOB AWS_${projectNameCaps}_GENERATED_SMOKE_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if (CMAKE_CROSSCOMPILING)
    set(AUTORUN_UNIT_TESTS OFF)
endif()

if (AUTORUN_UNIT_TESTS)
    enable_testing()
endif()
</#noparse>

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${templateProjectName} "${awsProjectGeneratedTestSrc}")
else()
    add_executable(${templateProjectName} "${awsProjectGeneratedTestSrc}")
endif()

set_compiler_flags(${templateProjectName})
set_compiler_warnings(${templateProjectName})

target_link_libraries(${templateProjectName} ${templateProjectLibs})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${templateProjectName} POST_BUILD
        $command
        ARGS "--gtest_brief=1")
endif()

<#noparse>
if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${templateProjectName} PROPERTIES OUTPUT_NAME ${templateProjectName})
endif()
</#noparse>

