/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.SourceLocation;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AbstractTrait;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;

/**
 * Internal marker (never declared in any model file) placed by {@link GlacierTransforms} on each
 * request structure that C2J attaches constant request headers to via
 * {@code metadata.setAdditionalHeaders(...)}. It carries the ordered header name → value pairs
 * (for Glacier, {@code x-amz-glacier-version} → the service API version).
 *
 * <p>C2J emits these headers from the {@code <Prefix>Request} base class ({@code GetHeaders}) for
 * ordinary requests, but a streaming request derives from {@code AmazonStreamingWebServiceRequest}
 * and bypasses that base, so {@code StreamRequestSource.vm} instead emits them inside the request's
 * own {@code GetRequestSpecificHeaders}. The base class stays C2J-generated, so only the streaming
 * requests carry this marker; request rendering turns it into the matching {@code headers.insert(...)}
 * lines. Kept as a data-carrying marker + generic renderer rule so the renderer stays
 * service-agnostic.
 */
public final class AdditionalRequestHeadersTrait extends AbstractTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#additionalRequestHeaders");

    private final Map<String, String> headers;

    public AdditionalRequestHeadersTrait(Map<String, String> headers) {
        super(ID, SourceLocation.NONE);
        this.headers = Collections.unmodifiableMap(new LinkedHashMap<>(headers));
    }

    /** Ordered header name → value pairs, emitted verbatim into {@code GetRequestSpecificHeaders}. */
    public Map<String, String> getHeaders() {
        return headers;
    }

    @Override
    protected Node createNode() {
        ObjectNode.Builder builder = Node.objectNodeBuilder();
        headers.forEach(builder::withMember);
        return builder.build();
    }
}
