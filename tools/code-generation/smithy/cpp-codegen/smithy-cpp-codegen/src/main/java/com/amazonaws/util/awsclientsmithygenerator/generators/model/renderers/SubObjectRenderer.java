/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.SerdeStub;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;

import java.util.List;
import java.util.Set;
import java.util.TreeSet;

/**
 * Renders C++ headers and sources for sub-object (intermediate structure) shapes.
 */
public final class SubObjectRenderer implements ShapeRenderer {

    private final List<Shape> subObjects;
    private final Model model;
    private final ServiceShape service;
    private final Protocol protocol;
    private final String namespace;
    private final String exportMacro;
    private final String serviceName;
    private final String smithyServiceName;

    public SubObjectRenderer(List<Shape> subObjects, Model model, ServiceShape service,
                             Protocol protocol, String namespace, String exportMacro,
                             String serviceName, String smithyServiceName) {
        this.subObjects = subObjects;
        this.model = model;
        this.service = service;
        this.protocol = protocol;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.serviceName = serviceName;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape shape : subObjects) {
            if (shape.isStructureShape()) {
                StructureShape struct = shape.asStructureShape().get();
                renderHeader(writerDelegator, struct);
                renderSource(writerDelegator, struct);
            }
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator, StructureShape shape) {
        String className = shape.getId().getName();
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            // Includes
            Set<String> includes = new TreeSet<>();
            includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");
            List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
            includes.addAll(memberIncludes);
            for (String include : includes) {
                writer.write("#include $L", include);
            }

            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
                .allMatch(CppTypeMapper::isPrimitive);
            if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            renderForwardDeclarations(writer);
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            MemberRenderer.renderClassDocComment(writer, shape, smithyServiceName, service.getVersion());

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                SerdeStub.renderHeaderDeclarations(writer, protocol, exportMacro, className);
                writer.write("");
                MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className);
                writer.dedent();
                writer.write("private:");
                writer.indent();
                MemberRenderer.renderPrivateSection(writer, shape, model);
            });
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator, StructureShape shape) {
        String className = shape.getId().getName();
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            if (protocol.isJsonLike()) {
                writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
            } else {
                writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
            }
            writer.write("#include <aws/$L/model/$L.h>", smithyServiceName, className);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            if (protocol.isJsonLike()) {
                writer.write("using namespace Aws::Utils::Json;");
                writer.write("using namespace Aws::Utils;");
            } else {
                writer.write("using namespace Aws::Utils::Xml;");
                writer.write("using namespace Aws::Utils;");
            }
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            SerdeStub.renderSourceImplementation(writer, shape, model, protocol,
                className, serviceName, smithyServiceName);
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderForwardDeclarations(CppWriter writer) {
        if (protocol.isJsonLike()) {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Json");
            writer.write("class JsonValue;");
            writer.write("class JsonView;");
            writer.writeNamespaceClose("Json");
            writer.writeNamespaceClose("Utils");
        } else {
            writer.writeNamespaceOpen("Utils");
            writer.writeNamespaceOpen("Xml");
            writer.write("class XmlNode;");
            writer.writeNamespaceClose("Xml");
            writer.writeNamespaceClose("Utils");
        }
    }

}
