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
 *
 * <p>{@link #shouldRun} is the service-level gate and defaults to {@code false}: a transform runs
 * only when it explicitly opts in by overriding it — a service check, or {@code true} for transforms
 * that apply to every service. This fails closed, so a transform added without a gate silently
 * no-ops instead of running for every service and mutating models it was never meant to touch. When
 * {@code shouldRun} returns true, {@code transform} may assume it applies and need not re-check the
 * service.
 */
public interface ModelTransform {

    /**
     * Whether this transform applies to the given service. Evaluated by the pipeline before
     * {@link #transform}; a false result skips the transform. Defaults to {@code false}, so a
     * transform must override this to run — either a service check or {@code true} to run always.
     *
     * @param service the service shape being generated
     * @return true if {@link #transform} should be invoked for this service
     */
    default boolean shouldRun(ServiceShape service) {
        return false;
    }

    /**
     * Applies this transform to the model. Only invoked when {@link #shouldRun} returns true,
     * so implementations need not re-check the service.
     *
     * @param model   the current model (may have been modified by earlier transforms)
     * @param service the service shape being generated
     * @return the transformed model (may be the same instance if no changes needed)
     */
    Model transform(Model model, ServiceShape service);
}
