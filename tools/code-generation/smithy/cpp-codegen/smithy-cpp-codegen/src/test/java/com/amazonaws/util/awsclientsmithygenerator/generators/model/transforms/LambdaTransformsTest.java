/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;

import static org.junit.jupiter.api.Assertions.*;

class LambdaTransformsTest {

    private static Model lambdaModel(String sdkId) {
        StructureShape invokeReq = StructureShape.builder().id("com.example#InvocationRequest").build();
        StructureShape invokeRes = StructureShape.builder().id("com.example#InvocationResponse").build();
        OperationShape invoke = OperationShape.builder()
            .id("com.example#Invoke").input(invokeReq.getId()).output(invokeRes.getId()).build();

        StructureShape asyncReq = StructureShape.builder().id("com.example#InvokeAsyncRequest").build();
        StructureShape asyncRes = StructureShape.builder().id("com.example#InvokeAsyncResult").build();
        OperationShape invokeAsync = OperationShape.builder()
            .id("com.example#InvokeAsync").input(asyncReq.getId()).output(asyncRes.getId()).build();

        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace(sdkId.toLowerCase())
                .cloudFormationName(sdkId).cloudTrailEventSource(sdkId.toLowerCase()).build())
            .addOperation(invoke.getId()).addOperation(invokeAsync.getId())
            .build();
        return Model.assembler()
            .addShapes(invokeReq, invokeRes, invoke, asyncReq, asyncRes, invokeAsync, service)
            .assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    @Test
    void removesInvokeAsyncOperationAndShapes() {
        Model m = lambdaModel("Lambda");
        Model out = LambdaTransforms.asTransform().apply(m, service(m));

        assertTrue(out.getShape(ShapeId.from("com.example#InvokeAsync")).isEmpty());
        assertTrue(out.getShape(ShapeId.from("com.example#InvokeAsyncRequest")).isEmpty());
        assertTrue(out.getShape(ShapeId.from("com.example#InvokeAsyncResult")).isEmpty());
        // Invoke and its shapes are untouched
        assertTrue(out.getShape(ShapeId.from("com.example#Invoke")).isPresent());
        assertTrue(out.getShape(ShapeId.from("com.example#InvocationRequest")).isPresent());
    }

    @Test
    void noOpForOtherService() {
        Model m = lambdaModel("SomeOther");
        Model out = LambdaTransforms.asTransform().apply(m, service(m));
        assertSame(m, out);
    }
}
