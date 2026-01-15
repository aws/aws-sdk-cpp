/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.HeaderCompilationTemplate;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.HeaderCompilationCMakeTemplate;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationData;
import java.util.*;

public class HeaderCompilationParser {
    private final PluginContext context;
    private final ServiceShape service;
    private final List<PaginationData> paginatedOps;
    private final CppWriterDelegator writerDelegator;

    public HeaderCompilationParser(PluginContext context, ServiceShape service, List<PaginationData> paginatedOps) {
        this.context = context;
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
    }

    public void run() {
        List<ServiceShape> services = List.of(service);
        generateSingleHeaderCompilationTest(services, paginatedOps);
        writerDelegator.flushWriters();
    }
    
    private void generateSingleHeaderCompilationTest(List<ServiceShape> services, List<PaginationData> allPaginatedOps) {
        String serviceName = getServiceName(service);
        String c2jServiceName = getC2jServiceName(service);
        
        // Generate single compilation test for all pagination headers in service's client-gen-tests
        writerDelegator.useFileWriter(
            "generated/tests/" + c2jServiceName + "-gen-tests/AllPaginationHeadersCompilationTest.cpp",
            writer -> new HeaderCompilationTemplate(services, allPaginatedOps).render(writer)
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