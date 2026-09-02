/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.AnnotationTrait;

/**
 * Internal marker placed by {@link SupportsPresigningTransform} on each request C2J flags with
 * {@code setSupportsPresigning(true)} (every query/ec2 request, plus Polly's {@code SynthesizeSpeech}).
 * Request rendering turns the marker into the protected, protocol-agnostic
 * {@code DumpBodyToUrl(Aws::Http::URI&)} override, with each protocol supplying only the method body.
 */
public final class SupportsPresigningTrait extends AnnotationTrait {
    public static final ShapeId ID = ShapeId.from("aws.cpp.internal#supportsPresigning");

    public SupportsPresigningTrait() {
        super(ID, Node.objectNode());
    }
}
