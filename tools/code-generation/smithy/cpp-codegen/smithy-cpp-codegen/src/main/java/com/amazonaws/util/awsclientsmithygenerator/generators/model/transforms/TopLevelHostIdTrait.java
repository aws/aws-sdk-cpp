/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link S3ControlTransforms} on each
 * S3 Control operation-output structure. {@code ResultRenderer} emits the top-level {@code HostId}
 * (x-amz-id-2) accessor group for marker-bearing result shapes — mirroring how the sibling
 * top-level {@code RequestId} is emitted — so S3 Control results match C2J
 * ({@code addToAllResultsShape("hostId", ...)}). Kept as a marker + generic renderer rule (not a
 * service-name {@code if}) so the renderer stays service-agnostic.
 */
public final class TopLevelHostIdTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#topLevelHostId");

    public TopLevelHostIdTrait() {
        super(ID, Node.objectNode());
    }
}
