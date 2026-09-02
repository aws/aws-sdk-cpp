/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by S3Transforms on S3 request structures in C2J's hardcoded
 * functionsWithEmbeddedErrors set (shape.setEmbeddedErrors(true)). REST-XML request rendering turns
 * the marker into the HasEmbeddedError(IOStream&, HeaderValueCollection&) override, matching C2J.
 */
public final class EmbeddedErrorsTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#embeddedErrors");

    public EmbeddedErrorsTrait() {
        super(ID, Node.objectNode());
    }
}
