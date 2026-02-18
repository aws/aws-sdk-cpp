/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.ServiceShape;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.List;
import java.util.Map;

public abstract class BaseCompilationTestGenerator<T> {
    protected final PluginContext context;
    protected final ServiceShape service;
    protected final List<T> operations;
    protected final Map<String, String> serviceMap;
    private final CppWriterDelegator writerDelegator;

    public BaseCompilationTestGenerator(PluginContext context, ServiceShape service, List<T> operations, Map<String, String> serviceMap) {
        this.context = context;
        this.service = service;
        this.operations = operations;
        this.serviceMap = serviceMap;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
    }

    protected abstract String getTestType();
    protected abstract String getTestDescription();
    protected abstract void writeTestSpecificIncludes(CppWriter writer);

    public final void run() {
        generateCompilationTest();
        writerDelegator.flushWriters();
    }

    private void generateCompilationTest() {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String c2jServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
        
        writerDelegator.useFileWriter(
            "generated/tests/" + c2jServiceName + "-gen-tests/" + serviceName + getTestType() + "CompilationTests.cpp",
            this::render
        );
    }

    private void render(CppWriter writer) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        
        writeHeader(writer, serviceName);
        writeTestSpecificIncludes(writer);
        writeCommonIncludes(writer);
        writeTestClass(writer, serviceName);
        writeTestMethod(writer, serviceName);
    }

    private void writeHeader(CppWriter writer, String serviceName) {
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("// Header compilation test for " + serviceName + " " + getTestType().toLowerCase() + " headers")
              .write("// " + getTestDescription())
              .write("");
    }

    private void writeCommonIncludes(CppWriter writer) {
        writer.write("")
              .write("#include <aws/testing/AwsCppSdkGTestSuite.h>")
              .write("");
    }

    private void writeTestClass(CppWriter writer, String serviceName) {
        writer.openBlock("class " + serviceName + getTestType() + "CompilationTest : public Aws::Testing::AwsCppSdkGTestSuite\n{", "};", () -> {
            // Empty class body
        });
        writer.write("");
    }

    private void writeTestMethod(CppWriter writer, String serviceName) {
        writer.openBlock("TEST_F(" + serviceName + getTestType() + "CompilationTest, " + serviceName + getTestType() + "HeadersCompile)\n{", "}", () -> {
            writer.write("    // Test passes if compilation succeeds")
                  .write("    SUCCEED();");
        });
    }
}