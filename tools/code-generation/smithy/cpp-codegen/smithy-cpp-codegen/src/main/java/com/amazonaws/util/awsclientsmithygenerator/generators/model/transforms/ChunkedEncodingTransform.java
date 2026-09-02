/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import software.amazon.smithy.aws.traits.auth.UnsignedPayloadTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;

import java.util.ArrayList;
import java.util.List;

/**
 * Stamps {@link ChunkedEncodingTrait} onto request structures for which C2J emits
 * {@code bool IsChunked() const override { return true; }}. An operation qualifies when it carries
 * aws.auth#unsignedPayload (the !signBody proxy), its input is a raw streaming payload request (the
 * hasStreamMembers proxy, also guaranteeing members > 0), and either the service is MediaStore Data
 * or the operation is S3's WriteGetObjectResponse. No-op otherwise.
 */
public final class ChunkedEncodingTransform {

    private static final String WRITE_GET_OBJECT_RESPONSE = "WriteGetObjectResponse";

    private ChunkedEncodingTransform() {}

    public static ModelTransform asTransform() {
        return ChunkedEncodingTransform::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        boolean mediaStoreData =
            "mediastore-data".equals(ServiceNameUtil.getSmithyServiceName(service, null));
        List<Shape> updated = new ArrayList<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            boolean supportsChunkedEncoding =
                mediaStoreData || WRITE_GET_OBJECT_RESPONSE.equals(op.getId().getName());
            if (supportsChunkedEncoding
                    && op.hasTrait(UnsignedPayloadTrait.class)
                    && ShapeClassifier.isRawStreamingPayloadRequest(op, model)) {
                model.getShape(op.getInputShape()).flatMap(Shape::asStructureShape)
                    .filter(s -> !s.hasTrait(ChunkedEncodingTrait.class))
                    .ifPresent(s -> updated.add(
                        s.toBuilder().addTrait(new ChunkedEncodingTrait()).build()));
            }
        }
        return updated.isEmpty() ? model
            : model.toBuilder().addShapes(updated.toArray(new Shape[0])).build();
    }
}
