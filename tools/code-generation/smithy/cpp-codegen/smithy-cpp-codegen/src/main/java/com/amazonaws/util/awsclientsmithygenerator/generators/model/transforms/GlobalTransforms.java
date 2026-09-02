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
     * Services (raw smithy names) that skip the "body" -> "requestBody" rename. api-gateway/apigatewayv2
     * own the rename in their dedicated transforms; the rest use "body" as a meaningful HTTP payload.
     */
    private static final Set<String> BODY_RENAME_SKIP_SERVICES = Set.of(
        "amplifyuibuilder", "api-gateway", "apigatewayv2", "bedrock-runtime", "glacier", "repostspace"
    );

    /**
     * Services (raw smithy names) that skip the "headers" -> "headerValues" rename. api-gateway
     * renames headers to "requestHeaders" in its dedicated transform instead.
     */
    private static final Set<String> HEADERS_RENAME_SKIP_SERVICES = Set.of(
        "api-gateway"
    );

    /**
     * The reserved framework-injected response-envelope member/shape name. {@link #injectResponseMetadata}
     * adds it (failing fast on collision), and MemberRenderer keys the "always-present" rendering
     * (no HasBeenSet getter, flag initialized true) on this exact name.
     */
    public static final String RESPONSE_METADATA = "ResponseMetadata";

    private GlobalTransforms() {}

    /**
     * Renames reserved request members on every operation-input structure ({@code body -> requestBody},
     * {@code headers/Headers -> headerValues}), honoring the per-service skip-lists. Mirrors C2J's
     * {@code RESERVED_REQUEST_MEMBER_MAPPING}. Only operation-input shapes are touched.
     * {@link TransformSupport#renameMember} preserves each renamed member's wire name via the
     * protocol-appropriate trait and throws on a target-name collision.
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
     * Computes the shape IDs reachable from the service's operations; only these generate model files.
     * Roots are each operation's input (including {@code smithy.api#Unit}), output, and error shapes,
     * walked transitively via {@link Walker}. Each root id is included even if its shape is absent.
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
     * Returns the service's non-{@code @deprecated} operations. C2J drops deprecated operations
     * entirely, so their orphaned input/output structures aren't emitted either. Used by every
     * emission-driving iteration ({@link #computeReachableShapes} and
     * {@link com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier#classify})
     * so reachability and classification agree; structures still referenced by a live operation
     * stay reachable.
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
     * Returns this class as a ModelTransform: {@link #dropDeprecatedMembers} first (so reachability
     * sees the pruned model), then {@link #renameReservedRequestMembers}, then
     * {@link #injectResponseMetadata}.
     */
    public static ModelTransform asTransform() {
        return (model, service) -> injectResponseMetadata(
            renameReservedRequestMembers(dropDeprecatedMembers(model, service), service), service);
    }

    /**
     * Removes {@code @deprecated} members from the shapes this service generates, mirroring C2J's
     * {@code C2jModelToGeneratorModelTransformer} (which drops {@code "deprecated": true} member refs).
     * A target reachable only through dropped members becomes unreachable and is likewise omitted.
     * Scoped to members whose container is reachable from the service's operations, so framework
     * trait definitions ({@code smithy.api} prelude, {@code smithy.rules}, {@code aws.*}) stay untouched.
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
     * For awsQuery/ec2Query services and any {@code @awsQueryCompatible} service (e.g. SQS =
     * {@code awsJson1_0} + {@code @awsQueryCompatible}), injects a {@code ResponseMetadata} structure
     * (with a {@code RequestId} member) and adds it as a {@code @required} member on every result shape,
     * so those results expose {@code GetResponseMetadata()}. Mirrors C2J's
     * {@code CppClientGenerator.addRequestIdToResults}. Other protocols are unchanged.
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

        // ResponseMetadata is reserved: a pre-existing shape of that name would be clobbered and
        // MemberRenderer's name-based recognition could not tell them apart, so fail fast.
        if (model.getShape(responseMetadataId).isPresent()) {
            throw new IllegalStateException("Service " + service.getId() + " already defines a shape '"
                + responseMetadataId + "'; cannot inject the framework " + RESPONSE_METADATA
                + " envelope");
        }

        StructureShape responseMetadata = StructureShape.builder()
            .id(responseMetadataId)
            .addMember(MemberShape.builder()
                .id(responseMetadataId.withMember("RequestId"))
                .target("smithy.api#String")
                .build())
            .build();

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
