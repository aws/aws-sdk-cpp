/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.transform.ModelTransformer;

import java.util.ArrayList;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * Route 53 C2J parity. C2J ships the {@code MaxItems} and {@code MaxResults} pagination members as
 * {@code Aws::String}, but the Coral/Smithy model types them {@code smithy.api#Integer}, which would
 * flip the generated accessors to {@code int} and break the public C++ API. This retypes those
 * members back to string. Self-guards on service name; idempotent when nothing needs retyping.
 */
public final class Route53Transforms implements ModelTransform {

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "route-53".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    private static final Set<String> STRING_MEMBER_NAMES = Set.of("MaxItems", "MaxResults");

    @Override
    public Model transform(Model model, ServiceShape service) {
        return retypeMembersToString(model);
    }

    /**
     * Retargets every {@code MaxItems}/{@code MaxResults} member to the prelude {@code smithy.api#String},
     * skipping members already targeting a string shape. Idempotent: returns the model unchanged when
     * nothing needs retyping.
     */
    private static Model retypeMembersToString(Model model) {
        ShapeId stringTarget = ShapeId.from("smithy.api#String");
        Set<Shape> replacements = model.shapes(MemberShape.class)
            .filter(member -> STRING_MEMBER_NAMES.contains(member.getMemberName()))
            .filter(member -> !model.expectShape(member.getTarget()).isStringShape())
            .map(member -> member.toBuilder().target(stringTarget).build())
            .collect(Collectors.toSet());
        if (replacements.isEmpty()) {
            return model;
        }
        return ModelTransformer.create().replaceShapes(model, new ArrayList<>(replacements));
    }
}
