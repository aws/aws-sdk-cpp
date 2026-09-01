/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.IntegerShape;
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
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.UnitTypeTrait;
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
        Model result = markEmbeddedErrors(injectAccessLogTagQuery(normalizeReplicationStatus(
            expandBucketLocationConstraint(hackGetObjectResult(
                addExpiresCustomization(renameCopyObjectResult(
                    retypePartNumberMarkersToInteger(model), service), service)))), service));
        result = markOverrideStreaming(result);
        return markChecksumMembers(result, service);
    }

    // C2J's S3RestXmlCppClientGenerator flips these two requests' isOverrideStreaming on. Both derive
    // from StreamingS3Request (== AmazonStreamingWebServiceRequest, whose IsStreaming() returns true),
    // so they must override IsStreaming() back to false; RequestRenderer emits that for marked shapes.
    private static final Set<String> REQUESTS_TO_OVERRIDE_STREAMING = Set.of(
        "PutBucketPolicyRequest", "PutObjectAnnotationRequest");

    private static Model markOverrideStreaming(Model model) {
        List<Shape> marked = new ArrayList<>();
        for (StructureShape shape : model.shapes(StructureShape.class).toList()) {
            if (REQUESTS_TO_OVERRIDE_STREAMING.contains(shape.getId().getName())
                    && !shape.hasTrait(OverrideStreamingTrait.class)) {
                marked.add(shape.toBuilder().addTrait(new OverrideStreamingTrait()).build());
            }
        }
        if (marked.isEmpty()) {
            return model; // neither request is present (idempotent / other model).
        }
        return model.toBuilder().addShapes(marked.toArray(new Shape[0])).build();
    }

    // C2J's S3RestXmlCppClientGenerator maps each checksum member shape name to its ChecksumAlgorithm
    // enum constant; every request that also carries a ChecksumAlgorithm member gets these members
    // flagged so their setters also call SetChecksumAlgorithm(...). ChecksumCRC64NVME is intentionally
    // absent (C2J never listed it), so it keeps a plain setter.
    private static final Map<String, String> CHECKSUM_MEMBERS_ENUMS = Map.ofEntries(
        Map.entry("ChecksumCRC32", "CRC32"),
        Map.entry("ChecksumCRC32C", "CRC32C"),
        Map.entry("ChecksumSHA1", "SHA1"),
        Map.entry("ChecksumSHA256", "SHA256"),
        Map.entry("ChecksumSHA512", "SHA512"),
        Map.entry("ChecksumXXHASH64", "XXHASH64"),
        Map.entry("ChecksumXXHASH3", "XXHASH3"),
        Map.entry("ChecksumXXHASH128", "XXHASH128"),
        Map.entry("ChecksumMD5", "MD5"));

    private static Model markChecksumMembers(Model model, ServiceShape service) {
        Set<ShapeId> inputShapes = TopDownIndex.of(model).getContainedOperations(service).stream()
            .map(OperationShape::getInputShape)
            .filter(id -> !id.equals(UnitTypeTrait.UNIT))
            .collect(Collectors.toSet());
        List<Shape> replacements = new ArrayList<>();
        for (StructureShape req : model.shapes(StructureShape.class).toList()) {
            // Only request shapes that already carry a ChecksumAlgorithm member (so SetChecksumAlgorithm
            // exists), and only when they hold at least one not-yet-marked checksum member.
            boolean isChecksumRequest = inputShapes.contains(req.getId())
                && req.getMember("ChecksumAlgorithm").isPresent();
            boolean needsStamp = isChecksumRequest && req.getAllMembers().values().stream().anyMatch(m ->
                CHECKSUM_MEMBERS_ENUMS.containsKey(m.getTarget().getName())
                    && !m.hasTrait(ChecksumMemberTrait.class));
            if (needsStamp) {
                StructureShape.Builder b = StructureShape.builder().id(req.getId());
                req.getAllTraits().values().forEach(b::addTrait);
                for (MemberShape m : req.getAllMembers().values()) {
                    String enumValue = CHECKSUM_MEMBERS_ENUMS.get(m.getTarget().getName());
                    b.addMember(m.getMemberName(), m.getTarget(), mb -> {
                        m.getAllTraits().values().forEach(mb::addTrait);
                        if (enumValue != null && !m.hasTrait(ChecksumMemberTrait.class)) {
                            mb.addTrait(new ChecksumMemberTrait(enumValue));
                        }
                    });
                }
                replacements.add(b.build());
            }
        }
        if (replacements.isEmpty()) {
            return model; // no qualifying request (idempotent / other model).
        }
        return model.toBuilder().addShapes(replacements.toArray(new Shape[0])).build();
    }

    // C2J's S3RestXmlCppClientGenerator carries a hardcoded functionsWithEmbeddedErrors set; each
    // listed request shape gets shape.setEmbeddedErrors(true), which RequestHeader.vm turns into the
    // HasEmbeddedError(...) override. Mirror that by stamping EmbeddedErrorsTrait on every request
    // structure whose simple name is in the set; REST-XML request rendering emits the method for
    // marker-bearing shapes. The lone C2J typo entry (DeleteBucketAnaxlyticsConfigurationRequest)
    // is kept verbatim so the set matches C2J exactly; it simply never matches a real shape.
    private static final Set<String> EMBEDDED_ERROR_REQUESTS = Set.of(
        "AbortMultipartUploadRequest", "CompleteMultipartUploadRequest", "CopyObjectRequest",
        "CreateBucketRequest", "CreateMultipartUploadRequest", "CreateSessionRequest",
        "DeleteBucketAnaxlyticsConfigurationRequest", "DeleteBucketCorsRequest",
        "DeleteBucketEncryptionRequest", "DeleteBucketIntelligentTieringConfigurationRequest",
        "DeleteBucketInventoryConfigurationRequest", "DeleteBucketLifecycleRequest",
        "DeleteBucketMetricsConfigurationRequest", "DeleteBucketOwnershipControlsRequest",
        "DeleteBucketPolicyRequest", "DeleteBucketReplicationRequest", "DeleteBucketRequest",
        "DeleteBucketTaggingRequest", "DeleteBucketWebsiteRequest", "DeleteObjectRequest",
        "DeleteObjectsRequest", "DeleteObjectTaggingRequest", "DeletePublicAccessBlockRequest",
        "GetBucketAccelerateConfigurationRequest", "GetBucketAclRequest",
        "GetBucketAnalyticsConfigurationRequest", "GetBucketCorsRequest", "GetBucketEncryptionRequest",
        "GetBucketIntelligentTieringConfigurationRequest", "GetBucketInventoryConfigurationRequest",
        "GetBucketLifecycleConfigurationRequest", "GetBucketLocationRequest", "GetBucketLoggingRequest",
        "GetBucketMetricsConfigurationRequest", "GetBucketNotificationConfigurationRequest",
        "GetBucketOwnershipControlsRequest", "GetBucketPolicyRequest", "GetBucketPolicyStatusRequest",
        "GetBucketReplicationRequest", "GetBucketRequestPaymentRequest", "GetBucketTaggingRequest",
        "GetBucketVersioningRequest", "GetBucketWebsiteRequest", "GetObjectAclRequest",
        "GetObjectAttributesRequest", "GetObjectLegalHoldRequest", "GetObjectLockConfigurationRequest",
        "GetObjectRetentionRequest", "GetObjectTaggingRequest", "GetPublicAccessBlockRequest",
        "HeadBucketRequest", "HeadObjectRequest", "ListBucketAnalyticsConfigurationsRequest",
        "ListBucketIntelligentTieringConfigurationsRequest", "ListBucketInventoryConfigurationsRequest",
        "ListBucketMetricsConfigurationsRequest", "ListBucketsRequest", "ListDirectoryBucketsRequest",
        "ListMultipartUploadsRequest", "ListObjectsRequest", "ListObjectsV2Request",
        "ListObjectVersionsRequest", "ListPartsRequest",
        "PutBucketAccelerateConfigurationRequest", "PutBucketAclRequest",
        "PutBucketAnalyticsConfigurationRequest", "PutBucketCorsRequest", "PutBucketEncryptionRequest",
        "PutBucketIntelligentTieringConfigurationRequest", "PutBucketInventoryConfigurationRequest",
        "PutBucketLifecycleConfigurationRequest", "PutBucketLoggingRequest",
        "PutBucketMetricsConfigurationRequest", "PutBucketNotificationConfigurationRequest",
        "PutBucketOwnershipControlsRequest", "PutBucketPolicyRequest", "PutBucketReplicationRequest",
        "PutBucketRequestPaymentRequest", "PutBucketTaggingRequest", "PutBucketVersioningRequest",
        "PutBucketWebsiteRequest", "PutObjectAclRequest", "PutObjectLegalHoldRequest",
        "PutObjectLockConfigurationRequest", "PutObjectRequest", "PutObjectRetentionRequest",
        "PutObjectTaggingRequest", "PutPublicAccessBlockRequest", "RestoreObjectRequest",
        "SelectObjectContentRequest", "UploadPartCopyRequest", "UploadPartRequest",
        "WriteGetObjectResponseRequest");

    private static Model markEmbeddedErrors(Model model) {
        List<Shape> marked = new ArrayList<>();
        for (StructureShape shape : model.shapes(StructureShape.class).toList()) {
            if (EMBEDDED_ERROR_REQUESTS.contains(shape.getId().getName())
                    && !shape.hasTrait(EmbeddedErrorsTrait.class)) {
                marked.add(shape.toBuilder().addTrait(new EmbeddedErrorsTrait()).build());
            }
        }
        if (marked.isEmpty()) {
            return model; // no request shape from the set is present (idempotent / other model).
        }
        return model.toBuilder().addShapes(marked.toArray(new Shape[0])).build();
    }

    // C2J's S3RestXmlCppClientGenerator appends a `customizedAccessLogTag` map<string,string> member
    // to every operation request shape, modeled with a distinct `customizedQuery` flag. It binds to
    // the query string via @httpQueryParams (so every request emits AddQueryStringParameters), and
    // additionally carries the CustomizedAccessLogTagTrait marker so RequestQuerySerializer skips the
    // normal map loop for it and instead emits C2J's x--prefix filter block.
    private static Model injectAccessLogTagQuery(Model model, ServiceShape service) {
        ShapeId mapId = ShapeId.fromParts("com.amazonaws.s3", "CustomizedAccessLogTag");
        ShapeId stringId = ShapeId.from("smithy.api#String");

        Set<ShapeId> inputShapes = TopDownIndex.of(model).getContainedOperations(service).stream()
            .map(OperationShape::getInputShape)
            // smithy.api#Unit is a shared prelude StructureShape; mutating it would corrupt every
            // Unit-input operation across the model, so never treat it as a request shape.
            .filter(id -> !id.equals(UnitTypeTrait.UNIT))
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
                    // @httpQueryParams binds this map to the query string. C2J models it as a
                    // querystring member on every request, which is what makes every request emit
                    // AddQueryStringParameters; the trait drives RequestBindings.hasQueryStringMembers.
                    .addTrait(new HttpQueryParamsTrait())
                    // Marker for C2J's customizedQuery flag: RequestQuerySerializer skips the normal
                    // map loop for this member and emits the x--prefix filter block instead.
                    .addTrait(new CustomizedAccessLogTagTrait())
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
    private static final List<String> MISSING_REGIONS = List.of("us-iso-west-1", "us-east-1");

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

    // C2J's GetObjectResult carries an x-amz-id-2 header member (Id2) plus the standard RequestId.
    // The RequestId is supplied by ResultRenderer's top-level RequestId group for rest-xml results
    // (resultHasTopLevelRequestId() == true), which byte-matches C2J; injecting a modeled RequestId
    // member here would duplicate it. So inject only Id2.
    private static Model hackGetObjectResult(Model model) {
        String ns = "com.amazonaws.s3";
        ShapeId outputId = ShapeId.fromParts(ns, "GetObjectOutput");
        Optional<StructureShape> outputOpt = model.getShape(outputId).flatMap(Shape::asStructureShape);
        if (outputOpt.isEmpty()) {
            return model; // no GetObjectOutput: nothing to do.
        }
        StructureShape output = outputOpt.get();
        if (output.getMember("Id2").isPresent()) {
            return model; // already injected (idempotent) — or upstream added it.
        }
        ShapeId id2ShapeId = ShapeId.fromParts(ns, "ObjectId2");
        StringShape id2Shape = StringShape.builder().id(id2ShapeId).build();

        StructureShape.Builder b = StructureShape.builder().id(output.getId());
        output.getAllTraits().values().forEach(b::addTrait);
        output.getAllMembers().values().forEach(m ->
            b.addMember(m.getMemberName(), m.getTarget(),
                mb -> m.getAllTraits().values().forEach(mb::addTrait)));
        b.addMember("Id2", id2ShapeId, mb -> mb.addTrait(new HttpHeaderTrait("x-amz-id-2")));

        return model.toBuilder().addShapes(id2Shape, b.build()).build();
    }

    // C2J renames both the CopyObjectResult domain shape (to CopyObjectResultDetails) and the
    // CopyObjectOutput member that references it, so the member renders as GetCopyObjectResultDetails
    // while keeping its CopyObjectResult wire name. renameMember pins @xmlName("CopyObjectResult")
    // for rest-xml so the wire key survives the member-name change.
    private static Model renameCopyObjectResult(Model model, ServiceShape service) {
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
        Model renamed = ModelTransformer.create().renameShapes(model, Map.of(oldId, newId));

        ShapeId outputId = ShapeId.fromParts(ns, "CopyObjectOutput");
        Optional<StructureShape> output = renamed.getShape(outputId).flatMap(Shape::asStructureShape);
        if (output.isEmpty()) {
            return renamed; // no CopyObjectOutput: shape rename suffices.
        }
        Protocol protocol = ProtocolResolver.resolve(service, renamed);
        Optional<StructureShape> updated = TransformSupport.renameMember(
            output.get(), "CopyObjectResult", "CopyObjectResultDetails", protocol);
        return updated.map(s -> renamed.toBuilder().addShape(s).build()).orElse(renamed);
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
            // Only customize structs that lack ExpiresString (idempotent).
            if (struct.getMember("ExpiresString").isEmpty()) {
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
        }
        return model.toBuilder().addShapes(replacements.toArray(new Shape[0])).build();
    }

    // Both request and result on ListParts / GetObjectAttributes reference these two shapes. C2J models
    // them as integers, so the shipped SDK exposes int accessors. Coral2Smithy's S3ShapeMutatorTransformer
    // instead treats them as opaque pagination tokens: it leaves PartNumberMarker as Coral's string and
    // retypes NextPartNumberMarker to string. Retype both back to integer here to preserve the C2J public
    // API (int, not Aws::String). The paginator generator is a separate plugin that never sees this
    // mutation; it keeps its own NUMERIC_TOKEN_OVERRIDES entry so its `!= 0` check matches the int result.
    private static final List<String> PART_NUMBER_MARKER_SHAPES =
        List.of("PartNumberMarker", "NextPartNumberMarker");

    private static Model retypePartNumberMarkersToInteger(Model model) {
        String ns = "com.amazonaws.s3";
        List<Shape> replacements = new ArrayList<>();
        for (String name : PART_NUMBER_MARKER_SHAPES) {
            Shape existing = model.getShape(ShapeId.fromParts(ns, name)).orElse(null);
            // absent or already integer: nothing to retype (idempotent / other model).
            if (existing != null && !(existing instanceof IntegerShape)) {
                IntegerShape.Builder b = IntegerShape.builder().id(existing.getId());
                existing.getAllTraits().values().forEach(b::addTrait);
                replacements.add(b.build());
            }
        }
        if (replacements.isEmpty()) {
            return model;
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
