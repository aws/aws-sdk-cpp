/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by {@link S3Transforms} on each S3 request in C2J's
 * {@code REQUESTS_TO_OVERRIDE_STREAMING} set. These derive from {@code StreamingS3Request}
 * (whose {@code IsStreaming()} returns {@code true}) yet must report non-streaming, so request
 * rendering turns the marker into {@code bool IsStreaming() const override { return false; }}.
 */
public final class OverrideStreamingTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#overrideStreaming");

    public OverrideStreamingTrait() {
        super(ID, Node.objectNode());
    }
}
