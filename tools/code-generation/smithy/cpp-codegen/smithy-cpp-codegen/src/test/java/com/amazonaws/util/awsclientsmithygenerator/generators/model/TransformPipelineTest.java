/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;

import java.util.ArrayList;
import java.util.List;
import java.util.function.BiFunction;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertSame;

class TransformPipelineTest {

    /** Wraps a transform body as an always-run transform (shouldRun defaults to false otherwise). */
    private static ModelTransform alwaysRun(BiFunction<Model, ServiceShape, Model> body) {
        return new ModelTransform() {
            @Override
            public boolean shouldRun(ServiceShape service) {
                return true;
            }
            @Override
            public Model transform(Model model, ServiceShape service) {
                return body.apply(model, service);
            }
        };
    }

    @Test
    void emptyPipelineReturnsModelUnchanged() {
        Model model = Model.builder()
            .addShape(ServiceShape.builder().id("com.example#TestService").version("2024-01-01").build())
            .build();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        TransformPipeline pipeline = new TransformPipeline(List.of());
        Model result = pipeline.apply(model, service);

        assertSame(model, result);
    }

    @Test
    void transformsExecuteInOrder() {
        Model model = Model.builder()
            .addShape(ServiceShape.builder().id("com.example#TestService").version("2024-01-01").build())
            .build();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        List<String> executionOrder = new ArrayList<>();
        ModelTransform first = alwaysRun((m, s) -> { executionOrder.add("first"); return m; });
        ModelTransform second = alwaysRun((m, s) -> { executionOrder.add("second"); return m; });

        TransformPipeline pipeline = new TransformPipeline(List.of(first, second));
        pipeline.apply(model, service);

        assertEquals(List.of("first", "second"), executionOrder);
    }

    @Test
    void transformReceivesOutputOfPrevious() {
        Model original = Model.builder()
            .addShape(ServiceShape.builder().id("com.example#TestService").version("2024-01-01").build())
            .build();
        ServiceShape service = original.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        Model withExtra = original.toBuilder()
            .addShape(ServiceShape.builder().id("com.example#Extra").version("2024-01-01").build())
            .build();

        ModelTransform addShape = alwaysRun((m, s) -> withExtra);
        ModelTransform checkShape = alwaysRun((m, s) -> {
            // This transform should see the shape added by the first
            m.expectShape(ShapeId.from("com.example#Extra"));
            return m;
        });

        TransformPipeline pipeline = new TransformPipeline(List.of(addShape, checkShape));
        Model result = pipeline.apply(original, service);

        // Final result is the model from the last transform
        assertSame(withExtra, result);
    }

    @Test
    void skipsTransformThatDoesNotOptIn() {
        Model model = Model.builder()
            .addShape(ServiceShape.builder().id("com.example#TestService").version("2024-01-01").build())
            .build();
        ServiceShape service = model.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);

        List<String> executionOrder = new ArrayList<>();
        // A bare transform inherits shouldRun == false, so the pipeline must skip it.
        ModelTransform notOptedIn = (m, s) -> { executionOrder.add("skipped"); return m; };
        ModelTransform optedIn = alwaysRun((m, s) -> { executionOrder.add("ran"); return m; });

        new TransformPipeline(List.of(notOptedIn, optedIn)).apply(model, service);

        assertEquals(List.of("ran"), executionOrder);
    }
}
