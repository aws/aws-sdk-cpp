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
        java.util.List<Map.Entry<String, MemberShape>> members =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        for (int i = 0; i < members.size(); i++) {
            Map.Entry<String, MemberShape> entry = members.get(i);
            String memberName = entry.getKey();
            MemberShape member = entry.getValue();
            Shape targetShape = model.expectShape(member.getTarget());
            String cppType = CppTypeMapper.getCppType(targetShape, model);
            String fieldName = "m_" + decapitalize(memberName);
            String templateParam = memberName + "T";

            writer.write("///@{");

            // Documentation comment
            if (member.getTrait(DocumentationTrait.class).isPresent()) {
                String doc = member.getTrait(DocumentationTrait.class).get().getValue();
                writer.write("/**");
                for (String line : sanitizeDoc(doc).split("\n")) {
                    writer.write(" $L", "* " + line);
                }
                writer.write(" */");
            } else {
                writer.write("");
            }

            // Getter
            if (isPrimitive(targetShape) || targetShape.isEnumShape()) {
                writer.write("inline $L Get$L() const { return $L; }", cppType, memberName, fieldName);
            } else {
                writer.write("inline const $L& Get$L() const { return $L; }", cppType, memberName, fieldName);
            }

            // HasBeenSet
            writer.write("inline bool $LHasBeenSet() const { return $LHasBeenSet; }", memberName, fieldName);

            if (targetShape.isEnumShape() || isPrimitive(targetShape)) {
                // Enum and primitive members use non-templated value setters
                writer.openBlock("inline void Set$L($L value) {", "}", memberName, cppType, () -> {
                    writer.write("$LHasBeenSet = true;", fieldName);
                    writer.write("$L = value;", fieldName);
                });

                writer.openBlock("inline $L& With$L($L value) {", "}", className, memberName, cppType, () -> {
                    writer.write("Set$L(value);", memberName);
                    writer.write("return *this;");
                });
            } else {
                // Templated Set
                writer.write("template <typename $L = $L>", templateParam, cppType);
                writer.openBlock("void Set$L($L&& value) {", "}", memberName, templateParam, () -> {
                    writer.write("$LHasBeenSet = true;", fieldName);
                    writer.write("$L = std::forward<$L>(value);", fieldName, templateParam);
                });

                // Templated With (fluent)
                writer.write("template <typename $L = $L>", templateParam, cppType);
                writer.openBlock("$L& With$L($L&& value) {", "}", className, memberName, templateParam, () -> {
                    writer.write("Set$L(std::forward<$L>(value));", memberName, templateParam);
                    writer.write("return *this;");
                });

                // Add method for list types
                if (targetShape.isListShape()) {
                    Shape elementShape = model.expectShape(
                        targetShape.asListShape().get().getMember().getTarget());
                    String elementType = CppTypeMapper.getCppType(elementShape, model);
                    if (elementShape.isEnumShape()) {
                        // Enum elements use non-templated value Add
                        writer.openBlock("inline $L& Add$L($L value) {", "}", className, memberName, elementType, () -> {
                            writer.write("$LHasBeenSet = true;", fieldName);
                            writer.write("$L.push_back(value);", fieldName);
                            writer.write("return *this;");
                        });
                    } else {
                        writer.write("template <typename $L = $L>", templateParam, elementType);
                        writer.openBlock("$L& Add$L($L&& value) {", "}", className, memberName, templateParam, () -> {
                            writer.write("$LHasBeenSet = true;", fieldName);
                            writer.write("$L.emplace_back(std::forward<$L>(value));", fieldName, templateParam);
                            writer.write("return *this;");
                        });
                    }
                }
            }

            writer.write("///@}");
            // Blank line between member blocks, but not after the last one
            if (i < members.size() - 1) {
                writer.write("");
            }
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
        // First: data members with blank lines between each (except after the last)
        java.util.List<Map.Entry<String, MemberShape>> entries =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        for (int i = 0; i < entries.size(); i++) {
            Map.Entry<String, MemberShape> entry = entries.get(i);
            String memberName = entry.getKey();
            MemberShape member = entry.getValue();
            Shape targetShape = model.expectShape(member.getTarget());
            String cppType = CppTypeMapper.getCppType(targetShape, model);
            String fieldName = "m_" + decapitalize(memberName);

            CppTypeMapper.getDefaultValue(targetShape).ifPresentOrElse(
                defaultVal -> writer.write("$L $L{$L};", cppType, fieldName, defaultVal),
                () -> writer.write("$L $L;", cppType, fieldName)
            );
            // Blank line between data members, but not after the last one
            if (i < entries.size() - 1) {
                writer.write("");
            }
        }

        // Then: hasBeenSet flags grouped together (no leading blank line)
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
