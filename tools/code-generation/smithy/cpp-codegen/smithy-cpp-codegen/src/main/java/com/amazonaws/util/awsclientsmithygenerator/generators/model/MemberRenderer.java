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
import software.amazon.smithy.model.traits.DocumentationTrait;
import software.amazon.smithy.model.traits.IdempotencyTokenTrait;
import software.amazon.smithy.model.traits.SparseTrait;

import java.util.Map;

/**
 * Renders C++ accessor methods (Get/Set/With/Add) and private member fields
 * from Smithy structure members.
 *
 * <p>Generated C++ follows the existing SDK pattern with templated setters,
 * doxygen group markers, and separate HasBeenSet tracking flags.
 */
public final class MemberRenderer {

    private final Model model;
    private final Shape shape;
    private final String className;
    private final boolean emitHasBeenSet;
    private boolean wideIntegers;
    private String exclude;

    private MemberRenderer(Model model, Shape shape, String className, boolean emitHasBeenSet) {
        this.model = model;
        this.shape = shape;
        this.className = className;
        this.emitHasBeenSet = emitHasBeenSet;
        this.wideIntegers = false;
        this.exclude = null;
    }

    /** Renderer for a request / sub-object / event structure: emits {@code HasBeenSet} accessors. */
    public static MemberRenderer forStructure(Model model, Shape shape, String className) {
        return new MemberRenderer(model, shape, className, true);
    }

    /** Renderer for a result structure: never emits {@code HasBeenSet} accessors. */
    public static MemberRenderer forResult(Model model, Shape shape, String className) {
        return new MemberRenderer(model, shape, className, false);
    }

    /** Widen {@code integer} members to {@code int64_t} (CBOR sub-objects / events). */
    public MemberRenderer wideIntegers(boolean value) {
        this.wideIntegers = value;
        return this;
    }

    /**
     * Skip {@code memberName} across all fragments. Streaming results render their
     * {@code @httpPayload} member separately as a {@code GetBody()} / {@code ReplaceBody} pair.
     */
    public MemberRenderer excluding(String memberName) {
        this.exclude = memberName;
        return this;
    }

    /** Public Get/Set/With/Add accessor group for every (non-excluded) member. */
    public void renderPublicAccessors(CppWriter writer) {
        java.util.List<Map.Entry<String, MemberShape>> members =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        members.removeIf(e -> e.getKey().equals(exclude));
        for (int i = 0; i < members.size(); i++) {
            Map.Entry<String, MemberShape> entry = members.get(i);
            String memberName = entry.getKey();
            MemberShape member = entry.getValue();
            Shape targetShape = model.expectShape(member.getTarget());
            String cppType = CppTypeMapper.getCppType(targetShape, model, wideIntegers);
            String fieldName = CppNames.fieldName(memberName);
            String methodName = capitalize(memberName);
            String templateParam = methodName + "T";

            writer.write("///@{");

            if (member.getTrait(DocumentationTrait.class).isPresent()) {
                writeDocComment(writer, collapseWhitespace(member.getTrait(DocumentationTrait.class).get().getValue()));
            } else {
                writer.write("");
            }

            if (targetShape.isDocumentShape()) {
                writer.write("inline Aws::Utils::DocumentView Get$L() const { return $L; }", methodName, fieldName);
            } else if (isPrimitive(targetShape) || targetShape.isEnumShape()) {
                writer.write("inline $L Get$L() const { return $L; }", cppType, methodName, fieldName);
            } else {
                writer.write("inline const $L& Get$L() const { return $L; }", cppType, methodName, fieldName);
            }

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
                    boolean sparse = targetShape.hasTrait(SparseTrait.class);
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
                    // A @sparse list also accepts the Optional element directly (matches C2J).
                    if (sparse) {
                        writer.openBlock("inline $L& Add$L(Aws::Crt::Optional<$L> value) {", "}",
                            className, methodName, elementType, () -> {
                            writer.write("$LHasBeenSet = true;", fieldName);
                            writer.write("$L.push_back(value);", fieldName);
                            writer.write("return *this;");
                        });
                    }
                }

                if (targetShape.isMapShape()) {
                    boolean sparse = targetShape.hasTrait(SparseTrait.class);
                    Shape keyShape = model.expectShape(
                        targetShape.asMapShape().get().getKey().getTarget());
                    Shape valueShape = model.expectShape(
                        targetShape.asMapShape().get().getValue().getTarget());
                    String keyType = CppTypeMapper.getCppType(keyShape, model, wideIntegers);
                    String valueType = CppTypeMapper.getCppType(valueShape, model, wideIntegers);
                    boolean bothForwardable = !isByValueType(keyShape) && !isByValueType(valueShape);
                    if (bothForwardable) {
                        String keyParam = methodName + "KeyT";
                        String valueParam = methodName + "ValueT";
                        // A @sparse map's forwarding Add defaults its value template to the wrapped
                        // Optional type (matches C2J); the key is untouched.
                        String valueParamDefault = sparse ? "Aws::Crt::Optional<" + valueType + ">" : valueType;
                        writer.write("template <typename $L = $L, typename $L = $L>", keyParam, keyType, valueParam, valueParamDefault);
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
                    // A @sparse map also accepts the raw key and the Optional value directly.
                    if (sparse) {
                        writer.openBlock("inline $L& Add$L($L key, Aws::Crt::Optional<$L> value) {", "}",
                            className, methodName, keyType, valueType, () -> {
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

    /** Private data member declarations (blank line between each), skipping the excluded member. */
    public void renderDataMembers(CppWriter writer) {
        java.util.List<Map.Entry<String, MemberShape>> entries =
            new java.util.ArrayList<>(shape.getAllMembers().entrySet());
        entries.removeIf(e -> e.getKey().equals(exclude));
        for (int i = 0; i < entries.size(); i++) {
            Map.Entry<String, MemberShape> entry = entries.get(i);
            writeDataMember(writer, entry.getValue(), entry.getKey(), model, wideIntegers);
            if (i < entries.size() - 1) {
                writer.write("");
            }
        }
    }

    /** Private {@code HasBeenSet} flags (one per member, no blank lines), skipping the excluded member. */
    public void renderHasBeenSetFlags(CppWriter writer) {
        for (Map.Entry<String, MemberShape> entry : shape.getAllMembers().entrySet()) {
            if (!entry.getKey().equals(exclude)) {
                writeHasBeenSetFlag(writer, entry.getValue(), entry.getKey());
            }
        }
    }

    /** Data members immediately followed by the {@code HasBeenSet} flags (no separating blank line). */
    public void renderPrivateSection(CppWriter writer) {
        renderDataMembers(writer);
        renderHasBeenSetFlags(writer);
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
