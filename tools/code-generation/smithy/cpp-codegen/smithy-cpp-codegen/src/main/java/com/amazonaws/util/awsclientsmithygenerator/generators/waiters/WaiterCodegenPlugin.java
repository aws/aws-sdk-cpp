/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.build.SmithyBuildPlugin;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.waiters.WaitableTrait;
import software.amazon.smithy.model.shapes.ServiceShape;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.FeatureParser;
import java.util.List;
import java.util.stream.Collectors;

public class WaiterCodegenPlugin implements SmithyBuildPlugin {

    @Override
    public String getName() {
        return "smithy-cpp-codegen-waiters";
    }

    @Override
    public void execute(PluginContext context) {
        var model = context.getModel();
        
        // Handle legacy services without Smithy models
        if (context.getProjectionName().endsWith(".mock")) {
            WaiterEmptyHeaderGenerator.generate(context);
            return;
        }
        
        for (ServiceShape service : model.getServiceShapes()) {
            final ServiceShape processedService = ServiceNameUtil.processS3CrtProjection(service, context.getProjectionName());
            List<WaiterOperationData> waiterOps = TopDownIndex.of(model).getContainedOperations(processedService).stream()
                .filter(op -> op.hasTrait(WaitableTrait.class))
                .flatMap(op -> {
                    var trait = op.expectTrait(WaitableTrait.class);
                    return trait.getWaiters().entrySet().stream()
                        .map(entry -> new WaiterOperationData(op, entry.getKey(), entry.getValue(), processedService));
                })
                .collect(Collectors.toList());
            
            // Always generate ServiceWaiter.h, even if empty (matches pagination pattern)
            FeatureParser<WaiterOperationData> parser = new FeatureParser<>(context, processedService, waiterOps, "Waiter");
            parser.run(featureParser -> {
                String serviceName = ServiceNameUtil.getServiceNameUpperCamel(featureParser.getService());
                featureParser.generateClientHeader(
                    serviceName + "Waiter.h",
                    writer -> new WaiterHeaderGenerator(featureParser.getService(), featureParser.getOperations(), featureParser.getServiceMap(), model, featureParser.getNamespaceMap()).render(writer)
                );
            });
        }
    }
}
