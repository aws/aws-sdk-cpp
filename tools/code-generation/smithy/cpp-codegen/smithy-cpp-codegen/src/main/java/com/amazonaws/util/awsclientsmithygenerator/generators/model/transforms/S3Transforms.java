/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.TimestampShape;
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.EnumTrait;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.transform.ModelTransformer;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;

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
        return injectAccessLogTagQuery(normalizeReplicationStatus(expandBucketLocationConstraint(
            hackGetObjectResult(addExpiresCustomization(renameCopyObjectResult(model), service)))), service);
    }

    // C2J's S3RestXmlCppClientGenerator appends a `customizedAccessLogTag` map<string,string> member
    // to every operation request shape. It renders as an ordinary map member in the .h; the query-
    // string binding (location=querystring, customizedQuery=true) is a serde concern deferred until
    // Smithy serde lands, so no @httpQuery/@httpQueryParams trait is attached here.
    private static Model injectAccessLogTagQuery(Model model, ServiceShape service) {
        ShapeId mapId = ShapeId.fromParts("com.amazonaws.s3", "CustomizedAccessLogTag");
        ShapeId stringId = ShapeId.from("smithy.api#String");

        Set<ShapeId> inputShapes = TopDownIndex.of(model).getContainedOperations(service).stream()
            .map(OperationShape::getInputShape)
            .collect(Collectors.toSet());
        List<StructureShape> updated = model.shapes(StructureShape.class)
            .filter(s -> inputShapes.contains(s.getId()))
            .filter(s -> s.getMember("customizedAccessLogTag").isEmpty())
            .toList();
        if (updated.isEmpty()) {
            return model; // no request shape needs the member (idempotent / no operations).
        }

        List<Shape> replacements = new ArrayList<>();
        if (model.getShape(mapId).isEmpty()) {
            replacements.add(MapShape.builder().id(mapId).key(stringId).value(stringId).build());
        }
        for (StructureShape req : updated) {
            replacements.add(req.toBuilder()
                .addMember(MemberShape.builder()
                    .id(req.getId().withMember("customizedAccessLogTag"))
                    .target(mapId)
                    .build())
                .build());
        }
        return model.toBuilder().addShapes(replacements.toArray(new Shape[0])).build();
    }

    // C2J collapses the model's split COMPLETE/COMPLETED ReplicationStatus values into a single
    // COMPLETED constant. Drop the extra COMPLETED and rewrite COMPLETE to COMPLETED, preserving
    // the remaining member order. Both remove and rewrite means we rebuild the enum explicitly.
    private static Model normalizeReplicationStatus(Model model) {
        Optional<Shape> shapeOpt = model.shapes()
            .filter(s -> s.getId().getMember().isEmpty())
            .filter(s -> "ReplicationStatus".equals(s.getId().getName()))
            .findFirst();
        if (shapeOpt.isEmpty()) {
            return model; // shape absent: nothing to normalize.
        }
        Shape found = shapeOpt.get();
        if (!found.isEnumShape()) {
            throw new IllegalStateException("S3: expected 'ReplicationStatus' to be an EnumShape but "
                + "found " + found.getType() + "; legacy @enum handling is unimplemented.");
        }
        EnumShape shape = found.asEnumShape().get();
        List<String> values = EnumRenderer.getEnumValues(shape);
        if (!values.contains("COMPLETE")) {
            return model; // upstream already normalized.
        }
        EnumShape.Builder b = EnumShape.builder().id(shape.getId());
        shape.getAllTraits().values().forEach(b::addTrait);
        for (String v : values) {
            if (!"COMPLETED".equals(v)) {
                String value = "COMPLETE".equals(v) ? "COMPLETED" : v;
                b.addMember(value, value);
            }
        }
        return model.toBuilder().addShape(b.build()).build();
    }

    // Confirmed delta at implementation time against the live s3.json BucketLocationConstraint enum;
    // the other 18 C2J regions are already present upstream.
    private static final List<String> MISSING_REGIONS = List.of("us-east-1", "us-iso-west-1");

    private static Model expandBucketLocationConstraint(Model model) {
        Optional<Shape> enumShape = model.shapes()
            .filter(s -> "BucketLocationConstraint".equals(s.getId().getName()))
            .filter(s -> s.isEnumShape() || s.hasTrait(EnumTrait.class))
            .findFirst();
        if (enumShape.isEmpty()) {
            return model;
        }
        return TransformSupport.appendEnumValues(enumShape.get(), regionNameValueMap())
            .map(updated -> model.toBuilder().addShape(updated).build())
            .orElse(model);
    }

    private static Map<String, String> regionNameValueMap() {
        LinkedHashMap<String, String> map = new LinkedHashMap<>();
        for (String region : MISSING_REGIONS) {
            map.put(region.replace('-', '_'), region);
        }
        return map;
    }

    private static Model hackGetObjectResult(Model model) {
        String ns = "com.amazonaws.s3";
        ShapeId outputId = ShapeId.fromParts(ns, "GetObjectOutput");
        Optional<StructureShape> outputOpt = model.getShape(outputId).flatMap(Shape::asStructureShape);
        if (outputOpt.isEmpty()) {
            return model; // no GetObjectOutput: nothing to do.
        }
        StructureShape output = outputOpt.get();
        if (output.getMember("Id2").isPresent() && output.getMember("RequestId").isPresent()) {
            return model; // already injected (idempotent) — or upstream added them.
        }
        ShapeId id2ShapeId = ShapeId.fromParts(ns, "ObjectId2");
        ShapeId reqIdShapeId = ShapeId.fromParts(ns, "ObjectRequestId");
        StringShape id2Shape = StringShape.builder().id(id2ShapeId).build();
        StringShape reqIdShape = StringShape.builder().id(reqIdShapeId).build();

        StructureShape.Builder b = StructureShape.builder().id(output.getId());
        output.getAllTraits().values().forEach(b::addTrait);
        output.getAllMembers().values().forEach(m ->
            b.addMember(m.getMemberName(), m.getTarget(),
                mb -> m.getAllTraits().values().forEach(mb::addTrait)));
        b.addMember("Id2", id2ShapeId, mb -> mb.addTrait(new HttpHeaderTrait("x-amz-id-2")));
        b.addMember("RequestId", reqIdShapeId, mb -> mb.addTrait(new HttpHeaderTrait("x-amz-request-id")));

        return model.toBuilder().addShapes(id2Shape, reqIdShape, b.build()).build();
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

    private static Model addExpiresCustomization(Model model, ServiceShape service) {
        String ns = "com.amazonaws.s3";
        // C2J renders Expires as a timestamp on every shape that carries it, though the current
        // Smithy model types it as a string. Retype the shape itself before scoping ExpiresString.
        model = retypeExpiresToTimestamp(model, ns);
        ShapeId expiresStringId = ShapeId.fromParts(ns, "ExpiresString");
        // ExpiresString (and the deprecation note) live only on operation-output structures.
        Set<ShapeId> outputShapes = TopDownIndex.of(model).getContainedOperations(service).stream()
            .map(OperationShape::getOutputShape)
            .collect(Collectors.toSet());
        List<StructureShape> withExpires = model.shapes(StructureShape.class)
            .filter(s -> outputShapes.contains(s.getId()))
            .filter(s -> s.getMember("Expires").isPresent())
            .toList();
        if (withExpires.isEmpty()) {
            return model; // no output shape carries Expires: nothing more to do.
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

    private static Model retypeExpiresToTimestamp(Model model, String ns) {
        ShapeId expiresId = ShapeId.fromParts(ns, "Expires");
        Shape existing = model.getShape(expiresId).orElse(null);
        if (existing == null || existing instanceof TimestampShape) {
            return model; // absent or already a timestamp: nothing to retype.
        }
        TimestampShape.Builder b = TimestampShape.builder().id(expiresId);
        existing.getAllTraits().values().forEach(b::addTrait);
        return model.toBuilder().addShape(b.build()).build();
    }
}
