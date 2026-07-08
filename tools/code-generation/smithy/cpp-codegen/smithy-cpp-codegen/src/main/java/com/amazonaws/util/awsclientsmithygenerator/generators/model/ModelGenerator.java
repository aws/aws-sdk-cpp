/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier.ClassifiedShapes;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.traits.DocumentationTrait;

import java.util.List;
import java.util.Set;
import java.util.TreeSet;

/**
 * Orchestrates C++ model code generation for all classified shapes in a service.
 *
 * <p>Dispatches to {@link EnumRenderer}, {@link MemberRenderer}, and {@link SerdeStub}
 * to produce header and source files for each model shape.
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

        // Generate enum headers + sources
        for (Shape enumShape : classified.enums()) {
            generateEnumHeader(enumShape);
            generateEnumSource(enumShape);
        }

        // Generate sub-object headers + sources
        for (Shape shape : classified.subObjects()) {
            if (shape.isStructureShape()) {
                generateStructureHeader(shape.asStructureShape().get(), null);
                generateStructureSource(shape.asStructureShape().get(), null);
            }
        }

        // Generate request headers + sources (Input -> Request)
        for (StructureShape request : classified.requests()) {
            String cppName = mapRequestName(request.getId().getName());
            generateStructureHeader(request, cppName);
            generateStructureSource(request, cppName);
        }

        // Generate result headers + sources (Output -> Result)
        for (StructureShape result : classified.results()) {
            String cppName = mapResultName(result.getId().getName());
            generateStructureHeader(result, cppName);
            generateStructureSource(result, cppName);
        }
    }

    /**
     * Maps a Smithy input shape name to the C++ Request class name.
     * e.g., "AddTagsToStreamInput" -> "AddTagsToStreamRequest"
     */
    private String mapRequestName(String smithyName) {
        if (smithyName.endsWith("Input")) {
            return smithyName.substring(0, smithyName.length() - "Input".length()) + "Request";
        }
        return smithyName;
    }

    /**
     * Maps a Smithy output shape name to the C++ Result class name.
     * e.g., "DescribeLimitsOutput" -> "DescribeLimitsResult"
     */
    private String mapResultName(String smithyName) {
        if (smithyName.endsWith("Output")) {
            return smithyName.substring(0, smithyName.length() - "Output".length()) + "Result";
        }
        return smithyName;
    }

    private void generateEnumHeader(Shape enumShape) {
        String fileName = "include/aws/" + smithyServiceName + "/model/" + enumShape.getId().getName() + ".h";
        writerDelegator.useFileWriter(fileName, writer ->
            EnumRenderer.renderHeader(writer, enumShape, namespace, exportMacro));
    }

    private void generateEnumSource(Shape enumShape) {
        String fileName = "source/model/" + enumShape.getId().getName() + ".cpp";
        writerDelegator.useFileWriter(fileName, writer ->
            EnumRenderer.renderSource(writer, enumShape, namespace, exportMacro, smithyServiceName));
    }

    private void generateStructureHeader(StructureShape shape, String classNameOverride) {
        String className = classNameOverride != null ? classNameOverride : shape.getId().getName();
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            // Copyright + pragma
            writer.write("/**");
            writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
            writer.write(" * SPDX-License-Identifier: Apache-2.0.");
            writer.write(" */");
            writer.write("");
            writer.write("#pragma once");

            // Includes
            renderIncludes(writer, shape);

            // Include <utility> unless ALL members are primitives (matches C2J behavior)
            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
                .allMatch(ModelGenerator::isPrimitive);
            if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }
            writer.write("");

            // Open namespace Aws (contains both forward decls and service namespace)
            writer.writeNamespaceOpen("Aws");

            // Forward declarations for serde types
            renderForwardDeclarations(writer);

            // Service namespace (still inside namespace Aws)
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            // Class-level documentation comment
            renderClassDocComment(writer, shape);

            // Class declaration
            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");

                // Serde declarations
                SerdeStub.renderHeaderDeclarations(writer, protocol, exportMacro, className);
                writer.write("");

                // Member accessors
                MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className);

                // Private section
                writer.dedent();
                writer.write("private:");
                writer.indent();
                MemberRenderer.renderPrivateSection(writer, shape, model);
            });
            writer.write("");

            // Namespace close
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void generateStructureSource(StructureShape shape, String classNameOverride) {
        String className = classNameOverride != null ? classNameOverride : shape.getId().getName();
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("/**");
            writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
            writer.write(" * SPDX-License-Identifier: Apache-2.0.");
            writer.write(" */");
            writer.write("");

            // Includes
            if (protocol.isJsonLike()) {
                writer.write("#include <aws/core/utils/json/JsonSerializer.h>");
            } else {
                writer.write("#include <aws/core/utils/xml/XmlSerializer.h>");
            }
            writer.write("#include <aws/$L/model/$L.h>", smithyServiceName, className);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            // Using declarations
            if (protocol.isJsonLike()) {
                writer.write("using namespace Aws::Utils::Json;");
                writer.write("using namespace Aws::Utils;");
            } else {
                writer.write("using namespace Aws::Utils::Xml;");
                writer.write("using namespace Aws::Utils;");
            }
            writer.write("");

            // Namespace open
            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            // Serde implementation
            SerdeStub.renderSourceImplementation(writer, shape, model, protocol,
                className, serviceName, smithyServiceName);
            writer.write("");

            // Namespace close
            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderIncludes(CppWriter writer, StructureShape shape) {
        Set<String> includes = new TreeSet<>(); // sorted for deterministic output
        includes.add("<aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h>");

        // Gather includes for all member types
        List<String> memberIncludes = CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName);
        includes.addAll(memberIncludes);

        for (String include : includes) {
            writer.write("#include $L", include);
        }
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

    private static boolean isPrimitive(Shape shape) {
        return shape.isIntegerShape() || shape.isLongShape()
            || shape.isBooleanShape() || shape.isDoubleShape()
            || shape.isFloatShape();
    }

    private static boolean isPrimitiveOrEnum(Shape shape) {
        return isPrimitive(shape) || shape.isEnumShape();
    }

    private void renderClassDocComment(CppWriter writer, StructureShape shape) {
        shape.getTrait(DocumentationTrait.class).ifPresent(doc -> {
            String docText = doc.getValue();
            // Add "See Also" link consistent with C2J output
            String version = service.getVersion();
            String seeAlso = String.format(
                "<p><h3>See Also:</h3>   <a\n" +
                "href=\"http://docs.aws.amazon.com/goto/WebAPI/%s-%s/%s\">AWS\n" +
                "API Reference</a></p>",
                smithyServiceName, version, shape.getId().getName());
            writer.write("/**");
            for (String line : (docText + seeAlso).split("\n")) {
                writer.write(" $L", "* " + line);
            }
            writer.write(" */");
        });
    }
}
