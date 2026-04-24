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

        write(
        "add_project(" +
                folderNamespace + "-smoke-tests\n" +
                "\"Tests for the AWS " + projectNameCaps + " C++ SDK\"\n" +
                "testing-resources\n" +
                "aws-cpp-sdk-" + folderNamespace + "\n" +
                "aws-cpp-sdk-core\n" +
                ")"
        );

        write(
        "file(GLOB AWS_$L_GENERATED_SMOKE_TEST_SRC\n" +
                "\"$${CMAKE_CURRENT_SOURCE_DIR}/../RunTests.cpp\"\n" +
                "\"$${CMAKE_CURRENT_SOURCE_DIR}/*.cpp\"\n" +
                ")\n" +
                "if(MSVC AND BUILD_SHARED_LIBS)\n" +
                "    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)\n" +
                "endif()\n" +
                "\n" +
                "if (CMAKE_CROSSCOMPILING)\n" +
                "    set(AUTORUN_UNIT_TESTS OFF)\n" +
                "endif()\n" +
                "\n" +
                "if (AUTORUN_UNIT_TESTS)\n" +
                "    enable_testing()\n" +
                "endif()\n",
                projectNameCaps
        );

        write(
        "if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)\n" +
                "    add_library($${PROJECT_NAME} \"$${$L}\")\n" +
                "else()\n" +
                "    add_executable($${PROJECT_NAME} \"$${$L}\")\n" +
                "endif()\n\n" +
                "set_compiler_flags($${PROJECT_NAME})\n" +
                "set_compiler_warnings($${PROJECT_NAME})\n\n" +
                "target_include_directories($${PROJECT_NAME} PUBLIC\n" +
                "    $${CMAKE_CURRENT_SOURCE_DIR}/../../src/aws-cpp-sdk-$L/include)\n\n" +
                "target_link_libraries($${PROJECT_NAME}\n" +
                "    $${PROJECT_LIBS})\n",
                awsTestSrc, awsTestSrc, folderNamespace
        );

        write(
        "if(NOT CMAKE_CROSSCOMPILING)\n" +
                "    SET_TARGET_PROPERTIES($${PROJECT_NAME} PROPERTIES OUTPUT_NAME $${PROJECT_NAME})\n" +
                "endif()\n"
        );
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