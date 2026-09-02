/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.aws.traits.protocols.AwsQueryTrait;
import software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait;
import software.amazon.smithy.aws.traits.protocols.RestJson1Trait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.Trait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.junit.jupiter.api.Assertions.assertTrue;

class SupportsPresigningTransformTest {

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    /** Whether the OPERATION (not its input) carries the internal trait after transformation. */
    private static boolean stamped(Model m, String operationName) {
        return m.expectShape(ShapeId.from("com.example#" + operationName), OperationShape.class)
            .hasTrait(SupportsPresigningTrait.class);
    }

    /** Two operations (each with a distinct input) under a service carrying {@code protocolTrait}. */
    private static Model twoOpModel(Trait protocolTrait, ServiceTrait serviceTrait,
                                    String opAName, String opBName) {
        StructureShape inA = StructureShape.builder().id("com.example#" + opAName + "Request").build();
        StructureShape inB = StructureShape.builder().id("com.example#" + opBName + "Request").build();
        OperationShape opA = OperationShape.builder()
            .id("com.example#" + opAName).input(inA.getId()).build();
        OperationShape opB = OperationShape.builder()
            .id("com.example#" + opBName).input(inB.getId()).build();
        ServiceShape.Builder svc = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(protocolTrait)
            .addOperation(opA.getId()).addOperation(opB.getId());
        if (serviceTrait != null) {
            svc.addTrait(serviceTrait);
        }
        return Model.assembler().addShapes(inA, inB, opA, opB, svc.build()).assemble().unwrap();
    }

    /**
     * A normal-input op plus a no-input op (input defaults to {@code smithy.api#Unit}), under a
     * service with {@code protocolTrait}. Mirrors IAM {@code GetAccountSummary} (shared Unit input).
     */
    private static Model opPlusUnitInputModel(Trait protocolTrait, String normalOp, String unitOp) {
        StructureShape in = StructureShape.builder().id("com.example#" + normalOp + "Request").build();
        OperationShape normal = OperationShape.builder()
            .id("com.example#" + normalOp).input(in.getId()).build();
        OperationShape unit = OperationShape.builder()
            .id("com.example#" + unitOp).build();
        ServiceShape svc = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(protocolTrait)
            .addOperation(normal.getId()).addOperation(unit.getId()).build();
        return Model.assembler().addShapes(in, normal, unit, svc).assemble().unwrap();
    }

    private static ServiceTrait pollyServiceTrait() {
        return ServiceTrait.builder().sdkId("polly").arnNamespace("polly")
            .cloudFormationName("Polly").cloudTrailEventSource("polly").build();
    }

    @Test
    void queryXmlService_stampsEveryOperation() {
        Model m = twoOpModel(new AwsQueryTrait(), null, "GetUser", "CreateUser");
        Model out = SupportsPresigningTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "GetUser"), "query operation must be stamped");
        assertTrue(stamped(out, "CreateUser"), "query operation must be stamped");
    }

    @Test
    void ec2Service_stampsEveryOperation() {
        Model m = twoOpModel(new Ec2QueryTrait(), null, "DescribeThings", "RunThings");
        Model out = SupportsPresigningTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "DescribeThings"), "ec2 operation must be stamped");
        assertTrue(stamped(out, "RunThings"), "ec2 operation must be stamped");
    }

    @Test
    void queryXmlService_stampsUnitInputOperation() {
        // The regression: a Unit-input query op (e.g. iam GetAccountSummary) cannot stamp the shared
        // Unit input shape, but the operation itself carries the trait so decl+impl stay symmetric.
        Model m = opPlusUnitInputModel(new AwsQueryTrait(), "ListUsers", "GetAccountSummary");
        Model out = SupportsPresigningTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "ListUsers"), "normal-input query operation must be stamped");
        assertTrue(stamped(out, "GetAccountSummary"),
            "Unit-input query operation must be stamped on the operation itself");
    }

    @Test
    void pollyService_stampsOnlySynthesizeSpeechOperation() {
        Model m = twoOpModel(RestJson1Trait.builder().build(), pollyServiceTrait(),
            "SynthesizeSpeech", "DescribeVoices");
        Model out = SupportsPresigningTransform.asTransform().apply(m, service(m));
        assertTrue(stamped(out, "SynthesizeSpeech"), "Polly SynthesizeSpeech must be stamped");
        assertFalse(stamped(out, "DescribeVoices"),
            "Polly must stamp only SynthesizeSpeech, not other operations");
    }

    @Test
    void plainRestJsonService_stampsNothing() {
        Model m = twoOpModel(RestJson1Trait.builder().build(), null, "GetThing", "PutThing");
        Model out = SupportsPresigningTransform.asTransform().apply(m, service(m));
        assertSame(m, out, "a non-query, non-Polly rest-json service must be left untouched");
        assertFalse(stamped(out, "GetThing"));
        assertFalse(stamped(out, "PutThing"));
    }
}
