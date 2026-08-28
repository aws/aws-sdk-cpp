/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
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

    @Test
    void renamesCopyObjectResultToDetails() {
        ServiceShape svc = s3Service("S3");
        StructureShape copyResult = StructureShape.builder().id(NS + "#CopyObjectResult")
            .addMember("ETag", ShapeId.from("smithy.api#String")).build();
        Model m = modelWith(svc, copyResult);
        Model out = S3Transforms.asTransform().apply(m, svc);
        assertTrue(out.getShape(ShapeId.from(NS + "#CopyObjectResultDetails")).isPresent(),
            "renamed to CopyObjectResultDetails");
        assertFalse(out.getShape(ShapeId.from(NS + "#CopyObjectResult")).isPresent(),
            "old name gone");
    }

    @Test
    void copyObjectResultRename_throwsOnCollision() {
        ServiceShape svc = s3Service("S3");
        StructureShape copyResult = StructureShape.builder().id(NS + "#CopyObjectResult")
            .addMember("ETag", ShapeId.from("smithy.api#String")).build();
        StructureShape details = StructureShape.builder().id(NS + "#CopyObjectResultDetails")
            .addMember("Other", ShapeId.from("smithy.api#String")).build();
        Model m = modelWith(svc, copyResult, details);
        assertThrows(IllegalStateException.class, () -> S3Transforms.asTransform().apply(m, svc));
    }

    @Test
    void addsExpiresStringMemberAndDeprecatesExpires() {
        ServiceShape svc = s3Service("S3");
        software.amazon.smithy.model.shapes.TimestampShape expires =
            software.amazon.smithy.model.shapes.TimestampShape.builder()
                .id(NS + "#Expires").build();
        StructureShape getObjectOutput = StructureShape.builder().id(NS + "#GetObjectOutput")
            .addMember("Expires", expires.getId(), b -> b
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("Expires"))
                .addTrait(new software.amazon.smithy.model.traits.DocumentationTrait("The date and time at which the object is no longer cacheable.")))
            .build();
        Model m = modelWith(svc, expires, getObjectOutput);
        Model out = S3Transforms.asTransform().apply(m, svc);

        assertTrue(out.getShape(ShapeId.from(NS + "#ExpiresString")).isPresent(),
            "ExpiresString string shape injected");
        StructureShape outShape = out.expectShape(ShapeId.from(NS + "#GetObjectOutput"), StructureShape.class);
        MemberShape expiresString = outShape.getMember("ExpiresString").orElseThrow();
        assertEquals(NS + "#ExpiresString", expiresString.getTarget().toString());
        assertEquals("Expires",
            expiresString.expectTrait(software.amazon.smithy.model.traits.HttpHeaderTrait.class).getValue(),
            "ExpiresString reads the same Expires header");
        MemberShape expiresMember = outShape.getMember("Expires").orElseThrow();
        assertTrue(expiresMember.expectTrait(software.amazon.smithy.model.traits.DocumentationTrait.class)
            .getValue().startsWith("Deprecated: Please use ExpiresString instead."),
            "Expires member carries the deprecation note");
    }
}
