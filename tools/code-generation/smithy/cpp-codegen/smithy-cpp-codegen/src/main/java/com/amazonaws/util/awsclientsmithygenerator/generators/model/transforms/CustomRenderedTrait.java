/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.ObjectNode;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal, synthetic marker trait stamped onto a shape by a service-level transform to signal that
 * the shape is emitted by a dedicated {@code ShapeRenderer} (e.g. {@code DynamoDbRenderer}) rather
 * than by the generic {@code SubObjectRenderer}. {@code ShapeClassifier} skips any structure/union
 * bearing this trait, so the default sub-object body is never emitted for it — preventing the
 * double-emit that {@code CppWriterDelegator}'s append-on-existing-writer behaviour would otherwise
 * silently produce.
 *
 * <p>This trait is never declared in a Smithy model file; it exists only as an in-memory trait
 * instance added inside a {@code ModelTransformer}. Smithy does not require a model-level trait
 * definition for an in-memory instance because trait-definition validation runs only through the
 * {@code ModelAssembler}, not through {@code Model.toBuilder().build()} / {@code ModelTransformer}.
 * The synthetic {@code aws.cpp.internal} namespace keeps its id from ever colliding with a real
 * modeled trait.
 */
public final class CustomRenderedTrait extends AnnotationTrait {

    /** The synthetic, internal-only id for this marker trait. */
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#customRendered");

    public CustomRenderedTrait() {
        super(ID, ObjectNode.objectNode());
    }
}
