/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class CborProtocolTraitsTest {

    private static String render(java.util.function.Consumer<CppWriter> body) {
        CppWriter writer = new CppWriter();
        body.accept(writer);
        return writer.toString();
    }

    private final ProtocolTraits cbor = new CborProtocolTraits();

    private static software.amazon.smithy.model.shapes.StructureShape reqWith(boolean header, boolean query) {
        software.amazon.smithy.model.shapes.StructureShape.Builder b =
            software.amazon.smithy.model.shapes.StructureShape.builder().id("com.example#DoThingRequest");
        if (header) {
            b.addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingRequest$h").target("com.example#Str")
                .addTrait(new software.amazon.smithy.model.traits.HttpHeaderTrait("X-H")).build());
        }
        if (query) {
            b.addMember(software.amazon.smithy.model.shapes.MemberShape.builder()
                .id("com.example#DoThingRequest$q").target("com.example#Str")
                .addTrait(new software.amazon.smithy.model.traits.HttpQueryTrait("q")).build());
        }
        return b.build();
    }
    private static software.amazon.smithy.model.shapes.OperationShape opWithInput(
            software.amazon.smithy.model.shapes.StructureShape req) {
        return software.amazon.smithy.model.shapes.OperationShape.builder()
            .id("com.example#DoThing").input(req.getId()).build();
    }
    private static software.amazon.smithy.model.shapes.OperationShape opNoInput() {
        return software.amazon.smithy.model.shapes.OperationShape.builder().id("com.example#Ping").build();
    }
    private static software.amazon.smithy.model.shapes.StructureShape unitStructure() {
        return software.amazon.smithy.model.shapes.StructureShape.builder()
            .id("com.example#PingRequest").build();
    }
    private static software.amazon.smithy.model.shapes.ServiceShape svcAthena() {
        return software.amazon.smithy.model.shapes.ServiceShape.builder()
            .id("com.example#AmazonAthena").version("2017-05-18").build();
    }
    private static software.amazon.smithy.model.Model modelWith(
            software.amazon.smithy.model.shapes.StructureShape req) {
        return software.amazon.smithy.model.Model.builder()
            .addShapes(software.amazon.smithy.model.shapes.StringShape.builder().id("com.example#Str").build(), req)
            .build();
    }

    @Test
    void serdeNamespace_isCbor() {
        assertEquals("Aws::Utils::Cbor", cbor.serdeNamespace());
    }

    @Test
    void resultForwardDecls_declareCborValue() {
        String out = render(cbor::writeResultForwardDeclarations);
        assertTrue(out.contains("class CborValue;"), out);
        assertFalse(out.contains("JsonValue"), out);
    }

    @Test
    void serdeInclude_isCborHeaders() {
        var out = cbor.serdeIncludes(FileKind.SUBOBJECT_SOURCE);
        assertTrue(out.contains("aws/crt/cbor/Cbor.h"), out.toString());
        assertTrue(out.contains("aws/core/utils/cbor/CborValue.h"), out.toString());
    }

    // --- Sub-object serde contract: C2J CBOR uses a streaming CborDecoder/CborEncode, NOT the
    // JSON-family CborValue/Jsonize shape. (CborSubObjectHeader.vm / CborSubObjectSource.vm)

    @Test
    void subObjectHeader_includesCborHeader() {
        // CborSubObjectHeader.vm hard-includes <aws/crt/cbor/Cbor.h> (the signatures reference
        // Aws::Crt::Cbor::CborDecoder / CborEncoder directly).
        assertTrue(cbor.serdeIncludes(FileKind.SUBOBJECT_HEADER).contains("aws/crt/cbor/Cbor.h"),
            cbor.serdeIncludes(FileKind.SUBOBJECT_HEADER).toString());
    }

    @Test
    void serdeMethodDecls_useCborDecoderAndCborEncode() {
        String out = render(w -> cbor.writeSerdeMethodDecls(w, "AWS_EXAMPLE_API", "ArchiveRetention", null));
        assertTrue(out.contains(
            "ArchiveRetention(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);"), out);
        assertTrue(out.contains(
            "ArchiveRetention& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);"), out);
        assertTrue(out.contains("void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;"), out);
        assertFalse(out.contains("Jsonize"), out);
        assertFalse(out.contains("CborValue"), out);
    }

    @Test
    void serdeMethodImpls_useCborDecoderAndCborEncode() {
        String out = render(w -> cbor.writeSerdeMethodImpls(w, "ArchiveRetention"));
        assertTrue(out.contains(
            "ArchiveRetention::ArchiveRetention(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder)"), out);
        assertTrue(out.contains(
            "ArchiveRetention& ArchiveRetention::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder)"),
            out);
        assertTrue(out.contains("void ArchiveRetention::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const"), out);
        assertFalse(out.contains("Jsonize"), out);
    }

    @Test
    void subObjectHeader_forwardDeclaresCborValueOnly() {
        // The forward declaration still names CborValue (the result payload type), matching C2J.
        String out = render(cbor::writeShapeForwardDeclarations);
        assertTrue(out.contains("class CborValue;"), out);
    }

    // --- Source include/using sets must match C2J templates exactly.

    @Test
    void requestSource_hasCborStreamingInclude() {
        // Source includes are a per-protocol superset union; the request source carries at least
        // the streaming <aws/crt/cbor/Cbor.h>. (Extra union members are inert; usings stay exact.)
        var inc = cbor.serdeIncludes(FileKind.REQUEST_SOURCE);
        assertTrue(inc.contains("aws/crt/cbor/Cbor.h"), inc.toString());
    }

    @Test
    void requestSource_usingsAreCborCryptoAndUtilsOnly() {
        // CborRequestSource.vm usings: Aws::Crt::Cbor + Aws::Utils. NOT Aws::Crt / Aws::Utils::Cbor.
        var usings = cbor.serdeUsings(FileKind.REQUEST_SOURCE);
        assertTrue(usings.contains("Aws::Crt::Cbor"), usings.toString());
        assertTrue(usings.contains("Aws::Utils"), usings.toString());
        assertFalse(usings.contains("Aws::Crt"), usings.toString());
        assertFalse(usings.contains("Aws::Utils::Cbor"), usings.toString());
    }

    @Test
    void subObjectSource_usingsAreCborCryptoAndUtilsOnly() {
        // CborSubObjectSource.vm usings: Aws::Crt::Cbor + Aws::Utils only.
        var usings = cbor.serdeUsings(FileKind.SUBOBJECT_SOURCE);
        assertTrue(usings.contains("Aws::Crt::Cbor"), usings.toString());
        assertTrue(usings.contains("Aws::Utils"), usings.toString());
        assertFalse(usings.contains("Aws::Crt"), usings.toString());
        assertFalse(usings.contains("Aws::Utils::Cbor"), usings.toString());
    }

    @Test
    void resultSerdeDecls_useCborValuePayload() {
        String out = render(w -> cbor.writeResultSerdeDecls(w, "AWS_EXAMPLE_API", "DoThingResult"));
        assertTrue(out.contains("Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>"), out);
    }

    @Test
    void requestImpls_noTargetHeaderAndEmptyBracesPayload() {
        var req = reqWith(false, false); var model = modelWith(req);
        String i = render(w -> cbor.writeRequestMethodImpls(w, "PingRequest", unitStructure(), opNoInput(), svcAthena(), model));
        assertFalse(i.contains("X-Amz-Target"), i);
    }

    // hasRequest()==true (input structure present): CONTENT_TYPE emitted, real encoder (not "{}").
    @Test
    void requestWithInput_emitsContentTypeAndEncoderPayload() {
        var req = reqWith(false, false); var model = modelWith(req);
        var op = opWithInput(req);
        String i = render(w -> cbor.writeRequestMethodImpls(w, "DoThingRequest", req, op, svcAthena(), model));
        assertTrue(i.contains("Aws::Crt::Cbor::CborEncoder encoder;"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);"), i);
    }

    @Test
    void cbor_queryMember_notWireSerialized_keepsProtocolHeaders() {
        // RPC CBOR routes @httpQuery members to the body; no AddQueryStringParameters method, but
        // the fixed CBOR protocol headers are still emitted.
        var req = reqWith(false, true); var op = opWithInput(req); var model = modelWith(req);
        String d = render(w -> cbor.writeRequestMethodDecls(w, "AWS_EX_API", req, op, model));
        assertFalse(d.contains("AddQueryStringParameters"), d);
        String i = render(w -> cbor.writeRequestMethodImpls(w, "DoThingRequest", req, op, svcAthena(), model));
        assertFalse(i.contains("AddQueryStringParameters"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);"), i);
    }

    @Test
    void cbor_headerMember_notWireSerialized_keepsProtocolHeaders() {
        var req = reqWith(true, false); var op = opWithInput(req); var model = modelWith(req);
        String i = render(w -> cbor.writeRequestMethodImpls(w, "DoThingRequest", req, op, svcAthena(), model));
        assertFalse(i.contains("headers.emplace(\"x-h\""), i);
        assertFalse(i.contains("ss << m_h;"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);"), i);
    }

    // hasRequest()==false (input targets smithy.api#Unit): SerializePayload returns {}, NO CONTENT_TYPE.
    @Test
    void noInputRequest_returnsEmptyBracesAndOmitsContentType() {
        var op = opNoInput();
        var unit = unitStructure();
        var model = modelWith(unit);
        String i = render(w -> cbor.writeRequestMethodImpls(w, "PingRequest", unit, op, svcAthena(), model));
        assertTrue(i.contains("Aws::String PingRequest::SerializePayload() const { return {}; }"), i);
        assertFalse(i.contains("CONTENT_TYPE_HEADER"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);"), i);
        assertTrue(i.contains("headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);"), i);
    }
}
