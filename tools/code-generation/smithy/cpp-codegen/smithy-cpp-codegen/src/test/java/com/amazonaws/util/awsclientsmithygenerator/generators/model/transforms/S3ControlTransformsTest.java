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

class S3ControlTransformsTest {
    static final String NS = "com.amazonaws.s3control";

    static Model model(String sdkId) {
        StructureShape result = StructureShape.builder().id(NS + "#CreateAccessPointResult")
            .addMember("AccessPointArn", ShapeId.from("smithy.api#String")).build();
        StructureShape req = StructureShape.builder().id(NS + "#CreateAccessPointRequest").build();
        OperationShape op = OperationShape.builder().id(NS + "#CreateAccessPoint")
            .input(req.getId()).output(result.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(NS + "#AWSS3Control").version("2018-08-20")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("s3")
                .cloudFormationName("S3Control").cloudTrailEventSource("s3control.amazonaws.com").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(req, result, op, svc).assemble().unwrap();
    }

    static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from(NS + "#AWSS3Control"), ServiceShape.class);
    }

    @Test
    void marksResultShapesWithHostIdTrait() {
        Model m = model("S3 Control");
        Model out = S3ControlTransforms.asTransform().apply(m, service(m));
        assertTrue(out.expectShape(ShapeId.from(NS + "#CreateAccessPointResult"))
            .hasTrait(TopLevelHostIdTrait.class), "result shape marked");
    }

    @Test
    void noOpForOtherService() {
        Model m = model("SomethingElse");
        Model out = S3ControlTransforms.asTransform().apply(m, service(m));
        assertSame(m, out);
    }
}
