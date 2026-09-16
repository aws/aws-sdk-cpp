/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpPrefixHeadersTrait;
import software.amazon.smithy.model.traits.SparseTrait;
import software.amazon.smithy.model.traits.TimestampFormatTrait;

import java.util.Locale;

/**
 * Emits the {@code @httpHeader} member-serialization loop body for a request's
 * {@code GetRequestSpecificHeaders()}, byte-matching C2J {@code ModelClassHeaderMembersSource.vm}.
 *
 * <p>Protocol-agnostic (byte-identical across REST-XML, JSON, REST-JSON, Query-XML, EC2, CBOR).
 * The caller owns the surrounding {@code headers}/{@code ss} declarations, protocol prologue, and
 * {@code return headers;}. Every member is {@code HasBeenSet}-gated; enums also guard {@code ::NOT_SET}.
 *
 * <p>Scope: {@code @httpHeader} scalars (string / {@code x-amz-copy-source} / enum / boolean / blob /
 * timestamp) and lists (joined via {@code std::accumulate}), plus {@code @httpPrefixHeaders} maps
 * (looped, sparse values unwrapped via {@code has_value()}).
 */
public final class RequestHeaderSerializer {

    private RequestHeaderSerializer() {}

    /**
     * Emits header serialization for every header-bound member of {@code shape} in model order:
     * {@code @httpHeader} scalars/lists and {@code @httpPrefixHeaders} maps; others skipped.
     */
    public static void render(CppWriter writer, StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            // C2J lowercases header location names (and @httpPrefixHeaders prefixes); Locale.ROOT
            // avoids locale-dependent casing.
            member.getTrait(HttpHeaderTrait.class).ifPresent(trait ->
                renderHeaderMember(writer, member, trait.getValue().toLowerCase(Locale.ROOT), model));
            member.getTrait(HttpPrefixHeadersTrait.class).ifPresent(trait ->
                renderPrefixHeadersMap(writer, member, trait.getValue().toLowerCase(Locale.ROOT), model));
        }
    }

    private static void renderHeaderMember(CppWriter writer, MemberShape member, String location,
                                           Model model) {
        Shape target = model.expectShape(member.getTarget());
        String field = CppNames.fieldName(member.getMemberName());

        if (target.isListShape()) {
            Shape element = model.expectShape(target.asListShape().get().getMember().getTarget());
            writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
                renderListBody(writer, field, location, element, model));
            return;
        }

        if (CppTypeMapper.isEnum(target)) {
            String enumType = CppTypeMapper.getCppType(target, model, false);
            writer.openBlock("if ($1LHasBeenSet && $1L != $2L::NOT_SET) {", "}", field, enumType, () ->
                writer.write("headers.emplace(\"$1L\", $2L);",
                    location, headerValueExpression(target, field, model)));
            return;
        }

        writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
            renderScalarBody(writer, field, location, target, model));
    }

    // @httpPrefixHeaders map: each entry becomes a header named prefix+key. A @sparse value is
    // Aws::Crt::Optional, so the emplace is guarded on has_value() and unwrapped via value().
    private static void renderPrefixHeadersMap(CppWriter writer, MemberShape member, String prefix,
                                               Model model) {
        Shape target = model.expectShape(member.getTarget());
        String field = CppNames.fieldName(member.getMemberName());
        boolean sparse = target.hasTrait(SparseTrait.class);
        writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
            writer.openBlock("for (const auto& item : $L) {", "}", field, () -> {
                writer.write("ss << \"$L\" << item.first;", prefix);
                if (sparse) {
                    writer.write(
                        "if (item.second.has_value()) { headers.emplace(ss.str(), item.second.value()); }");
                } else {
                    writer.write("headers.emplace(ss.str(), item.second);");
                }
                writer.write("ss.str(\"\");");
            }));
    }

    // @httpHeader list: comma-joins the elements into a single header value via std::accumulate.
    private static void renderListBody(CppWriter writer, String field, String location, Shape element,
                                       Model model) {
        String elementType = CppTypeMapper.getCppType(element, model, false);
        writer.write("headers.emplace(\"$1L\", std::accumulate(std::begin($2L), std::end($2L), Aws::String{},",
            location, field);
        writer.write("  [](const Aws::String& acc, const $L& item) -> Aws::String {", elementType);
        writer.write("    const auto headerValue = $L;", headerValueExpression(element, "item", model));
        writer.write("    return acc.empty() ? headerValue : acc + \",\" + headerValue;");
        writer.write("  }));");
    }

    // Shared per-type header value expression, keyed on target shape: enum → Mapper lookup,
    // timestamp → header mapping (epoch-seconds→Seconds(), date-time→ISO_8601, else→RFC822),
    // primitive → to_string, else (string) used directly. The value expr (scalar field or list
    // loop var) is the parameter, so scalar and list paths share this mapping.
    private static String headerValueExpression(Shape shape, String valueExpr, Model model) {
        if (CppTypeMapper.isEnum(shape)) {
            String enumType = CppTypeMapper.getCppType(shape, model, false);
            return enumType + "Mapper::GetNameFor" + enumType + "(" + valueExpr + ")";
        }
        if (shape.isTimestampShape()) {
            String format = shape.getTrait(TimestampFormatTrait.class)
                .map(TimestampFormatTrait::getValue)
                .orElse("http-date");
            if (format.equals("epoch-seconds")) {
                return "StringUtils::to_string(" + valueExpr + ".Seconds())";
            }
            String dateFormat = format.equals("date-time") ? "ISO_8601" : "RFC822";
            return valueExpr + ".ToGmtString(Aws::Utils::DateFormat::" + dateFormat + ")";
        }
        if (CppTypeMapper.isPrimitive(shape)) {
            return "StringUtils::to_string(" + valueExpr + ")";
        }
        return valueExpr;
    }

    private static void renderScalarBody(CppWriter writer, String field, String location, Shape target,
                                         Model model) {
        if (target.isBooleanShape()) {
            writer.write("ss << std::boolalpha << $L;", field);
            emplaceFromStream(writer, location);
            return;
        }
        if (target.isBlobShape()) {
            writer.write("ss << HashingUtils::Base64Encode($L);", field);
            emplaceFromStream(writer, location);
            return;
        }
        if (target.isTimestampShape()) {
            writer.write("headers.emplace(\"$L\", $L);", location, headerValueExpression(target, field, model));
            return;
        }
        // string / default scalar
        writer.write("ss << $L;", field);
        String value = location.equals("x-amz-copy-source") ? "URI::URLEncodePath(ss.str())" : "ss.str()";
        writer.write("headers.emplace(\"$L\", $L);", location, value);
        writer.write("ss.str(\"\");");
    }

    private static void emplaceFromStream(CppWriter writer, String location) {
        writer.write("headers.emplace(\"$L\", ss.str());", location);
        writer.write("ss.str(\"\");");
    }
}
