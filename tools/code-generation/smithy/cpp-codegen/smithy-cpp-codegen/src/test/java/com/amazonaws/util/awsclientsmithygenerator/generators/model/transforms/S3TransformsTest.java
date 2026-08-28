/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.*;

class S3TransformsTest {

    static final String NS = "com.amazonaws.s3";

    static ServiceShape s3Service(String sdkId) {
        return ServiceShape.builder().id(NS + "#AmazonS3").version("2006-03-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("s3")
                .cloudFormationName("S3").cloudTrailEventSource("s3.amazonaws.com").build())
            .build();
    }

    static Model modelWith(ServiceShape svc, software.amazon.smithy.model.shapes.Shape... shapes) {
        Model.Builder b = Model.builder().addShape(svc);
        for (software.amazon.smithy.model.shapes.Shape s : shapes) b.addShape(s);
        return b.build();
    }

    @Test
    void noOpForOtherService() {
        ServiceShape svc = ServiceShape.builder().id("com.amazonaws.other#Other").version("1")
            .addTrait(ServiceTrait.builder().sdkId("Other").arnNamespace("other")
                .cloudFormationName("Other").cloudTrailEventSource("other").build()).build();
        Model m = Model.builder().addShape(svc).build();
        Model out = S3Transforms.asTransform().apply(m, svc);
        assertSame(m, out, "non-s3 service must be untouched");
    }

    @Test
    void noOpForS3WhenNothingToDo() {
        ServiceShape svc = s3Service("S3");
        Model m = modelWith(svc);
        // Scaffold has no sub-transforms yet: s3 model returns unchanged (structurally equal).
        Model out = S3Transforms.asTransform().apply(m, svc);
        assertNotNull(out);
        assertTrue(out.getShape(ShapeId.from(NS + "#AmazonS3")).isPresent());
    }
}
