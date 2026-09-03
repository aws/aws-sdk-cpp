/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by {@link S3ControlTransforms} on each S3 Control operation-output. For
 * marker-bearing results, {@code ResultRenderer} emits the top-level {@code HostId} (x-amz-id-2)
 * accessor group (mirroring the sibling top-level {@code RequestId}), matching C2J's
 * {@code addToAllResultsShape("hostId", ...)}.
 */
public final class TopLevelHostIdTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#topLevelHostId");

    public TopLevelHostIdTrait() {
        super(ID, Node.objectNode());
    }
}
