/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by ChunkedEncodingTransform on request structures for which C2J emits
 * {@code bool IsChunked() const override { return true; }}. Collapses C2J's emit-time gate
 * (MediaStore Data or supportsChunkedEncoding, plus streaming members and !signBody) into a single
 * stamping decision; request rendering turns the marker into the override.
 */
public final class ChunkedEncodingTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#chunkedEncoding");

    public ChunkedEncodingTrait() {
        super(ID, Node.objectNode());
    }
}
