/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by S3Transforms on the customizedAccessLogTag map member injected onto every
 * S3 request. C2J models it with a distinct customizedQuery flag rather than an ordinary query-string
 * map; the marker makes RequestQuerySerializer skip it in the normal map loop and instead emit the
 * x--prefix filter block after the loop. The member keeps @httpQueryParams so the request still
 * declares AddQueryStringParameters.
 */
public final class CustomizedAccessLogTagTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#customizedAccessLogTag");

    public CustomizedAccessLogTagTrait() {
        super(ID, Node.objectNode());
    }
}
