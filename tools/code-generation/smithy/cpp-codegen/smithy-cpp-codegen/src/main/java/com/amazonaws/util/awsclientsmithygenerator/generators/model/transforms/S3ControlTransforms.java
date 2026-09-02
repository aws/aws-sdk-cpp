/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ModelTransform;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.knowledge.TopDownIndex;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;

import java.util.ArrayList;
import java.util.List;

/**
 * S3 Control parity with C2J's {@code S3ControlRestXmlCppClientGenerator}, whose
 * {@code addRequestIdToResults} adds both a top-level {@code RequestId} and {@code HostId} (x-amz-id-2)
 * to every result. RequestId is already emitted generically; this closes the HostId gap by marking
 * each operation-output with {@link TopLevelHostIdTrait}, which {@code ResultRenderer} turns into the
 * top-level HostId accessor group. Self-guards on the raw smithy service name {@code s3-control}.
 */
public final class S3ControlTransforms {

    private S3ControlTransforms() {}

    public static ModelTransform asTransform() {
        return S3ControlTransforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"s3-control".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
        TopDownIndex index = TopDownIndex.of(model);
        List<Shape> marked = new ArrayList<>();
        for (OperationShape op : index.getContainedOperations(service)) {
            model.getShape(op.getOutputShape()).flatMap(Shape::asStructureShape).ifPresent(out -> {
                if (!out.hasTrait(TopLevelHostIdTrait.class)) {
                    marked.add(out.toBuilder().addTrait(new TopLevelHostIdTrait()).build());
                }
            });
        }
        if (marked.isEmpty()) {
            return model;
        }
        return model.toBuilder().addShapes(marked.toArray(new Shape[0])).build();
    }
}
