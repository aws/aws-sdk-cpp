/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.RequiredTrait;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashSet;
import java.util.List;
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

    // NOTE: This reserved-member rename is intentionally NOT wired into the transform
    // pipeline yet. It encodes a known C2J-parity requirement (body -> requestBody,
    // headers -> headerValues) that is validated by GlobalTransformsTest but not applied
    // during generation. Do not delete it and do not hook it up as part of a cleanup pass —
    // wiring it in changes generated output and must be its own reviewed change.
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

        // Seed queue with all operation input/output/error shapes. Use getInputShape()
        // so no-input operations (input target smithy.api#Unit) stay reachable, keeping
        // the classifier and reachability set in agreement. The BFS below null-guards via
        // model.getShape(id).ifPresent(...), so a possibly-absent Unit id is safe to add.
        for (OperationShape op : index.getContainedOperations(service)) {
            queue.add(op.getInputShape());
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

    /**
     * Returns this class as a ModelTransform.
     *
     * <p>Currently the only pre-generation model mutation is {@link #injectResponseMetadata}.
     */
    public static ModelTransform asTransform() {
        return GlobalTransforms::injectResponseMetadata;
    }

    /**
     * For awsQuery / ec2Query services, injects a {@code ResponseMetadata} structure (carrying
     * a {@code RequestId} string member) and adds it as a {@code @required} member on every
     * result (operation output) shape. This mirrors the legacy C2J
     * {@code QueryCppClientGenerator.addRequestIdToResults} injection, so that Query/EC2 result
     * classes expose {@code GetResponseMetadata()} and back the {@code m_responseMetadata}
     * deserialization emitted by {@code QueryXmlProtocolTraits}. Other protocols are unchanged.
     *
     * @param model   the current model
     * @param service the service being generated
     * @return the model with ResponseMetadata injected, or the input model for non-query protocols
     */
    public static Model injectResponseMetadata(Model model, ServiceShape service) {
        Protocol protocol = ProtocolResolver.resolve(service, model);
        if (protocol != Protocol.QUERY_XML && protocol != Protocol.EC2) {
            return model;
        }

        String namespace = service.getId().getNamespace();
        ShapeId responseMetadataId = ShapeId.fromParts(namespace, "ResponseMetadata");

        // ResponseMetadata { RequestId: String }
        StructureShape responseMetadata = StructureShape.builder()
            .id(responseMetadataId)
            .addMember(MemberShape.builder()
                .id(responseMetadataId.withMember("RequestId"))
                .target("smithy.api#String")
                .build())
            .build();

        // The @required ResponseMetadata member added to each result shape.
        List<Shape> replacements = new ArrayList<>();
        replacements.add(responseMetadata);

        TopDownIndex index = TopDownIndex.of(model);
        Set<ShapeId> outputIds = new HashSet<>();
        for (OperationShape op : index.getContainedOperations(service)) {
            op.getOutput().ifPresent(outputIds::add);
        }

        for (ShapeId outputId : outputIds) {
            model.getShape(outputId).flatMap(Shape::asStructureShape).ifPresent(result -> {
                if (result.getMember("ResponseMetadata").isPresent()) {
                    return;
                }
                StructureShape withMetadata = result.toBuilder()
                    .addMember(MemberShape.builder()
                        .id(result.getId().withMember("ResponseMetadata"))
                        .target(responseMetadataId)
                        .addTrait(new RequiredTrait())
                        .build())
                    .build();
                replacements.add(withMetadata);
            });
        }

        return model.toBuilder().addShapes(replacements).build();
    }
}
