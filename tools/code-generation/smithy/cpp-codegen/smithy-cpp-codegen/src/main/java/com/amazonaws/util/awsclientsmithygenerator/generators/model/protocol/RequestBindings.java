/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ShapeType;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpLabelTrait;
import software.amazon.smithy.model.traits.HttpPayloadTrait;
import software.amazon.smithy.model.traits.HttpPrefixHeadersTrait;
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.traits.XmlAttributeTrait;
import software.amazon.smithy.model.traits.XmlNamespaceTrait;

import java.util.ArrayList;
import java.util.List;

/**
 * Protocol-agnostic queries over a request (operation input) structure's HTTP bindings.
 * These do not vary by wire protocol, so they live here rather than on {@link ProtocolTraits}.
 */
final class RequestBindings {

    private RequestBindings() {}

    /** True when any request member binds to an HTTP header (httpHeader / httpPrefixHeaders). */
    static boolean hasHeaderMembers(StructureShape shape, Model model) {
        for (MemberShape m : shape.getAllMembers().values()) {
            if (m.hasTrait(HttpHeaderTrait.class) || m.hasTrait(HttpPrefixHeadersTrait.class)) {
                return true;
            }
        }
        return false;
    }

    /** True when any request member binds to the query string (httpQuery / httpQueryParams). */
    static boolean hasQueryStringMembers(StructureShape shape, Model model) {
        for (MemberShape m : shape.getAllMembers().values()) {
            if (m.hasTrait(HttpQueryTrait.class) || m.hasTrait(HttpQueryParamsTrait.class)) {
                return true;
            }
        }
        return false;
    }

    /**
     * True when the request emits a declared {@code SerializePayload()} through the normal path.
     * C2J omits it for a raw streaming {@code @httpPayload} member and for an event-stream input
     * member. The gate is protocol-agnostic.
     */
    static boolean emitsSerializePayload(OperationShape operation, Model model) {
        return !ShapeClassifier.isRawStreamingPayloadRequest(operation, model)
            && !ShapeClassifier.isEventStreamRequestOperation(operation, model);
    }

    /**
     * The request members that bind to the serialized body — i.e. everything NOT bound to an HTTP
     * header, query string, URI label, or the raw payload. This is the set the schema-serde adapter
     * serializes; header/query/label/payload members are handled by their own generated methods.
     */
    static List<MemberShape> bodyMembers(StructureShape shape) {
        List<MemberShape> out = new ArrayList<>();
        for (MemberShape m : shape.getAllMembers().values()) {
            if (m.hasTrait(HttpHeaderTrait.class)
                || m.hasTrait(HttpPrefixHeadersTrait.class)
                || m.hasTrait(HttpQueryTrait.class)
                || m.hasTrait(HttpQueryParamsTrait.class)
                || m.hasTrait(HttpLabelTrait.class)
                || m.hasTrait(HttpPayloadTrait.class)
                || m.hasTrait(software.amazon.smithy.model.traits.HttpResponseCodeTrait.class)) {
                continue;
            }
            out.add(m);
        }
        return out;
    }

    /**
     * True when the request has a non-empty body whose members are ALL schema-serde-supported
     * scalars — the slice {@link SchemaSerdeRenderer} can emit today. Members carrying
     * {@code @xmlAttribute}/{@code @xmlNamespace} are excluded (they need XML-specific handling the
     * scalar renderer does not emit), so such shapes fall back to the stub.
     */
    static boolean allBodyMembersSchemaSerializableScalar(StructureShape shape, Model model) {
        List<MemberShape> body = bodyMembers(shape);
        if (body.isEmpty()) {
            return false;
        }
        for (MemberShape m : body) {
            if (m.hasTrait(XmlAttributeTrait.class) || m.hasTrait(XmlNamespaceTrait.class)) {
                return false;
            }
            if (!isSupportedScalar(model.expectShape(m.getTarget()).getType())) {
                return false;
            }
        }
        return true;
    }

    /**
     * The result members that carry deserialized body data — {@link #bodyMembers} minus the
     * framework-injected {@code ResponseMetadata} envelope member (populated separately from the
     * legacy XmlDocument path, and a sibling of the {@code <OperationResult>} wrapper rather than a
     * body member). This is the set the schema-serde result adapter deserializes.
     */
    static List<MemberShape> resultBodyMembers(StructureShape shape) {
        List<MemberShape> out = new ArrayList<>();
        for (MemberShape m : bodyMembers(shape)) {
            if (m.getMemberName().equals(
                    com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms.RESPONSE_METADATA)) {
                continue;
            }
            out.add(m);
        }
        return out;
    }

    /**
     * True when a request body can be fully schema-serde-serialized today: it is empty (only the query
     * Action/Version envelope is emitted), or every body member is a supported scalar, a timestamp, or a
     * nested structure that is itself fully serializable (recursively). Lists/maps/unions/blobs/enums/
     * documents and reference cycles are not yet supported (such requests stay on the legacy path).
     */
    static boolean requestBodySchemaSerializable(StructureShape shape, Model model) {
        List<MemberShape> body = bodyMembers(shape);
        return isSerializableStruct(body, model, new java.util.HashSet<>());
    }

    /**
     * {@link #requestBodySchemaSerializable} for protocols whose empty body is not an envelope
     * (JSON / rest-xml / CBOR): an empty body keeps the legacy stub payload.
     */
    static boolean nonEmptyRequestBodySchemaSerializable(StructureShape shape, Model model) {
        return !bodyMembers(shape).isEmpty() && requestBodySchemaSerializable(shape, model);
    }

    /**
     * The {@code @httpPayload} member when it targets a structure / union the schema-serde renderer
     * can serialize as the document root; empty otherwise (no payload, or a blob / string / enum /
     * document payload, which keep their own handling).
     */
    static java.util.Optional<MemberShape> schemaSerializableStructurePayload(StructureShape shape, Model model) {
        for (MemberShape m : shape.getAllMembers().values()) {
            if (!m.hasTrait(HttpPayloadTrait.class)) {
                continue;
            }
            software.amazon.smithy.model.shapes.Shape target = model.expectShape(m.getTarget());
            if ((target.isStructureShape() || target.isUnionShape())
                    && isSerializableTarget(target, model, new java.util.HashSet<>())) {
                return java.util.Optional.of(m);
            }
            return java.util.Optional.empty();
        }
        return java.util.Optional.empty();
    }

    private static boolean isSerializableStruct(List<MemberShape> body, Model model,
                                                java.util.Set<software.amazon.smithy.model.shapes.ShapeId> visiting) {
        for (MemberShape m : body) {
            if (!isSerializableTarget(model.expectShape(m.getTarget()), model, visiting)) {
                return false;
            }
        }
        return true;  // empty body is serializable (envelope only)
    }

    /**
     * True when every member of the request (bound or body) can be expressed in a schema-serde adapter,
     * so an HTTP-binding protocol can place all of them on the wire. Empty shapes qualify.
     */
    static boolean allMembersSchemaSerializable(StructureShape shape, Model model) {
        return isSerializableStruct(new ArrayList<>(shape.getAllMembers().values()), model, new java.util.HashSet<>());
    }

    /** Every result member except the framework-injected {@code ResponseMetadata} envelope member. */
    static List<MemberShape> resultMembers(StructureShape shape) {
        List<MemberShape> out = new ArrayList<>();
        for (MemberShape m : shape.getAllMembers().values()) {
            if (!m.getMemberName().equals(
                    com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms.RESPONSE_METADATA)) {
                out.add(m);
            }
        }
        return out;
    }

    /** True when a result has members and every one (bound or body) can be deserialized by a schema-serde adapter. */
    static boolean resultAllMembersSchemaDeserializable(StructureShape shape, Model model) {
        List<MemberShape> members = resultMembers(shape);
        return !members.isEmpty() && isSerializableStruct(members, model, new java.util.HashSet<>());
    }

    /**
     * True when a result has a non-empty body (excluding {@code ResponseMetadata}) that the schema-serde
     * result adapter can fully deserialize — the same shape set the request side serializes (see
     * {@link #isSerializableTarget}).
     */
    static boolean resultBodySchemaDeserializable(StructureShape shape, Model model) {
        List<MemberShape> body = resultBodyMembers(shape);
        return !body.isEmpty() && isSerializableStruct(body, model, new java.util.HashSet<>());
    }

    /**
     * True when {@link SchemaSerdeRenderer} can emit (serialize and deserialize) a value of this shape:
     * scalars, enums, int enums, blobs, timestamps, documents, and structures / unions / lists / maps
     * built from them, including recursive ones.
     */
    private static boolean isSerializableTarget(software.amazon.smithy.model.shapes.Shape target, Model model,
                                                java.util.Set<software.amazon.smithy.model.shapes.ShapeId> visiting) {
        ShapeType t = target.getType();
        if (isSupportedScalar(t)) {
            return true;
        }
        switch (t) {
            case ENUM:
            case INT_ENUM:
            case BLOB:
            case TIMESTAMP:
            case DOCUMENT:
                return true;
            case STRUCTURE:
            case UNION:
            case LIST:
            case SET:
            case MAP:
                break;
            default:
                return false;  // document, bigInteger, bigDecimal
        }
        if (!visiting.add(target.getId())) {
            return true;  // reference cycle: already being checked further up
        }
        boolean ok;
        if (target.isListShape()) {
            ok = isSerializableTarget(model.expectShape(target.asListShape().get().getMember().getTarget()), model, visiting);
        } else if (target.isMapShape()) {
            ok = isSerializableTarget(model.expectShape(target.asMapShape().get().getKey().getTarget()), model, visiting)
                && isSerializableTarget(model.expectShape(target.asMapShape().get().getValue().getTarget()), model, visiting);
        } else {
            ok = isSerializableStruct(new ArrayList<>(target.getAllMembers().values()), model, visiting);
        }
        visiting.remove(target.getId());
        return ok;
    }

    private static boolean isSupportedScalar(ShapeType type) {
        switch (type) {
            case BOOLEAN:
            case BYTE:
            case SHORT:
            case INTEGER:
            case LONG:
            case FLOAT:
            case DOUBLE:
            case STRING:
                return true;
            default:
                return false;
        }
    }
}
