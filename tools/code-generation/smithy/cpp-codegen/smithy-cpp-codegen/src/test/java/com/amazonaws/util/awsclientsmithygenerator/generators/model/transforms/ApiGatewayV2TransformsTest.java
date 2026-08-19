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

class ApiGatewayV2TransformsTest {

    private static StructureShape reqWithBody(String name) {
        return StructureShape.builder()
            .id("com.example#" + name)
            .addMember(MemberShape.builder().id("com.example#" + name + "$Body")
                .target("smithy.api#String").build())
            .build();
    }

    private static Model model(String sdkId) {
        StructureShape importApi = reqWithBody("ImportApiRequest");
        StructureShape reimportApi = reqWithBody("ReimportApiRequest");
        StructureShape out = StructureShape.builder().id("com.example#EmptyOut").build();
        OperationShape op1 = OperationShape.builder().id("com.example#ImportApi")
            .input(importApi.getId()).output(out.getId()).build();
        OperationShape op2 = OperationShape.builder().id("com.example#ReimportApi")
            .input(reimportApi.getId()).output(out.getId()).build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("apigatewayv2")
                .cloudFormationName("ApiGatewayV2").cloudTrailEventSource("apigatewayv2").build())
            .addOperation(op1.getId()).addOperation(op2.getId())
            .build();
        return Model.assembler().addShapes(importApi, reimportApi, out, op1, op2, service)
            .assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    @Test
    void renamesBody() {
        Model m = model("ApiGatewayV2");
        Model out = ApiGatewayV2Transforms.asTransform().apply(m, service(m));
        for (String name : new String[]{"ImportApiRequest", "ReimportApiRequest"}) {
            StructureShape r = out.expectShape(ShapeId.from("com.example#" + name), StructureShape.class);
            assertTrue(r.getMember("requestBody").isPresent(), name);
            assertTrue(r.getMember("Body").isEmpty(), name);
        }
    }

    @Test
    void noOpForOtherService() {
        Model m = model("SomeOther");
        Model out = ApiGatewayV2Transforms.asTransform().apply(m, service(m));
        assertSame(m, out);
    }
}
