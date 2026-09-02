/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.IntegerShape;
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
        assertFalse(new S3Transforms().shouldRun(svc), "non-s3 service must not run");
    }

    @Test
    void noOpForS3WhenNothingToDo() {
        ServiceShape svc = s3Service("S3");
        Model m = modelWith(svc);
        // Scaffold has no sub-transforms yet: s3 model returns unchanged (structurally equal).
        Model out = new S3Transforms().transform(m, svc);
        assertNotNull(out);
        assertTrue(out.getShape(ShapeId.from(NS + "#AmazonS3")).isPresent());
    }

    static ServiceShape s3RestXmlService(String sdkId) {
        return ServiceShape.builder().id(NS + "#AmazonS3").version("2006-03-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("s3")
                .cloudFormationName("S3").cloudTrailEventSource("s3.amazonaws.com").build())
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build())
            .build();
    }

    @Test
    void renamesCopyObjectResultShapeAndMember() {
        ServiceShape svc = s3RestXmlService("S3");
        StructureShape copyResult = StructureShape.builder().id(NS + "#CopyObjectResult")
            .addMember("ETag", ShapeId.from("smithy.api#String")).build();
        StructureShape copyOutput = StructureShape.builder().id(NS + "#CopyObjectOutput")
            .addMember("CopyObjectResult", copyResult.getId()).build();
        Model m = modelWith(svc, copyResult, copyOutput);
        Model out = new S3Transforms().transform(m, svc);

        assertTrue(out.getShape(ShapeId.from(NS + "#CopyObjectResultDetails")).isPresent(),
            "shape renamed to CopyObjectResultDetails");
        assertFalse(out.getShape(ShapeId.from(NS + "#CopyObjectResult")).isPresent(),
            "old shape name gone");

        StructureShape output = out.expectShape(ShapeId.from(NS + "#CopyObjectOutput"), StructureShape.class);
        assertFalse(output.getMember("CopyObjectResult").isPresent(),
            "old member name gone");
        MemberShape renamed = output.getMember("CopyObjectResultDetails").orElseThrow();
        assertEquals(NS + "#CopyObjectResultDetails", renamed.getTarget().toString(),
            "renamed member still targets the renamed shape");
        assertEquals("CopyObjectResult",
            renamed.expectTrait(software.amazon.smithy.model.traits.XmlNameTrait.class).getValue(),
            "renamed member pins its original CopyObjectResult wire name via @xmlName");
    }

    @Test
    void copyObjectResultRename_throwsOnCollision() {
        ServiceShape svc = s3Service("S3");
        StructureShape copyResult = StructureShape.builder().id(NS + "#CopyObjectResult")
            .addMember("ETag", ShapeId.from("smithy.api#String")).build();
        StructureShape details = StructureShape.builder().id(NS + "#CopyObjectResultDetails")
            .addMember("Other", ShapeId.from("smithy.api#String")).build();
        Model m = modelWith(svc, copyResult, details);
        assertThrows(IllegalStateException.class, () -> new S3Transforms().transform(m, svc));
    }

    /** PutObject-style op whose input and output both carry a {@code string} {@code Expires} member. */
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
        Model out = new S3Transforms().transform(m, expiresService(m));
        assertTrue(out.expectShape(ShapeId.from(NS + "#Expires")) instanceof TimestampShape,
            "Expires retyped to a timestamp shape");
        StructureShape input = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        StructureShape output = out.expectShape(ShapeId.from(NS + "#GetObjectOutput"), StructureShape.class);
        assertTrue(out.expectShape(input.getMember("Expires").orElseThrow().getTarget()) instanceof TimestampShape);
        assertTrue(out.expectShape(output.getMember("Expires").orElseThrow().getTarget()) instanceof TimestampShape);
    }

    /**
     * ListParts-style op whose request/result reference {@code PartNumberMarker} /
     * {@code NextPartNumberMarker} as strings (Coral2Smithy treats them as opaque pagination tokens).
     */
    private static Model partNumberMarkerModel() {
        Shape marker = StringShape.builder().id(NS + "#PartNumberMarker").build();
        Shape nextMarker = StringShape.builder().id(NS + "#NextPartNumberMarker").build();
        StructureShape input = StructureShape.builder().id(NS + "#ListPartsRequest")
            .addMember("PartNumberMarker", marker.getId()).build();
        StructureShape output = StructureShape.builder().id(NS + "#ListPartsOutput")
            .addMember("PartNumberMarker", marker.getId())
            .addMember("NextPartNumberMarker", nextMarker.getId()).build();
        OperationShape op = OperationShape.builder().id(NS + "#ListParts")
            .input(input.getId()).output(output.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(NS + "#AmazonS3").version("2006-03-01")
            .addTrait(ServiceTrait.builder().sdkId("S3").arnNamespace("s3")
                .cloudFormationName("S3").cloudTrailEventSource("s3.amazonaws.com").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(marker, nextMarker, input, output, op, svc).assemble().unwrap();
    }

    @Test
    void retypesPartNumberMarkersToInteger() {
        Model m = partNumberMarkerModel();
        assertTrue(m.expectShape(ShapeId.from(NS + "#PartNumberMarker")).isStringShape(),
            "precondition: PartNumberMarker starts as a string");
        assertTrue(m.expectShape(ShapeId.from(NS + "#NextPartNumberMarker")).isStringShape(),
            "precondition: NextPartNumberMarker starts as a string");
        ServiceShape svc = m.expectShape(ShapeId.from(NS + "#AmazonS3"), ServiceShape.class);
        Model out = new S3Transforms().transform(m, svc);
        assertTrue(out.expectShape(ShapeId.from(NS + "#PartNumberMarker")) instanceof IntegerShape,
            "PartNumberMarker retyped to integer to preserve the shipped C2J int API");
        assertTrue(out.expectShape(ShapeId.from(NS + "#NextPartNumberMarker")) instanceof IntegerShape,
            "NextPartNumberMarker retyped to integer to preserve the shipped C2J int API");
        StructureShape input = out.expectShape(ShapeId.from(NS + "#ListPartsRequest"), StructureShape.class);
        StructureShape output = out.expectShape(ShapeId.from(NS + "#ListPartsOutput"), StructureShape.class);
        assertTrue(out.expectShape(input.getMember("PartNumberMarker").orElseThrow().getTarget()) instanceof IntegerShape);
        assertTrue(out.expectShape(output.getMember("NextPartNumberMarker").orElseThrow().getTarget()) instanceof IntegerShape);
    }

    @Test
    void marksOverrideStreamingRequests() {
        StructureShape put = StructureShape.builder().id(NS + "#PutObjectAnnotationRequest").build();
        StructureShape policy = StructureShape.builder().id(NS + "#PutBucketPolicyRequest").build();
        StructureShape other = StructureShape.builder().id(NS + "#GetObjectRequest").build();
        ServiceShape svc = s3Service("S3");
        Model out = new S3Transforms().transform(modelWith(svc, put, policy, other), svc);
        assertTrue(out.expectShape(put.getId()).hasTrait(OverrideStreamingTrait.class),
            "PutObjectAnnotationRequest is in REQUESTS_TO_OVERRIDE_STREAMING");
        assertTrue(out.expectShape(policy.getId()).hasTrait(OverrideStreamingTrait.class),
            "PutBucketPolicyRequest is in REQUESTS_TO_OVERRIDE_STREAMING");
        assertFalse(out.expectShape(other.getId()).hasTrait(OverrideStreamingTrait.class),
            "other requests are untouched");
    }

    /**
     * PutObject-style request with checksum members plus a non-checksum one; {@code withAlgorithmMember}
     * toggles the {@code ChecksumAlgorithm} member that gates the C2J customization.
     */
    private static Model checksumModel(boolean withAlgorithmMember) {
        Shape crc32 = StringShape.builder().id(NS + "#ChecksumCRC32").build();
        Shape sha256 = StringShape.builder().id(NS + "#ChecksumSHA256").build();
        Shape crc64 = StringShape.builder().id(NS + "#ChecksumCRC64NVME").build();
        Shape algo = StringShape.builder().id(NS + "#ChecksumAlgorithm").build();
        Shape key = StringShape.builder().id(NS + "#ObjectKey").build();
        StructureShape.Builder reqB = StructureShape.builder().id(NS + "#PutObjectRequest")
            .addMember("ChecksumCRC32", crc32.getId())
            .addMember("ChecksumSHA256", sha256.getId())
            .addMember("ChecksumCRC64NVME", crc64.getId())
            .addMember("Key", key.getId());
        if (withAlgorithmMember) {
            reqB.addMember("ChecksumAlgorithm", algo.getId());
        }
        StructureShape req = reqB.build();
        StructureShape output = StructureShape.builder().id(NS + "#PutObjectOutput").build();
        OperationShape op = OperationShape.builder().id(NS + "#PutObject")
            .input(req.getId()).output(output.getId()).build();
        ServiceShape svc = ServiceShape.builder().id(NS + "#AmazonS3").version("2006-03-01")
            .addTrait(ServiceTrait.builder().sdkId("S3").arnNamespace("s3")
                .cloudFormationName("S3").cloudTrailEventSource("s3.amazonaws.com").build())
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(crc32, sha256, crc64, algo, key, req, output, op, svc)
            .assemble().unwrap();
    }

    @Test
    void marksChecksumMembersOnRequestWithChecksumAlgorithm() {
        Model m = checksumModel(true);
        ServiceShape svc = m.expectShape(ShapeId.from(NS + "#AmazonS3"), ServiceShape.class);
        Model out = new S3Transforms().transform(m, svc);
        StructureShape req = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        assertEquals("CRC32",
            req.getMember("ChecksumCRC32").orElseThrow().expectTrait(ChecksumMemberTrait.class).getValue());
        assertEquals("SHA256",
            req.getMember("ChecksumSHA256").orElseThrow().expectTrait(ChecksumMemberTrait.class).getValue());
        // ChecksumCRC64NVME is intentionally absent from C2J's map — it keeps a plain setter.
        assertFalse(req.getMember("ChecksumCRC64NVME").orElseThrow().hasTrait(ChecksumMemberTrait.class),
            "CRC64NVME is not a C2J checksum member");
        assertFalse(req.getMember("Key").orElseThrow().hasTrait(ChecksumMemberTrait.class),
            "non-checksum members are untouched");
    }

    @Test
    void doesNotMarkChecksumMembersWithoutChecksumAlgorithm() {
        Model m = checksumModel(false);
        ServiceShape svc = m.expectShape(ShapeId.from(NS + "#AmazonS3"), ServiceShape.class);
        Model out = new S3Transforms().transform(m, svc);
        StructureShape req = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        assertFalse(req.getMember("ChecksumCRC32").orElseThrow().hasTrait(ChecksumMemberTrait.class),
            "no ChecksumAlgorithm member => C2J does not flag the checksum members");
    }

    @Test
    void addsExpiresStringToOutputAndDeprecatesExpires() {
        Model m = expiresModel();
        Model out = new S3Transforms().transform(m, expiresService(m));

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
        Model out = new S3Transforms().transform(m, expiresService(m));

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
        software.amazon.smithy.model.shapes.EnumShape enumShape =
            software.amazon.smithy.model.shapes.EnumShape.builder()
                .id(NS + "#BucketLocationConstraint")
                .addMember("us_west_2", "us-west-2")
                .build();
        Model m = modelWith(svc, enumShape);
        Model out = new S3Transforms().transform(m, svc);

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
        // C2J appends the two regions in the order us_iso_west_1 then us_east_1.
        assertEquals(java.util.List.of("us_west_2", "us_iso_west_1", "us_east_1"),
            new java.util.ArrayList<>(result.getAllMembers().keySet()),
            "appended regions follow C2J order: us_iso_west_1 before us_east_1");
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
        Model once = new S3Transforms().transform(m, svc);
        Model twice = new S3Transforms().transform(once, svc);
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
        Model out = new S3Transforms().transform(m, svc);

        java.util.List<String> values = com.amazonaws.util.awsclientsmithygenerator.generators.model
            .EnumRenderer.getEnumValues(out.expectShape(ShapeId.from(NS + "#ReplicationStatus")));
        assertEquals(java.util.List.of("COMPLETED", "PENDING", "FAILED", "REPLICA"), values,
            "COMPLETE rewritten to COMPLETED, duplicate removed, order preserved");
    }

    @Test
    void injectsGetObjectId2Only() {
        ServiceShape svc = s3Service("S3");
        StructureShape getObjectOutput = StructureShape.builder().id(NS + "#GetObjectOutput")
            .addMember("ETag", ShapeId.from("smithy.api#String")).build();
        Model m = modelWith(svc, getObjectOutput);
        Model out = new S3Transforms().transform(m, svc);

        assertTrue(out.getShape(ShapeId.from(NS + "#ObjectId2")).isPresent());
        StructureShape outShape = out.expectShape(ShapeId.from(NS + "#GetObjectOutput"), StructureShape.class);
        MemberShape id2 = outShape.getMember("Id2").orElseThrow();
        assertEquals(NS + "#ObjectId2", id2.getTarget().toString());
        assertEquals("x-amz-id-2",
            id2.expectTrait(software.amazon.smithy.model.traits.HttpHeaderTrait.class).getValue());

        // ResultRenderer supplies the top-level RequestId for rest-xml results; a modeled RequestId
        // member would duplicate it and fail to compile, so it must not be injected here.
        assertFalse(outShape.getMember("RequestId").isPresent(),
            "no modeled RequestId member; the renderer emits RequestId");
        assertFalse(out.getShape(ShapeId.from(NS + "#ObjectRequestId")).isPresent(),
            "ObjectRequestId shape must not be created");
    }

    /** Op whose input has two ordinary members, so the access-log tag's appended-last order is assertable. */
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
        Model out = new S3Transforms().transform(m, s3ServiceOf(m));

        StructureShape input = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        MemberShape tag = input.getMember("customizedAccessLogTag").orElseThrow();

        // Target must be a Map<String,String> (both key and value render as Aws::String).
        software.amazon.smithy.model.shapes.MapShape mapShape = out.expectShape(
            tag.getTarget(), software.amazon.smithy.model.shapes.MapShape.class);
        assertEquals("smithy.api#String", mapShape.getKey().getTarget().toString());
        assertEquals("smithy.api#String", mapShape.getValue().getTarget().toString());

        // Must bind @httpQueryParams so the request emits AddQueryStringParameters — matching C2J,
        // which renders that method via the customizedAccessLogTag querystring member.
        assertTrue(tag.hasTrait(software.amazon.smithy.model.traits.HttpQueryParamsTrait.class),
            "customizedAccessLogTag must carry @httpQueryParams");

        java.util.List<String> order = new java.util.ArrayList<>(input.getAllMembers().keySet());
        assertEquals(java.util.List.of("Bucket", "Key", "customizedAccessLogTag"), order,
            "access-log tag member appended last");
    }

    @Test
    void stampsCustomizedAccessLogTagMarkerAndKeepsQueryParams() {
        Model m = accessLogModel();
        Model out = new S3Transforms().transform(m, s3ServiceOf(m));

        StructureShape input = out.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        MemberShape tag = input.getMember("customizedAccessLogTag").orElseThrow();

        // C2J models this member with a distinct customizedQuery flag; mirror that with the marker.
        assertTrue(tag.hasTrait(CustomizedAccessLogTagTrait.class),
            "injected member must carry the CustomizedAccessLogTag marker");
        // The marker is additive: @httpQueryParams must remain so the request still emits
        // AddQueryStringParameters (RequestBindings.hasQueryStringMembers).
        assertTrue(tag.hasTrait(software.amazon.smithy.model.traits.HttpQueryParamsTrait.class),
            "customizedAccessLogTag must still carry @httpQueryParams alongside the marker");
    }

    @Test
    void doesNotInjectCustomizedAccessLogTagIntoOutput() {
        Model m = accessLogModel();
        Model out = new S3Transforms().transform(m, s3ServiceOf(m));

        StructureShape output = out.expectShape(ShapeId.from(NS + "#PutObjectOutput"), StructureShape.class);
        assertFalse(output.getMember("customizedAccessLogTag").isPresent(),
            "output shape must not gain the access-log tag member");
    }

    @Test
    void stampsEmbeddedErrorsTraitOnRequestInC2jSet() {
        ServiceShape svc = s3Service("S3");
        StructureShape inSet = StructureShape.builder().id(NS + "#CreateSessionRequest")
            .addMember("Bucket", ShapeId.from("smithy.api#String")).build();
        StructureShape notInSet = StructureShape.builder().id(NS + "#SomeOtherRequest")
            .addMember("Bucket", ShapeId.from("smithy.api#String")).build();
        Model m = modelWith(svc, inSet, notInSet);
        Model out = new S3Transforms().transform(m, svc);

        StructureShape marked = out.expectShape(ShapeId.from(NS + "#CreateSessionRequest"), StructureShape.class);
        assertTrue(marked.hasTrait(EmbeddedErrorsTrait.class),
            "request in the C2J functionsWithEmbeddedErrors set must be marked");
        StructureShape unmarked = out.expectShape(ShapeId.from(NS + "#SomeOtherRequest"), StructureShape.class);
        assertFalse(unmarked.hasTrait(EmbeddedErrorsTrait.class),
            "request not in the set must not be marked");
    }

    @Test
    void accessLogTagInjectionIsIdempotent() {
        Model m = accessLogModel();
        Model once = new S3Transforms().transform(m, s3ServiceOf(m));
        Model twice = new S3Transforms().transform(once, s3ServiceOf(once));

        StructureShape input = twice.expectShape(ShapeId.from(NS + "#PutObjectRequest"), StructureShape.class);
        long count = input.getAllMembers().keySet().stream()
            .filter("customizedAccessLogTag"::equals).count();
        assertEquals(1, count, "re-applying must not duplicate the injected member");
    }
}
