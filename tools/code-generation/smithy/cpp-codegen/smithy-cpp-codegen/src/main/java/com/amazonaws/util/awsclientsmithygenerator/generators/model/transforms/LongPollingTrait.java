/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by {@link LongPollingTransform} on the request structure of each operation
 * C2J flags via {@code LONG_POLLING_OPERATIONS} (SQS ReceiveMessage, SFN GetActivityTask, SWF
 * PollForActivityTask/PollForDecisionTask). Request rendering turns the marker into
 * {@code IsLongPollingOperation() const override { return true; }} (C2J's {@code RequestHeader.vm}
 * gated on {@code $operation.longPolling}).
 */
public final class LongPollingTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#longPolling");

    public LongPollingTrait() {
        super(ID, Node.objectNode());
    }
}
