/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.IntegerShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpPayloadTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.traits.StreamingTrait;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.junit.jupiter.api.Assertions.assertTrue;

class GlacierTransformsTest {

    static final String NS = "com.amazonaws.glacier";

    private static ServiceShape glacierService(String sdkId, OperationShape... operations) {
        ServiceShape.Builder b = ServiceShape.builder().id(NS + "#Glacier").version("2012-06-01")
            .addTrait(ServiceTrait.builder().sdkId(sdkId).arnNamespace("glacier")
                .cloudFormationName("Glacier").cloudTrailEventSource("glacier.amazonaws.com").build());
        for (OperationShape op : operations) {
            b.addOperation(op.getId());
        }
        return b.build();
    }

    // A raw streaming-payload request: input struct with an @httpPayload member targeting a
    // @streaming blob (matches Glacier's UploadArchive/UploadMultipartPart body member).
    private static StructureShape streamingInput(String name) {
        return StructureShape.builder().id(NS + "#" + name)
            .addMember(MemberShape.builder().id(NS + "#" + name + "$body")
                .target(NS + "#Stream").addTrait(new HttpPayloadTrait()).build())
            .build();
    }

    private static StructureShape plainInput(String name) {
        return StructureShape.builder().id(NS + "#" + name)
            .addMember(MemberShape.builder().id(NS + "#" + name + "$vaultName")
                .target("smithy.api#String").build())
            .build();
    }

    // A paginateable request: input struct with an integer @httpQuery `limit` (page-size) member,
    // matching the type Coral2Smithy's GlacierTransformer produces upstream.
    private static StructureShape queryLimitInput(String name) {
        return StructureShape.builder().id(NS + "#" + name)
            .addMember(MemberShape.builder().id(NS + "#" + name + "$limit")
                .target(NS + "#intType").addTrait(new HttpQueryTrait("limit")).build())
            .build();
    }

    private static OperationShape op(String name, StructureShape input) {
        return OperationShape.builder().id(NS + "#" + name).input(input.getId()).build();
    }

    private static Model modelWith(ServiceShape svc, software.amazon.smithy.model.shapes.Shape... shapes) {
        Model.Builder b = Model.builder().addShape(svc)
            .addShape(BlobShape.builder().id(NS + "#Stream").addTrait(new StreamingTrait()).build())
            // The service string shape the limit retype retargets to (siblings like marker use it).
            .addShape(StringShape.builder().id(NS + "#string").build())
            .addShape(IntegerShape.builder().id(NS + "#intType").build())
            .addShape(StringShape.builder().id("smithy.api#String").build());
        for (software.amazon.smithy.model.shapes.Shape s : shapes) {
            b.addShape(s);
        }
        return b.build();
    }

    @Test
    void noOpForOtherService() {
        ServiceShape svc = ServiceShape.builder().id("com.amazonaws.other#Other").version("1")
            .addTrait(ServiceTrait.builder().sdkId("Other").arnNamespace("other")
                .cloudFormationName("Other").cloudTrailEventSource("other").build()).build();
        assertFalse(new GlacierTransforms().shouldRun(svc), "non-glacier service must not run");
    }

    @Test
    void stampsVersionHeaderOnStreamingRequestInputs() {
        StructureShape upload = streamingInput("UploadArchiveInput");
        OperationShape uploadOp = op("UploadArchive", upload);
        ServiceShape svc = glacierService("Glacier", uploadOp);
        Model out = new GlacierTransforms().transform(modelWith(svc, upload, uploadOp), svc);

        AdditionalRequestHeadersTrait trait = out
            .expectShape(ShapeId.from(NS + "#UploadArchiveInput"), StructureShape.class)
            .getTrait(AdditionalRequestHeadersTrait.class)
            .orElseThrow(() -> new AssertionError("streaming request input must carry the trait"));
        assertEquals(1, trait.getHeaders().size());
        assertEquals("2012-06-01", trait.getHeaders().get("x-amz-glacier-version"),
            "header value is the service API version");
    }

    @Test
    void doesNotStampNonStreamingRequestInputs() {
        StructureShape plain = plainInput("CompleteVaultLockInput");
        OperationShape plainOp = op("CompleteVaultLock", plain);
        ServiceShape svc = glacierService("Glacier", plainOp);
        Model out = new GlacierTransforms().transform(modelWith(svc, plain, plainOp), svc);

        assertFalse(out.expectShape(ShapeId.from(NS + "#CompleteVaultLockInput"), StructureShape.class)
                .hasTrait(AdditionalRequestHeadersTrait.class),
            "non-streaming request input must not carry the trait");
    }

    @Test
    void retypesQueryLimitMemberBackToString() {
        StructureShape listJobs = queryLimitInput("ListJobsInput");
        OperationShape listJobsOp = op("ListJobs", listJobs);
        ServiceShape svc = glacierService("Glacier", listJobsOp);
        Model out = new GlacierTransforms().transform(modelWith(svc, listJobs, listJobsOp), svc);

        MemberShape limit = out.expectShape(ShapeId.from(NS + "#ListJobsInput"), StructureShape.class)
            .getMember("limit").orElseThrow();
        assertEquals(NS + "#string", limit.getTarget().toString(),
            "query limit member retargeted to the service string shape");
        assertTrue(out.expectShape(limit.getTarget()).isStringShape(), "target is a string shape");
    }

    @Test
    void leavesQueryLimitUnchangedWhenAlreadyString() {
        StructureShape listJobs = StructureShape.builder().id(NS + "#ListJobsInput")
            .addMember(MemberShape.builder().id(NS + "#ListJobsInput$limit")
                .target(NS + "#string").addTrait(new HttpQueryTrait("limit")).build())
            .build();
        OperationShape listJobsOp = op("ListJobs", listJobs);
        ServiceShape svc = glacierService("Glacier", listJobsOp);
        Model out = new GlacierTransforms().transform(modelWith(svc, listJobs, listJobsOp), svc);

        MemberShape limit = out.expectShape(ShapeId.from(NS + "#ListJobsInput"), StructureShape.class)
            .getMember("limit").orElseThrow();
        assertEquals(NS + "#string", limit.getTarget().toString(), "already-string limit is untouched");
    }

    @Test
    void isIdempotent() {
        StructureShape upload = streamingInput("UploadArchiveInput");
        OperationShape uploadOp = op("UploadArchive", upload);
        ServiceShape svc = glacierService("Glacier", uploadOp);
        Model once = new GlacierTransforms().transform(modelWith(svc, upload, uploadOp), svc);
        Model twice = new GlacierTransforms().transform(once, svc);

        assertTrue(twice.expectShape(ShapeId.from(NS + "#UploadArchiveInput"), StructureShape.class)
                .hasTrait(AdditionalRequestHeadersTrait.class),
            "re-applying keeps a single trait without error");
    }
}
