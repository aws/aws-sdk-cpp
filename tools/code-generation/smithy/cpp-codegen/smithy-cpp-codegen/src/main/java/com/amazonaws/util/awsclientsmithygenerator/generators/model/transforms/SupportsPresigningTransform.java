/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;

import java.util.ArrayList;
import java.util.List;

/**
 * Stamps the internal {@link SupportsPresigningTrait} onto the OPERATIONS that C2J flags with
 * {@code shape.setSupportsPresigning(true)}, so the protocol-agnostic {@code DumpBodyToUrl} override
 * (declaration and impl) is emitted by request rendering. In C2J {@code supportsPresigning} is
 * conceptually per-operation; the trait is stamped on the operation (never shared, unlike the
 * {@code smithy.api#Unit} input) so it also covers {@code Unit}-input operations and keeps the decl
 * and impl symmetric and protocol-agnostic. C2J's {@code QueryCppClientGenerator} sets the flag for
 * every query/ec2 operation; Polly additionally sets it on {@code SynthesizeSpeech}. No-op for any
 * other service, leaving the model instance untouched.
 */
public final class SupportsPresigningTransform {

    private SupportsPresigningTransform() {}

    public static ModelTransform asTransform() {
        return SupportsPresigningTransform::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        Protocol protocol = ProtocolResolver.resolve(service, model);
        boolean queryLike = protocol == Protocol.QUERY_XML || protocol == Protocol.EC2;
        boolean polly = "polly".equals(ServiceNameUtil.getSmithyServiceName(service, null));
        if (!queryLike && !polly) {
            return model;
        }
        List<Shape> updated = new ArrayList<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            // Operations are never Unit, so query/ec2 stamps every operation (covering Unit-input
            // ops). Idempotent: skip operations that already carry the trait.
            boolean target = queryLike || "SynthesizeSpeech".equals(op.getId().getName());
            if (target && !op.hasTrait(SupportsPresigningTrait.class)) {
                updated.add(op.toBuilder().addTrait(new SupportsPresigningTrait()).build());
            }
        }
        return updated.isEmpty() ? model
            : model.toBuilder().addShapes(updated.toArray(new Shape[0])).build();
    }
}
