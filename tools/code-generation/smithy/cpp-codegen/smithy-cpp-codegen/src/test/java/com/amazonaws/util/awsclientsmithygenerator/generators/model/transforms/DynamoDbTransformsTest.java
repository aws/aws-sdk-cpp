/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.UnionShape;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies {@link DynamoDbTransforms} stamps {@link CustomRenderedTrait} onto DynamoDB's
 * {@code AttributeValue} shape and is a no-op for other services / absent shapes.
 *
 * <p>Also serves as the empirical proof that Smithy accepts an in-memory trait <em>instance</em>
 * with a synthetic, undefined id ({@code aws.cpp.internal#customRendered}) added inside a transform
 * via {@code shapeToBuilder().addTrait(...)} + {@code model.toBuilder().build()} — no model-level
 * trait definition required, because that build path does not run trait-definition validation.
 */
class DynamoDbTransformsTest {

    private static final String NS = "com.amazonaws.dynamodb";

    private static Model model(String sdkId, boolean withAttributeValue) {
        StringShape str = StringShape.builder().id(NS + "#Str").build();
        StructureShape.Builder inputB = StructureShape.builder().id(NS + "#PutItemInput");
        Model.Builder builder = Model.builder().addShape(str);
        if (withAttributeValue) {
            UnionShape attributeValue = UnionShape.builder()
                .id(NS + "#AttributeValue")
                .addMember("s", str.getId())
                .build();
            inputB.addMember("item", attributeValue.getId());
            builder.addShape(attributeValue);
        }
        StructureShape input = inputB.build();
        StructureShape output = StructureShape.builder().id(NS + "#PutItemOutput").build();
        OperationShape op = OperationShape.builder()
            .id(NS + "#PutItem").input(input.getId()).output(output.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id(NS + "#DynamoDB_20120810").version("2012-08-10")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("dynamodb")
                .cloudFormationName("DynamoDB").cloudTrailEventSource("dynamodb").build())
            .addOperation(op.getId()).build();
        return builder.addShapes(input, output, op, service).build();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from(NS + "#DynamoDB_20120810"), ServiceShape.class);
    }

    @Test
    void marksAttributeValueForDynamoDb() {
        Model m = model("DynamoDB", true);
        Model out = DynamoDbTransforms.asTransform().apply(m, service(m));

        assertTrue(out.expectShape(ShapeId.from(NS + "#AttributeValue"))
                .hasTrait(CustomRenderedTrait.class),
            "AttributeValue must be marked @customRendered for dynamodb");
    }

    @Test
    void noOpForOtherService() {
        // A non-dynamodb service (sdkId resolves via getSmithyServiceName) is untouched.
        Model m = model("Kinesis", true);
        Model out = DynamoDbTransforms.asTransform().apply(m, service(m));
        assertSame(m, out, "transform must be a no-op for non-dynamodb services");
        assertFalse(out.expectShape(ShapeId.from(NS + "#AttributeValue"))
                .hasTrait(CustomRenderedTrait.class),
            "non-dynamodb AttributeValue must not be marked");
    }

    @Test
    void noOpWhenAttributeValueAbsent() {
        Model m = model("DynamoDB", false);
        Model out = DynamoDbTransforms.asTransform().apply(m, service(m));
        assertSame(m, out, "transform must be a no-op when AttributeValue is absent");
    }
}
