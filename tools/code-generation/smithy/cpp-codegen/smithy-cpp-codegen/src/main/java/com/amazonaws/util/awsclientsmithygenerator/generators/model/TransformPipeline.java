/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

import java.util.List;

/**
 * An ordered sequence of {@link ModelTransform}s applied before code generation.
 *
 * <p>Transforms execute in list order. The output of each becomes the input to the next.
 * An empty pipeline returns the input model unchanged.
 */
public final class TransformPipeline {

    private final List<ModelTransform> transforms;

    public TransformPipeline(List<ModelTransform> transforms) {
        this.transforms = List.copyOf(transforms);
    }

    /**
     * Applies all transforms in order and returns the final model.
     *
     * @param model   the original model
     * @param service the service shape being generated
     * @return the model after all transforms have been applied
     */
    public Model apply(Model model, ServiceShape service) {
        Model current = model;
        for (ModelTransform transform : transforms) {
            current = transform.apply(current, service);
        }
        return current;
    }
}
