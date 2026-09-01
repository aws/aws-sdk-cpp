/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker (never declared in any model file) placed by {@link SupportsPresigningTransform}
 * on each request structure that C2J's generators flag with {@code shape.setSupportsPresigning(true)}
 * (every query/ec2 request via {@code QueryCppClientGenerator}, plus Polly's {@code SynthesizeSpeech}).
 * C2J's shared {@code RequestHeader.vm} emits the protected {@code DumpBodyToUrl(Aws::Http::URI&)}
 * override under {@code #if($shape.supportsPresigning())}, independent of protocol; request rendering
 * turns this marker into that same protected override so the declaration stays protocol-agnostic
 * while each protocol supplies only the method body. Kept as a marker + generic renderer rule (not a
 * service-name {@code if}) so the renderer stays service-agnostic.
 */
public final class SupportsPresigningTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#supportsPresigning");

    public SupportsPresigningTrait() {
        super(ID, Node.objectNode());
    }
}
