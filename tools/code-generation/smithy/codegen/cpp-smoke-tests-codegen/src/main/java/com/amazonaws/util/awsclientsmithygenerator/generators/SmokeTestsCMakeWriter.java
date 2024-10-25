/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;
import software.amazon.smithy.codegen.core.SymbolWriter;

public final class SmokeTestsCMakeWriter extends SymbolWriter<SmokeTestsCMakeWriter, CppImportContainer>{
    private final String folderNamespace;
    //protected CppBlockWriter blockWriter;    
    public SmokeTestsCMakeWriter(String namespace) {
        super(new CppImportContainer(namespace));
        this.folderNamespace = namespace;
    }

    public String generate()
    {
        String projectNameCaps = folderNamespace.toUpperCase();
        String awsTestSrc = "AWS_" + projectNameCaps + "_GENERATED_SMOKE_TEST_SRC" ;

        write(""" 
            add_project($L-smoke-tests
            \"Tests for the AWS $L C++ SDK\" 
             testing-resources
             aws-cpp-sdk-$L
             aws-cpp-sdk-core
            )
            """,folderNamespace, projectNameCaps,folderNamespace
        );

        write(""" 
            file(GLOB AWS_$L_GENERATED_SMOKE_TEST_SRC
                \"$${CMAKE_CURRENT_SOURCE_DIR}/../RunTests.cpp\"
                \"$${CMAKE_CURRENT_SOURCE_DIR}/*.cpp\"
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
            """,projectNameCaps
        );


        write(""" 
            if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
                add_library($${PROJECT_NAME} "$${$L}")
            else()
                add_executable($${PROJECT_NAME} "$${$L}")
            endif()

            set_compiler_flags($${PROJECT_NAME})
            set_compiler_warnings($${PROJECT_NAME})

            target_include_directories($${PROJECT_NAME} PUBLIC
                $${CMAKE_CURRENT_SOURCE_DIR}/../../src/aws-cpp-sdk-$L/include)

            target_link_libraries($${PROJECT_NAME}
                $${PROJECT_LIBS})
            """, awsTestSrc, awsTestSrc,folderNamespace);

        write(""" 
            if(NOT CMAKE_CROSSCOMPILING)
                SET_TARGET_PROPERTIES($${PROJECT_NAME} PROPERTIES OUTPUT_NAME $${PROJECT_NAME})
            endif()
            """);
        return toString();
    }

    /**
        * The Factory class for creating CppWriters
    */
    public static final class SmokeTestsCMakeWriterFactory implements SymbolWriter.Factory<SmokeTestsCMakeWriter> {

        @Override
        public SmokeTestsCMakeWriter apply(String filename, String namespace) {
            return new SmokeTestsCMakeWriter(namespace);
        }
    }

}