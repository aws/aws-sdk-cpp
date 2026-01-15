/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import java.util.*;
import java.util.function.Consumer;

public class CompilationTestParser<T> {
    private final PluginContext context;
    private final ServiceShape service;
    private final List<T> operations;
    private final CppWriterDelegator writerDelegator;
    private final String testType;
    private final Consumer<CppWriter> renderFunction;

    public CompilationTestParser(PluginContext context, ServiceShape service, List<T> operations, 
                                String testType, Consumer<CppWriter> renderFunction) {
        this.context = context;
        this.service = service;
        this.operations = operations;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
        this.testType = testType;
        this.renderFunction = renderFunction;
    }

    public void run() {
        generateCompilationTest();
        writerDelegator.flushWriters();
    }
    
    private void generateCompilationTest() {
        String serviceName = getServiceName(service);
        String c2jServiceName = getC2jServiceName(service);
        
        writerDelegator.useFileWriter(
            "generated/tests/" + c2jServiceName + "-gen-tests/" + serviceName + testType + "CompilationTests.cpp",
            renderFunction
        );
    }
    
    private String getServiceName(ServiceShape service) {
        return service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");
    }
    
    private String getC2jServiceName(ServiceShape service) {
        return service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .trim()
            .toLowerCase()
            .replace(" ", "-");
    }
}