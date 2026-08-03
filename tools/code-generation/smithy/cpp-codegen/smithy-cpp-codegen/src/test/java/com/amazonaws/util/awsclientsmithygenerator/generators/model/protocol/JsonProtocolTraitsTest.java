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
    private final ProtocolTraits cbor = new JsonProtocolTraits(Protocol.CBOR);

    @Test
    void reportsItsOwnProtocolIdentity() {
        assertEquals(Protocol.JSON, json.protocol());
        assertEquals(Protocol.CBOR, cbor.protocol());
    }

    @Test
    void serdeNamespace_isJsonUtils() {
        assertEquals("Aws::Utils::Json", json.serdeNamespace());
        assertEquals("Aws::Utils::Json", cbor.serdeNamespace());
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
        String out = render(w -> json.writeResultSerdeImpls(w, "DoThingResult"));
        assertTrue(out.contains("DoThingResult::DoThingResult(const "
            + "Aws::AmazonWebServiceResult<JsonValue>& result) {"), out);
        assertTrue(out.contains("*this = result;"), out);
        assertTrue(out.contains("DoThingResult& DoThingResult::operator=(const "
            + "Aws::AmazonWebServiceResult<JsonValue>& result) {"), out);
        assertTrue(out.contains("return *this;"), out);
    }

    @Test
    void serdeIncludeAndUsings_areJsonFlavored() {
        assertTrue(render(json::writeSerdeInclude)
            .contains("#include <aws/core/utils/json/JsonSerializer.h>"));
        String usings = render(json::writeSerdeUsingDeclarations);
        assertTrue(usings.contains("using namespace Aws::Utils::Json;"), usings);
        assertTrue(usings.contains("using namespace Aws::Utils;"), usings);
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
