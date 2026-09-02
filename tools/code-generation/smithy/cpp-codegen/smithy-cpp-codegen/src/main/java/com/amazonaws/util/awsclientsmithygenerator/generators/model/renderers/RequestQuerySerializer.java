/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppTypeMapper;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.CustomizedAccessLogTagTrait;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.traits.TimestampFormatTrait;

/**
 * Emits the {@code @httpQuery} member-serialization loop body for a request's
 * {@code AddQueryStringParameters(Aws::Http::URI&)}, byte-matching C2J
 * {@code AddQueryStringParametersToRequest.vm}.
 *
 * <p>Protocol-agnostic (byte-identical across REST-XML, Query-XML, EC2, JSON, CBOR). The caller owns
 * the surrounding {@code ss} declaration and method scaffold; {@code uri} is the method parameter.
 * Every member is {@code HasBeenSet}-gated; unlike headers, query enums are NOT guarded against
 * {@code ::NOT_SET} (C2J's query template gates on {@code HasBeenSet} only).
 *
 * <p>Scope: scalar / string / enum / timestamp {@code @httpQuery} members, {@code @httpQuery} lists
 * (one query parameter per element under the fixed location), and {@code @httpQueryParams} maps
 * (each entry keyed by its own key — scalar value, enum key via {@code Mapper}, or list value via an
 * inner loop). Every query case routes through the shared {@code ss}. Query timestamps default to
 * {@code date-time} (ISO_8601), unlike the header default (RFC822).
 *
 * <p>The S3 {@code customizedAccessLogTag} member ({@link CustomizedAccessLogTagTrait}, C2J's
 * {@code customizedQuery} flag) is special: skipped in the normal {@code @httpQueryParams} loop, it
 * instead emits an {@code x-}-prefix filter block once after the loop.
 */
public final class RequestQuerySerializer {

    private RequestQuerySerializer() {}

    /**
     * Emits query serialization for every {@code @httpQuery} member of {@code shape} in model order;
     * members without the trait are skipped.
     */
    public static void render(CppWriter writer, StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            member.getTrait(HttpQueryTrait.class).ifPresent(trait ->
                renderQueryMember(writer, member, trait.getValue(), model));
            member.getTrait(HttpQueryParamsTrait.class).ifPresent(trait -> {
                // The S3 customizedAccessLogTag member carries @httpQueryParams (to keep the request
                // emitting AddQueryStringParameters) but emits the x- filter block after this loop
                // instead of serializing as a normal map.
                if (!member.hasTrait(CustomizedAccessLogTagTrait.class)) {
                    renderQueryParamsMap(writer, member, model);
                }
            });
        }
        // C2J's customizedQuery block: emitted once, after the normal member loop, for the (single)
        // marked S3 customizedAccessLogTag member. NOT HasBeenSet-gated.
        for (MemberShape member : shape.getAllMembers().values()) {
            if (member.hasTrait(CustomizedAccessLogTagTrait.class)) {
                renderCustomizedAccessLogTagFilter(writer, member);
            }
        }
    }

    // C2J's AddQueryStringParametersToRequest.vm customizedQuery block: keep only LogTags whose key
    // starts with "x-", then add the collected map to the URI. Emitted byte-for-byte.
    private static void renderCustomizedAccessLogTagFilter(CppWriter writer, MemberShape member) {
        String field = CppNames.fieldName(member.getMemberName());
        writer.openBlock("if (!$L.empty()) {", "}", field, () -> {
            writer.write("// only accept customized LogTag which starts with \"x-\"");
            writer.write("Aws::Map<Aws::String, Aws::String> collectedLogTags;");
            writer.openBlock("for (const auto& entry : $L) {", "}", field, () ->
                writer.openBlock("if (!entry.first.empty() && !entry.second.empty() && "
                        + "entry.first.substr(0, 2) == \"x-\") {", "}", () ->
                    writer.write("collectedLogTags.emplace(entry.first, entry.second);")));
            writer.openBlock("if (!collectedLogTags.empty()) {", "}", () ->
                writer.write("uri.AddQueryStringParameter(collectedLogTags);"));
        });
    }

    private static void renderQueryMember(CppWriter writer, MemberShape member, String location,
                                          Model model) {
        Shape target = model.expectShape(member.getTarget());
        String field = CppNames.fieldName(member.getMemberName());

        // @httpQuery list: one query parameter per element, all under the same fixed location.
        if (target.isListShape()) {
            Shape element = model.expectShape(target.asListShape().get().getMember().getTarget());
            writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
                writer.openBlock("for (const auto& item : $L) {", "}", field, () -> {
                    writer.write("ss << $L;", elementStreamExpression("item", element, model));
                    writer.write("uri.AddQueryStringParameter(\"$L\", ss.str());", location);
                    writer.write("ss.str(\"\");");
                }));
            return;
        }

        if (CppTypeMapper.isEnum(target)) {
            String enumType = CppTypeMapper.getCppType(target, model, false);
            // C2J's query template gates enums on HasBeenSet only (no NOT_SET clause, unlike headers).
            writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
                emitStreamed(writer, location,
                    enumType + "Mapper::GetNameFor" + enumType + "(" + field + ")"));
            return;
        }

        writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
            emitStreamed(writer, location, elementStreamExpression(field, target, model)));
    }

    private static void emitStreamed(CppWriter writer, String location, String streamExpression) {
        writer.write("ss << $L;", streamExpression);
        writer.write("uri.AddQueryStringParameter(\"$L\", ss.str());", location);
        writer.write("ss.str(\"\");");
    }

    // @httpQueryParams map: each entry becomes a query parameter keyed by its own key (no fixed
    // location). Scalar value streams directly; list value fans out one parameter per element; enum
    // key is mapped through its Mapper.
    private static void renderQueryParamsMap(CppWriter writer, MemberShape member, Model model) {
        Shape target = model.expectShape(member.getTarget());
        String field = CppNames.fieldName(member.getMemberName());
        Shape key = model.expectShape(target.asMapShape().get().getKey().getTarget());
        Shape value = model.expectShape(target.asMapShape().get().getValue().getTarget());
        String keyExpression = queryParamKeyExpression(key, model);

        writer.openBlock("if ($LHasBeenSet) {", "}", field, () ->
            writer.openBlock("for (auto& item : $L) {", "}", field, () -> {
                if (value.isListShape()) {
                    Shape element = model.expectShape(value.asListShape().get().getMember().getTarget());
                    writer.openBlock("for (auto& innerItem : item.second) {", "}", () -> {
                        writer.write("ss << $L;", elementStreamExpression("innerItem", element, model));
                        writer.write("uri.AddQueryStringParameter($L, ss.str());", keyExpression);
                        writer.write("ss.str(\"\");");
                    });
                } else {
                    writer.write("ss << $L;", elementStreamExpression("item.second", value, model));
                    writer.write("uri.AddQueryStringParameter($L, ss.str());", keyExpression);
                    writer.write("ss.str(\"\");");
                }
            }));
    }

    // Query parameter key for an @httpQueryParams entry: enum key via its Mapper, else the raw entry
    // key. Both end in .c_str() since AddQueryStringParameter takes a const char* key.
    private static String queryParamKeyExpression(Shape key, Model model) {
        if (CppTypeMapper.isEnum(key)) {
            String enumType = CppTypeMapper.getCppType(key, model, false);
            return enumType + "Mapper::GetNameFor" + enumType + "(item.first).c_str()";
        }
        return "item.first.c_str()";
    }

    // Shared stream expression for a scalar member, list element, or map value: enum → Mapper lookup,
    // timestamp → query mapping (date-time→ISO_8601, http-date→RFC822, epoch-seconds→
    // SecondsWithMSPrecision()), else streamed directly. (Enum scalars are handled inline earlier.)
    private static String elementStreamExpression(String var, Shape target, Model model) {
        if (CppTypeMapper.isEnum(target)) {
            String enumType = CppTypeMapper.getCppType(target, model, false);
            return enumType + "Mapper::GetNameFor" + enumType + "(" + var + ")";
        }
        if (target.isTimestampShape()) {
            String format = target.getTrait(TimestampFormatTrait.class)
                .map(TimestampFormatTrait::getValue)
                .orElse("date-time");
            if (format.equals("epoch-seconds")) {
                return var + ".SecondsWithMSPrecision()";
            }
            String dateFormat = format.equals("http-date") ? "RFC822" : "ISO_8601";
            return var + ".ToGmtString(Aws::Utils::DateFormat::" + dateFormat + ")";
        }
        return var;
    }
}
