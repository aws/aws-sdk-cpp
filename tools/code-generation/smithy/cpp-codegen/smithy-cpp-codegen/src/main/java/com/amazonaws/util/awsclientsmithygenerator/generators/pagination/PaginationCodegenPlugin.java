/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.pagination;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.traits.PaginatedTrait;
import software.amazon.smithy.model.traits.DeprecatedTrait;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.FeatureParser;
import com.amazonaws.util.awsclientsmithygenerator.generators.pagination.PaginationTraitsGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.pagination.PaginationClientHeaderGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.pagination.PaginationCompilationTestGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.pagination.PaginationBaseGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.pagination.PaginationEmptyHeaderGenerator;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class PaginationCodegenPlugin implements SmithyBuildPlugin {

    @Override
    public String getName() {
        return "smithy-cpp-codegen";
    }

    @Override
    public void execute(PluginContext context) {
        var model = context.getModel();
        
        // Handle legacy services without Smithy models
        if (context.getProjectionName().endsWith(".mock")) {
            PaginationEmptyHeaderGenerator.generate(context);
            return;
        }
        
        for (ServiceShape service : model.getServiceShapes()) {
            // Process service shape for S3-CRT projection
            final ServiceShape processedService = ServiceNameUtil.processS3CrtProjection(service, context.getProjectionName());
            // Find paginated operations using TopDownIndex, excluding deprecated operations
            List<OperationData<PaginatedTrait>> paginatedOps = TopDownIndex.of(model).getContainedOperations(processedService).stream()
                .filter(op -> op.hasTrait(PaginatedTrait.class))
                .filter(op -> !op.hasTrait(DeprecatedTrait.class))
                .map(op -> new OperationData<>(op, op.expectTrait(PaginatedTrait.class), processedService))
                .collect(Collectors.toList());
            
            // Always generate base class, even if empty
            // Required because legacy C2J generator always includes PaginationBase inheritance in client headers
            FeatureParser<OperationData<PaginatedTrait>> parser = new FeatureParser<>(context, processedService, paginatedOps, "Pagination");
            parser.run(featureParser -> {
                String serviceName = ServiceNameUtil.getServiceNameUpperCamel(featureParser.getService());
                
                // Generate CRTP pagination (always, even if empty)
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
                PaginationCompilationTestGenerator testGenerator = new PaginationCompilationTestGenerator(context, processedService, paginatedOps, parser.getServiceMap());
                testGenerator.run();
            }
        }
    }
}
