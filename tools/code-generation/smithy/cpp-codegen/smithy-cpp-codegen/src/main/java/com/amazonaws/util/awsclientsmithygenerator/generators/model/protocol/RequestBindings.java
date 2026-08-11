/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpPrefixHeadersTrait;
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;

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
}
