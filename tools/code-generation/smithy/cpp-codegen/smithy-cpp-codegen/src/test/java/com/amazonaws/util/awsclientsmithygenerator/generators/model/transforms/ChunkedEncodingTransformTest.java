/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.aws.traits.auth.UnsignedPayloadTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpPayloadTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.junit.jupiter.api.Assertions.assertTrue;

class ChunkedEncodingTransformTest {

    private static ServiceShape service(Model m) {
        return m.expectShape(ShapeId.from("com.example#TestService"), ServiceShape.class);
    }

    private static boolean stamped(Model m, String requestShapeName) {
        return m.expectShape(ShapeId.from("com.example#" + requestShapeName), StructureShape.class)
            .hasTrait(ChunkedEncodingTrait.class);
    }

    private static ServiceTrait serviceTrait(String sdkId) {
        return ServiceTrait.builder().sdkId(sdkId).arnNamespace("ns")
            .cloudFormationName("Cfn").cloudTrailEventSource("src").build();
    }

    /**
     * Builds a single-operation service. {@code streaming} adds a raw {@code @httpPayload} blob body
     * (plus a plain member so members > 0); {@code unsigned} adds {@code aws.auth#unsignedPayload}.
     */
    private static Model oneOpModel(String sdkId, String opName, boolean streaming, boolean unsigned) {
        StringShape str = StringShape.builder().id("com.example#String").build();
        BlobShape blob = BlobShape.builder().id("com.example#Body").build();
        StructureShape.Builder inB = StructureShape.builder().id("com.example#" + opName + "Request")
            .addMember("name", str.getId());
        if (streaming) {
            inB.addMember(MemberShape.builder()
                .id("com.example#" + opName + "Request$body").target(blob.getId())
                .addTrait(new HttpPayloadTrait()).build());
        }
        StructureShape input = inB.build();
        OperationShape.Builder opB = OperationShape.builder()
            .id("com.example#" + opName).input(input.getId());
        if (unsigned) {
            opB.addTrait(new UnsignedPayloadTrait());
        }
        OperationShape op = opB.build();
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService").version("2024-01-01")
            .addTrait(serviceTrait(sdkId))
            .addOperation(op.getId()).build();
        return Model.assembler().addShapes(str, blob, input, op, service).assemble().unwrap();
    }

    @Test
    void mediaStoreDataUnsignedStreamingOp_stampsInput() {
        Model m = oneOpModel("MediaStore Data", "PutObject", true, true);
        Model out = new ChunkedEncodingTransform().transform(m, service(m));
        assertTrue(stamped(out, "PutObjectRequest"),
            "MediaStore Data unsigned-payload streaming request must be stamped");
    }

    @Test
    void mediaStoreDataNonStreamingOp_notStamped() {
        Model m = oneOpModel("MediaStore Data", "DescribeObject", false, true);
        Model out = new ChunkedEncodingTransform().transform(m, service(m));
        assertSame(m, out, "no qualifying operation must leave the model untouched");
        assertFalse(stamped(out, "DescribeObjectRequest"),
            "a non-streaming request must not be stamped");
    }

    @Test
    void mediaStoreDataSignedStreamingOp_notStamped() {
        Model m = oneOpModel("MediaStore Data", "PutObject", true, false);
        Model out = new ChunkedEncodingTransform().transform(m, service(m));
        assertSame(m, out, "no qualifying operation must leave the model untouched");
        assertFalse(stamped(out, "PutObjectRequest"),
            "a signed (no @unsignedPayload) request must not be stamped");
    }

    @Test
    void s3WriteGetObjectResponseUnsignedStreamingOp_stampsInput() {
        Model m = oneOpModel("S3", "WriteGetObjectResponse", true, true);
        Model out = new ChunkedEncodingTransform().transform(m, service(m));
        assertTrue(stamped(out, "WriteGetObjectResponseRequest"),
            "S3 WriteGetObjectResponse unsigned-payload streaming request must be stamped");
    }

    @Test
    void unrelatedServiceStreamingOp_notStamped() {
        Model m = oneOpModel("S3", "PutObject", true, true);
        Model out = new ChunkedEncodingTransform().transform(m, service(m));
        assertSame(m, out, "an unrelated operation must leave the model untouched");
        assertFalse(stamped(out, "PutObjectRequest"),
            "only WriteGetObjectResponse (or MediaStore Data) may be stamped");
    }
}
