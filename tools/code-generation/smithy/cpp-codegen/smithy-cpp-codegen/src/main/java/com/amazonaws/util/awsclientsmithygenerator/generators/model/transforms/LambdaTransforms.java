/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.transform.ModelTransformer;

import java.util.HashSet;
import java.util.Optional;
import java.util.Set;

/**
 * Removes the deprecated {@code InvokeAsync} operation (and its input/output shapes) from the
 * Lambda service. Mirrors the legacy C2J {@code LambdaRestJsonCppClientGenerator}, which removed
 * {@code InvokeAsync} because it collides with the generated async client.
 */
public final class LambdaTransforms implements ModelTransform {

    private static final ShapeId UNIT = ShapeId.from("smithy.api#Unit");

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "lambda".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        Optional<OperationShape> invokeAsync = TopDownIndex.of(model)
            .getContainedOperations(service).stream()
            .filter(op -> "InvokeAsync".equals(op.getId().getName()))
            .findFirst();
        if (invokeAsync.isEmpty()) {
            return model;
        }
        OperationShape op = invokeAsync.get();
        Set<Shape> toRemove = new HashSet<>();
        toRemove.add(op);
        if (!UNIT.equals(op.getInputShape())) {
            model.getShape(op.getInputShape()).ifPresent(toRemove::add);
        }
        op.getOutput().filter(id -> !UNIT.equals(id))
            .flatMap(model::getShape).ifPresent(toRemove::add);
        return ModelTransformer.create().removeShapes(model, toRemove);
    }
}
