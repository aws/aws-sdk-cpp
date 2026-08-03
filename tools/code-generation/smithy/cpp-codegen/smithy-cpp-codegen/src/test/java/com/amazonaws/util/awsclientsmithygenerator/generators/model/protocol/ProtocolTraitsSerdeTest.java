/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.EnumSource;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Replaces the former SerdeStubTest. Pins the invariant that the event- and
 * error-payload stubs stay protocol-agnostic for EVERY protocol -- they are
 * {@code default} methods on ProtocolTraits and no implementation should override
 * them with protocol-specific text until schema-based serde lands.
 */
class ProtocolTraitsSerdeTest {

    private static String render(java.util.function.Consumer<CppWriter> body) {
        CppWriter writer = new CppWriter();
        body.accept(writer);
        return writer.toString();
    }

    @ParameterizedTest
    @EnumSource(Protocol.class)
    void eventPayloadDecode_isProtocolAgnostic(Protocol p) {
        ProtocolTraits traits = ProtocolResolver.traitsFor(p);
        String out = render(w -> traits.writeEventPayloadDecode(
            w, "SubscribeToShardEvent", "m_onSubscribeToShardEvent"));
        assertTrue(out.contains("// TODO: protocol-specific event payload deserialization"),
            "Missing TODO marker for " + p + ": " + out);
        assertTrue(out.contains("m_onSubscribeToShardEvent(SubscribeToShardEvent{});"),
            "Missing callback invocation for " + p + ": " + out);
        assertFalse(out.contains("JsonValue"), "Should not emit JSON tokens for " + p + ": " + out);
        assertFalse(out.contains("Cbor"), "Should not emit CBOR tokens for " + p + ": " + out);
        assertFalse(out.contains("XmlNode"), "Should not emit XML tokens for " + p + ": " + out);
    }

    @ParameterizedTest
    @EnumSource(Protocol.class)
    void errorPayloadParse_isProtocolAgnostic(Protocol p) {
        ProtocolTraits traits = ProtocolResolver.traitsFor(p);
        String out = render(traits::writeErrorPayloadParse);
        assertTrue(out.contains("// TODO: protocol-specific error payload deserialization"),
            "Missing TODO marker for " + p + ": " + out);
        assertFalse(out.contains("JsonView"), "Should not emit JSON tokens for " + p + ": " + out);
        assertFalse(out.contains("XmlNode"), "Should not emit XML tokens for " + p + ": " + out);
    }

    /** The JSON stub bodies formerly asserted in SerdeStubTest. */
    @Test
    void jsonSerdeMethodImpls_emitEmptyBodies() {
        ProtocolTraits traits = ProtocolResolver.traitsFor(Protocol.JSON);
        String out = render(w -> traits.writeSerdeMethodImpls(w, "SubscribeToShardEventStream"));
        assertTrue(out.contains(
            "SubscribeToShardEventStream::SubscribeToShardEventStream(JsonView jsonValue)"),
            "Missing JSON ctor stub: " + out);
        assertTrue(out.contains("JsonValue SubscribeToShardEventStream::Jsonize() const"),
            "Missing Jsonize stub: " + out);
    }
}
