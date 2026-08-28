/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.transform.ModelTransformer;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/**
 * S3 (and S3-CRT, which shares the S3 model) parity with the legacy C2J
 * {@code S3RestXmlCppClientGenerator} for the {@code Model::} namespace. Composes the S3 model
 * mutations that C2J applies in {@code generateSourceFiles}. Self-guards on the raw smithy service
 * name; every sub-transform no-ops when its target shapes are absent and fast-fails on genuine
 * collisions. Client/endpoint/ARN/S3Express/CRT customizations are out of scope (separate
 * generators), as is serde-body emission (still stubbed plugin-wide).
 */
public final class S3Transforms {

    private S3Transforms() {}

    public static ModelTransform asTransform() {
        return S3Transforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        String name = ServiceNameUtil.getSmithyServiceName(service, null);
        if (!"s3".equals(name) && !"s3-crt".equals(name)) {
            return model;
        }
        // Sub-transforms are chained here by later tasks, e.g.:
        // return normalizeReplicationStatus(expandBucketLocationConstraint(... (model) ...));
        return addExpiresCustomization(renameCopyObjectResult(model));
    }

    private static Model renameCopyObjectResult(Model model) {
        String ns = "com.amazonaws.s3";
        ShapeId oldId = ShapeId.fromParts(ns, "CopyObjectResult");
        ShapeId newId = ShapeId.fromParts(ns, "CopyObjectResultDetails");
        if (model.getShape(oldId).isEmpty()) {
            return model; // source absent: nothing to rename.
        }
        if (model.getShape(newId).isPresent()) {
            throw new IllegalStateException("S3 collision: '" + newId + "' already exists; cannot "
                + "rename '" + oldId + "' onto it.");
        }
        return ModelTransformer.create().renameShapes(model, Map.of(oldId, newId));
    }

    private static final String EXPIRES_DEPRECATION =
        "Deprecated: Please use ExpiresString instead. " + System.lineSeparator() + "     * ";

    private static Model addExpiresCustomization(Model model) {
        String ns = "com.amazonaws.s3";
        ShapeId expiresStringId = ShapeId.fromParts(ns, "ExpiresString");
        List<StructureShape> withExpires = model.shapes(StructureShape.class)
            .filter(s -> s.getMember("Expires").isPresent())
            .toList();
        if (withExpires.isEmpty()) {
            return model; // no Expires anywhere: nothing to do.
        }
        List<Shape> replacements = new ArrayList<>();
        // Inject the ExpiresString string shape once (idempotent: skip if present).
        if (model.getShape(expiresStringId).isEmpty()) {
            replacements.add(StringShape.builder().id(expiresStringId).build());
        }
        for (StructureShape struct : withExpires) {
            if (struct.getMember("ExpiresString").isPresent()) {
                continue; // already customized (idempotent).
            }
            MemberShape expires = struct.getAllMembers().get("Expires");
            StructureShape.Builder b = StructureShape.builder().id(struct.getId());
            struct.getAllTraits().values().forEach(b::addTrait);
            for (MemberShape m : struct.getAllMembers().values()) {
                if (m.getMemberName().equals("Expires")) {
                    // Rewrite Expires' documentation to prepend the deprecation note.
                    String existingDoc = m.getTrait(DocumentationTrait.class)
                        .map(DocumentationTrait::getValue).orElse("");
                    b.addMember("Expires", m.getTarget(), mb -> {
                        m.getAllTraits().values().forEach(mb::addTrait);
                        if (!existingDoc.toLowerCase().contains("deprecated")) {
                            mb.addTrait(new DocumentationTrait(EXPIRES_DEPRECATION + existingDoc));
                        }
                    });
                } else {
                    b.addMember(m.getMemberName(), m.getTarget(),
                        mb -> m.getAllTraits().values().forEach(mb::addTrait));
                }
            }
            // Add ExpiresString cloning Expires' traits (so it reads the same header), retargeted.
            b.addMember("ExpiresString", expiresStringId,
                mb -> expires.getAllTraits().values().stream()
                    .filter(t -> !(t instanceof DocumentationTrait))
                    .forEach(mb::addTrait));
            replacements.add(b.build());
        }
        return model.toBuilder().addShapes(replacements.toArray(new Shape[0])).build();
    }
}
