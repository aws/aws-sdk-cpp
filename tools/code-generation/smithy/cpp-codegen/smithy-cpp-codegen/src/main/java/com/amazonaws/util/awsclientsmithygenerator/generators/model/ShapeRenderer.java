/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;

/**
 * Strategy interface for rendering C++ code for a specific shape classification.
 *
 * <p>Each implementation handles one classification bucket (enum, sub-object, request,
 * result, event stream, etc.). The {@link ModelGenerator} dispatches classified shapes
 * to the appropriate renderer.
 *
 * <p>To add a new classification (e.g., event stream), implement this interface and
 * register the renderer in {@link ModelGenerator}.
 */
public interface ShapeRenderer {

    /**
     * Renders all C++ files (headers and sources) for the shapes this renderer handles.
     *
     * @param writerDelegator the file writer to emit generated code through
     */
    void render(CppWriterDelegator writerDelegator);
}
