/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.traits.PaginatedTrait;
import software.amazon.smithy.model.shapes.*;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.FeatureParser;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationTraitsGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationClientHeaderGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationCompilationTestGenerator;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.util.List;
import java.util.stream.Collectors;

public class PaginationCodegenPlugin implements SmithyBuildPlugin {

    @Override
    public String getName() {
        return "cpp-codegen-pagination-plugin";
    }

    @Override
    public void execute(PluginContext context) {
        var model = context.getModel();
        
        for (ServiceShape service : model.getServiceShapes()) {
            // Find paginated operations using TopDownIndex
            List<OperationData<PaginatedTrait>> paginatedOps = TopDownIndex.of(model).getContainedOperations(service).stream()
                .filter(op -> op.hasTrait(PaginatedTrait.class))
                .map(op -> new OperationData<>(op, op.expectTrait(PaginatedTrait.class), service))
                .collect(Collectors.toList());
            
            if (!paginatedOps.isEmpty()) {
                // Generate pagination files
                FeatureParser<OperationData<PaginatedTrait>> parser = new FeatureParser<>(context, service, paginatedOps, "Pagination");
                parser.run(featureParser -> {
                    String serviceName = featureParser.getServiceName();
                    
                    // Generate client pagination header
                    featureParser.generateClientHeader(
                        serviceName + "ClientPagination.h",
                        writer -> new PaginationClientHeaderGenerator(featureParser.getService(), featureParser.getOperations()).render(writer)
                    );
                    
                    // Generate pagination traits headers
                    PaginationTraitsGenerator headerWriter = new PaginationTraitsGenerator(
                        featureParser.getContext(), 
                        featureParser.getService(), 
                        featureParser.getOperations(), 
                        featureParser.getC2jServiceName()
                    );
                    headerWriter.write();
                });
                
                // Generate header compilation test
                PaginationCompilationTestGenerator headerGenerator = new PaginationCompilationTestGenerator(context, service, paginatedOps);
                headerGenerator.run();
            }
        }
    }
}
