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
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.traits.StreamingTrait;

import java.util.List;
import java.util.Set;

/**
 * Renders C++ headers and sources for sub-object (intermediate structure) shapes.
 */
public final class SubObjectRenderer implements ShapeRenderer {

    private final List<Shape> subObjects;
    private final Set<ShapeId> resultOutputIds;
    private final RenderContext ctx;

    public SubObjectRenderer(List<Shape> subObjects, Set<ShapeId> resultOutputIds, RenderContext ctx) {
        this.subObjects = subObjects;
        this.resultOutputIds = resultOutputIds;
        this.ctx = ctx;
    }

    /** Convenience overload for callers with no dual-role output shapes (e.g. characterization tests). */
    public SubObjectRenderer(List<Shape> subObjects, RenderContext ctx) {
        this(subObjects, java.util.Collections.emptySet(), ctx);
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape shape : subObjects) {
            // C2J renders a (non-streaming) union like a structure via the same ModelClass
            // templates, so they render identically here. @streaming unions are event-stream shapes
            // handled elsewhere; skip them to avoid a double-write.
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
        // A "dual-role" shape (both an operation output and a referenced member) gets the top-level
        // requestId from C2J, but only for JSON-family protocols. Query/EC2 inject ResponseMetadata
        // instead, so they are gated out via resultHasTopLevelRequestId().
        boolean stampRequestId = resultOutputIds.contains(shape.getId())
            && ctx.protocolTraits().resultHasTopLevelRequestId();
        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");

            List<String> includes = new java.util.ArrayList<>();
            includes.add("aws/" + ctx.smithyServiceName() + "/" + ctx.namespace() + "_EXPORTS.h");
            if (stampRequestId) {
                includes.add("aws/core/utils/memory/stl/AWSString.h");
            }
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
            // Recursive member targets are forward-declared at Model scope (not included) to break
            // the cycle. Matches C2J computeForwardDeclarations.
            for (String fwd : CppTypeMapper.getForwardDeclarations(shape, ctx.model())) {
                writer.write("class $L;", fwd);
            }
            writer.write("");

            MemberRenderer.renderClassDocComment(writer, shape, ctx.smithyServiceName(), ctx.service().getVersion());

            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                ctx.protocolTraits().writeSerdeMethodDecls(writer, ctx.exportMacro(), className, null);
                // A memberless shape ends right after its serde decls (no accessors, no private:),
                // matching C2J — unless it is a dual-role output, whose stamped requestId group
                // still needs a private: section.
                boolean hasMembers = !shape.getAllMembers().isEmpty();
                if (hasMembers || stampRequestId) {
                    MemberRenderer members = MemberRenderer.forStructure(ctx.model(), shape, className)
                        .wideIntegers(ctx.protocolTraits().widensIntegers());
                    if (hasMembers) {
                        writer.write("");
                        members.renderPublicAccessors(writer);
                    }
                    if (stampRequestId) {
                        // MODEL-class requestId group (with RequestIdHasBeenSet() getter), after the
                        // modeled accessors. The helper writes its own leading blank-line separator.
                        MemberRenderer.renderRequestIdAccessors(writer, className, true);
                    }
                    writer.dedent();
                    writer.write("private:");
                    writer.indent();
                    if (hasMembers) {
                        members.renderDataMembers(writer);
                    }
                    if (stampRequestId) {
                        // m_requestId trails the modeled data members (blank-line separated like
                        // MemberRenderer's spacing); its flag trails the modeled flags.
                        if (hasMembers) {
                            writer.write("");
                        }
                        writer.write("Aws::String m_requestId;");
                    }
                    if (hasMembers) {
                        members.renderHasBeenSetFlags(writer);
                    }
                    if (stampRequestId) {
                        writer.write("bool m_requestIdHasBeenSet = false;");
                    }
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
