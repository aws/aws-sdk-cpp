/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.traits.PaginatedTrait;
import software.amazon.smithy.model.traits.DeprecatedTrait;
import software.amazon.smithy.model.shapes.*;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.FeatureParser;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationTraitsGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationClientHeaderGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationCompilationTestGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationBaseGenerator;
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
            // Find paginated operations using TopDownIndex, excluding deprecated operations
            List<OperationData<PaginatedTrait>> paginatedOps = TopDownIndex.of(model).getContainedOperations(service).stream()
                .filter(op -> op.hasTrait(PaginatedTrait.class))
                .filter(op -> !op.hasTrait(DeprecatedTrait.class))
                .map(op -> new OperationData<>(op, op.expectTrait(PaginatedTrait.class), service))
                .collect(Collectors.toList());
            
            // Always generate base class, even if empty
            // Required because legacy C2J generator always includes PaginationBase inheritance in client headers
            FeatureParser<OperationData<PaginatedTrait>> parser = new FeatureParser<>(context, service, paginatedOps, "Pagination");
            parser.run(featureParser -> {
                String serviceName = ServiceNameUtil.getServiceNameUpperCamel(featureParser.getService());
                
                // Generate CRTP pagination mixin (always, even if empty)
                featureParser.generateClientHeader(
                    serviceName + "PaginationBase.h",
                    writer -> new PaginationBaseGenerator(featureParser.getService(), featureParser.getOperations(), featureParser.getServiceMap()).render(writer)
                );
                
                if (!paginatedOps.isEmpty()) {
                    // Generate client pagination header
                    featureParser.generateClientHeader(
                        serviceName + "ClientPagination.h",
                        writer -> new PaginationClientHeaderGenerator(featureParser.getService(), featureParser.getOperations(), featureParser.getServiceMap()).render(writer)
                    );
                    
                    // Generate pagination traits headers
                    PaginationTraitsGenerator traitsGenerator = new PaginationTraitsGenerator(
                        featureParser.getContext(), 
                        featureParser.getService(), 
                        featureParser.getOperations(), 
                        featureParser.getSmithyServiceName()
                    );
                    traitsGenerator.write();
                }
            });
            
            if (!paginatedOps.isEmpty()) {
                // Generate compilation test
                PaginationCompilationTestGenerator testGenerator = new PaginationCompilationTestGenerator(context, service, paginatedOps, parser.getServiceMap());
                testGenerator.run();
            }
        }
    }
}
