/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.assertEquals;

class ShapeUtilTest {

    @Test
    void getResultSuffix_operationNamedLikeResult_doesNotForceSdkResult() {
        // A sibling operation named "FooResult" must not count as a collision (else Foo wrongly -> SdkResult).
        StructureShape fooOut = StructureShape.builder().id("com.example#FooResponse").build();
        OperationShape foo = OperationShape.builder()
            .id("com.example#Foo").output(fooOut.getId()).build();
        StructureShape fooResultOut = StructureShape.builder().id("com.example#FooResultResponse").build();
        OperationShape fooResult = OperationShape.builder()
            .id("com.example#FooResult").output(fooResultOut.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#S").version("2024-01-01")
            .addOperation(foo.getId()).addOperation(fooResult.getId()).build();
        Model model = Model.builder().addShapes(fooOut, foo, fooResultOut, fooResult, service).build();

        assertEquals("Result", ShapeUtil.getResultSuffix(model, foo, "example"));
    }

    @Test
    void getResultSuffix_dataShapeCollision_stillUsesSdkResult() {
        // A real data shape named "FooResult" is still a collision -> SdkResult (only non-data shapes excluded).
        StructureShape collide = StructureShape.builder().id("com.example#FooResult").build();
        StructureShape fooOut = StructureShape.builder().id("com.example#FooResponse").build();
        OperationShape foo = OperationShape.builder()
            .id("com.example#Foo").output(fooOut.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#S").version("2024-01-01")
            .addOperation(foo.getId()).build();
        Model model = Model.builder().addShapes(collide, fooOut, foo, service).build();

        assertEquals("SdkResult", ShapeUtil.getResultSuffix(model, foo, "example"));
    }
}
