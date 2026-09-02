/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
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
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * Global model transforms applied before code generation.
 * Handles reserved member renaming and reachability filtering.
 */
public final class GlobalTransforms {

    /**
     * Services that skip the "body" -> "requestBody" member rename (raw smithy service names).
     * These use "body" as a meaningful domain/payload member. API Gateway (api-gateway) and
     * API Gateway V2 (apigatewayv2) are skipped here because their dedicated transforms own the
     * rename; the rest use "body" as an HTTP payload.
     */
    private static final Set<String> BODY_RENAME_SKIP_SERVICES = Set.of(
        "amplifyuibuilder", "api-gateway", "apigatewayv2", "bedrock-runtime", "glacier", "repostspace"
    );

    /**
     * Services that skip the "headers" -> "headerValues" member rename (raw smithy service name).
     * api-gateway renames headers to "requestHeaders" in its dedicated transform instead.
     */
    private static final Set<String> HEADERS_RENAME_SKIP_SERVICES = Set.of(
        "api-gateway"
    );

    /**
     * The framework-injected response-envelope member and shape name. It is reserved: no AWS model
     * defines its own {@code ResponseMetadata}. {@link #injectResponseMetadata} adds it (and fails
     * fast on any pre-existing collision), and {@code MemberRenderer} keys the "always-present"
     * rendering (no {@code HasBeenSet} getter, flag initialized true) on this exact name.
     */
    public static final String RESPONSE_METADATA = "ResponseMetadata";

    private GlobalTransforms() {}

    /**
     * Renames reserved request members on every operation-input structure: {@code body ->
     * requestBody}, {@code headers -> headerValues}, {@code Headers -> headerValues}, honoring the
     * per-service skip-lists. Mirrors the legacy C2J {@code RESERVED_REQUEST_MEMBER_MAPPING}. Only
     * operation-input shapes are touched (never arbitrary domain shapes that happen to end in
     * "Request"). {@link TransformSupport#renameMember} preserves each renamed member's wire name
     * via the service's protocol-appropriate trait (matching C2J's {@code setLocationName}), and
     * throws on a collision (the target member name already present).
     *
     * @param model   the current model
     * @param service the service being generated (its raw smithy name drives the skip-lists)
     * @return the model with reserved input members renamed, or the input model if none applied
     */
    static Model renameReservedRequestMembers(Model model, ServiceShape service) {
        String smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, null);
        Protocol protocol = ProtocolResolver.resolve(service, model);
        Set<ShapeId> inputIds = new HashSet<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            inputIds.add(op.getInputShape());
        }
        List<Shape> updated = new ArrayList<>();
        for (ShapeId inputId : inputIds) {
            model.getShape(inputId).flatMap(Shape::asStructureShape).ifPresent(struct -> {
                StructureShape current = struct;
                boolean changed = false;
                for (Map.Entry<String, String> rename : reservedRenames(current, smithyServiceName)) {
                    Optional<StructureShape> next =
                        TransformSupport.renameMember(current, rename.getKey(), rename.getValue(), protocol);
                    if (next.isPresent()) {
                        current = next.get();
                        changed = true;
                    }
                }
                if (changed) {
                    updated.add(current);
                }
            });
        }
        if (updated.isEmpty()) {
            return model;
        }
        return model.toBuilder().addShapes(updated).build();
    }

    /** Ordered (oldName -> newName) reserved-member renames applicable to this input struct. */
    private static List<Map.Entry<String, String>> reservedRenames(StructureShape struct,
                                                                    String smithyServiceName) {
        List<Map.Entry<String, String>> out = new ArrayList<>();
        if (struct.getMember("body").isPresent() && !BODY_RENAME_SKIP_SERVICES.contains(smithyServiceName)) {
            out.add(Map.entry("body", "requestBody"));
        }
        if (struct.getMember("headers").isPresent()
                && !HEADERS_RENAME_SKIP_SERVICES.contains(smithyServiceName)) {
            out.add(Map.entry("headers", "headerValues"));
        }
        if (struct.getMember("Headers").isPresent()) {
            out.add(Map.entry("Headers", "headerValues"));
        }
        return out;
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
        for (OperationShape op : nonDeprecatedOperations(model, service)) {
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
     * Returns the service's operations excluding any marked {@code @deprecated}. Legacy C2J drops
     * deprecated operations entirely (they never appear in the generated client), so their input and
     * output structures — orphaned once the operation is gone — are not emitted either. This is the
     * single filter used by every emission-driving iteration over the service's operations
     * ({@link #computeReachableShapes} and {@link com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier#classify})
     * so reachability and classification stay in agreement. A structure still referenced by a live
     * operation remains reachable through that operation, so shared structures are unaffected.
     *
     * @param model   the Smithy model
     * @param service the service whose operations are being generated
     * @return the service's non-deprecated operations
     */
    public static List<OperationShape> nonDeprecatedOperations(Model model, ServiceShape service) {
        return TopDownIndex.of(model).getContainedOperations(service).stream()
            .filter(op -> !op.hasTrait(DeprecatedTrait.class))
            .collect(Collectors.toList());
    }

    /**
     * Returns this class as a ModelTransform.
     *
     * <p>Runs {@link #dropDeprecatedMembers} first (so reachability filtering sees the pruned
     * model and orphaned targets drop out), then {@link #renameReservedRequestMembers} to apply the
     * C2J-parity request-member renames, then {@link #injectResponseMetadata}.
     */
    public static ModelTransform asTransform() {
        return (model, service) -> injectResponseMetadata(
            renameReservedRequestMembers(dropDeprecatedMembers(model, service), service), service);
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

        Set<ShapeId> outputIds = new HashSet<>();
        for (OperationShape op : nonDeprecatedOperations(model, service)) {
            op.getOutput().ifPresent(outputIds::add);
        }

        for (ShapeId outputId : outputIds) {
            model.getShape(outputId).flatMap(Shape::asStructureShape).ifPresent(result -> {
                if (result.getMember(RESPONSE_METADATA).isPresent()) {
                    throw new IllegalStateException("Result shape " + result.getId()
                        + " already has a '" + RESPONSE_METADATA + "' member, which collides with the "
                        + "framework " + RESPONSE_METADATA + " envelope. Resolve the collision in the "
                        + "raw model, or rename the modeled member earlier within GlobalTransforms: "
                        + "per-service transforms run after GlobalTransforms and cannot pre-empt this "
                        + "injection.");
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
