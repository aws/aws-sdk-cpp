/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.ArrayList;
import java.util.List;

/**
 * Renames the reserved {@code Body} member of API Gateway V2's import requests to {@code requestBody}.
 * Mirrors the legacy C2J {@code APIGatewayV2RestJsonCppClientGenerator}.
 */
public final class ApiGatewayV2Transforms implements ModelTransform {

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "apigatewayv2".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        String ns = service.getId().getNamespace();
        Protocol protocol = ProtocolResolver.resolve(service, model);
        List<StructureShape> updated = new ArrayList<>();
        for (String requestName : List.of("ImportApiRequest", "ReimportApiRequest")) {
            model.getShape(ShapeId.fromParts(ns, requestName))
                .flatMap(s -> s.asStructureShape())
                .flatMap(struct -> TransformSupport.renameMember(struct, "Body", "requestBody", protocol))
                .ifPresent(updated::add);
        }
        if (updated.isEmpty()) {
            return model;
        }
        return model.toBuilder().addShapes(updated).build();
    }
}
