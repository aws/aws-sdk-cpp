/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import software.amazon.smithy.model.shapes.ServiceShape;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;

public class HeaderCompilationCMakeTemplate {

    public HeaderCompilationCMakeTemplate() {
    }

    public void render(CppWriter writer) {
        String testName = "all-pagination-headers-compilation-test";
        
        writer.write("# Header compilation test for all pagination headers")
              .write("cmake_minimum_required(VERSION 3.13)")
              .write("")
              .write("project($L)", testName)
              .write("")
              .write("find_package(aws-cpp-sdk-core REQUIRED)")
              .write("find_package(GTest REQUIRED)")
              .write("")
              .write("add_executable($L", testName)
              .write("    AllPaginationHeadersCompilationTest.cpp")
              .write(")")
              .write("")
              .write("target_link_libraries($L", testName)
              .write("    aws-cpp-sdk-core")
              .write("    GTest::gtest")
              .write("    GTest::gtest_main")
              .write(")")
              .write("")
              .write("target_include_directories($L PRIVATE", testName)
              .write("    ${CMAKE_CURRENT_SOURCE_DIR}")
              .write(")")
              .write("")
              .write("add_test(NAME $L COMMAND $L)", testName, testName);
    }
}