/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.transform;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jEventStreamTestEvent;
import com.fasterxml.jackson.databind.JsonNode;

import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import java.nio.charset.StandardCharsets;
import java.util.Base64;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.zip.CRC32;

/**
 * Encodes event stream protocol test events into application/vnd.amazon.eventstream messages, independently of the
 * SDK's own event stream encoder. Supports string headers and base64 encoded (CBOR) bodies.
 */
public final class EventStreamMessageEncoder {

    private static final int PRELUDE_LENGTH = 8;
    private static final int CRC_LENGTH = 4;
    private static final byte STRING_HEADER_TYPE = 7;

    private EventStreamMessageEncoder() {
    }

    /**
     * Encodes each event into an event stream message and concatenates the messages in order.
     */
    public static byte[] encode(final List<C2jEventStreamTestEvent> events) {
        ByteArrayOutputStream out = new ByteArrayOutputStream();
        events.stream().map(EventStreamMessageEncoder::encodeMessage).forEach(message -> out.write(message, 0, message.length));
        return out.toByteArray();
    }

    private static byte[] encodeMessage(final C2jEventStreamTestEvent event) {
        byte[] headers = encodeHeaders(event.getHeaders());
        byte[] payload = Optional.ofNullable(event.getBody()).map(body -> Base64.getDecoder().decode(body)).orElse(new byte[0]);
        int totalLength = PRELUDE_LENGTH + CRC_LENGTH + headers.length + payload.length + CRC_LENGTH;
        byte[] prelude = ByteBuffer.allocate(PRELUDE_LENGTH).putInt(totalLength).putInt(headers.length).array();
        ByteBuffer message = ByteBuffer.allocate(totalLength)
                .put(prelude)
                .putInt(crc32(prelude, prelude.length))
                .put(headers)
                .put(payload);
        return message.putInt(crc32(message.array(), totalLength - CRC_LENGTH)).array();
    }

    private static int crc32(final byte[] bytes, final int length) {
        CRC32 crc = new CRC32();
        crc.update(bytes, 0, length);
        return (int) crc.getValue();
    }

    private static byte[] encodeHeaders(final Map<String, JsonNode> headers) {
        ByteArrayOutputStream out = new ByteArrayOutputStream();
        Optional.ofNullable(headers).orElse(Collections.emptyMap()).entrySet().stream()
                .map(header -> encodeStringHeader(header.getKey(), header.getValue()))
                .forEach(encoded -> out.write(encoded, 0, encoded.length));
        return out.toByteArray();
    }

    private static byte[] encodeStringHeader(final String name, final JsonNode typedValue) {
        JsonNode value = Optional.ofNullable(typedValue.get("string"))
                .orElseThrow(() -> new IllegalArgumentException("Unsupported event stream header type for " + name + ": " + typedValue));
        byte[] nameBytes = name.getBytes(StandardCharsets.UTF_8);
        byte[] valueBytes = value.asText().getBytes(StandardCharsets.UTF_8);
        return ByteBuffer.allocate(1 + nameBytes.length + 1 + 2 + valueBytes.length)
                .put((byte) nameBytes.length)
                .put(nameBytes)
                .put(STRING_HEADER_TYPE)
                .putShort((short) valueBytes.length)
                .put(valueBytes)
                .array();
    }
}
