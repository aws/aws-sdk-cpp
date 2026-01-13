/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationClientTemplate;
import java.util.*;

public class PaginationParser {
    private final PluginContext context;
    private final Model model;
    private final PaginationShapeDiscovery shapeDiscovery;
    private final CppWriterDelegator writerDelegator;

    public PaginationParser(PluginContext context) {
        this.context = context;
        this.model = context.getModel();
        this.shapeDiscovery = new PaginationShapeDiscovery(model);
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
    }

    public void run() {
        for (ServiceShape service : model.getServiceShapes()) {
            List<PaginationData> paginatedOps = shapeDiscovery.findPaginatedOperations(service);

            if (!paginatedOps.isEmpty()) {
                generatePaginationFiles(service, paginatedOps);
            }
        }
        writerDelegator.flushWriters();
    }
    
    private void generatePaginationFiles(ServiceShape service, List<PaginationData> paginatedOps) {
        String serviceName = getServiceName(service);
        
        // Generate client pagination header
        writerDelegator.useFileWriter(
            "include/aws/" + serviceName.toLowerCase() + "/" + serviceName + "ClientPagination.h",
            writer -> new PaginationClientTemplate(service, paginatedOps).render(writer)
        );
        
        // Generate pagination traits headers
        PaginationHeaderWriter headerWriter = new PaginationHeaderWriter(context, service, paginatedOps);
        headerWriter.write();
    }
    
    private String getServiceName(ServiceShape service) {
        return service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");
    }
}
