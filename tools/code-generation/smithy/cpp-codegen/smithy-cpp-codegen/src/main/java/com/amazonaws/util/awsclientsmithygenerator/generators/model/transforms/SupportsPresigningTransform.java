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
 * Stamps {@link SupportsPresigningTrait} onto the operations C2J flags with
 * {@code setSupportsPresigning(true)}, so the protocol-agnostic {@code DumpBodyToUrl} override is
 * emitted. Stamped on the operation (never shared, unlike the {@code smithy.api#Unit} input) so it
 * also covers Unit-input operations. C2J sets the flag for every query/ec2 operation, plus Polly's
 * {@code SynthesizeSpeech}. No-op for other services.
 */
public final class SupportsPresigningTransform implements ModelTransform {

    @Override
    public boolean shouldRun(ServiceShape service) {
        return true;
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        Protocol protocol = ProtocolResolver.resolve(service, model);
        boolean queryLike = protocol == Protocol.QUERY_XML || protocol == Protocol.EC2;
        boolean polly = "polly".equals(ServiceNameUtil.getSmithyServiceName(service, null));
        if (!queryLike && !polly) {
            return model;
        }
        List<Shape> updated = new ArrayList<>();
        for (OperationShape op : TopDownIndex.of(model).getContainedOperations(service)) {
            // Operations are never Unit, so query/ec2 stamps every operation. Idempotent.
            boolean target = queryLike || "SynthesizeSpeech".equals(op.getId().getName());
            if (target && !op.hasTrait(SupportsPresigningTrait.class)) {
                updated.add(op.toBuilder().addTrait(new SupportsPresigningTrait()).build());
            }
        }
        return updated.isEmpty() ? model
            : model.toBuilder().addShapes(updated.toArray(new Shape[0])).build();
    }
}
