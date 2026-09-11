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
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.transform.ModelTransformer;

import java.util.Map;
import java.util.Optional;

/**
 * Access Analyzer C2J parity: resolves the collision between the GetGeneratedPolicy result wrapper
 * and the domain shape GeneratedPolicyResult by renaming the domain shape (and its referencing
 * member) to GeneratedPolicyResults, pinning the original wire key via the protocol-appropriate
 * trait so serde stays correct. Self-guards on service name accessanalyzer; no-op when the domain
 * shape is absent; throws if GeneratedPolicyResults is already occupied by a distinct shape.
 */
public final class AccessAnalyzerTransforms implements ModelTransform {

    @Override
    public boolean shouldRun(ServiceShape service) {
        return "accessanalyzer".equals(ServiceNameUtil.getSmithyServiceName(service, null));
    }

    @Override
    public Model transform(Model model, ServiceShape service) {
        String ns = service.getId().getNamespace();
        ShapeId oldShape = ShapeId.fromParts(ns, "GeneratedPolicyResult");
        ShapeId newShape = ShapeId.fromParts(ns, "GeneratedPolicyResults");

        if (model.getShape(oldShape).isEmpty()) {
            return model; // upstream already renamed / removed the shape: nothing to do.
        }
        if (model.getShape(newShape).isPresent()) {
            throw new IllegalStateException("AccessAnalyzer collision: '" + newShape
                + "' already exists; cannot rename '" + oldShape + "' onto it.");
        }

        Model renamed = ModelTransformer.create().renameShapes(model, Map.of(oldShape, newShape));

        ShapeId respId = ShapeId.fromParts(ns, "GetGeneratedPolicyResponse");
        Optional<StructureShape> resp = renamed.getShape(respId).flatMap(Shape::asStructureShape);
        if (resp.isEmpty()) {
            return renamed;
        }
        Protocol protocol = ProtocolResolver.resolve(service, renamed);
        Optional<StructureShape> updated = TransformSupport.renameMember(
            resp.get(), "generatedPolicyResult", "generatedPolicyResults", protocol);
        return updated.map(s -> renamed.toBuilder().addShape(s).build()).orElse(renamed);
    }
}
