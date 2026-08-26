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
 * Renames the reserved {@code body}/{@code headers} members of API Gateway's test-invoke requests to
 * {@code requestBody}/{@code requestHeaders}. Mirrors the legacy C2J {@code APIGatewayRestJsonCppClientGenerator}.
 */
public final class ApiGatewayTransforms {

    private ApiGatewayTransforms() {}

    public static ModelTransform asTransform() {
        return ApiGatewayTransforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"api-gateway".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
        String ns = service.getId().getNamespace();
        Protocol protocol = ProtocolResolver.resolve(service, model);
        List<StructureShape> updated = new ArrayList<>();
        for (String requestName : List.of("TestInvokeMethodRequest", "TestInvokeAuthorizerRequest")) {
            model.getShape(ShapeId.fromParts(ns, requestName))
                .flatMap(s -> s.asStructureShape())
                .ifPresent(struct -> {
                    StructureShape afterBody = TransformSupport
                        .renameMember(struct, "body", "requestBody", protocol).orElse(struct);
                    TransformSupport.renameMember(afterBody, "headers", "requestHeaders", protocol)
                        .ifPresentOrElse(updated::add, () -> {
                            if (afterBody != struct) {
                                updated.add(afterBody);
                            }
                        });
                });
        }
        if (updated.isEmpty()) {
            return model;
        }
        return model.toBuilder().addShapes(updated).build();
    }
}
