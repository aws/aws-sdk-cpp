/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.transform.ModelTransformer;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * CloudFront C2J parity. C2J names each operation with the API version baked into the wire Action
 * (e.g. {@code AssociateAlias2020_05_31}), so the generated request/result classes carry that
 * suffix ({@code AssociateAlias2020_05_31Request}/{@code ...Result}). The Smithy model names
 * operations cleanly ({@code AssociateAlias}) and keeps the version only on the service
 * ({@code version: "2020-05-31"}), which would emit clean class names and break public-API parity.
 * This renames every contained operation to append the underscore-joined version suffix; request and
 * result class/file names derive from the operation name, so the suffix flows through automatically.
 *
 * <p>Only operation shapes are renamed. The input/output structures fold into the request/result
 * classes (not emitted standalone) and domain structs (e.g. {@code Distribution}) must keep clean
 * names, matching C2J. Self-guards on service name (excludes cloudfront-keyvaluestore) and is
 * idempotent (skips operations already carrying the suffix).
 *
 * <p>Also retypes the {@code MaxItems} pagination member back to string on an allowlist of request
 * shapes: C2J ships those as {@code Aws::String}, but the Coral/Smithy model types them
 * {@code smithy.api#Integer}, which would flip the accessors to {@code int} and break the public C++
 * API. The retype is scoped to the allowlist because other shapes ({@code int} in C2J) must stay int.
 */
public final class CloudFrontTransforms implements ModelTransform {

    /**
     * C2J ships these 27 request shapes' {@code MaxItems} as {@code Aws::String} while 32 other shapes
     * (newer requests + list structs like {@code DistributionList}) ship {@code int}; retype only this
     * allowlist so the whole-service retype does not flip the int ones and introduce a breaking change.
     */
    private static final Set<String> MAX_ITEMS_STRING_SHAPES = Set.of(
        "ListCachePoliciesRequest",
        "ListCloudFrontOriginAccessIdentitiesRequest",
        "ListContinuousDeploymentPoliciesRequest",
        "ListDistributionsByAnycastIpListIdRequest",
        "ListDistributionsByCachePolicyIdRequest",
        "ListDistributionsByKeyGroupRequest",
        "ListDistributionsByOriginRequestPolicyIdRequest",
        "ListDistributionsByOwnedResourceRequest",
        "ListDistributionsByRealtimeLogConfigRequest",
        "ListDistributionsByResponseHeadersPolicyIdRequest",
        "ListDistributionsByTrustStoreRequest",
        "ListDistributionsByVpcOriginIdRequest",
        "ListDistributionsByWebACLIdRequest",
        "ListDistributionsRequest",
        "ListFieldLevelEncryptionConfigsRequest",
        "ListFieldLevelEncryptionProfilesRequest",
        "ListFunctionsRequest",
        "ListInvalidationsRequest",
        "ListKeyGroupsRequest",
        "ListKeyValueStoresRequest",
        "ListOriginAccessControlsRequest",
        "ListOriginRequestPoliciesRequest",
        "ListPublicKeysRequest",
        "ListRealtimeLogConfigsRequest",
        "ListResponseHeadersPoliciesRequest",
        "ListStreamingDistributionsRequest",
        "ListVpcOriginsRequest");

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "cloudfront".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        return retypeMaxItemsToString(suffixOperationNames(model, service));
    }

    /**
     * Retargets the {@code MaxItems} member to the prelude {@code smithy.api#String} on the
     * {@link #MAX_ITEMS_STRING_SHAPES} allowlist only, skipping members already targeting a string
     * shape. C2J ships those as {@code Aws::String}, but the Coral/Smithy model types them
     * {@code smithy.api#Integer}, which would flip the accessors to {@code int} and break the public
     * C++ API. The retype is scoped to the allowlist because other shapes ({@code int} in C2J) must
     * stay int. Idempotent: returns the model unchanged when nothing needs retyping.
     */
    private static Model retypeMaxItemsToString(Model model) {
        ShapeId stringTarget = ShapeId.from("smithy.api#String");
        Set<Shape> replacements = model.shapes(MemberShape.class)
            .filter(member -> "MaxItems".equals(member.getMemberName()))
            .filter(member -> MAX_ITEMS_STRING_SHAPES.contains(member.getContainer().getName()))
            .filter(member -> !model.expectShape(member.getTarget()).isStringShape())
            .map(member -> member.toBuilder().target(stringTarget).build())
            .collect(Collectors.toSet());
        if (replacements.isEmpty()) {
            return model;
        }
        return ModelTransformer.create().replaceShapes(model, new ArrayList<>(replacements));
    }

    private static Model suffixOperationNames(Model model, ServiceShape service) {
        String suffix = service.getVersion().replace("-", "_");

        Map<ShapeId, ShapeId> renames = new HashMap<>();
        // suffixed operation id -> its clean (pre-rename) name, for GetServiceRequestName.
        Map<ShapeId, String> cleanNames = new HashMap<>();
        for (OperationShape operation : TopDownIndex.of(model).getContainedOperations(service)) {
            ShapeId opId = operation.getId();
            // Skip operations already carrying the suffix (idempotent).
            if (!opId.getName().endsWith(suffix)) {
                ShapeId targetId = ShapeId.fromParts(opId.getNamespace(), opId.getName() + suffix);
                if (model.getShape(targetId).filter(shape -> !shape.getId().equals(opId)).isPresent()) {
                    throw new IllegalStateException("CloudFront operation version-suffix rename collision: '"
                        + targetId + "' already exists (would clobber '" + opId
                        + "'). Upstream model likely changed; review the CloudFront transform.");
                }
                renames.put(opId, targetId);
                cleanNames.put(targetId, opId.getName());
            }
        }
        if (renames.isEmpty()) {
            return model;
        }
        Model renamed = ModelTransformer.create().renameShapes(model, renames);
        // Stamp AFTER the rename: renameShapes does not preserve a definition-less internal trait.
        // ServiceRequestNameTrait keeps GetServiceRequestName unsuffixed (matches C2J).
        List<Shape> stamped = new ArrayList<>();
        cleanNames.forEach((suffixedId, cleanName) ->
            stamped.add(renamed.expectShape(suffixedId, OperationShape.class).toBuilder()
                .addTrait(new ServiceRequestNameTrait(cleanName))
                .build()));
        return renamed.toBuilder().addShapes(stamped.toArray(new Shape[0])).build();
    }
}
