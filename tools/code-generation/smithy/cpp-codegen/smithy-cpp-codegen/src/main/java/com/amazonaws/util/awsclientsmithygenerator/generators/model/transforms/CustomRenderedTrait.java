/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal synthetic marker signaling that a shape is emitted by a dedicated ShapeRenderer (e.g.
 * DynamoDbRenderer) rather than the generic SubObjectRenderer. ShapeClassifier skips any
 * structure/union bearing it, preventing the double-emit that CppWriterDelegator's append-on-existing
 * behaviour would otherwise produce. Exists only as an in-memory trait added inside a
 * ModelTransformer; the aws.cpp.internal namespace keeps its id from colliding with a modeled trait.
 */
public final class CustomRenderedTrait extends AnnotationTrait {

    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#customRendered");

    public CustomRenderedTrait() {
        super(ID, ObjectNode.objectNode());
    }
}
