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
 * EC2 C2J parity: adds the unmodeled {@code disabled} value to SpotInstanceState; renames every
 * {@code *Result} structure to {@code *Response} so nested domain structs (rendered from shape name
 * via SubObjectRenderer) match C2J; and retargets ModifyInstanceAttributeRequest.UserData to the
 * sensitive SecureBlobAttributeValue (upstream Smithy still targets the non-sensitive
 * BlobAttributeValue). Out of scope (left to C2J): legacy error-code injection, CopySnapshot
 * pre-signing, and the endpoint template.
 */
public final class Ec2Transforms implements ModelTransform {

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "ec2".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        return renameResultShapesToResponse(
            addSecureBlobUserData(addSpotInstanceStateDisabled(model)));
    }

    /**
     * Models ModifyInstanceAttributeRequest.UserData as SecureBlobAttributeValue (whose Value member
     * targets a @sensitive SecureBlob blob), matching C2J; the now-unreferenced BlobAttributeValue
     * drops out of the emitted set. Throws when SecureBlobAttributeValue already exists (upstream
     * Smithy caught up, so this transform is obsolete). No-op when ModifyInstanceAttributeRequest or
     * its UserData member is absent, or UserData no longer targets BlobAttributeValue.
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
