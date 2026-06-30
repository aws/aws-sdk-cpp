/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.DocumentationTrait;

import java.util.Map;

/**
 * Renders C++ accessor methods (Get/Set/With/Add) and private member fields
 * from Smithy structure members.
 *
 * <p>Generated C++ follows the existing SDK pattern with templated setters,
 * doxygen group markers, and separate HasBeenSet tracking flags.
 */
public final class MemberRenderer {

    private MemberRenderer() {
    }

    /**
     * Writes the public accessor methods for all members of a structure shape.
     *
     * <p>For each member, generates:
     * <ul>
     *   <li>Doxygen group markers ({@code ///@\{} and {@code ///@\}})</li>
     *   <li>Documentation comment (if present)</li>
     *   <li>Getter (const ref for non-primitives, value for primitives)</li>
     *   <li>HasBeenSet check</li>
     *   <li>Templated Set method</li>
     *   <li>Templated With method (fluent)</li>
     *   <li>Templated Add method (list members only)</li>
     * </ul>
     *
     * @param writer      the CppWriter to write to
     * @param shape       the structure shape whose members to render
     * @param model       the model (for resolving member targets)
     * @param exportMacro the export macro (e.g., "AWS_KINESIS_API")
     * @param className   the C++ class name (e.g., "ChildShard")
     */
    public static void renderPublicSection(CppWriter writer, StructureShape shape,
                                           Model model, String exportMacro, String className) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            String memberName = entry.getKey();
            MemberShape member = entry.getValue();
            Shape targetShape = model.expectShape(member.getTarget());
            String cppType = CppTypeMapper.getCppType(targetShape, model);
            String fieldName = "m_" + decapitalize(memberName);
            String templateParam = memberName + "T";

            writer.write("///@{");

            // Documentation comment
            member.getTrait(DocumentationTrait.class).ifPresent(doc -> {
                writer.write("/**");
                writer.write(" * " + sanitizeDoc(doc.getValue()));
                writer.write(" */");
            });

            // Getter
            if (isPrimitive(targetShape)) {
                writer.write("inline $L Get$L() const { return $L; }", cppType, memberName, fieldName);
            } else {
                writer.write("inline const $L& Get$L() const { return $L; }", cppType, memberName, fieldName);
            }

            // HasBeenSet
            writer.write("inline bool $LHasBeenSet() const { return $LHasBeenSet; }", memberName, fieldName);

            // Templated Set
            writer.write("template <typename $L = $L>", templateParam, cppType);
            writer.write("void Set$L($L&& value) {", memberName, templateParam);
            writer.write("  $LHasBeenSet = true;", fieldName);
            writer.write("  $L = std::forward<$L>(value);", fieldName, templateParam);
            writer.write("}");

            // Templated With (fluent)
            writer.write("template <typename $L = $L>", templateParam, cppType);
            writer.write("$L& With$L($L&& value) {", className, memberName, templateParam);
            writer.write("  Set$L(std::forward<$L>(value));", memberName, templateParam);
            writer.write("  return *this;");
            writer.write("}");

            // Add method for list types
            if (targetShape.isListShape()) {
                Shape elementShape = model.expectShape(
                    targetShape.asListShape().get().getMember().getTarget());
                String elementType = CppTypeMapper.getCppType(elementShape, model);
                writer.write("template <typename $L = $L>", templateParam, elementType);
                writer.write("$L& Add$L($L&& value) {", className, memberName, templateParam);
                writer.write("  $LHasBeenSet = true;", fieldName);
                writer.write("  $L.emplace_back(std::forward<$L>(value));", fieldName, templateParam);
                writer.write("  return *this;");
                writer.write("}");
            }

            writer.write("///@}");
            writer.write("");
        }
    }

    /**
     * Writes the private member fields and HasBeenSet flags for a structure.
     *
     * <p>Layout:
     * <ol>
     *   <li>Data members (with blank line between each), primitives get brace-initialized defaults</li>
     *   <li>HasBeenSet boolean flags grouped together at the end</li>
     * </ol>
     *
     * @param writer the CppWriter to write to
     * @param shape  the structure shape whose members to render
     * @param model  the model (for resolving member targets)
     */
    public static void renderPrivateSection(CppWriter writer, StructureShape shape, Model model) {
        // First: data members with blank lines between each
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            String memberName = entry.getKey();
            MemberShape member = entry.getValue();
            Shape targetShape = model.expectShape(member.getTarget());
            String cppType = CppTypeMapper.getCppType(targetShape, model);
            String fieldName = "m_" + decapitalize(memberName);
            String defaultVal = CppTypeMapper.getDefaultValue(targetShape);

            if (defaultVal != null) {
                writer.write("$L $L{$L};", cppType, fieldName, defaultVal);
            } else {
                writer.write("$L $L;", cppType, fieldName);
            }
            writer.write("");
        }

        // Then: hasBeenSet flags grouped together
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            String memberName = entry.getKey();
            String fieldName = "m_" + decapitalize(memberName);
            writer.write("bool $LHasBeenSet = false;", fieldName);
        }
    }

    private static boolean isPrimitive(Shape shape) {
        return shape.isIntegerShape() || shape.isLongShape()
            || shape.isBooleanShape() || shape.isDoubleShape() || shape.isFloatShape();
    }

    private static String decapitalize(String name) {
        if (name.isEmpty()) return name;
        return Character.toLowerCase(name.charAt(0)) + name.substring(1);
    }

    private static String sanitizeDoc(String doc) {
        return doc.replace("\n", "\n * ");
    }
}
