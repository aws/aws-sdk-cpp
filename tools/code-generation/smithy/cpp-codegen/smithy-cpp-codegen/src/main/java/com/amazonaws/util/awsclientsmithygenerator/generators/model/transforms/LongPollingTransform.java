/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Set;

/**
 * Stamps {@link LongPollingTrait} onto the request structures of the long-polling operations C2J flags
 * with {@code operation.setLongPolling(true)}, so the {@code IsLongPollingOperation() -> true} override
 * is emitted. C2J keys {@code LONG_POLLING_OPERATIONS} on serviceId; the Smithy equivalent is the raw
 * smithy service name (from {@link ServiceNameUtil#getSmithyServiceName(ServiceShape, Map)} with a
 * {@code null} map, so no c2jMap remap like {@code sfn->states}). No-op for other services.
 */
public final class LongPollingTransform {

    private static final Map<String, Set<String>> LONG_POLLING_OPERATIONS = Map.of(
        "sqs", Set.of("ReceiveMessage"),
        "sfn", Set.of("GetActivityTask"),
        "swf", Set.of("PollForActivityTask", "PollForDecisionTask")
    );

    private LongPollingTransform() {}

    public static ModelTransform asTransform() {
        return LongPollingTransform::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        Set<String> longPollOps =
            LONG_POLLING_OPERATIONS.get(ServiceNameUtil.getSmithyServiceName(service, null));
        if (longPollOps == null) {
            return model;
        }
        List<Shape> updated = new ArrayList<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            if (longPollOps.contains(op.getId().getName())) {
                model.getShape(op.getInputShape()).flatMap(Shape::asStructureShape)
                    .filter(s -> !s.hasTrait(LongPollingTrait.class))
                    .ifPresent(s -> updated.add(
                        s.toBuilder().addTrait(new LongPollingTrait()).build()));
            }
        }
        return updated.isEmpty() ? model
            : model.toBuilder().addShapes(updated.toArray(new Shape[0])).build();
    }
}
