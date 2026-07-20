/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.FileKind;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.traits.StreamingTrait;

import java.util.List;

/**
 * Renders C++ headers and sources for sub-object (intermediate structure) shapes.
 */
public final class SubObjectRenderer implements ShapeRenderer {

    private final List<Shape> subObjects;
    private final Model model;
    private final ServiceShape service;
    private final ProtocolTraits protocolTraits;
    private final String namespace;
    private final String exportMacro;
    private final String serviceName;
    private final String smithyServiceName;

    public SubObjectRenderer(List<Shape> subObjects, Model model, ServiceShape service,
                             ProtocolTraits protocolTraits, String namespace, String exportMacro,
                             String serviceName, String smithyServiceName) {
        this.subObjects = subObjects;
        this.model = model;
        this.service = service;
        this.protocolTraits = protocolTraits;
        this.namespace = namespace;
        this.exportMacro = exportMacro;
        this.serviceName = serviceName;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape shape : subObjects) {
            // C2J models a union as a structure with "union": true and emits it through the same
            // ModelClass templates, so structures and (non-streaming) unions render identically.
            // @streaming unions are the event-stream shapes rendered by EventStreamRenderer /
            // the outgoing-event-stream path; skip them here to avoid a double-write.
            boolean isStruct = shape.isStructureShape();
            boolean isDataUnion = shape.isUnionShape() && !shape.hasTrait(StreamingTrait.class);
            if (isStruct || isDataUnion) {
                renderHeader(writerDelegator, shape);
                renderSource(writerDelegator, shape);
            }
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator, Shape shape) {
        String className = CppTypeMapper.cppShapeName(shape);
        String fileName = "include/aws/" + smithyServiceName + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            // Includes
            List<String> includes = new java.util.ArrayList<>();
            includes.add("aws/" + smithyServiceName + "/" + namespace + "_EXPORTS.h");
            for (String memberInc : CppTypeMapper.getIncludesForShape(shape, model, smithyServiceName)) {
                includes.add(memberInc.replaceAll("^<|>$", ""));
            }
            includes.addAll(protocolTraits.serdeIncludes(FileKind.SUBOBJECT_HEADER));
            IncludeSets.emit(writer, includes);

            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> model.expectShape(m.getTarget()))
                .allMatch(CppTypeMapper::isPrimitive);
            if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            protocolTraits.writeShapeForwardDeclarations(writer);
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            MemberRenderer.renderClassDocComment(writer, shape, smithyServiceName, service.getVersion());

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                protocolTraits.writeSerdeMethodDecls(writer, exportMacro, className, null);
                // A memberless shape ends right after its serde decls: C2J emits no accessors
                // and no private: section (ModelClassMembersAndInlines.vm gates both on
                // $shape.members.size() > 0).
                if (!shape.getAllMembers().isEmpty()) {
                    boolean wideIntegers = protocolTraits.widensIntegers();
                    writer.write("");
                    MemberRenderer.renderPublicSection(writer, shape, model, exportMacro, className, wideIntegers);
                    writer.dedent();
                    writer.write("private:");
                    writer.indent();
                    MemberRenderer.renderPrivateSection(writer, shape, model, wideIntegers);
                }
            });
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator, Shape shape) {
        String className = CppTypeMapper.cppShapeName(shape);
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            List<String> includes = new java.util.ArrayList<>(
                IncludeSets.subObjectSourceBase(smithyServiceName, className));
            includes.addAll(protocolTraits.serdeIncludes(FileKind.SUBOBJECT_SOURCE));
            // Serde-implementation includes derived from members (e.g. HashingUtils.h for blob
            // Base64 serde), matching C2J's computeSourceIncludes.
            includes.addAll(CppTypeMapper.getSourceIncludesForShape(shape, model, smithyServiceName));
            IncludeSets.emit(writer, includes);
            writer.write("");

            IncludeSets.emitUsings(writer, protocolTraits.serdeUsings(FileKind.SUBOBJECT_SOURCE));
            writer.write("");

            writer.writeNamespaceOpen("Aws");
            writer.writeNamespaceOpen(namespace);
            writer.writeNamespaceOpen("Model");
            writer.write("");

            protocolTraits.writeSerdeMethodImpls(writer, className);
            writer.write("");

            writer.writeNamespaceClose("Model");
            writer.writeNamespaceClose(namespace);
            writer.writeNamespaceClose("Aws");
        });
    }

}
