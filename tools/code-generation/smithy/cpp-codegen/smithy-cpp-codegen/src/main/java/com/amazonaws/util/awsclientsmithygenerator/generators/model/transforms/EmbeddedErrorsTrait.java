/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link S3Transforms} on each S3
 * request structure that C2J's {@code S3RestXmlCppClientGenerator} lists in its hardcoded
 * {@code functionsWithEmbeddedErrors} set ({@code shape.setEmbeddedErrors(true)}). REST-XML request
 * rendering turns the marker into the {@code HasEmbeddedError(IOStream&, HeaderValueCollection&)}
 * override that {@code RequestHeader.vm} emits under {@code #if($shape.hasEmbeddedErrors())}, so
 * these S3 requests match C2J. Kept as a marker + generic renderer rule (not a service-name
 * {@code if}) so the renderer stays service-agnostic; only S3 requests ever carry it.
 */
public final class EmbeddedErrorsTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#embeddedErrors");

    public EmbeddedErrorsTrait() {
        super(ID, Node.objectNode());
    }
}
