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
 * Internal marker placed by GlacierTransforms on request structures C2J attaches constant headers to
 * via metadata.setAdditionalHeaders(...). Carries the ordered header name-value pairs (for Glacier,
 * x-amz-glacier-version -> the API version). Only streaming requests carry it: they bypass the
 * C2J-generated base GetHeaders, so request rendering emits the matching headers.insert(...) lines.
 */
public final class AdditionalRequestHeadersTrait extends AbstractTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#additionalRequestHeaders");

    private final Map<String, String> headers;

    public AdditionalRequestHeadersTrait(Map<String, String> headers) {
        super(ID, SourceLocation.NONE);
        this.headers = Collections.unmodifiableMap(new LinkedHashMap<>(headers));
    }

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
