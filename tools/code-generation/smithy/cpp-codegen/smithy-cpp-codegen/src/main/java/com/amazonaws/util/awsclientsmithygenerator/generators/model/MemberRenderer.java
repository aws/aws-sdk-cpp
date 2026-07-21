/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import static com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper.isPrimitive;

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
     *   <li>Templated Add method (list/map members only)</li>
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
        renderMembers(writer, shape, model, exportMacro, className, true);
    }

    /**
     * Writes public accessor methods for result shapes (no HasBeenSet methods).
     *
     * @param writer      the CppWriter to write to
     * @param shape       the structure shape whose members to render
     * @param model       the model (for resolving member targets)
     * @param exportMacro the export macro (e.g., "AWS_KINESIS_API")
     * @param className   the C++ class name (e.g., "GetItemResult")
     */
    public static void renderPublicSectionForResult(CppWriter writer, StructureShape shape,
                                                    Model model, String exportMacro, String className) {
        renderMembers(writer, shape, model, exportMacro, className, false);
    }

    /**
     * Shared implementation for rendering public accessor methods.
     *
     * @param writer         the CppWriter to write to
     * @param shape          the structure shape whose members to render
     * @param model          the model (for resolving member targets)
     * @param exportMacro    the export macro (e.g., "AWS_KINESIS_API")
     * @param className      the C++ class name (e.g., "ChildShard")
     * @param emitHasBeenSet whether to emit HasBeenSet() accessor methods
     */
    private static void renderMembers(CppWriter writer, StructureShape shape,
                                      Model model, String exportMacro, String className,
                                      boolean emitHasBeenSet) {
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

            if (member.getTrait(DocumentationTrait.class).isPresent()) {
                writeDocComment(writer, collapseWhitespace(member.getTrait(DocumentationTrait.class).get().getValue()));
            } else {
                writer.write("");
            }

            // Getter
            if (isPrimitive(targetShape) || targetShape.isEnumShape()) {
                writer.write("inline $L Get$L() const { return $L; }", cppType, memberName, fieldName);
            } else {
                writer.write("inline const $L& Get$L() const { return $L; }", cppType, memberName, fieldName);
            }

            // HasBeenSet (only for non-result shapes)
            if (emitHasBeenSet) {
                writer.write("inline bool $LHasBeenSet() const { return $LHasBeenSet; }", memberName, fieldName);
            }

            if (targetShape.isEnumShape() || isPrimitive(targetShape)) {
                writer.openBlock("inline void Set$L($L value) {", "}", memberName, cppType, () -> {
                    writer.write("$LHasBeenSet = true;", fieldName);
                    writer.write("$L = value;", fieldName);
                });
                writer.openBlock("inline $L& With$L($L value) {", "}", className, memberName, cppType, () -> {
                    writer.write("Set$L(value);", memberName);
                    writer.write("return *this;");
                });
            } else {
                writer.write("template <typename $L = $L>", templateParam, cppType);
                writer.openBlock("void Set$L($L&& value) {", "}", memberName, templateParam, () -> {
                    writer.write("$LHasBeenSet = true;", fieldName);
                    writer.write("$L = std::forward<$L>(value);", fieldName, templateParam);
                });
                writer.write("template <typename $L = $L>", templateParam, cppType);
                writer.openBlock("$L& With$L($L&& value) {", "}", className, memberName, templateParam, () -> {
                    writer.write("Set$L(std::forward<$L>(value));", memberName, templateParam);
                    writer.write("return *this;");
                });

                if (targetShape.isListShape()) {
                    Shape elementShape = model.expectShape(
                        targetShape.asListShape().get().getMember().getTarget());
                    String elementType = CppTypeMapper.getCppType(elementShape, model);
                    if (elementShape.isEnumShape()) {
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

                if (targetShape.isMapShape()) {
                    Shape keyShape = model.expectShape(
                        targetShape.asMapShape().get().getKey().getTarget());
                    Shape valueShape = model.expectShape(
                        targetShape.asMapShape().get().getValue().getTarget());
                    String keyType = CppTypeMapper.getCppType(keyShape, model);
                    String valueType = CppTypeMapper.getCppType(valueShape, model);
                    String keyParam = memberName + "KeyT";
                    String valueParam = memberName + "ValueT";
                    writer.write("template <typename $L = $L, typename $L = $L>", keyParam, keyType, valueParam, valueType);
                    writer.openBlock("$L& Add$L($L&& key, $L&& value) {", "}", className, memberName, keyParam, valueParam, () -> {
                        writer.write("$LHasBeenSet = true;", fieldName);
                        writer.write("$L.emplace(std::forward<$L>(key), std::forward<$L>(value));", fieldName, keyParam, valueParam);
                        writer.write("return *this;");
                    });
                }
            }

            writer.write("///@}");
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
        renderPrivateDataMembers(writer, shape, model);
        renderPrivateHasBeenSetFlags(writer, shape, model);
    }

    /**
     * Writes only the data member declarations (with blank lines between each).
     */
    public static void renderPrivateDataMembers(CppWriter writer, StructureShape shape, Model model) {
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
            if (i < entries.size() - 1) {
                writer.write("");
            }
        }
    }

    /**
     * Writes only the HasBeenSet boolean flags (one per member, no blank lines between).
     */
    public static void renderPrivateHasBeenSetFlags(CppWriter writer, StructureShape shape, Model model) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            String memberName = entry.getKey();
            String fieldName = "m_" + decapitalize(memberName);
            writer.write("bool $LHasBeenSet = false;", fieldName);
        }
    }

    private static String decapitalize(String name) {
        if (name.isEmpty()) return name;
        return Character.toLowerCase(name.charAt(0)) + name.substring(1);
    }

    private static final String[] UNSUPPORTED_HTML_TAGS = {
        "<note>", "</note>", "<important>", "</important>"
    };

    public static void writeDocComment(CppWriter writer, String doc) {
        writer.write("/**");
        String formatted = formatDocumentation(doc);
        for (String line : formatted.split("\n")) {
            writer.write(" * $L", line);
        }
        writer.write(" */");
    }

    public static String collapseWhitespace(String text) {
        if (text == null) {
            return null;
        }
        return text.replaceAll("\\s+", " ").trim();
    }

    static String formatDocumentation(String documentation) {
        if (documentation == null) {
            return "";
        }
        String text = documentation.replace("/*", "/ *").replace("*/", "* /");
        for (String tag : UNSUPPORTED_HTML_TAGS) {
            text = text.replace(tag, "");
        }
        return wrapText(text, 80);
    }

    private static String wrapText(String text, int wrapLength) {
        if (text == null || text.length() <= wrapLength) {
            return text;
        }
        StringBuilder result = new StringBuilder();
        int offset = 0;
        while (offset < text.length()) {
            if (text.length() - offset <= wrapLength) {
                result.append(text, offset, text.length());
                break;
            }
            int spaceToWrapAt = text.lastIndexOf(' ', offset + wrapLength);
            if (spaceToWrapAt <= offset) {
                spaceToWrapAt = text.indexOf(' ', offset + wrapLength);
                if (spaceToWrapAt < 0) {
                    result.append(text, offset, text.length());
                    break;
                }
            }
            result.append(text, offset, spaceToWrapAt);
            result.append('\n');
            offset = spaceToWrapAt + 1;
        }
        return result.toString();
    }
}
