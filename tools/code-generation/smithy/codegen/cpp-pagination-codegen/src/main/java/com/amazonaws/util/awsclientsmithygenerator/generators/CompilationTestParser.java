/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.*;
import java.util.function.Consumer;

public class CompilationTestParser<T> {
    private final ServiceShape service;
    private final CppWriterDelegator writerDelegator;
    private final String testType;
    private final Consumer<CppWriter> renderFunction;
    private final Map<String, String> c2jMap;

    public CompilationTestParser(PluginContext context, ServiceShape service, List<T> operations, 
                                String testType, Consumer<CppWriter> renderFunction, Map<String, String> c2jMap) {
        this.service = service;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
        this.testType = testType;
        this.renderFunction = renderFunction;
        this.c2jMap = c2jMap;
    }

    public void run() {
        generateCompilationTest();
        writerDelegator.flushWriters();
    }
    
    private void generateCompilationTest() {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String c2jServiceName = ServiceNameUtil.getC2jServiceName(service, c2jMap);
        
        writerDelegator.useFileWriter(
            "generated/tests/" + c2jServiceName + "-gen-tests/" + serviceName + testType + "CompilationTests.cpp",
            renderFunction
        );
    }
}