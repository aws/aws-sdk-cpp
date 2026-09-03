/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.MemberRenderer;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.RenderContext;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeClassifier;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ShapeRenderer;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;

import java.util.List;

/**
 * Renders header-only blob-carrier events: an event struct (member of a {@code @streaming} union)
 * whose sole payload is one {@code @eventPayload} blob member (C2J {@code eventPayloadType == "blob"}).
 * C2J renders these via {@code EventHeader.vm} as a plain value type over an
 * {@code Aws::Vector<unsigned char>} (bytes ctor, const-ref/rvalue accessors, a
 * {@code Get<Payload>WithOwnership()} move-out), with no serde and no {@code .cpp}.
 *
 * <p>{@link ShapeClassifier} routes these here instead of {@code subObjects}, so the generic
 * {@code SubObjectRenderer} JSON path never sees them.
 */
public final class EventPayloadRenderer implements ShapeRenderer {

    private final List<Shape> blobPayloadEvents;
    private final RenderContext ctx;

    public EventPayloadRenderer(List<Shape> blobPayloadEvents, RenderContext ctx) {
        this.blobPayloadEvents = blobPayloadEvents;
        this.ctx = ctx;
    }

    @Override
    public void render(CppWriterDelegator writerDelegator) {
        for (Shape shape : blobPayloadEvents) {
            shape.asStructureShape().ifPresent(s -> renderHeader(writerDelegator, s));
        }
    }

    private void renderHeader(CppWriterDelegator writerDelegator, StructureShape shape) {
        String className = CppTypeMapper.cppShapeName(shape);
        String memberName = ShapeClassifier.blobPayloadMemberName(shape, ctx.model())
            .orElseThrow(() -> new IllegalStateException(
                "Blob-payload event " + shape.getId() + " has no @eventPayload blob member"));
        MemberShape payload = shape.getAllMembers().get(memberName);
        String methodName = CppNames.capitalize(memberName);
        String fieldName = CppNames.fieldName(memberName);
        String fileName = "include/aws/" + ctx.smithyServiceName() + "/model/" + className + ".h";

        writerDelegator.useFileWriter(fileName, writer -> {
            writer.write("#pragma once");
            java.util.List<String> includes = new java.util.ArrayList<>();
            includes.add("aws/core/utils/Array.h");
            includes.add("aws/" + ctx.smithyServiceName() + "/" + ctx.namespace() + "_EXPORTS.h");
            IncludeSets.emitAngleIncludes(writer, includes);
            writer.write("");
            writer.write("#include <utility>");
            writer.write("");

            ModelFile.modelNamespace(writer, ctx.namespace(), () -> {
            MemberRenderer.renderClassDocComment(writer, shape, ctx.smithyServiceName(), ctx.service().getVersion());
            writer.openBlock("class $L {", "};", className, () -> {
                writer.write("public:");
                writer.write("$L $L() = default;", ctx.exportMacro(), className);
                writer.write("$L $L(Aws::Vector<unsigned char>&& value) { $L = std::move(value); }",
                    ctx.exportMacro(), className, fieldName);
                writer.write("");
                writer.write("///@{");
                writeMemberDoc(writer, payload);
                writer.write("inline const Aws::Vector<unsigned char>& Get$L() const { return $L; }",
                    methodName, fieldName);
                writer.write("inline Aws::Vector<unsigned char>&& Get$LWithOwnership() { return std::move($L); }",
                    methodName, fieldName);
                writer.write("inline void Set$L(const Aws::Vector<unsigned char>& value) { $LHasBeenSet = true; $L = value; }",
                    methodName, fieldName, fieldName);
                writer.write("inline void Set$L(Aws::Vector<unsigned char>&& value) { $LHasBeenSet = true; $L = std::move(value); }",
                    methodName, fieldName, fieldName);
                writer.write("inline $L& With$L(const Aws::Vector<unsigned char>& value) { Set$L(value); return *this;}",
                    className, methodName, methodName);
                writer.write("inline $L& With$L(Aws::Vector<unsigned char>&& value) { Set$L(std::move(value)); return *this;}",
                    className, methodName, methodName);
                writer.write("///@}");
                writer.write("");
                writer.dedent();
                writer.write("private:");
                writer.indent();
                writer.write("Aws::Vector<unsigned char> $L;", fieldName);
                writer.write("bool $LHasBeenSet = false;", fieldName);
            });
            writer.write("");
            });
        });
    }

    /**
     * Emits the payload member's doc comment (whitespace-collapsed {@code @documentation}), matching
     * C2J {@code EventHeader.vm}.
     */
    private void writeMemberDoc(CppWriter writer, MemberShape payload) {
        String doc = payload.getTrait(DocumentationTrait.class)
            .map(t -> MemberRenderer.collapseWhitespace(t.getValue()))
            .orElse("");
        MemberRenderer.writeDocComment(writer, doc);
    }
}
