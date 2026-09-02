/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link LongPollingTransform} on the
 * request structure of each operation for which C2J's {@code RequestHeader.vm} emits
 * {@code bool IsLongPollingOperation() const override { return true; }} (gated on
 * {@code $operation.longPolling}). C2J sets that flag from
 * {@code C2jModelToGeneratorModelTransformer.LONG_POLLING_OPERATIONS}, a hardcoded per-serviceId set
 * ({@code SQS: [ReceiveMessage]}, {@code SFN: [GetActivityTask]},
 * {@code SWF: [PollForActivityTask, PollForDecisionTask]}). The transform collapses that lookup into a
 * single stamping decision so request rendering only has to turn the marker into the override. Kept as
 * a marker + generic renderer rule (not a service-name {@code if}) so the renderer stays
 * service-agnostic.
 */
public final class LongPollingTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#longPolling");

    public LongPollingTrait() {
        super(ID, Node.objectNode());
    }
}
