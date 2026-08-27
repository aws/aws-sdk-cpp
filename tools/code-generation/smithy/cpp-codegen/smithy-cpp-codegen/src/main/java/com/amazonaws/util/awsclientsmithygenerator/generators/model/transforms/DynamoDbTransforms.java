/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;

import java.util.Optional;

/**
 * DynamoDB model transform: marks the {@code AttributeValue} shape with {@link CustomRenderedTrait}
 * so {@code ShapeClassifier} drops it from the default sub-object set. DynamoDB's {@code
 * AttributeValue} is a bespoke document type emitted verbatim by {@code DynamoDbRenderer} (matching
 * the legacy C2J {@code DynamoDBJsonCppClientGenerator}); if the generic {@code SubObjectRenderer}
 * also emitted it, both writers would resolve the same {@code AttributeValue.h} path and append,
 * silently concatenating the generic tagged-union struct onto the hand-written document type.
 *
 * <p>Keeping the suppression here — rather than as a service-name {@code if} in the generic
 * {@code ModelGenerator} — keeps the orchestrator service-agnostic: the marker drives a generic
 * classifier rule that applies to any shape a dedicated renderer owns. The shape itself stays in
 * the model so member references (e.g. {@code PutItemInput.Item}) still resolve.
 *
 * <p>Self-guards on the raw smithy service name {@code dynamodb} (no-op for every other service).
 * No-op when the {@code AttributeValue} shape is absent (upstream model changed).
 */
public final class DynamoDbTransforms {

    private DynamoDbTransforms() {}

    public static ModelTransform asTransform() {
        return DynamoDbTransforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"dynamodb".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
        ShapeId attributeValueId = ShapeId.fromParts(service.getId().getNamespace(), "AttributeValue");
        Optional<Shape> attributeValue = model.getShape(attributeValueId);
        if (attributeValue.isEmpty()) {
            return model; // upstream model no longer defines AttributeValue: nothing to mark (no-op).
        }
        Shape marked = Shape.shapeToBuilder(attributeValue.get())
            .addTrait(new CustomRenderedTrait())
            .build();
        return model.toBuilder().addShape(marked).build();
    }
}
