/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link S3Transforms} on the
 * {@code customizedAccessLogTag} map member it injects onto every S3 request. C2J models that
 * member with a distinct {@code customizedQuery} flag rather than an ordinary query-string map:
 * its {@code AddQueryStringParametersToRequest.vm} skips the normal {@code @httpQueryParams} loop
 * for it and instead emits the {@code x-}-prefix filter block ({@code collectedLogTags}). This
 * marker preserves that distinction — {@code RequestQuerySerializer} skips the marked member in
 * the normal map loop and emits the {@code x-} filter block for it after the loop. The member
 * keeps its {@code @httpQueryParams} trait so the request still declares
 * {@code AddQueryStringParameters} ({@code RequestBindings.hasQueryStringMembers}).
 */
public final class CustomizedAccessLogTagTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#customizedAccessLogTag");

    public CustomizedAccessLogTagTrait() {
        super(ID, Node.objectNode());
    }
}
