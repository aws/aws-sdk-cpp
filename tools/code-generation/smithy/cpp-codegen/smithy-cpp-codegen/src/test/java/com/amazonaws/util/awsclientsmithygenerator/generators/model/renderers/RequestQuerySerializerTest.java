/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.TimestampShape;
import software.amazon.smithy.model.traits.HttpQueryParamsTrait;
import software.amazon.smithy.model.traits.HttpQueryTrait;
import software.amazon.smithy.model.traits.TimestampFormatTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies {@link RequestQuerySerializer} emits the scalar / string / enum / timestamp
 * {@code @httpQuery} member serialization byte-for-byte with the legacy C2J
 * {@code AddQueryStringParametersToRequest.vm} output. {@code @httpQuery} lists and
 * {@code @httpQueryParams} maps are handled separately and are not exercised here.
 */
class RequestQuerySerializerTest {

    private static String render(StructureShape shape, Model model) {
        CppWriter w = new CppWriter();
        RequestQuerySerializer.render(w, shape, model);
        return w.toString();
    }

    @Test
    void stringQuery_gatedAndAdded() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Prefix", s.getId(), b -> b.addTrait(new HttpQueryTrait("prefix")))
            .build();
        Model m = Model.builder().addShapes(s, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_prefixHasBeenSet) {"), out);
        assertTrue(out.contains("ss << m_prefix;"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"prefix\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void enumQuery_streamsMapper() {
        EnumShape e = EnumShape.builder().id("com.ex#EncodingType")
            .addMember("URL", "url")
            .build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("EncodingType", e.getId(), b -> b.addTrait(new HttpQueryTrait("encoding-type")))
            .build();
        Model m = Model.builder().addShapes(e, req).build();
        String out = render(req, m);
        // C2J's query template (AddQueryStringParameter.vm) gates query enums on HasBeenSet only —
        // there is no NOT_SET clause for query members (unlike headers).
        assertTrue(out.contains("if (m_encodingTypeHasBeenSet) {"), out);
        assertFalse(out.contains("NOT_SET"), out);
        assertTrue(out.contains(
            "ss << EncodingTypeMapper::GetNameForEncodingType(m_encodingType);"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"encoding-type\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void timestampQuery_defaultIso8601() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expires", ts.getId(), b -> b.addTrait(new HttpQueryTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_expiresHasBeenSet) {"), out);
        assertTrue(out.contains(
            "ss << m_expires.ToGmtString(Aws::Utils::DateFormat::ISO_8601);"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"expires\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void timestampQuery_httpDateTraitMapsToRfc822() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T")
            .addTrait(new TimestampFormatTrait("http-date")).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expires", ts.getId(), b -> b.addTrait(new HttpQueryTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "ss << m_expires.ToGmtString(Aws::Utils::DateFormat::RFC822);"), out);
    }

    @Test
    void timestampQuery_epochSecondsTrait() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T")
            .addTrait(new TimestampFormatTrait("epoch-seconds")).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expires", ts.getId(), b -> b.addTrait(new HttpQueryTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_expiresHasBeenSet) {"), out);
        assertTrue(out.contains("ss << m_expires.SecondsWithMSPrecision();"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"expires\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void memberWithoutQueryTrait_emitsNothing() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Body", s.getId())
            .build();
        Model m = Model.builder().addShapes(s, req).build();
        assertTrue(render(req, m).isBlank(), render(req, m));
    }

    @Test
    void listQuery_loopsSameLocation() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Ids", list.getId(), b -> b.addTrait(new HttpQueryTrait("id")))
            .build();
        Model m = Model.builder().addShapes(s, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_idsHasBeenSet) {"), out);
        assertTrue(out.contains("for (const auto& item : m_ids) {"), out);
        assertTrue(out.contains("ss << item;"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"id\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void listQuery_enumElement_streamsMapper() {
        EnumShape e = EnumShape.builder().id("com.ex#EncodingType")
            .addMember("URL", "url").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(e.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("EncodingTypes", list.getId(), b -> b.addTrait(new HttpQueryTrait("encoding-type")))
            .build();
        Model m = Model.builder().addShapes(e, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains("for (const auto& item : m_encodingTypes) {"), out);
        assertTrue(out.contains("ss << EncodingTypeMapper::GetNameForEncodingType(item);"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"encoding-type\", ss.str());"), out);
    }

    @Test
    void listQuery_timestampElement_defaultIso8601() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(ts.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expirations", list.getId(), b -> b.addTrait(new HttpQueryTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains("for (const auto& item : m_expirations) {"), out);
        assertTrue(out.contains(
            "ss << item.ToGmtString(Aws::Utils::DateFormat::ISO_8601);"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(\"expires\", ss.str());"), out);
    }

    @Test
    void queryParamsMap_scalarValue_usesEntryKey() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#M").key(s.getId()).value(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Params", map.getId(), b -> b.addTrait(new HttpQueryParamsTrait()))
            .build();
        Model m = Model.builder().addShapes(s, map, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_paramsHasBeenSet) {"), out);
        assertTrue(out.contains("for (auto& item : m_params) {"), out);
        assertTrue(out.contains("ss << item.second;"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(item.first.c_str(), ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void queryParamsMap_listValue_innerLoop() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(s.getId()).build();
        MapShape map = MapShape.builder().id("com.ex#M").key(s.getId()).value(list.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Params", map.getId(), b -> b.addTrait(new HttpQueryParamsTrait()))
            .build();
        Model m = Model.builder().addShapes(s, list, map, req).build();
        String out = render(req, m);
        assertTrue(out.contains("for (auto& item : m_params) {"), out);
        assertTrue(out.contains("for (auto& innerItem : item.second) {"), out);
        assertTrue(out.contains("ss << innerItem;"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(item.first.c_str(), ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void customizedAccessLogTagMarker_emitsXFilterBlockAndSkipsNormalMap() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#M").key(s.getId()).value(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("customizedAccessLogTag", map.getId(), b -> b
                .addTrait(new HttpQueryParamsTrait())
                .addTrait(new com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms
                    .CustomizedAccessLogTagTrait()))
            .build();
        Model m = Model.builder().addShapes(s, map, req).build();
        String out = render(req, m);

        // The x- filter block is emitted verbatim (NOT HasBeenSet-gated).
        assertTrue(out.contains("if (!m_customizedAccessLogTag.empty()) {"), out);
        assertTrue(out.contains("// only accept customized LogTag which starts with \"x-\""), out);
        assertTrue(out.contains("Aws::Map<Aws::String, Aws::String> collectedLogTags;"), out);
        assertTrue(out.contains("for (const auto& entry : m_customizedAccessLogTag) {"), out);
        assertTrue(out.contains(
            "if (!entry.first.empty() && !entry.second.empty() && entry.first.substr(0, 2) == \"x-\") {"),
            out);
        assertTrue(out.contains("collectedLogTags.emplace(entry.first, entry.second);"), out);
        assertTrue(out.contains("if (!collectedLogTags.empty()) {"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(collectedLogTags);"), out);

        // The marked member must be skipped in the normal @httpQueryParams loop.
        assertFalse(out.contains("if (m_customizedAccessLogTagHasBeenSet) {"), out);
        assertFalse(out.contains("for (auto& item : m_customizedAccessLogTag) {"), out);
    }

    @Test
    void plainQueryParamsMap_withoutMarker_stillNormalSerialization() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#M").key(s.getId()).value(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Params", map.getId(), b -> b.addTrait(new HttpQueryParamsTrait()))
            .build();
        Model m = Model.builder().addShapes(s, map, req).build();
        String out = render(req, m);

        // A plain @httpQueryParams map (no marker) keeps the Task-4 normal map serialization.
        assertTrue(out.contains("if (m_paramsHasBeenSet) {"), out);
        assertTrue(out.contains("for (auto& item : m_params) {"), out);
        assertTrue(out.contains("ss << item.second;"), out);
        assertTrue(out.contains("uri.AddQueryStringParameter(item.first.c_str(), ss.str());"), out);
        // No x- filter block for a plain map.
        assertFalse(out.contains("collectedLogTags"), out);
    }

    @Test
    void queryParamsMap_enumKey_usesMapper() {
        EnumShape key = EnumShape.builder().id("com.ex#KeyEnum")
            .addMember("A", "a").build();
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#M").key(key.getId()).value(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Params", map.getId(), b -> b.addTrait(new HttpQueryParamsTrait()))
            .build();
        Model m = Model.builder().addShapes(key, s, map, req).build();
        String out = render(req, m);
        assertTrue(out.contains("for (auto& item : m_params) {"), out);
        assertTrue(out.contains("ss << item.second;"), out);
        assertTrue(out.contains(
            "uri.AddQueryStringParameter(KeyEnumMapper::GetNameForKeyEnum(item.first).c_str(), ss.str());"), out);
    }
}
