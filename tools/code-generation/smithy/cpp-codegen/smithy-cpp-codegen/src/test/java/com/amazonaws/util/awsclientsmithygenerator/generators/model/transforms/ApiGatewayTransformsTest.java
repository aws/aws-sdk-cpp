/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.JsonNameTrait;

import static org.junit.jupiter.api.Assertions.*;

class ApiGatewayTransformsTest {

    private static Model apiGatewayModel(String sdkId) {
        StructureShape testInvokeMethod = StructureShape.builder()
            .id("com.example#TestInvokeMethodRequest")
            .addMember(MemberShape.builder().id("com.example#TestInvokeMethodRequest$body")
                .target("smithy.api#String").build())
            .addMember(MemberShape.builder().id("com.example#TestInvokeMethodRequest$headers")
                .target("smithy.api#String").build())
            .build();
        StructureShape testInvokeAuth = StructureShape.builder()
            .id("com.example#TestInvokeAuthorizerRequest")
            .addMember(MemberShape.builder().id("com.example#TestInvokeAuthorizerRequest$body")
                .target("smithy.api#String").build())
            .addMember(MemberShape.builder().id("com.example#TestInvokeAuthorizerRequest$headers")
                .target("smithy.api#String").build())
            .build();
        StructureShape out = StructureShape.builder().id("com.example#EmptyOut").build();
        OperationShape op1 = OperationShape.builder().id("com.example#TestInvokeMethod")
            .input(testInvokeMethod.getId()).output(out.getId()).build();
        OperationShape op2 = OperationShape.builder().id("com.example#TestInvokeAuthorizer")
            .input(testInvokeAuth.getId()).output(out.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("apigateway")
                .cloudFormationName("ApiGateway").cloudTrailEventSource("apigateway").build())
            .addOperation(op1.getId()).addOperation(op2.getId())
            .build();
        return Model.assembler()
            .addShapes(testInvokeMethod, testInvokeAuth, out, op1, op2, service)
            .assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    @Test
    void renamesBodyAndHeaders() {
        Model m = apiGatewayModel("API Gateway");
        Model out = new ApiGatewayTransforms().transform(m, service(m));

        StructureShape r = out.expectShape(
            ShapeId.from("com.example#TestInvokeMethodRequest"), StructureShape.class);
        assertTrue(r.getMember("requestBody").isPresent());
        assertTrue(r.getMember("requestHeaders").isPresent());
        assertTrue(r.getMember("body").isEmpty());
        assertTrue(r.getMember("headers").isEmpty());
        assertEquals("body", r.getMember("requestBody").orElseThrow()
            .expectTrait(JsonNameTrait.class).getValue(), "body wire key preserved");
        assertEquals("headers", r.getMember("requestHeaders").orElseThrow()
            .expectTrait(JsonNameTrait.class).getValue(), "headers wire key preserved");

        StructureShape a = out.expectShape(
            ShapeId.from("com.example#TestInvokeAuthorizerRequest"), StructureShape.class);
        assertTrue(a.getMember("requestBody").isPresent());
        assertTrue(a.getMember("requestHeaders").isPresent());
    }

    @Test
    void noOpForOtherService() {
        Model m = apiGatewayModel("SomeOther");
        assertFalse(new ApiGatewayTransforms().shouldRun(service(m)));
    }
}
