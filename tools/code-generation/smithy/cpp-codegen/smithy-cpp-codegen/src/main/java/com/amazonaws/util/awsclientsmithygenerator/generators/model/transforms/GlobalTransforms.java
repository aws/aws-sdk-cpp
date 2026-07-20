/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashSet;
import java.util.Optional;
import java.util.Set;

/**
 * Global model transforms applied before code generation.
 * Handles reserved member renaming and reachability filtering.
 */
public final class GlobalTransforms {

    /**
     * Services that skip the "body" -> "requestBody" member rename.
     * These services use "body" as a meaningful domain member (e.g., HTTP payload).
     */
    private static final Set<String> BODY_RENAME_SKIP_SERVICES = Set.of(
        "amplifyuibuilder", "apigateway", "apigateway2", "bedrock-runtime", "glacier", "repostspace"
    );

    /**
     * Services that skip the "headers" -> "headerValues" member rename.
     * These services use "headers" as a meaningful domain member.
     */
    private static final Set<String> HEADERS_RENAME_SKIP_SERVICES = Set.of(
        "apigateway"
    );

    private GlobalTransforms() {}

    /**
     * Returns the renamed C++ member name if this member is reserved.
     * Only applies to request shape members (caller must filter).
     *
     * Reserved members and their renames:
     * - "body" -> "requestBody" (unless service is in BODY_RENAME_SKIP_SERVICES)
     * - "headers" -> "headerValues" (unless service is in HEADERS_RENAME_SKIP_SERVICES)
     * - "Headers" -> "headerValues" (always renamed, no skip list)
     *
     * @param memberName the original member name from the model
     * @param smithyServiceName the service name (lowercase hyphenated, e.g., "bedrock-runtime")
     * @return the renamed member name, or empty if no rename is needed
     */
    public static Optional<String> getReservedMemberRename(String memberName, String smithyServiceName) {
        if ("body".equals(memberName)) {
            if (BODY_RENAME_SKIP_SERVICES.contains(smithyServiceName)) return Optional.empty();
            return Optional.of("requestBody");
        }
        if ("headers".equals(memberName)) {
            if (HEADERS_RENAME_SKIP_SERVICES.contains(smithyServiceName)) return Optional.empty();
            return Optional.of("headerValues");
        }
        if ("Headers".equals(memberName)) {
            return Optional.of("headerValues");
        }
        return Optional.empty();
    }

    /**
     * Computes the set of shape IDs reachable from service operations.
     * Only reachable shapes should generate model files.
     *
     * Traversal starts from operation inputs, outputs, and errors, then walks
     * structure members, list members, and map keys/values transitively.
     *
     * @param model the Smithy model
     * @param service the service shape whose operations define the root set
     * @return set of ShapeIds reachable from the service's operations
     */
    public static Set<ShapeId> computeReachableShapes(Model model, ServiceShape service) {
        Set<ShapeId> reachable = new HashSet<>();
        TopDownIndex index = TopDownIndex.of(model);
        Deque<ShapeId> queue = new ArrayDeque<>();

        // Seed queue with all operation input/output/error shapes
        for (OperationShape op : index.getContainedOperations(service)) {
            op.getInput().ifPresent(queue::add);
            op.getOutput().ifPresent(queue::add);
            op.getErrors().forEach(queue::add);
        }

        // BFS traversal
        while (!queue.isEmpty()) {
            ShapeId id = queue.poll();
            if (!reachable.add(id)) continue;
            model.getShape(id).ifPresent(shape -> {
                if (shape.isStructureShape() || shape.isUnionShape()) {
                    for (MemberShape member : shape.getAllMembers().values()) {
                        queue.add(member.getTarget());
                    }
                } else if (shape.isListShape()) {
                    shape.asListShape().ifPresent(l -> queue.add(l.getMember().getTarget()));
                } else if (shape.isMapShape()) {
                    shape.asMapShape().ifPresent(m -> {
                        queue.add(m.getKey().getTarget());
                        queue.add(m.getValue().getTarget());
                    });
                }
            });
        }
        return reachable;
    }
}
