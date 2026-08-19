/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.EnumDefinition;
import software.amazon.smithy.model.traits.EnumTrait;

import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

class SqsTransformsTest {

    private static final List<String> ADDED = List.of(
        "SentTimestamp", "ApproximateFirstReceiveTimestamp", "ApproximateReceiveCount", "SenderId");

    private static ServiceShape sqsService() {
        return ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId("SQS").arnNamespace("sqs")
                .cloudFormationName("SQS").cloudTrailEventSource("sqs").build())
            .build();
    }

    @Test
    void addsValuesToEnumShape() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#QueueAttributeName")
            .addMember("All", "All")
            .addMember("Policy", "Policy")
            .build();
        Model m = Model.assembler().addShapes(enumShape, sqsService()).assemble().unwrap();
        ServiceShape svc = m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        Model out = SqsTransforms.asTransform().apply(m, svc);
        List<String> values = EnumRenderer.getEnumValues(
            out.expectShape(ShapeId.from("com.example#QueueAttributeName")));
        assertTrue(values.containsAll(ADDED));
        assertTrue(values.contains("All")); // originals preserved
    }

    @Test
    void addsValuesToStringEnumTrait() {
        StringShape s = StringShape.builder()
            .id("com.example#QueueAttributeName")
            .addTrait(EnumTrait.builder()
                .addEnum(EnumDefinition.builder().value("All").build())
                .addEnum(EnumDefinition.builder().value("Policy").build())
                .build())
            .build();
        Model m = Model.assembler().addShapes(s, sqsService()).assemble().unwrap();
        ServiceShape svc = m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        Model out = SqsTransforms.asTransform().apply(m, svc);
        List<String> values = EnumRenderer.getEnumValues(
            out.expectShape(ShapeId.from("com.example#QueueAttributeName")));
        assertTrue(values.containsAll(ADDED));
    }

    @Test
    void appendValuesRejectsNonIdentifierValue() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#QueueAttributeName").addMember("All", "All").build();
        IllegalArgumentException ex = assertThrows(IllegalArgumentException.class,
            () -> TransformSupport.appendValues(enumShape, List.of("bad-value")));
        assertTrue(ex.getMessage().contains("bad-value"));
        assertTrue(ex.getMessage().contains("com.example#QueueAttributeName"));
    }

    @Test
    void idempotent() {
        EnumShape enumShape = EnumShape.builder()
            .id("com.example#QueueAttributeName").addMember("All", "All").build();
        Model m = Model.assembler().addShapes(enumShape, sqsService()).assemble().unwrap();
        ServiceShape svc = m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        Model once = SqsTransforms.asTransform().apply(m, svc);
        Model twice = SqsTransforms.asTransform().apply(once, svc);
        long senderId = EnumRenderer.getEnumValues(
                twice.expectShape(ShapeId.from("com.example#QueueAttributeName")))
            .stream().filter("SenderId"::equals).count();
        assertEquals(1, senderId);
    }
}
