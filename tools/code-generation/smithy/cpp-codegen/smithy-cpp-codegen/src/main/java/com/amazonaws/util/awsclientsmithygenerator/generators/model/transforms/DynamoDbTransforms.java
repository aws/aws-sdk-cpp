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
 * DynamoDB C2J parity: marks the AttributeValue shape with {@link CustomRenderedTrait} so
 * ShapeClassifier drops it from the default sub-object set. AttributeValue is a bespoke document type
 * emitted verbatim by DynamoDbRenderer; without this the generic SubObjectRenderer would resolve the
 * same AttributeValue.h path and append, concatenating a generic tagged-union struct onto it. The
 * shape stays in the model so member references still resolve. Self-guards on service name dynamodb;
 * no-op when AttributeValue is absent.
 */
public final class DynamoDbTransforms implements ModelTransform {

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "dynamodb".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
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
