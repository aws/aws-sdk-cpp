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
import software.amazon.smithy.model.traits.PaginatedTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.PaginationCompilationTestParser;
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
                PaginationParser parser = new PaginationParser(context, service, paginatedOps);
                parser.run();
                
                // Generate header compilation test
                PaginationCompilationTestParser headerParser = new PaginationCompilationTestParser(context, service, paginatedOps);
                headerParser.run();
            }
        }
    }
}
