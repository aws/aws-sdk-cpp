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
 * Emits the {@code @httpQuery} member-serialization loop body for a request (operation-input)
 * structure's {@code AddQueryStringParameters(Aws::Http::URI&)}, byte-matching the legacy C2J
 * {@code AddQueryStringParametersToRequest.vm}.
 *
 * <p>Protocol-agnostic: the query member serialization is byte-identical across REST-XML,
 * Query-XML, EC2, JSON, and CBOR, so this renderer never branches on protocol. The caller
 * ({@code ProtocolTraits.writeAddQueryStringParametersImpl}) owns the surrounding
 * {@code Aws::StringStream ss;} declaration and the method scaffold; {@code uri} is the
 * {@code Aws::Http::URI&} method parameter.
 *
 * <p>Every member is {@code HasBeenSet}-gated (C2J clears {@code required} on all members). Unlike
 * headers, query enum members are NOT additionally guarded against {@code ::NOT_SET} — C2J's query
 * template ({@code AddQueryStringParameter.vm}) gates on {@code HasBeenSet} only.
 *
 * <p>Scope: scalar / string / enum / timestamp {@code @httpQuery} members, {@code @httpQuery}
 * lists (looped, one query parameter per element under the fixed location), and
 * {@code @httpQueryParams} maps (looped, each entry keyed by the map's own key — scalar value,
 * enum key via {@code Mapper}, or list value via an inner loop). Unlike headers, every query
 * case routes its value through the shared {@code ss} stringstream. The query timestamp default
 * is {@code date-time} (ISO_8601), differing from the header default (RFC822).
 *
 * <p>The S3 {@code customizedAccessLogTag} member (stamped with {@link CustomizedAccessLogTagTrait}
 * by {@code S3Transforms}) is a special case: C2J models it with a {@code customizedQuery} flag, so
 * it is skipped in the normal {@code @httpQueryParams} loop and instead emits an {@code x-}-prefix
 * filter block once after the loop, byte-matching {@code AddQueryStringParametersToRequest.vm}.
 */
public final class RequestQuerySerializer {

    private RequestQuerySerializer() {}

    /**
     * Emits the query-member serialization for every {@code @httpQuery} scalar/string/enum/timestamp
     * member of {@code shape}, in model order. Members carrying no {@code @httpQuery} trait are skipped.
     */
    public static void render(CppWriter writer, StructureShape shape, Model model) {
        for (MemberShape member : shape.getAllMembers().values()) {
            member.getTrait(HttpQueryTrait.class).ifPresent(trait ->
                renderQueryMember(writer, member, trait.getValue(), model));
            member.getTrait(HttpQueryParamsTrait.class).ifPresent(trait -> {
                // The S3 customizedAccessLogTag member carries @httpQueryParams (to keep the request
                // emitting AddQueryStringParameters) but is not serialized as a normal map — it emits
                // the x- filter block after this loop instead.
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

    // @httpQueryParams map: each entry becomes a query parameter keyed by the map's own key
    // (there is no fixed location). A scalar value streams directly; a list value fans out to one
    // query parameter per element via an inner loop; an enum key is mapped through its Mapper.
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

    // Query parameter key for an @httpQueryParams entry: an enum key routes through its Mapper,
    // any other (string) key uses the raw entry key. Both terminate in .c_str() since
    // AddQueryStringParameter takes a const char* key.
    private static String queryParamKeyExpression(Shape key, Model model) {
        if (CppTypeMapper.isEnum(key)) {
            String enumType = CppTypeMapper.getCppType(key, model, false);
            return enumType + "Mapper::GetNameFor" + enumType + "(item.first).c_str()";
        }
        return "item.first.c_str()";
    }

    // Shared stream expression for a scalar member, list element, or map value: enum → Mapper
    // lookup, timestamp → the query timestamp mapping (date-time→ISO_8601, http-date→RFC822,
    // epoch-seconds→SecondsWithMSPrecision()), any other value streamed directly. The non-enum
    // scalar path reuses this too (enum scalars are handled inline before reaching here).
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
