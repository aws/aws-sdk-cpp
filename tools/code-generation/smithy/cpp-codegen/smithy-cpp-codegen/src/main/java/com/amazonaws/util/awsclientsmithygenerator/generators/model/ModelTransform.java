/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

/**
 * A model-to-model transform applied before code generation. Transforms run in sequence,
 * each receiving the previous transform's output (or the original model for the first).
 */
@FunctionalInterface
public interface ModelTransform {

    /**
     * Applies this transform to the model.
     *
     * @param model   the current model (may have been modified by earlier transforms)
     * @param service the service shape being generated
     * @return the transformed model (may be the same instance if no changes needed)
     */
    Model apply(Model model, ServiceShape service);
}
