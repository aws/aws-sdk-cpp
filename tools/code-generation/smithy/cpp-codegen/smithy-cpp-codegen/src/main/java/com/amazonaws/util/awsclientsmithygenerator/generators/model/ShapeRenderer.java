/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;

/**
 * Strategy for rendering C++ code for one shape classification bucket (enum, sub-object, request,
 * result, event stream, etc.). {@link ModelGenerator} dispatches classified shapes to the matching
 * renderer; add a classification by implementing this and registering it there.
 */
public interface ShapeRenderer {

    /**
     * Renders all C++ files (headers and sources) for the shapes this renderer handles.
     *
     * @param writerDelegator the file writer to emit generated code through
     */
    void render(CppWriterDelegator writerDelegator);
}
