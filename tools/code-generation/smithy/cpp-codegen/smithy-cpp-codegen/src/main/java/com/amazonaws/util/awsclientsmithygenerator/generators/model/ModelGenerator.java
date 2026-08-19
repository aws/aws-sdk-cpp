/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ClassifiedShapes;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EnumShapeRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EventPayloadRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.EventStreamRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.OutgoingEventStreamRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.RequestRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.ResultRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.SubObjectRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
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
    private final String smithyServiceName;
    private final String exportMacro;
    private final String namespace;
    private final Protocol protocol;
    private final ProtocolTraits protocolTraits;

    public ModelGenerator(Model model, ServiceShape service, CppWriterDelegator writerDelegator,
                          String smithyServiceName,
                          String exportMacro, String namespace) {
        this.model = model;
        this.service = service;
        this.writerDelegator = writerDelegator;
        this.smithyServiceName = smithyServiceName;
        this.exportMacro = exportMacro;
        this.namespace = namespace;
        this.protocol = ProtocolResolver.resolve(service, model);
        this.protocolTraits = ProtocolResolver.traitsFor(this.protocol);
    }

    public void generateAll() {
        ClassifiedShapes classified = ShapeClassifier.classify(model, service, protocol);
        RenderContext ctx = new RenderContext(model, service, protocolTraits,
            namespace, exportMacro, smithyServiceName);
        List<ShapeRenderer> renderers = buildRenderers(classified, ctx);

        for (ShapeRenderer renderer : renderers) {
            renderer.render(writerDelegator);
        }
    }

    private List<ShapeRenderer> buildRenderers(ClassifiedShapes classified, RenderContext ctx) {
        List<ShapeRenderer> renderers = new ArrayList<>();
        renderers.add(new EnumShapeRenderer(classified.enums(), ctx));
        renderers.add(new SubObjectRenderer(classified.subObjects(), classified.resultOutputIds(), ctx));
        renderers.add(new RequestRenderer(classified.requests(), ctx));
        renderers.add(new ResultRenderer(classified.results(), ctx));
        renderers.add(new EventStreamRenderer(classified.eventStreamHandlers(), ctx));
        renderers.add(new OutgoingEventStreamRenderer(classified.outgoingEventStreams(), ctx));
        renderers.add(new EventPayloadRenderer(classified.blobPayloadEvents(), ctx));
        return renderers;
    }
}
