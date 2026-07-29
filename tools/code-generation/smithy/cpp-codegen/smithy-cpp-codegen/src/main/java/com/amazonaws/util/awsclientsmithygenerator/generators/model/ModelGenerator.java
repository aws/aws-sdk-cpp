/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ClassifiedShapes;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EnumShapeRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EventStreamRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.ResultRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.SubObjectRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

import java.util.ArrayList;
import java.util.List;

/**
 * Orchestrates C++ model code generation by dispatching classified shapes
 * to registered {@link ShapeRenderer} instances.
 *
 * <p>To add generation for a new shape classification (e.g., event streams),
 * implement {@link ShapeRenderer} and register it in {@link #buildRenderers}.
 */
public class ModelGenerator {
    private final Model model;
    private final ServiceShape service;
    private final CppWriterDelegator writerDelegator;
    private final String serviceName;
    private final String smithyServiceName;
    private final String exportMacro;
    private final String namespace;
    private final Protocol protocol;

    public ModelGenerator(Model model, ServiceShape service, CppWriterDelegator writerDelegator,
                          String serviceName, String smithyServiceName,
                          String exportMacro, String namespace) {
        this.model = model;
        this.service = service;
        this.writerDelegator = writerDelegator;
        this.serviceName = serviceName;
        this.smithyServiceName = smithyServiceName;
        this.exportMacro = exportMacro;
        this.namespace = namespace;
        this.protocol = ProtocolResolver.resolve(service, model);
    }

    public void generateAll() {
        ClassifiedShapes classified = ShapeClassifier.classify(model, service);
        List<ShapeRenderer> renderers = buildRenderers(classified);

        for (ShapeRenderer renderer : renderers) {
            renderer.render(writerDelegator);
        }
    }

    private List<ShapeRenderer> buildRenderers(ClassifiedShapes classified) {
        List<ShapeRenderer> renderers = new ArrayList<>();

        renderers.add(new EnumShapeRenderer(
            classified.enums(), namespace, exportMacro, smithyServiceName));

        renderers.add(new SubObjectRenderer(
            classified.subObjects(), model, service, protocol,
            namespace, exportMacro, serviceName, smithyServiceName));

        renderers.add(new RequestRenderer(
            classified.requests(), model, service, protocol,
            namespace, exportMacro, smithyServiceName));

        renderers.add(new ResultRenderer(
            classified.results(), model, service, protocol,
            namespace, exportMacro, smithyServiceName));

        renderers.add(new EventStreamRenderer(
            classified.eventStreamHandlers(), model, service, protocol,
            namespace, exportMacro, smithyServiceName));

        return renderers;
    }
}
