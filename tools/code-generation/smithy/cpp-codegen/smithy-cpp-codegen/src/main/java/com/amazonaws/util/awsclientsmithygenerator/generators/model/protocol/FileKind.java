/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

/**
 * The kind of generated C++ file whose serde includes / usings are being computed.
 * Protocols return different include and using sets per kind (see {@link ProtocolTraits}).
 */
public enum FileKind {
    /** Sub-object / structure header (.h). */
    SUBOBJECT_HEADER,
    /** Operation-output result header (.h). */
    RESULT_HEADER,
    /** Sub-object / structure source (.cpp). */
    SUBOBJECT_SOURCE,
    /** Operation-input request source (.cpp). */
    REQUEST_SOURCE,
    /** Operation-output result source (.cpp), non-streaming. */
    RESULT_SOURCE,
    /** Streaming (raw httpPayload) result source (.cpp) — takes ownership of a ResponseStream. */
    STREAMING_RESULT_SOURCE,
    /** Event-stream handler source (.cpp). */
    EVENT_HANDLER_SOURCE,
    /** Event-stream InitialResponse source (.cpp). */
    INITIAL_RESPONSE_SOURCE
}
