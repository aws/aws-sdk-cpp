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
 * Stamps the internal {@link ChunkedEncodingTrait} onto the request structures for which C2J's
 * {@code RequestHeader.vm} emits {@code bool IsChunked() const override { return true; }}. C2J gates
 * that override on {@code ($metadata.serviceId=="MediaStore Data" || $operation.supportsChunkedEncoding)}
 * (S3 sets {@code supportsChunkedEncoding} on {@code WriteGetObjectResponse} only) combined with
 * {@code $shape.hasStreamMembers() && !$shape.signBody && $shape.members.size() > 0}. This transform
 * collapses that emit-time condition into a single stamping decision: an operation qualifies when it
 * carries {@code aws.auth#unsignedPayload} (the {@code !signBody} proxy), its input is a raw
 * streaming payload request (the {@code hasStreamMembers} proxy, which also guarantees members > 0),
 * and either the service is MediaStore Data or the operation is S3's {@code WriteGetObjectResponse}.
 * No-op for any other service/operation, leaving the model instance untouched.
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
