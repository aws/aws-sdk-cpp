/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.BlobShape;
import software.amazon.smithy.model.shapes.BooleanShape;
import software.amazon.smithy.model.shapes.EnumShape;
import software.amazon.smithy.model.shapes.IntegerShape;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;
import software.amazon.smithy.model.shapes.TimestampShape;
import software.amazon.smithy.model.traits.HttpHeaderTrait;
import software.amazon.smithy.model.traits.HttpPrefixHeadersTrait;
import software.amazon.smithy.model.traits.SparseTrait;
import software.amazon.smithy.model.traits.TimestampFormatTrait;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Verifies {@link RequestHeaderSerializer} emits the scalar {@code @httpHeader} member
 * serialization (string / {@code x-amz-copy-source} / enum / boolean / blob / timestamp)
 * byte-for-byte with the legacy C2J {@code ModelClassHeaderMembersSource.vm} output.
 */
class RequestHeaderSerializerTest {

    private static String render(StructureShape shape, Model model) {
        CppWriter w = new CppWriter();
        RequestHeaderSerializer.render(w, shape, model);
        return w.toString();
    }

    @Test
    void stringHeader_gatedAndStreamed() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("CacheControl", s.getId(), b -> b.addTrait(new HttpHeaderTrait("cache-control")))
            .build();
        Model m = Model.builder().addShapes(s, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_cacheControlHasBeenSet) {"), out);
        assertTrue(out.contains("ss << m_cacheControl;"), out);
        assertTrue(out.contains("headers.emplace(\"cache-control\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void copySourceHeader_isUrlEncoded() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("CopySource", s.getId(), b -> b.addTrait(new HttpHeaderTrait("x-amz-copy-source")))
            .build();
        Model m = Model.builder().addShapes(s, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_copySourceHasBeenSet) {"), out);
        assertTrue(out.contains("ss << m_copySource;"), out);
        assertTrue(out.contains(
            "headers.emplace(\"x-amz-copy-source\", URI::URLEncodePath(ss.str()));"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void enumHeader_usesMapperAndNotSetGuard() {
        EnumShape acl = EnumShape.builder().id("com.ex#ObjectCannedACL")
            .addMember("PRIVATE", "private")
            .addMember("PUBLIC_READ", "public-read")
            .build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("ACL", acl.getId(), b -> b.addTrait(new HttpHeaderTrait("x-amz-acl")))
            .build();
        Model m = Model.builder().addShapes(acl, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_aCLHasBeenSet && m_aCL != ObjectCannedACL::NOT_SET) {"), out);
        assertTrue(out.contains(
            "headers.emplace(\"x-amz-acl\", ObjectCannedACLMapper::GetNameForObjectCannedACL(m_aCL));"), out);
        // Enums never route through the stringstream.
        assertFalse(out.contains("ss << m_aCL"), out);
    }

    @Test
    void booleanHeader_usesBoolalpha() {
        BooleanShape b = BooleanShape.builder().id("com.ex#B").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("BypassGovernanceRetention", b.getId(),
                mb -> mb.addTrait(new HttpHeaderTrait("x-amz-bypass-governance-retention")))
            .build();
        Model m = Model.builder().addShapes(b, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_bypassGovernanceRetentionHasBeenSet) {"), out);
        assertTrue(out.contains("ss << std::boolalpha << m_bypassGovernanceRetention;"), out);
        assertTrue(out.contains(
            "headers.emplace(\"x-amz-bypass-governance-retention\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void blobHeader_base64() {
        BlobShape blob = BlobShape.builder().id("com.ex#Blob").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("SSECustomerKeyMD5", blob.getId(),
                mb -> mb.addTrait(new HttpHeaderTrait("x-amz-server-side-encryption-customer-key-MD5")))
            .build();
        Model m = Model.builder().addShapes(blob, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_sSECustomerKeyMD5HasBeenSet) {"), out);
        assertTrue(out.contains("ss << HashingUtils::Base64Encode(m_sSECustomerKeyMD5);"), out);
        // C2J lowercases header locations: the model's uppercase "MD5" segment becomes "md5".
        assertTrue(out.contains(
            "headers.emplace(\"x-amz-server-side-encryption-customer-key-md5\", ss.str());"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void timestampHeader_defaultRfc822() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expires", ts.getId(), b -> b.addTrait(new HttpHeaderTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_expiresHasBeenSet) {"), out);
        assertTrue(out.contains(
            "headers.emplace(\"expires\", m_expires.ToGmtString(Aws::Utils::DateFormat::RFC822));"), out);
        // Timestamps emplace directly; they never touch the stringstream.
        assertFalse(out.contains("ss << m_expires"), out);
    }

    @Test
    void timestampHeader_dateTimeTraitMapsToIso8601() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T")
            .addTrait(new TimestampFormatTrait("date-time")).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expires", ts.getId(), b -> b.addTrait(new HttpHeaderTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "headers.emplace(\"expires\", m_expires.ToGmtString(Aws::Utils::DateFormat::ISO_8601));"), out);
    }

    @Test
    void epochSecondsTimestampHeader_usesSeconds() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T")
            .addTrait(new TimestampFormatTrait("epoch-seconds")).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Expires", ts.getId(), b -> b.addTrait(new HttpHeaderTrait("expires")))
            .build();
        Model m = Model.builder().addShapes(ts, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "headers.emplace(\"expires\", StringUtils::to_string(m_expires.Seconds()));"), out);
    }

    @Test
    void prefixHeadersMap_loopsWithPrefix() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#Meta")
            .key(s.getId()).value(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Metadata", map.getId(),
                b -> b.addTrait(new HttpPrefixHeadersTrait("x-amz-meta-")))
            .build();
        Model m = Model.builder().addShapes(s, map, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_metadataHasBeenSet) {"), out);
        assertTrue(out.contains("for (const auto& item : m_metadata) {"), out);
        assertTrue(out.contains("ss << \"x-amz-meta-\" << item.first;"), out);
        assertTrue(out.contains("headers.emplace(ss.str(), item.second);"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void sparsePrefixHeadersMap_unwrapsOptional() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#Meta")
            .key(s.getId()).value(s.getId())
            .addTrait(new SparseTrait()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Metadata", map.getId(),
                b -> b.addTrait(new HttpPrefixHeadersTrait("x-amz-meta-")))
            .build();
        Model m = Model.builder().addShapes(s, map, req).build();
        String out = render(req, m);
        assertTrue(out.contains("for (const auto& item : m_metadata) {"), out);
        assertTrue(out.contains("ss << \"x-amz-meta-\" << item.first;"), out);
        assertTrue(out.contains(
            "if (item.second.has_value()) { headers.emplace(ss.str(), item.second.value()); }"), out);
        // The sparse form never emits the plain unconditional emplace.
        assertFalse(out.contains("headers.emplace(ss.str(), item.second);"), out);
        assertTrue(out.contains("ss.str(\"\");"), out);
    }

    @Test
    void listHeader_accumulatesCommaJoined() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("X", list.getId(), b -> b.addTrait(new HttpHeaderTrait("x-h")))
            .build();
        Model m = Model.builder().addShapes(s, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains("if (m_xHasBeenSet) {"), out);
        assertTrue(out.contains(
            "headers.emplace(\"x-h\", std::accumulate(std::begin(m_x), std::end(m_x), Aws::String{},"), out);
        assertTrue(out.contains(
            "[](const Aws::String& acc, const Aws::String& item) -> Aws::String {"), out);
        assertTrue(out.contains("const auto headerValue = item;"), out);
        assertTrue(out.contains("return acc.empty() ? headerValue : acc + \",\" + headerValue;"), out);
        assertTrue(out.contains("}));"), out);
    }

    @Test
    void listHeader_enumElement_usesMapper() {
        EnumShape e = EnumShape.builder().id("com.ex#ObjectAttributes")
            .addMember("ETAG", "ETag").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(e.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("X", list.getId(),
                b -> b.addTrait(new HttpHeaderTrait("x-amz-object-attributes")))
            .build();
        Model m = Model.builder().addShapes(e, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "[](const Aws::String& acc, const ObjectAttributes& item) -> Aws::String {"), out);
        assertTrue(out.contains(
            "const auto headerValue = ObjectAttributesMapper::GetNameForObjectAttributes(item);"), out);
    }

    @Test
    void listHeader_timestampElement_usesToGmtString() {
        TimestampShape ts = TimestampShape.builder().id("com.ex#T").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(ts.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("X", list.getId(), b -> b.addTrait(new HttpHeaderTrait("x-h")))
            .build();
        Model m = Model.builder().addShapes(ts, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "[](const Aws::String& acc, const Aws::Utils::DateTime& item) -> Aws::String {"), out);
        assertTrue(out.contains(
            "const auto headerValue = item.ToGmtString(Aws::Utils::DateFormat::RFC822);"), out);
    }

    @Test
    void listHeader_primitiveElement_usesToString() {
        IntegerShape i = IntegerShape.builder().id("com.ex#I").build();
        ListShape list = ListShape.builder().id("com.ex#L").member(i.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("X", list.getId(), b -> b.addTrait(new HttpHeaderTrait("x-h")))
            .build();
        Model m = Model.builder().addShapes(i, list, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "[](const Aws::String& acc, const int& item) -> Aws::String {"), out);
        assertTrue(out.contains("const auto headerValue = StringUtils::to_string(item);"), out);
    }

    @Test
    void mixedCaseHeaderLocation_isLowercased() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("CacheControl", s.getId(), b -> b.addTrait(new HttpHeaderTrait("Cache-Control")))
            .build();
        Model m = Model.builder().addShapes(s, req).build();
        String out = render(req, m);
        // C2J lowercases HTTP header location names; the mixed-case model name must be emitted lowercase.
        assertTrue(out.contains("headers.emplace(\"cache-control\", ss.str());"), out);
        assertFalse(out.contains("Cache-Control"), out);
    }

    @Test
    void mixedCaseEnumHeaderLocation_isLowercased() {
        EnumShape acl = EnumShape.builder().id("com.ex#ObjectCannedACL")
            .addMember("PRIVATE", "private")
            .build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("ACL", acl.getId(), b -> b.addTrait(new HttpHeaderTrait("X-Amz-ACL")))
            .build();
        Model m = Model.builder().addShapes(acl, req).build();
        String out = render(req, m);
        assertTrue(out.contains(
            "headers.emplace(\"x-amz-acl\", ObjectCannedACLMapper::GetNameForObjectCannedACL(m_aCL));"), out);
        assertFalse(out.contains("X-Amz-ACL"), out);
    }

    @Test
    void mixedCasePrefixHeaders_prefixIsLowercased() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        MapShape map = MapShape.builder().id("com.ex#Meta")
            .key(s.getId()).value(s.getId()).build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Metadata", map.getId(),
                b -> b.addTrait(new HttpPrefixHeadersTrait("X-Amz-Meta-")))
            .build();
        Model m = Model.builder().addShapes(s, map, req).build();
        String out = render(req, m);
        assertTrue(out.contains("ss << \"x-amz-meta-\" << item.first;"), out);
        assertFalse(out.contains("X-Amz-Meta-"), out);
    }

    @Test
    void memberWithoutHeaderTrait_emitsNothing() {
        StringShape s = StringShape.builder().id("com.ex#S").build();
        StructureShape req = StructureShape.builder().id("com.ex#R")
            .addMember("Body", s.getId())
            .build();
        Model m = Model.builder().addShapes(s, req).build();
        assertTrue(render(req, m).isBlank(), render(req, m));
    }
}
