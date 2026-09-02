/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link ChunkedEncodingTransform} on
 * each request structure for which C2J's {@code RequestHeader.vm} emits
 * {@code bool IsChunked() const override { return true; }}. C2J gates that override on
 * {@code ($metadata.serviceId=="MediaStore Data" || $operation.supportsChunkedEncoding)} together
 * with {@code $shape.hasStreamMembers() && !$shape.signBody && $shape.members.size() > 0}; S3 sets
 * {@code supportsChunkedEncoding} on {@code WriteGetObjectResponse} only. The transform collapses
 * that emit-time condition into a single stamping decision so request rendering only has to turn the
 * marker into the override. Kept as a marker + generic renderer rule (not a service-name {@code if})
 * so the renderer stays service-agnostic.
 */
public final class ChunkedEncodingTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#chunkedEncoding");

    public ChunkedEncodingTrait() {
        super(ID, Node.objectNode());
    }
}
