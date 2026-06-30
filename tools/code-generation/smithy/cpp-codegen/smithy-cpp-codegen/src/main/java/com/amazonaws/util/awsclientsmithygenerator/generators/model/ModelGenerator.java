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
                generateStructureHeader(shape.asStructureShape().get());
                generateStructureSource(shape.asStructureShape().get());
            }
        }

        // Generate request headers + sources
        for (StructureShape request : classified.requests()) {
            generateStructureHeader(request);
            generateStructureSource(request);
        }

        // Generate result headers + sources
        for (StructureShape result : classified.results()) {
            generateStructureHeader(result);
            generateStructureSource(result);
        }
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

    private void generateStructureHeader(StructureShape shape) {
        String className = shape.getId().getName();
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
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            // Forward declarations for serde types
            renderForwardDeclarations(writer);

            // Namespace open
            writer.write("namespace Aws {");
            writer.write("namespace $L {", namespace);
            writer.write("namespace Model {");
            writer.write("");

            // Class declaration
            writer.write("class $L {", className);
            writer.write(" public:");

            // Serde declarations
            SerdeStub.renderHeaderDeclarations(writer, protocol, exportMacro, className);
            writer.write("");

            // Member accessors
            MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className);

            // Private section
            writer.write(" private:");
            MemberRenderer.renderPrivateSection(writer, shape, model);
            writer.write("};");
            writer.write("");

            // Namespace close
            writer.write("}  // namespace Model");
            writer.write("}  // namespace $L", namespace);
            writer.write("}  // namespace Aws");
        });
    }

    private void generateStructureSource(StructureShape shape) {
        String className = shape.getId().getName();
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
            writer.write("namespace Aws {");
            writer.write("namespace $L {", namespace);
            writer.write("namespace Model {");
            writer.write("");

            // Serde implementation
            SerdeStub.renderSourceImplementation(writer, shape, model, protocol,
                className, serviceName, smithyServiceName);
            writer.write("");

            // Namespace close
            writer.write("}  // namespace Model");
            writer.write("}  // namespace $L", namespace);
            writer.write("}  // namespace Aws");
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
            writer.write("namespace Aws {");
            writer.write("namespace Utils {");
            writer.write("namespace Json {");
            writer.write("class JsonValue;");
            writer.write("class JsonView;");
            writer.write("}  // namespace Json");
            writer.write("}  // namespace Utils");
        } else {
            writer.write("namespace Aws {");
            writer.write("namespace Utils {");
            writer.write("namespace Xml {");
            writer.write("class XmlNode;");
            writer.write("}  // namespace Xml");
            writer.write("}  // namespace Utils");
        }
    }
}
