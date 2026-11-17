/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.GlobalTransforms;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.ShapeType;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpLabelTrait;
import software.amazon.smithy.model.traits.HttpPayloadTrait;
import software.amazon.smithy.model.traits.HttpPrefixHeadersTrait;
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.traits.HttpResponseCodeTrait;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

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
     * header, query string, URI label, the payload, or the response status code.
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
                || m.hasTrait(HttpResponseCodeTrait.class)) {
                continue;
            }
            out.add(m);
        }
        return out;
    }

    /** Every member of the shape, bound or body. */
    static List<MemberShape> members(StructureShape shape) {
        return new ArrayList<>(shape.getAllMembers().values());
    }

    /** Every result member except the framework-injected {@code ResponseMetadata} envelope member. */
    static List<MemberShape> resultMembers(StructureShape shape) {
        return withoutResponseMetadata(members(shape));
    }

    /** The result's body members except the framework-injected {@code ResponseMetadata} envelope member. */
    static List<MemberShape> resultBodyMembers(StructureShape shape) {
        return withoutResponseMetadata(bodyMembers(shape));
    }

    private static List<MemberShape> withoutResponseMetadata(List<MemberShape> members) {
        List<MemberShape> out = new ArrayList<>();
        for (MemberShape m : members) {
            if (!m.getMemberName().equals(GlobalTransforms.RESPONSE_METADATA)) {
                out.add(m);
            }
        }
        return out;
    }

    /**
     * True when every one of {@code members} can be expressed in a schema-serde adapter (see
     * {@link #isSerializableTarget}). An empty list qualifies.
     */
    static boolean schemaSerializable(List<MemberShape> members, Model model) {
        return isSerializableStruct(members, model, new HashSet<>());
    }

    /** {@link #schemaSerializable} for a non-empty member list. */
    static boolean nonEmptySchemaSerializable(List<MemberShape> members, Model model) {
        return !members.isEmpty() && schemaSerializable(members, model);
    }

    private static boolean isSerializableStruct(List<MemberShape> members, Model model, Set<ShapeId> visiting) {
        for (MemberShape m : members) {
            if (!isSerializableTarget(model.expectShape(m.getTarget()), model, visiting)) {
                return false;
            }
        }
        return true;
    }

    /**
     * True when {@link SchemaSerdeRenderer} can emit (serialize and deserialize) a value of this shape:
     * scalars, enums, int enums, blobs, timestamps, documents, and structures / unions / lists / maps
     * built from them, including recursive ones. bigInteger / bigDecimal are not supported.
     */
    private static boolean isSerializableTarget(Shape target, Model model, Set<ShapeId> visiting) {
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
                return false;  // bigInteger, bigDecimal
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
