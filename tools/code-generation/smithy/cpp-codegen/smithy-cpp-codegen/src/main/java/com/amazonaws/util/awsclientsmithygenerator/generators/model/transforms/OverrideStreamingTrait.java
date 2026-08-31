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
 * request structure that C2J's {@code S3RestXmlCppClientGenerator} lists in its
 * {@code REQUESTS_TO_OVERRIDE_STREAMING} set ({@code shape.setOverrideStreaming(true)}). These
 * requests derive from {@code StreamingS3Request} (a typedef for {@code AmazonStreamingWebServiceRequest},
 * whose {@code IsStreaming()} returns {@code true}) yet must report non-streaming, so request rendering
 * turns the marker into the {@code bool IsStreaming() const override { return false; }} override that
 * {@code RequestHeader.vm} emits under {@code #if($shape.isOverrideStreaming())}. Kept as a marker +
 * generic renderer rule (not a service-name {@code if}) so the renderer stays service-agnostic.
 */
public final class OverrideStreamingTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#overrideStreaming");

    public OverrideStreamingTrait() {
        super(ID, Node.objectNode());
    }
}
