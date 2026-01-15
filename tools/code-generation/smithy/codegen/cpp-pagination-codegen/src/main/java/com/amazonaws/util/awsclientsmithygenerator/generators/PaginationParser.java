/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.PaginationHeaderWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationClientTemplate;
import java.util.*;

public class PaginationParser {
    private final PluginContext context;
    private final Model model;
    private final ServiceShape service;
    private final List<PaginationData> paginatedOps;
    private final CppWriterDelegator writerDelegator;
    private Map<String, String> c2jMap;

    public PaginationParser(PluginContext context, ServiceShape service, List<PaginationData> paginatedOps) {
        this.context = context;
        this.model = context.getModel();
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
        
        // Initialize c2j map
        this.c2jMap = new HashMap<>();
        ObjectNode settings = context.getSettings();
        if (settings.containsMember("c2jMap")) {
            Node c2jMapNode = settings.expectMember("c2jMap");
            if (c2jMapNode.isStringNode()) {
                String jsonStr = c2jMapNode.expectStringNode().getValue();
                ObjectNode mapNode = Node.parseJsonWithComments(jsonStr).expectObjectNode();
                mapNode.getMembers().forEach((key, value) -> {
                    this.c2jMap.put(key.getValue(), value.expectStringNode().getValue());
                });
            }
        }
    }

    public void run() {
        generatePaginationFiles(service, paginatedOps);
        writerDelegator.flushWriters();
    }
    
    private void generatePaginationFiles(ServiceShape service, List<PaginationData> paginatedOps) {
        String serviceName = getServiceName(service);
        String c2jServiceName = getC2jServiceName(service);
        
        // Generate client pagination header
        writerDelegator.useFileWriter(
            "include/aws/" + c2jServiceName + "/" + serviceName + "ClientPagination.h",
            writer -> new PaginationClientTemplate(service, paginatedOps).render(writer)
        );
        
        // Generate pagination traits headers
        PaginationHeaderWriter headerWriter = new PaginationHeaderWriter(context, service, paginatedOps, c2jServiceName);
        headerWriter.write();
    }
    
    private String getServiceName(ServiceShape service) {
        return service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");
    }
    
    private String getC2jServiceName(ServiceShape service) {
        String sdkId = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .trim()
            .toLowerCase()
            .replace(" ", "-");
        
        return c2jMap.getOrDefault(sdkId, sdkId);
    }
}
