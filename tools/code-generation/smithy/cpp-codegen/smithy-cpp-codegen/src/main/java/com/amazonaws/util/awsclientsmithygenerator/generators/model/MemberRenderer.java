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
import software.amazon.smithy.model.traits.IdempotencyTokenTrait;

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
     * Renders the top-level {@code RequestId} accessor group emitted by result headers:
     * {@code GetRequestId} / templated {@code SetRequestId} / templated {@code WithRequestId}.
     * Callers decide whether to emit it (Query/EC2 do not) and separately emit the
     * {@code m_requestId} field and its {@code HasBeenSet} flag in the private section.
     */
    public static void renderRequestIdAccessors(CppWriter writer, String className) {
        writer.write("");
        writer.write("///@{");
        writer.write("");
        writer.write("inline const Aws::String& GetRequestId() const { return m_requestId; }");
        writer.write("template <typename RequestIdT = Aws::String>");
        writer.openBlock("void SetRequestId(RequestIdT&& value) {", "}", () -> {
            writer.write("m_requestIdHasBeenSet = true;");
            writer.write("m_requestId = std::forward<RequestIdT>(value);");
        });
        writer.write("template <typename RequestIdT = Aws::String>");
        writer.openBlock("$L& WithRequestId(RequestIdT&& value) {", "}", className, () -> {
            writer.write("SetRequestId(std::forward<RequestIdT>(value));");
            writer.write("return *this;");
        });
        writer.write("///@}");
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
    public static void renderPublicSection(CppWriter writer, Shape shape,
                                           Model model, String exportMacro, String className) {
        render(writer, shape, model,
            new MemberOptions().exportMacro(exportMacro).className(className).emitHasBeenSet(true));
    }

    /**
     * Like {@link #renderPublicSection(CppWriter, Shape, Model, String, String)} but widens
     * {@code integer} members to {@code int64_t} when {@code wideIntegers} is set (CBOR sub-objects).
     */
    public static void renderPublicSection(CppWriter writer, Shape shape,
                                           Model model, String exportMacro, String className,
                                           boolean wideIntegers) {
        render(writer, shape, model, new MemberOptions()
            .exportMacro(exportMacro).className(className).emitHasBeenSet(true).wideIntegers(wideIntegers));
    }

    /**
     * Writes public accessor methods for result shapes. Result classes never emit
     * {@code HasBeenSet()} accessors: every protocol's result header sets
     * {@code useRequiredField=false} in C2J (only sub-object / request headers set it true).
     *
     * @param writer      the CppWriter to write to
     * @param shape       the structure shape whose members to render
     * @param model       the model (for resolving member targets)
     * @param exportMacro    the export macro (e.g., "AWS_KINESIS_API")
     * @param className      the C++ class name (e.g., "GetItemResult")
     */
    public static void renderPublicSectionForResult(CppWriter writer, StructureShape shape,
                                                    Model model, String exportMacro, String className,
                                                    boolean wideIntegers) {
        render(writer, shape, model, new MemberOptions()
            .exportMacro(exportMacro).className(className).emitHasBeenSet(false).wideIntegers(wideIntegers));
    }

    /**
     * Renders result accessors for every member except {@code excludeMemberName}. Used by
     * streaming results, whose {@code @httpPayload} member is rendered separately as a
     * {@code GetBody()} / {@code ReplaceBody} pair. Like {@link #renderPublicSectionForResult},
     * result members never get {@code HasBeenSet()} accessors.
     */
    public static void renderPublicSectionForResultExcluding(CppWriter writer, StructureShape shape,
                                                             Model model, String exportMacro, String className,
                                                             String excludeMemberName, boolean wideIntegers) {
        render(writer, shape, model, new MemberOptions()
            .exportMacro(exportMacro).className(className).emitHasBeenSet(false)
            .exclude(excludeMemberName).wideIntegers(wideIntegers));
    }

    /**
     * Single entry point for rendering a structure's public accessor methods.
     * See {@link MemberOptions} for the rendering axes.
     */
    public static void render(CppWriter writer, Shape shape, Model model, MemberOptions opts) {
        renderMembers(writer, shape, model, opts.exportMacro(), opts.className(),
            opts.emitHasBeenSet(), opts.exclude(), opts.wideIntegers());
    }

    /** Writes data member declarations, skipping {@code excludeMemberName}. */
    public static void renderPrivateDataMembersExcluding(CppWriter writer, StructureShape shape,
                                                         Model model, String excludeMemberName) {
        renderPrivateDataMembersExcluding(writer, shape, model, excludeMemberName, false);
    }

    /** Data member declarations excluding one member, widening {@code integer} when requested. */
    public static void renderPrivateDataMembersExcluding(CppWriter writer, StructureShape shape,
                                                         Model model, String excludeMemberName,
                                                         boolean wideIntegers) {
        java.util.List<Map.Entry<String, MemberShape>> entries =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        entries.removeIf(e -> e.getKey().equals(excludeMemberName));
        for (int i = 0; i < entries.size(); i++) {
            Map.Entry<String, MemberShape> entry = entries.get(i);
            writeDataMember(writer, entry.getValue(), entry.getKey(), model, wideIntegers);
            if (i < entries.size() - 1) {
                writer.write("");
            }
        }
    }

    /** Writes HasBeenSet flags, skipping {@code excludeMemberName}. */
    public static void renderPrivateHasBeenSetFlagsExcluding(CppWriter writer, StructureShape shape,
                                                            Model model, String excludeMemberName) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            if (entry.getKey().equals(excludeMemberName)) {
                continue;
            }
            writeHasBeenSetFlag(writer, entry.getValue(), entry.getKey());
        }
    }

    /**
     * Shared member-rendering implementation with an optional excluded member. Streaming
     * results emit their {@code @httpPayload} member via a dedicated {@code GetBody()} /
     * {@code ReplaceBody} accessor pair, so that member is skipped here.
     *
     * @param excludeMemberName member name to skip, or {@code null} to render all members
     */
    private static void renderMembers(CppWriter writer, Shape shape,
                                      Model model, String exportMacro, String className,
                                      boolean emitHasBeenSet, String excludeMemberName, boolean wideIntegers) {
        java.util.List<Map.Entry<String, MemberShape>> members =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        members.removeIf(e -> e.getKey().equals(excludeMemberName));
        for (int i = 0; i < members.size(); i++) {
            Map.Entry<String, MemberShape> entry = members.get(i);
            String memberName = entry.getKey();
            MemberShape member = entry.getValue();
            Shape targetShape = model.expectShape(member.getTarget());
            String cppType = CppTypeMapper.getCppType(targetShape, model, wideIntegers);
            String fieldName = CppNames.fieldName(memberName);
            // Method names and template params use the capitalized member name to match the
            // legacy C2J convention (e.g. member "extendedKeyUsage" -> GetExtendedKeyUsage,
            // ExtendedKeyUsageHasBeenSet, template param ExtendedKeyUsageT). Field names keep
            // the decapitalized form (m_extendedKeyUsage).
            String methodName = capitalize(memberName);
            String templateParam = methodName + "T";

            writer.write("///@{");

            if (member.getTrait(DocumentationTrait.class).isPresent()) {
                writeDocComment(writer, collapseWhitespace(member.getTrait(DocumentationTrait.class).get().getValue()));
            } else {
                writer.write("");
            }

            // Getter. Documents are special-cased to return Aws::Utils::DocumentView by value
            // (the field and setter keep Aws::Utils::Document), matching C2J's
            // ModelClassMembersAndInlines.vm $returnType handling.
            if (targetShape.isDocumentShape()) {
                writer.write("inline Aws::Utils::DocumentView Get$L() const { return $L; }", methodName, fieldName);
            } else if (isPrimitive(targetShape) || targetShape.isEnumShape()) {
                writer.write("inline $L Get$L() const { return $L; }", cppType, methodName, fieldName);
            } else {
                writer.write("inline const $L& Get$L() const { return $L; }", cppType, methodName, fieldName);
            }

            // HasBeenSet (only for non-result shapes)
            if (emitHasBeenSet) {
                writer.write("inline bool $LHasBeenSet() const { return $LHasBeenSet; }", methodName, fieldName);
            }

            if (targetShape.isEnumShape() || isPrimitive(targetShape)) {
                writer.openBlock("inline void Set$L($L value) {", "}", methodName, cppType, () -> {
                    writer.write("$LHasBeenSet = true;", fieldName);
                    writer.write("$L = value;", fieldName);
                });
                writer.openBlock("inline $L& With$L($L value) {", "}", className, methodName, cppType, () -> {
                    writer.write("Set$L(value);", methodName);
                    writer.write("return *this;");
                });
            } else {
                writer.write("template <typename $L = $L>", templateParam, cppType);
                writer.openBlock("void Set$L($L&& value) {", "}", methodName, templateParam, () -> {
                    writer.write("$LHasBeenSet = true;", fieldName);
                    writer.write("$L = std::forward<$L>(value);", fieldName, templateParam);
                });
                writer.write("template <typename $L = $L>", templateParam, cppType);
                writer.openBlock("$L& With$L($L&& value) {", "}", className, methodName, templateParam, () -> {
                    writer.write("Set$L(std::forward<$L>(value));", methodName, templateParam);
                    writer.write("return *this;");
                });

                if (targetShape.isListShape()) {
                    Shape elementShape = model.expectShape(
                        targetShape.asListShape().get().getMember().getTarget());
                    String elementType = CppTypeMapper.getCppType(elementShape, model, wideIntegers);
                    if (isByValueType(elementShape)) {
                        writer.openBlock("inline $L& Add$L($L value) {", "}", className, methodName, elementType, () -> {
                            writer.write("$LHasBeenSet = true;", fieldName);
                            writer.write("$L.push_back(value);", fieldName);
                            writer.write("return *this;");
                        });
                    } else {
                        writer.write("template <typename $L = $L>", templateParam, elementType);
                        writer.openBlock("$L& Add$L($L&& value) {", "}", className, methodName, templateParam, () -> {
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
                    String keyType = CppTypeMapper.getCppType(keyShape, model, wideIntegers);
                    String valueType = CppTypeMapper.getCppType(valueShape, model, wideIntegers);
                    // C2J uses a templated perfect-forwarding Add only when BOTH key and value
                    // are non-primitive AND non-enum; otherwise a plain by-value Add.
                    boolean bothForwardable = !isByValueType(keyShape) && !isByValueType(valueShape);
                    if (bothForwardable) {
                        String keyParam = methodName + "KeyT";
                        String valueParam = methodName + "ValueT";
                        writer.write("template <typename $L = $L, typename $L = $L>", keyParam, keyType, valueParam, valueType);
                        writer.openBlock("$L& Add$L($L&& key, $L&& value) {", "}", className, methodName, keyParam, valueParam, () -> {
                            writer.write("$LHasBeenSet = true;", fieldName);
                            writer.write("$L.emplace(std::forward<$L>(key), std::forward<$L>(value));", fieldName, keyParam, valueParam);
                            writer.write("return *this;");
                        });
                    } else {
                        writer.openBlock("inline $L& Add$L($L key, $L value) {", "}", className, methodName, keyType, valueType, () -> {
                            writer.write("$LHasBeenSet = true;", fieldName);
                            writer.write("$L.emplace(key, value);", fieldName);
                            writer.write("return *this;");
                        });
                    }
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
    public static void renderPrivateSection(CppWriter writer, Shape shape, Model model) {
        renderPrivateSection(writer, shape, model, false);
    }

    /**
     * Like {@link #renderPrivateSection(CppWriter, Shape, Model)} but widens {@code integer}
     * data members to {@code int64_t} when {@code wideIntegers} is set (CBOR sub-objects).
     */
    public static void renderPrivateSection(CppWriter writer, Shape shape, Model model, boolean wideIntegers) {
        renderPrivateDataMembers(writer, shape, model, wideIntegers);
        renderPrivateHasBeenSetFlags(writer, shape, model);
    }

    /**
     * Writes only the data member declarations (with blank lines between each).
     */
    public static void renderPrivateDataMembers(CppWriter writer, Shape shape, Model model) {
        renderPrivateDataMembers(writer, shape, model, false);
    }

    /** Data member declarations, widening {@code integer} to {@code int64_t} when requested. */
    public static void renderPrivateDataMembers(CppWriter writer, Shape shape, Model model, boolean wideIntegers) {
        java.util.List<Map.Entry<String, MemberShape>> entries =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        for (int i = 0; i < entries.size(); i++) {
            Map.Entry<String, MemberShape> entry = entries.get(i);
            writeDataMember(writer, entry.getValue(), entry.getKey(), model, wideIntegers);
            if (i < entries.size() - 1) {
                writer.write("");
            }
        }
    }

    /**
     * Writes only the HasBeenSet boolean flags (one per member, no blank lines between).
     */
    public static void renderPrivateHasBeenSetFlags(CppWriter writer, Shape shape, Model model) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            writeHasBeenSetFlag(writer, entry.getValue(), entry.getKey());
        }
    }

    /**
     * Writes a single private data member declaration. {@code @idempotencyToken} members are
     * brace-initialized with {@code Aws::Utils::UUID::PseudoRandomUUID()} so a caller who omits
     * the token still gets idempotent behavior; other members fall back to their type's default
     * initializer (or none). Matches C2J's ServiceClientModelHeaderMemberDeclaration.vm.
     */
    private static void writeDataMember(CppWriter writer, MemberShape member, String memberName, Model model,
                                        boolean wideIntegers) {
        Shape targetShape = model.expectShape(member.getTarget());
        String cppType = CppTypeMapper.getCppType(targetShape, model, wideIntegers);
        String fieldName = CppNames.fieldName(memberName);
        if (member.hasTrait(IdempotencyTokenTrait.class)) {
            writer.write("$L $L{Aws::Utils::UUID::PseudoRandomUUID()};", cppType, fieldName);
            return;
        }
        CppTypeMapper.getDefaultValue(targetShape).ifPresentOrElse(
            defaultVal -> writer.write("$L $L{$L};", cppType, fieldName, defaultVal),
            () -> writer.write("$L $L;", cppType, fieldName)
        );
    }

    /**
     * Writes a single HasBeenSet flag. {@code @idempotencyToken} members default to {@code true}
     * because they are auto-populated at construction; all others default to {@code false}.
     * Matches C2J's ModelClassMembersAndInlines.vm.
     */
    private static void writeHasBeenSetFlag(CppWriter writer, MemberShape member, String memberName) {
        String fieldName = CppNames.fieldName(memberName);
        boolean initialValue = member.hasTrait(IdempotencyTokenTrait.class);
        writer.write("bool $LHasBeenSet = $L;", fieldName, initialValue);
    }

    /**
     * True if a container element / map key or value is passed to {@code Add*} by value rather
     * than by perfect-forwarding reference. Matches C2J: primitive and enum types are by-value
     * (they are cheap and trivially copyable), everything else is forwarded.
     */
    private static boolean isByValueType(Shape shape) {
        return CppTypeMapper.isPrimitive(shape) || shape.isEnumShape();
    }

    private static String capitalize(String name) {
        return CppNames.capitalize(name);
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

    /**
     * Renders the class-level documentation comment for a shape: its {@code @documentation}
     * text followed by a "See Also" link to the AWS API reference. Emits an empty doc comment
     * ({@code /** *}{@code /}) when the shape carries no documentation. Shared by the
     * request, result, sub-object, and event-stream union renderers.
     *
     * @param writer            the CppWriter to write to
     * @param shape             the shape whose class doc to render (structure or union)
     * @param smithyServiceName the service name used in the reference URL (e.g. "kinesis")
     * @param version           the service API version used in the reference URL
     */
    public static void renderClassDocComment(CppWriter writer, Shape shape,
                                             String smithyServiceName, String version) {
        if (shape.getTrait(DocumentationTrait.class).isPresent()) {
            String docText = collapseWhitespace(shape.getTrait(DocumentationTrait.class).get().getValue());
            String seeAlso = String.format(
                "<p><h3>See Also:</h3>   <a href=\"http://docs.aws.amazon.com/goto/WebAPI/%s-%s/%s\">AWS API Reference</a></p>",
                smithyServiceName, version, CppTypeMapper.cppShapeName(shape));
            writeDocComment(writer, docText + seeAlso);
        } else {
            writer.write("/**");
            writer.write(" */");
        }
    }

    /**
     * Collapses all runs of whitespace in {@code text} to single spaces and trims the result.
     *
     * @param text the documentation text to normalize; must not be null
     * @return the whitespace-collapsed text
     */
    public static String collapseWhitespace(String text) {
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
