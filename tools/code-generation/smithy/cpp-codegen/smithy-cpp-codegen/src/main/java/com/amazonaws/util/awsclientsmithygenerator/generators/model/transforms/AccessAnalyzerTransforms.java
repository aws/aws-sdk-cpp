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
 * Access Analyzer model parity with the legacy C2J transformer, which resolves the collision
 * between the {@code GetGeneratedPolicy} result wrapper and the domain shape
 * {@code GeneratedPolicyResult} by renaming the domain shape (and its referencing member) to
 * {@code GeneratedPolicyResults}. C2J preserves the wire key ({@code generatedPolicyResult}) via
 * {@code locationName}; {@link TransformSupport#renameMember} mirrors that by pinning the original
 * wire name through the service's protocol-appropriate trait, so the model stays serde-correct even
 * though serde is currently stubbed.
 *
 * <p>Self-guards on the raw smithy service name {@code accessanalyzer} (transforms never remap).
 * No-op when the domain shape is absent (upstream already clean). Throws if the target name
 * {@code GeneratedPolicyResults} is already occupied by a distinct shape — a genuine collision.
 */
public final class AccessAnalyzerTransforms {

    private AccessAnalyzerTransforms() {}

    public static ModelTransform asTransform() {
        return AccessAnalyzerTransforms::apply;
    }

    private static Model apply(Model model, ServiceShape service) {
        if (!"accessanalyzer".equals(ServiceNameUtil.getSmithyServiceName(service, null))) {
            return model;
        }
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
