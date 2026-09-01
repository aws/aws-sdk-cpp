/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class JsonProtocolTraitsTest {

    private static String render(java.util.function.Consumer<CppWriter> body) {
        CppWriter writer = new CppWriter();
        body.accept(writer);
        return writer.toString();
    }

    private final ProtocolTraits json = new JsonProtocolTraits(Protocol.JSON);
    private final ProtocolTraits restJson = new JsonProtocolTraits(Protocol.REST_JSON);

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
    private static software.amazon.smithy.model.shapes.OperationShape opDoThing() {
        return software.amazon.smithy.model.shapes.OperationShape.builder().id("com.example#DoThing").build();
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
    void reportsItsOwnProtocolIdentity() {
        assertEquals(Protocol.JSON, json.protocol());
        assertEquals(Protocol.REST_JSON, restJson.protocol());
    }

    @Test
    void serdeNamespace_isJsonUtils() {
        assertEquals("Aws::Utils::Json", json.serdeNamespace());
        assertEquals("Aws::Utils::Json", restJson.serdeNamespace());
    }

    @Test
    void serdeMethodDecls_emitJsonCtorAssignAndJsonize() {
        String out = render(w -> json.writeSerdeMethodDecls(w, "AWS_EXAMPLE_API", "Nested", null));
        assertTrue(out.contains("AWS_EXAMPLE_API Nested() = default;"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API Nested(Aws::Utils::Json::JsonView jsonValue);"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API Nested& operator=(Aws::Utils::Json::JsonView jsonValue);"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API Aws::Utils::Json::JsonValue Jsonize() const;"), out);
    }

    @Test
    void serdeMethodDecls_runsHookBeforeSerializeMethod() {
        CppWriter writer = new CppWriter();
        json.writeSerdeMethodDecls(writer, "AWS_EXAMPLE_API", "Nested",
            () -> writer.write("AWS_EXAMPLE_API Nested(const Http::HeaderValueCollection& responseHeaders);"));
        String out = writer.toString();
        int hook = out.indexOf("HeaderValueCollection");
        int jsonize = out.indexOf("Jsonize() const;");
        assertTrue(hook >= 0, "Hook output missing: " + out);
        assertTrue(jsonize > hook, "Hook must run before the serialize method: " + out);
    }

    @Test
    void serdeMethodImpls_emitEmptyJsonBodies() {
        String out = render(w -> json.writeSerdeMethodImpls(w, "Nested"));
        assertTrue(out.contains("Nested::Nested(JsonView jsonValue) { *this = jsonValue; }"), out);
        assertTrue(out.contains("Nested& Nested::operator=(JsonView jsonValue) {"), out);
        assertTrue(out.contains("JsonValue Nested::Jsonize() const {"), out);
        assertTrue(out.contains("JsonValue payload;"), out);
        assertTrue(out.contains("return payload;"), out);
    }

    @Test
    void shapeForwardDeclarations_declareValueAndView() {
        String out = render(json::writeShapeForwardDeclarations);
        assertTrue(out.contains("class JsonValue;"), out);
        assertTrue(out.contains("class JsonView;"), out);
        assertTrue(out.contains("namespace Utils"), out);
        assertTrue(out.contains("namespace Json"), out);
    }

    @Test
    void resultForwardDeclarations_declareValueOnly() {
        String out = render(json::writeResultForwardDeclarations);
        assertTrue(out.contains("class JsonValue;"), out);
        assertFalse(out.contains("class JsonView;"),
            "Result headers must not forward-declare JsonView: " + out);
    }

    @Test
    void resultSerdeDecls_useJsonValuePayload() {
        String out = render(w -> json.writeResultSerdeDecls(w, "AWS_EXAMPLE_API", "DoThingResult"));
        assertTrue(out.contains("AWS_EXAMPLE_API DoThingResult(const "
            + "Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);"), out);
        assertTrue(out.contains("AWS_EXAMPLE_API DoThingResult& operator=(const "
            + "Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);"), out);
    }

    @Test
    void resultSerdeImpls_useJsonValuePayload() {
        var req = reqWith(false, false); var model = modelWith(req);
        String out = render(w -> json.writeResultSerdeImpls(w, "DoThingResult", req, model, "Example"));
        assertTrue(out.contains("DoThingResult::DoThingResult(const "
            + "Aws::AmazonWebServiceResult<JsonValue>& result) {"), out);
        assertTrue(out.contains("*this = result;"), out);
        assertTrue(out.contains("DoThingResult& DoThingResult::operator=(const "
            + "Aws::AmazonWebServiceResult<JsonValue>& result) {"), out);
        assertTrue(out.contains("return *this;"), out);
    }

    @Test
    void serdeIncludeAndUsings_areJsonFlavored() {
        assertTrue(json.serdeIncludes(FileKind.SUBOBJECT_SOURCE)
            .contains("aws/core/utils/json/JsonSerializer.h"));
        var usings = json.serdeUsings(FileKind.SUBOBJECT_SOURCE);
        assertTrue(usings.contains("Aws::Utils::Json"), usings.toString());
        assertTrue(usings.contains("Aws::Utils"), usings.toString());
    }

    @Test
    void awsJson_alwaysDeclaresTargetHeaderAndSerializePayload() {
        var req = reqWith(false, false); var model = modelWith(req);
        String d = render(w -> json.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("AWS_EX_API Aws::String SerializePayload() const override;"), d);
        assertTrue(d.contains("Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;"), d);
        assertFalse(d.contains("DumpBodyToUrl"), d);
        String i = render(w -> json.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("Aws::String DoThingRequest::SerializePayload() const { return \"{}\"; }"), i);
        assertTrue(i.contains("headers.insert(Aws::Http::HeaderValuePair(\"X-Amz-Target\", \"AmazonAthena.DoThing\"));"), i);
    }

    @Test
    void restJson_noBindings_hasNoHeadersMethodAndReturnsEmptyBraces() {
        var req = reqWith(false, false); var model = modelWith(req);
        String d = render(w -> restJson.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("SerializePayload() const override;"), d);
        assertFalse(d.contains("GetRequestSpecificHeaders"), d);
        String i = render(w -> restJson.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("Aws::String DoThingRequest::SerializePayload() const { return {}; }"), i);
        assertFalse(i.contains("X-Amz-Target"), i);
    }

    @Test
    void restJson_withHeaderMember_emitsHeadersMethodWithoutTarget() {
        var req = reqWith(true, false); var model = modelWith(req);
        String d = render(w -> restJson.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("GetRequestSpecificHeaders() const override;"), d);
        String i = render(w -> restJson.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertFalse(i.contains("X-Amz-Target"), i);
    }

    @Test
    void awsJson_headerMember_notWireSerialized_keepsTarget() {
        // RPC awsJson routes @httpHeader members to the JSON body; GetRequestSpecificHeaders still
        // emits X-Amz-Target but performs no member header serialization.
        var req = reqWith(true, false); var model = modelWith(req);
        String i = render(w -> json.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("X-Amz-Target"), i);
        assertFalse(i.contains("headers.emplace(\"x-h\""), i);
        assertFalse(i.contains("ss << m_h;"), i);
    }

    @Test
    void awsJson_queryMember_notWireSerialized() {
        // RPC awsJson routes @httpQuery members to the body; no AddQueryStringParameters is emitted.
        var req = reqWith(false, true); var model = modelWith(req);
        String d = render(w -> json.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertFalse(d.contains("AddQueryStringParameters"), d);
        String i = render(w -> json.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertFalse(i.contains("AddQueryStringParameters"), i);
    }

    @Test
    void restJson_headerMember_isWireSerialized() {
        // REST protocols honor HTTP bindings: the @httpHeader member is serialized onto the wire.
        var req = reqWith(true, false); var model = modelWith(req);
        String i = render(w -> restJson.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("if (m_hHasBeenSet) {"), i);
        assertTrue(i.contains("headers.emplace(\"x-h\", ss.str());"), i);
    }

    @Test
    void restJson_additionalHeadersTrait_emitsConstantHeaderBeforeMemberHeaders() {
        // A streaming request marked with AdditionalRequestHeadersTrait (Glacier's
        // x-amz-glacier-version) emits the constant header inside GetRequestSpecificHeaders,
        // ordered after any X-Amz-Target and before the member-driven headers (StreamRequestSource.vm).
        var req = reqWith(true, false).toBuilder()
            .addTrait(new com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms
                .AdditionalRequestHeadersTrait(java.util.Map.of("x-amz-glacier-version", "2012-06-01")))
            .build();
        var model = modelWith(req);
        String i = render(w -> restJson.writeRequestMethodImpls(
            w, "UploadArchiveRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains(
            "headers.insert(Aws::Http::HeaderValuePair(\"x-amz-glacier-version\", \"2012-06-01\"));"), i);
        assertTrue(i.indexOf("x-amz-glacier-version") < i.indexOf("Aws::StringStream ss;"),
            "constant header precedes the member-driven headers: " + i);
    }

    @Test
    void restJson_noAdditionalHeadersTrait_emitsNoConstantHeader() {
        var req = reqWith(true, false); var model = modelWith(req);
        String i = render(w -> restJson.writeRequestMethodImpls(
            w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertFalse(i.contains("x-amz-glacier-version"), i);
    }

    @Test
    void restJson_queryMember_isWireSerialized() {
        var req = reqWith(false, true); var model = modelWith(req);
        String d = render(w -> restJson.writeRequestMethodDecls(w, "AWS_EX_API", req, opDoThing(), model));
        assertTrue(d.contains("void AddQueryStringParameters(Aws::Http::URI& uri) const override;"), d);
        String i = render(w -> restJson.writeRequestMethodImpls(w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains("uri.AddQueryStringParameter(\"q\", ss.str());"), i);
    }

    @Test
    void supportsPresigning_emitsDumpBodyToUrlStubImpl() {
        // A presignable request (Polly SynthesizeSpeech) carries SupportsPresigningTrait; the decl is
        // emitted by RequestRenderer, and JsonProtocolTraits supplies a stub impl that defers serde.
        var req = reqWith(false, false).toBuilder()
            .addTrait(new com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms
                .SupportsPresigningTrait())
            .build();
        var model = modelWith(req);
        String i = render(w -> restJson.writeRequestMethodImpls(
            w, "SynthesizeSpeechRequest", req, opDoThing(), svcAthena(), model));
        assertTrue(i.contains(
            "void SynthesizeSpeechRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { AWS_UNREFERENCED_PARAM(uri); }"),
            i);
    }

    @Test
    void withoutSupportsPresigning_omitsDumpBodyToUrlImpl() {
        var req = reqWith(false, false); var model = modelWith(req);
        String i = render(w -> restJson.writeRequestMethodImpls(
            w, "DoThingRequest", req, opDoThing(), svcAthena(), model));
        assertFalse(i.contains("DumpBodyToUrl"),
            "non-presignable request must not emit a DumpBodyToUrl impl: " + i);
    }

    @Test
    void payloadStubs_areProtocolAgnostic() {
        String event = render(w -> json.writeEventPayloadDecode(w, "ShardEvent", "m_onShardEvent"));
        assertTrue(event.contains("// TODO: protocol-specific event payload deserialization"), event);
        assertTrue(event.contains("m_onShardEvent(ShardEvent{});"), event);
        assertFalse(event.contains("JsonValue"), "Event stub must stay protocol-agnostic: " + event);

        String err = render(json::writeErrorPayloadParse);
        assertTrue(err.contains("// TODO: protocol-specific error payload deserialization"), err);
        assertFalse(err.contains("JsonView"), "Error stub must stay protocol-agnostic: " + err);
    }
}
