/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.SensitiveTrait;
import software.amazon.smithy.model.transform.ModelTransformer;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;

/**
 * EC2 model parity with the legacy C2J {@code Ec2CppClientGenerator}: adds the unmodeled
 * {@code disabled} value to {@code SpotInstanceState}, renames every {@code *Result}
 * structure shape to {@code *Response} so nested domain structs (e.g. {@code MetricDataResult})
 * match C2J, and models {@code ModifyInstanceAttributeRequest.UserData} as the sensitive
 * {@code SecureBlobAttributeValue} to match the C2J model. Operation-OUTPUT result files are
 * handled centrally by {@code ShapeUtil.getResultSuffix}, but nested domain structs are rendered
 * from the shape name by {@code SubObjectRenderer}, so those require a model-shape rename. Out of
 * scope (client/endpoint path, left to C2J): the legacy error-code injection, CopySnapshot
 * pre-signing, and endpoint template.
 *
 * <p><b>UserData / SecureBlobAttributeValue:</b> the upstream {@code aws/aws-models} C2J model
 * ({@code ec2/<date>/service-2.json}) marks {@code UserData} sensitive via
 * {@code SecureBlobAttributeValue -> SecureBlob (@sensitive)}, but the upstream Smithy model
 * ({@code ec2/smithy/model.json}) still targets the non-sensitive {@code BlobAttributeValue}. This
 * transform mirrors the C2J modeling in the Smithy model so generated code matches. It is a
 * temporary compensation for that upstream data lag; once the upstream Smithy model catches up and
 * already defines {@code SecureBlobAttributeValue}, this transform throws {@code IllegalStateException}
 * so a human removes it rather than letting it silently self-retire — see
 * docs/superpowers/plans/parity-deltas.md.
 */
public final class Ec2Transforms {

    private Ec2Transforms() {}

    public static ModelTransform asTransform() {
        return Ec2Transforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"ec2".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
        return renameResultShapesToResponse(
            addSecureBlobUserData(addSpotInstanceStateDisabled(model)));
    }

    /**
     * Models {@code ModifyInstanceAttributeRequest.UserData} as {@code SecureBlobAttributeValue}
     * (whose {@code Value} member targets a {@code @sensitive} {@code SecureBlob} blob), matching
     * the C2J model. The upstream Smithy model still targets the non-sensitive
     * {@code BlobAttributeValue}; after repointing, {@code BlobAttributeValue} is no longer
     * referenced and drops out of the reachable (emitted) set, exactly as it does in C2J.
     *
     * <p>Throws {@code IllegalStateException} when {@code SecureBlobAttributeValue} already exists
     * (upstream Smithy caught up), signalling this compensating transform is obsolete and must be
     * removed. No-op — leaving the model untouched — when {@code ModifyInstanceAttributeRequest} or
     * its {@code UserData} member is absent, or {@code UserData} no longer targets
     * {@code BlobAttributeValue} (source-absent, not a collision).
     */
    private static Model addSecureBlobUserData(Model model) {
        Optional<StructureShape> requestOpt = model.shapes(StructureShape.class)
            .filter(s -> "ModifyInstanceAttributeRequest".equals(s.getId().getName()))
            .findFirst();
        if (requestOpt.isEmpty()) {
            return model;
        }
        StructureShape request = requestOpt.get();
        MemberShape userData = request.getAllMembers().get("UserData");
        if (userData == null) {
            return model;
        }

        String namespace = request.getId().getNamespace();
        ShapeId secureBlobId = ShapeId.fromParts(namespace, "SecureBlob");
        ShapeId secureStructId = ShapeId.fromParts(namespace, "SecureBlobAttributeValue");
        ShapeId blobAttrId = ShapeId.fromParts(namespace, "BlobAttributeValue");

        if (model.getShape(secureStructId).isPresent()) {
            throw new IllegalStateException("EC2 SecureBlobAttributeValue already exists in the model; "
                + "the upstream Smithy model has caught up and this compensating transform is obsolete "
                + "and must be removed.");
        }
        if (!userData.getTarget().equals(blobAttrId)) {
            return model; // UserData no longer targets BlobAttributeValue: nothing to repoint (no-op).
        }
        MemberShape originalValue = model.expectShape(blobAttrId, StructureShape.class)
            .getAllMembers().get("Value");
        if (originalValue == null) {
            return model;
        }

        BlobShape secureBlob = BlobShape.builder()
            .id(secureBlobId)
            .addTrait(new SensitiveTrait())
            .build();
        // Copy BlobAttributeValue.Value's serde traits (ec2QueryName/xmlName), retargeting the blob.
        MemberShape secureValue = originalValue.toBuilder()
            .id(secureStructId.withMember("Value"))
            .target(secureBlobId)
            .build();
        StructureShape secureStruct = StructureShape.builder()
            .id(secureStructId)
            .addMember(secureValue)
            .build();
        // Preserve UserData's own traits (ec2QueryName, documentation, xmlName); only retarget it.
        MemberShape newUserData = userData.toBuilder().target(secureStructId).build();
        StructureShape newRequest = request.toBuilder().addMember(newUserData).build();

        return model.toBuilder().addShapes(secureBlob, secureStruct, newRequest).build();
    }

    private static Model renameResultShapesToResponse(Model model) {
        Map<ShapeId, ShapeId> renames = new HashMap<>();
        for (StructureShape shape : model.shapes(StructureShape.class).toList()) {
            String name = shape.getId().getName();
            if (name.endsWith("Result")) {
                String target = name.substring(0, name.length() - "Result".length()) + "Response";
                ShapeId targetId = ShapeId.fromParts(shape.getId().getNamespace(), target);
                if (model.getShape(targetId).isPresent()) {
                    throw new IllegalStateException("EC2 *Result->*Response rename collision: '"
                        + targetId + "' already exists (would clobber '" + shape.getId()
                        + "'). Upstream model likely changed; review the EC2 transform.");
                }
                renames.put(shape.getId(), targetId);
            }
        }
        if (renames.isEmpty()) {
            return model;
        }
        return ModelTransformer.create().renameShapes(model, renames);
    }

    private static Model addSpotInstanceStateDisabled(Model model) {
        return TransformSupport.appendEnumValuesByName(model, "SpotInstanceState", List.of("disabled"));
    }
}
