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
import software.amazon.smithy.model.neighbor.Walker;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DeprecatedTrait;
import software.amazon.smithy.model.traits.RequiredTrait;
import software.amazon.smithy.model.transform.ModelTransformer;
import software.amazon.smithy.aws.traits.protocols.AwsQueryCompatibleTrait;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;

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

    /**
     * The framework-injected response-envelope member and shape name. It is reserved: no AWS model
     * defines its own {@code ResponseMetadata}. {@link #injectResponseMetadata} adds it (and fails
     * fast on any pre-existing collision), and {@code MemberRenderer} keys the "always-present"
     * rendering (no {@code HasBeenSet} getter, flag initialized true) on this exact name.
     */
    public static final String RESPONSE_METADATA = "ResponseMetadata";

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
     * Computes the set of shape IDs reachable from the service's operations; only these shapes
     * generate model files. Roots are each operation's input (including {@code smithy.api#Unit}
     * for input-less operations), output, and error shapes, from which {@link Walker} walks the
     * shape graph transitively. Each root id is included even when its shape is absent from the model.
     *
     * @param model the Smithy model
     * @param service the service shape whose operations define the root set
     * @return set of ShapeIds reachable from the service's operations
     */
    public static Set<ShapeId> computeReachableShapes(Model model, ServiceShape service) {
        Walker walker = new Walker(model);
        Set<ShapeId> reachable = new HashSet<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            addReachableFrom(op.getInputShape(), walker, model, reachable);
            op.getOutput().ifPresent(id -> addReachableFrom(id, walker, model, reachable));
            op.getErrors().forEach(id -> addReachableFrom(id, walker, model, reachable));
        }
        return reachable;
    }

    private static void addReachableFrom(ShapeId root, Walker walker, Model model, Set<ShapeId> out) {
        out.add(root);
        model.getShape(root).ifPresent(shape -> out.addAll(walker.walkShapeIds(shape)));
    }

    /**
     * Returns this class as a ModelTransform.
     *
     * <p>Runs {@link #dropDeprecatedMembers} first (so reachability filtering sees the pruned
     * model and orphaned targets drop out), then {@link #injectResponseMetadata}.
     */
    public static ModelTransform asTransform() {
        return (model, service) -> injectResponseMetadata(dropDeprecatedMembers(model, service), service);
    }

    /**
     * Removes {@code @deprecated} members from the shapes this service actually generates. This
     * mirrors the legacy C2J transformer, which drops {@code "deprecated": true} member references
     * ({@code C2jModelToGeneratorModelTransformer}), so deprecated members never appear in
     * generated model classes. A target shape referenced only through dropped members becomes
     * unreachable and is likewise omitted, matching C2J.
     *
     * <p>Removal is scoped to members whose container is reachable from the service's operations.
     * This is the "only touch what we emit" rule: it leaves framework trait definitions untouched
     * (the {@code smithy.api} prelude, {@code smithy.rules}, {@code aws.*}, etc.), some of which
     * declare their own {@code @deprecated} members that we must not mutate.
     *
     * @param model   the current model
     * @param service the service being generated (defines the reachable, emitted shapes)
     * @return the model with deprecated members removed, or the input model if there are none
     */
    public static Model dropDeprecatedMembers(Model model, ServiceShape service) {
        Set<ShapeId> reachable = computeReachableShapes(model, service);
        Set<Shape> deprecatedMembers = model.shapes(MemberShape.class)
            .filter(member -> member.hasTrait(DeprecatedTrait.class))
            .filter(member -> reachable.contains(member.getContainer()))
            .collect(Collectors.toSet());
        if (deprecatedMembers.isEmpty()) {
            return model;
        }
        return ModelTransformer.create().removeShapes(model, deprecatedMembers);
    }

    /**
     * For awsQuery / ec2Query services, and for any service carrying the
     * {@code aws.protocols#awsQueryCompatible} trait (e.g. SQS = {@code awsJson1_0} +
     * {@code @awsQueryCompatible}), injects a {@code ResponseMetadata} structure (carrying
     * a {@code RequestId} string member) and adds it as a {@code @required} member on every
     * result (operation output) shape. This mirrors the legacy C2J
     * {@code CppClientGenerator.addRequestIdToResults} injection (which fires for query/ec2
     * protocols and, via its {@code awsQueryCompatible} branch, for awsQueryCompatible JSON
     * services), so that those result classes expose {@code GetResponseMetadata()}. Other
     * protocols are unchanged.
     *
     * @param model   the current model
     * @param service the service being generated
     * @return the model with ResponseMetadata injected, or the input model for other protocols
     */
    public static Model injectResponseMetadata(Model model, ServiceShape service) {
        Protocol protocol = ProtocolResolver.resolve(service, model);
        boolean awsQueryCompatible = service.hasTrait(AwsQueryCompatibleTrait.class);
        if (protocol != Protocol.QUERY_XML && protocol != Protocol.EC2 && !awsQueryCompatible) {
            return model;
        }

        String namespace = service.getId().getNamespace();
        ShapeId responseMetadataId = ShapeId.fromParts(namespace, RESPONSE_METADATA);

        // ResponseMetadata is reserved. If the model already defines a shape of that name, injecting
        // ours would clobber it and MemberRenderer's name-based recognition could not tell them
        // apart — fail fast rather than silently mis-generate.
        if (model.getShape(responseMetadataId).isPresent()) {
            throw new IllegalStateException("Service " + service.getId() + " already defines a shape '"
                + responseMetadataId + "'; cannot inject the framework " + RESPONSE_METADATA
                + " envelope");
        }

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
                if (result.getMember(RESPONSE_METADATA).isPresent()) {
                    throw new IllegalStateException("Result shape " + result.getId()
                        + " already has a '" + RESPONSE_METADATA + "' member; cannot inject the "
                        + "framework " + RESPONSE_METADATA + " envelope. Rename the modeled member "
                        + "via a per-service transform first.");
                }
                StructureShape withMetadata = result.toBuilder()
                    .addMember(MemberShape.builder()
                        .id(result.getId().withMember(RESPONSE_METADATA))
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
