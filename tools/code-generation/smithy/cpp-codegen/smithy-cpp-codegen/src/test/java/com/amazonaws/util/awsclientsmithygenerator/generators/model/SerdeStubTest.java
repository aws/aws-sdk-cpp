/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

class SerdeStubTest {

    @Test
    void renderEventPayloadDecodeStub_emitsTodoAndNoProtocolTokens() {
        CppWriter writer = new CppWriter();
        SerdeStub.renderEventPayloadDecodeStub(writer, "SubscribeToShardEvent", "m_onSubscribeToShardEvent");
        String out = writer.toString();
        assertTrue(out.contains("// TODO: protocol-specific event payload deserialization"),
            "Missing TODO marker: " + out);
        assertTrue(out.contains("m_onSubscribeToShardEvent(SubscribeToShardEvent{});"),
            "Missing callback invocation: " + out);
        assertFalse(out.contains("JsonValue"), "Should not emit JSON tokens: " + out);
        assertFalse(out.contains("Cbor"), "Should not emit CBOR tokens: " + out);
    }

    @Test
    void renderErrorPayloadParseStub_emitsTodoOnly() {
        CppWriter writer = new CppWriter();
        SerdeStub.renderErrorPayloadParseStub(writer);
        String out = writer.toString();
        assertTrue(out.contains("// TODO: protocol-specific error payload deserialization"),
            "Missing TODO marker: " + out);
        assertFalse(out.contains("JsonView"), "Should not emit JSON tokens: " + out);
    }

    @Test
    void renderSerdeSourceStub_json_emitsEmptyBodies() {
        CppWriter writer = new CppWriter();
        SerdeStub.renderSerdeSourceStub(writer, Protocol.JSON, "SubscribeToShardEventStream");
        String out = writer.toString();
        assertTrue(out.contains("SubscribeToShardEventStream::SubscribeToShardEventStream(JsonView jsonValue)"),
            "Missing JSON ctor stub: " + out);
        assertTrue(out.contains("JsonValue SubscribeToShardEventStream::Jsonize() const"),
            "Missing Jsonize stub: " + out);
    }
}
