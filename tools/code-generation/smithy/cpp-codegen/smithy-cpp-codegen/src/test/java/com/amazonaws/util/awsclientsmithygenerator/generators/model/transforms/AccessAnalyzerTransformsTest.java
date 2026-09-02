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

class AccessAnalyzerTransformsTest {

    private static Model model(String sdkId, boolean withResultShape) {
        String ns = "com.amazonaws.accessanalyzer";
        StructureShape.Builder respB = StructureShape.builder().id(ns + "#GetGeneratedPolicyResponse");
        StructureShape gpr = StructureShape.builder().id(ns + "#GeneratedPolicyResult")
            .addMember("x", ShapeId.from("smithy.api#String")).build();
        if (withResultShape) {
            respB.addMember("generatedPolicyResult", gpr.getId());
        }
        StructureShape resp = respB.build();
        StructureShape req = StructureShape.builder().id(ns + "#GetGeneratedPolicyRequest").build();
        OperationShape op = OperationShape.builder().id(ns + "#GetGeneratedPolicy")
            .input(req.getId()).output(resp.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(ns + "#AccessAnalyzer").version("2019-11-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("access-analyzer")
                .cloudFormationName("AccessAnalyzer").cloudTrailEventSource("access-analyzer").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(req, resp, op, svc).addShape(gpr).assemble().unwrap();
    }

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.amazonaws.accessanalyzer#AccessAnalyzer"), ServiceShape.class);
    }

    @Test
    void renamesShapeAndMember_withJsonNamePreserved() {
        Model m = model("AccessAnalyzer", true);
        Model out = new AccessAnalyzerTransforms().transform(m, service(m));

        assertTrue(out.getShape(
            ShapeId.from("com.amazonaws.accessanalyzer#GeneratedPolicyResults")).isPresent(),
            "shape renamed to GeneratedPolicyResults");
        assertFalse(out.getShape(
            ShapeId.from("com.amazonaws.accessanalyzer#GeneratedPolicyResult")).isPresent(),
            "old shape name gone");

        StructureShape resp = out.expectShape(
            ShapeId.from("com.amazonaws.accessanalyzer#GetGeneratedPolicyResponse"), StructureShape.class);
        MemberShape member = resp.getMember("generatedPolicyResults").orElseThrow();
        assertEquals("com.amazonaws.accessanalyzer#GeneratedPolicyResults",
            member.getTarget().toString(), "member repointed to renamed shape");
        assertEquals("generatedPolicyResult",
            member.expectTrait(JsonNameTrait.class).getValue(), "wire name preserved");
        assertFalse(resp.getMember("generatedPolicyResult").isPresent(), "old member name gone");
    }

    @Test
    void noOpForOtherService() {
        Model m = model("SomethingElse", true);
        assertFalse(new AccessAnalyzerTransforms().shouldRun(service(m)));
    }

    @Test
    void throwsWhenTargetShapeAlreadyExists() {
        String ns = "com.amazonaws.accessanalyzer";
        StructureShape gpr = StructureShape.builder().id(ns + "#GeneratedPolicyResult")
            .addMember("x", ShapeId.from("smithy.api#String")).build();
        StructureShape gprs = StructureShape.builder().id(ns + "#GeneratedPolicyResults")
            .addMember("y", ShapeId.from("smithy.api#String")).build();
        StructureShape resp = StructureShape.builder().id(ns + "#GetGeneratedPolicyResponse")
            .addMember("generatedPolicyResult", gpr.getId()).build();
        StructureShape req = StructureShape.builder().id(ns + "#GetGeneratedPolicyRequest").build();
        OperationShape op = OperationShape.builder().id(ns + "#GetGeneratedPolicy")
            .input(req.getId()).output(resp.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(ns + "#AccessAnalyzer").version("2019-11-01")
            .addTrait(ServiceTrait.builder().sdkId("AccessAnalyzer").arnNamespace("access-analyzer")
                .cloudFormationName("AccessAnalyzer").cloudTrailEventSource("access-analyzer").build())
            .addOperation(op.getId()).build();
        Model m = Model.assembler().addShapes(gpr, gprs, resp, req, op, svc).assemble().unwrap();
        assertThrows(IllegalStateException.class,
            () -> new AccessAnalyzerTransforms().transform(m, service(m)));
    }
}
