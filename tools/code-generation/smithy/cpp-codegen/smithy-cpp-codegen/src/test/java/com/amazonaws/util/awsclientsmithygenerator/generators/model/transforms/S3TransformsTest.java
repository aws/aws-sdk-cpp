/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.TimestampShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.HttpHeaderTrait;

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

    /**
     * Builds an S3 model with a single PutObject-style operation whose input and output both
     * carry an {@code Expires} member (initially a {@code string}, matching the current model),
     * mirroring the operation-wiring pattern in {@code AccessAnalyzerTransformsTest}.
     */
    private static Model expiresModel() {
        Shape expires = StringShape.builder().id(NS + "#Expires").build();
        StructureShape input = StructureShape.builder().id(NS + "#PutObjectRequest")
            .addMember("Expires", expires.getId(), b -> b
                .addTrait(new HttpHeaderTrait("Expires"))
                .addTrait(new DocumentationTrait("The date and time at which the object is no longer cacheable.")))
            .build();
        StructureShape output = StructureShape.builder().id(NS + "#GetObjectOutput")
            .addMember("Expires", expires.getId(), b -> b
                .addTrait(new HttpHeaderTrait("Expires"))
                .addTrait(new DocumentationTrait("The date and time at which the object is no longer cacheable.")))
            .build();
        OperationShape op = OperationShape.builder().id(NS + "#GetObject")
            .input(input.getId()).output(output.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(NS + "#AmazonS3").version("2006-03-01")
            .addTrait(ServiceTrait.builder().sdkId("S3").arnNamespace("s3")
                .cloudFormationName("S3").cloudTrailEventSource("s3.amazonaws.com").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(expires, input, output, op, svc).assemble().unwrap();
    }

    private static ServiceShape expiresService(Model m) {
        return m.expectShape(ShapeId.from(NS + "#AmazonS3"), ServiceShape.class);
    }

    @Test
    void retypesExpiresShapeToTimestamp() {
        Model m = expiresModel();
        assertTrue(m.expectShape(ShapeId.from(NS + "#Expires")).isStringShape(),
            "precondition: Expires starts as a string");
        Model out = S3Transforms.asTransform().apply(m, expiresService(m));
        assertTrue(out.expectShape(ShapeId.from(NS + "#Expires")) instanceof TimestampShape,
            "Expires retyped to a timestamp shape");
        // Both input and output Expires members now target the timestamp.
        StructureShape input = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        StructureShape output = out.expectShape(ShapeId.from(NS + "#GetObjectOutput"), StructureShape.class);
        assertTrue(out.expectShape(input.getMember("Expires").orElseThrow().getTarget()) instanceof TimestampShape);
        assertTrue(out.expectShape(output.getMember("Expires").orElseThrow().getTarget()) instanceof TimestampShape);
    }

    @Test
    void addsExpiresStringToOutputAndDeprecatesExpires() {
        Model m = expiresModel();
        Model out = S3Transforms.asTransform().apply(m, expiresService(m));

        assertTrue(out.getShape(ShapeId.from(NS + "#ExpiresString")).isPresent(),
            "ExpiresString string shape injected");
        StructureShape outShape = out.expectShape(ShapeId.from(NS + "#GetObjectOutput"), StructureShape.class);
        MemberShape expiresString = outShape.getMember("ExpiresString").orElseThrow();
        assertEquals(NS + "#ExpiresString", expiresString.getTarget().toString());
        assertEquals("Expires", expiresString.expectTrait(HttpHeaderTrait.class).getValue(),
            "ExpiresString reads the same Expires header");
        MemberShape expiresMember = outShape.getMember("Expires").orElseThrow();
        assertTrue(expiresMember.expectTrait(DocumentationTrait.class)
            .getValue().startsWith("Deprecated: Please use ExpiresString instead."),
            "Expires member carries the deprecation note");
    }

    @Test
    void doesNotAddExpiresStringToInput() {
        Model m = expiresModel();
        Model out = S3Transforms.asTransform().apply(m, expiresService(m));

        StructureShape input = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        assertFalse(input.getMember("ExpiresString").isPresent(),
            "input shape must not gain ExpiresString");
        MemberShape inputExpires = input.getMember("Expires").orElseThrow();
        assertFalse(inputExpires.getTrait(DocumentationTrait.class)
                .map(DocumentationTrait::getValue).orElse("").startsWith("Deprecated:"),
            "input Expires must not carry the deprecation note");
    }

    @Test
    void appendsMissingBucketLocationConstraintRegions() {
        ServiceShape svc = s3Service("S3");
        // Model BucketLocationConstraint as an EnumShape with an existing region.
        software.amazon.smithy.model.shapes.EnumShape enumShape =
            software.amazon.smithy.model.shapes.EnumShape.builder()
                .id(NS + "#BucketLocationConstraint")
                .addMember("us_west_2", "us-west-2")
                .build();
        Model m = modelWith(svc, enumShape);
        Model out = S3Transforms.asTransform().apply(m, svc);

        software.amazon.smithy.model.shapes.EnumShape result = out.expectShape(
            ShapeId.from(NS + "#BucketLocationConstraint"),
            software.amazon.smithy.model.shapes.EnumShape.class);
        // EnumRenderer.getEnumValues() sanitizes '-' to '_', so assert on the raw wire values here.
        java.util.Collection<String> wireValues = result.getEnumValues().values();
        assertTrue(wireValues.contains("us-east-1"), "us-east-1 appended");
        assertTrue(wireValues.contains("us-iso-west-1"), "us-iso-west-1 appended");
        assertTrue(wireValues.contains("us-west-2"), "existing value preserved");
        // Member names are identifier-safe, matching the existing model form (hyphens -> underscores).
        assertTrue(result.getAllMembers().containsKey("us_east_1"), "identifier-safe member name");
        assertTrue(result.getAllMembers().containsKey("us_iso_west_1"), "identifier-safe member name");
    }

    @Test
    void bucketLocationConstraintExpansionIsIdempotent() {
        ServiceShape svc = s3Service("S3");
        software.amazon.smithy.model.shapes.EnumShape enumShape =
            software.amazon.smithy.model.shapes.EnumShape.builder()
                .id(NS + "#BucketLocationConstraint")
                .addMember("us_west_2", "us-west-2")
                .build();
        Model m = modelWith(svc, enumShape);
        Model once = S3Transforms.asTransform().apply(m, svc);
        Model twice = S3Transforms.asTransform().apply(once, svc);
        software.amazon.smithy.model.shapes.EnumShape result = twice.expectShape(
            ShapeId.from(NS + "#BucketLocationConstraint"),
            software.amazon.smithy.model.shapes.EnumShape.class);
        long usEast1 = result.getEnumValues().values().stream().filter("us-east-1"::equals).count();
        assertEquals(1, usEast1, "re-applying must not duplicate appended values");
    }

    @Test
    void normalizesReplicationStatusCompleteToCompleted() {
        ServiceShape svc = s3Service("S3");
        software.amazon.smithy.model.shapes.EnumShape enumShape =
            software.amazon.smithy.model.shapes.EnumShape.builder()
                .id(NS + "#ReplicationStatus")
                .addMember("COMPLETE", "COMPLETE")
                .addMember("PENDING", "PENDING")
                .addMember("FAILED", "FAILED")
                .addMember("REPLICA", "REPLICA")
                .addMember("COMPLETED", "COMPLETED")
                .build();
        Model m = modelWith(svc, enumShape);
        Model out = S3Transforms.asTransform().apply(m, svc);

        java.util.List<String> values = com.amazonaws.util.awsclientsmithygenerator.generators.model
            .EnumRenderer.getEnumValues(out.expectShape(ShapeId.from(NS + "#ReplicationStatus")));
        assertEquals(java.util.List.of("COMPLETED", "PENDING", "FAILED", "REPLICA"), values,
            "COMPLETE rewritten to COMPLETED, duplicate removed, order preserved");
    }

    @Test
    void injectsGetObjectId2AndRequestId() {
        ServiceShape svc = s3Service("S3");
        StructureShape getObjectOutput = StructureShape.builder().id(NS + "#GetObjectOutput")
            .addMember("ETag", ShapeId.from("smithy.api#String")).build();
        Model m = modelWith(svc, getObjectOutput);
        Model out = S3Transforms.asTransform().apply(m, svc);

        assertTrue(out.getShape(ShapeId.from(NS + "#ObjectId2")).isPresent());
        assertTrue(out.getShape(ShapeId.from(NS + "#ObjectRequestId")).isPresent());
        StructureShape outShape = out.expectShape(ShapeId.from(NS + "#GetObjectOutput"), StructureShape.class);
        MemberShape id2 = outShape.getMember("Id2").orElseThrow();
        assertEquals(NS + "#ObjectId2", id2.getTarget().toString());
        assertEquals("x-amz-id-2",
            id2.expectTrait(software.amazon.smithy.model.traits.HttpHeaderTrait.class).getValue());
        MemberShape reqId = outShape.getMember("RequestId").orElseThrow();
        assertEquals("x-amz-request-id",
            reqId.expectTrait(software.amazon.smithy.model.traits.HttpHeaderTrait.class).getValue());
    }

    /**
     * Builds an S3 model with a single operation whose input carries two ordinary members, so the
     * appended-last ordering of the injected access-log tag member can be asserted.
     */
    private static Model accessLogModel() {
        StructureShape input = StructureShape.builder().id(NS + "#PutObjectRequest")
            .addMember("Bucket", ShapeId.from("smithy.api#String"))
            .addMember("Key", ShapeId.from("smithy.api#String"))
            .build();
        StructureShape output = StructureShape.builder().id(NS + "#PutObjectOutput")
            .addMember("ETag", ShapeId.from("smithy.api#String"))
            .build();
        OperationShape op = OperationShape.builder().id(NS + "#PutObject")
            .input(input.getId()).output(output.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(NS + "#AmazonS3").version("2006-03-01")
            .addTrait(ServiceTrait.builder().sdkId("S3").arnNamespace("s3")
                .cloudFormationName("S3").cloudTrailEventSource("s3.amazonaws.com").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(input, output, op, svc).assemble().unwrap();
    }

    private static ServiceShape s3ServiceOf(Model m) {
        return m.expectShape(ShapeId.from(NS + "#AmazonS3"), ServiceShape.class);
    }

    @Test
    void injectsCustomizedAccessLogTagIntoRequestAsStringMapAppendedLast() {
        Model m = accessLogModel();
        Model out = S3Transforms.asTransform().apply(m, s3ServiceOf(m));

        StructureShape input = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        MemberShape tag = input.getMember("customizedAccessLogTag").orElseThrow();

        // Target must be a Map<String,String> (both key and value render as Aws::String).
        software.amazon.smithy.model.shapes.MapShape mapShape = out.expectShape(
            tag.getTarget(), software.amazon.smithy.model.shapes.MapShape.class);
        assertEquals("smithy.api#String", mapShape.getKey().getTarget().toString());
        assertEquals("smithy.api#String", mapShape.getValue().getTarget().toString());

        // Appended after all existing members, preserving prior order.
        java.util.List<String> order = new java.util.ArrayList<>(input.getAllMembers().keySet());
        assertEquals(java.util.List.of("Bucket", "Key", "customizedAccessLogTag"), order,
            "access-log tag member appended last");
    }

    @Test
    void doesNotInjectCustomizedAccessLogTagIntoOutput() {
        Model m = accessLogModel();
        Model out = S3Transforms.asTransform().apply(m, s3ServiceOf(m));

        StructureShape output = out.expectShape(ShapeId.from(NS + "#PutObjectOutput"), StructureShape.class);
        assertFalse(output.getMember("customizedAccessLogTag").isPresent(),
            "output shape must not gain the access-log tag member");
    }

    @Test
    void accessLogTagInjectionIsIdempotent() {
        Model m = accessLogModel();
        Model once = S3Transforms.asTransform().apply(m, s3ServiceOf(m));
        Model twice = S3Transforms.asTransform().apply(once, s3ServiceOf(once));

        StructureShape input = twice.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        long count = input.getAllMembers().keySet().stream()
            .filter("customizedAccessLogTag"::equals).count();
        assertEquals(1, count, "re-applying must not duplicate the injected member");
    }
}
