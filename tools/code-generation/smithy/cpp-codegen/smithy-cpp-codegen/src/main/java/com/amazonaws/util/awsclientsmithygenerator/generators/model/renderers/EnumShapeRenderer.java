/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.EnumRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.shapes.Shape;

import java.util.List;

/**
 * Renders C++ enum class headers and mapper source files for all classified enum shapes.
 */
public final class EnumShapeRenderer implements ShapeRenderer {

    private final List<Shape> enumShapes;
    private final String namespace;
    private final String exportMacro;
    private final String smithyServiceName;

    public EnumShapeRenderer(List<Shape> enumShapes, String namespace,
                             String exportMacro, String smithyServiceName) {
        this.enumShapes = enumShapes;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape enumShape : enumShapes) {
            String name = enumShape.getId().getName();
            String headerFile = "include/aws/" + smithyServiceName + "/model/" + name + ".h";
            writerDelegator.useFileWriter(headerFile, writer ->
                EnumRenderer.renderHeader(writer, enumShape, namespace, exportMacro, smithyServiceName));

            String sourceFile = "source/model/" + name + ".cpp";
            writerDelegator.useFileWriter(sourceFile, writer ->
                EnumRenderer.renderSource(writer, enumShape, namespace, exportMacro, smithyServiceName));
        }
    }
}
