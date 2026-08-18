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
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.traits.StreamingTrait;

import java.util.List;

/**
 * Renders C++ headers and sources for sub-object (intermediate structure) shapes.
 */
public final class SubObjectRenderer implements ShapeRenderer {

    private final List<Shape> subObjects;
    private final RenderContext ctx;

    public SubObjectRenderer(List<Shape> subObjects, RenderContext ctx) {
        this.subObjects = subObjects;
        this.ctx = ctx;
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
        String fileName = "include/aws/" + ctx.smithyServiceName() + "/model/" + className + ".h";
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            // Includes
            List<String> includes = new java.util.ArrayList<>();
            includes.add("aws/" + ctx.smithyServiceName() + "/" + ctx.namespace() + "_EXPORTS.h");
            for (String memberInc : CppTypeMapper.getIncludesForShape(shape, ctx.model(), ctx.smithyServiceName())) {
                includes.add(memberInc);
            }
            includes.addAll(ctx.protocolTraits().serdeIncludes(FileKind.SUBOBJECT_HEADER));
            IncludeSets.emitAngleIncludes(writer, includes);

            boolean allPrimitive = shape.getAllMembers().values().stream()
                .map(m -> ctx.model().expectShape(m.getTarget()))
                .allMatch(CppTypeMapper::isPrimitive);
            if (!allPrimitive) {
                writer.write("");
                writer.write("#include <utility>");
            }
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(),
                () -> ctx.protocolTraits().writeShapeForwardDeclarations(writer),
                () -> {
            // Recursive member targets are forward-declared here (at Model scope) instead of
            // included, breaking the reference cycle. Matches C2J's computeForwardDeclarations.
            for (String fwd : CppTypeMapper.getForwardDeclarations(shape, ctx.model())) {
                writer.write("class $L;", fwd);
            }
            writer.write("");

            MemberRenderer.renderClassDocComment(writer, shape, ctx.smithyServiceName(), ctx.service().getVersion());

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                ctx.protocolTraits().writeSerdeMethodDecls(writer, ctx.exportMacro(), className, null);
                // A memberless shape ends right after its serde decls: C2J emits no accessors
                // and no private: section (ModelClassMembersAndInlines.vm gates both on
                // $shape.members.size() > 0).
                if (!shape.getAllMembers().isEmpty()) {
                    MemberRenderer members = MemberRenderer.forStructure(ctx.model(), shape, className)
                        .wideIntegers(ctx.protocolTraits().widensIntegers());
                    writer.write("");
                    members.renderPublicAccessors(writer);
                    writer.dedent();
                    writer.write("private:");
                    writer.indent();
                    members.renderPrivateSection(writer);
                }
            });
            writer.write("");
                });
        });
    }

    private void renderSource(CppWriterDelegator writerDelegator, Shape shape) {
        String className = CppTypeMapper.cppShapeName(shape);
        String fileName = "source/model/" + className + ".cpp";
        writerDelegator.useFileWriter(fileName, writer -> {

            List<String> sourceBase = IncludeSets.subObjectSourceBase(ctx.smithyServiceName(), className);
            // Recursive member types are forward-declared in the header, so the source must include
            // them for the out-of-line MakeShared / serde bodies. Matches C2J.
            sourceBase.addAll(CppTypeMapper.getRecursiveMemberSourceIncludes(
                shape, ctx.model(), ctx.smithyServiceName()));
            IncludeSets.emitSourceIncludes(writer, sourceBase, ctx.protocolTraits(), FileKind.SUBOBJECT_SOURCE);
            writer.write("");

            IncludeSets.emitUsings(writer, ctx.protocolTraits().serdeUsings(FileKind.SUBOBJECT_SOURCE));
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(), () -> {
            writer.write("");

            ctx.protocolTraits().writeSerdeMethodImpls(writer, className);
            writer.write("");
            });
        });
    }

}
