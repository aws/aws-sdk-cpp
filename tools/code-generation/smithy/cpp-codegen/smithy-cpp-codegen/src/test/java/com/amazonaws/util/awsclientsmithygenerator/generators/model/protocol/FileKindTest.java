/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

class FileKindTest {
    @Test
    void hasAllEightFileKinds() {
        assertEquals(8, FileKind.values().length);
        // Referencing each constant compiles only if it exists.
        FileKind[] all = {
            FileKind.SUBOBJECT_HEADER, FileKind.RESULT_HEADER, FileKind.SUBOBJECT_SOURCE,
            FileKind.REQUEST_SOURCE, FileKind.RESULT_SOURCE, FileKind.STREAMING_RESULT_SOURCE,
            FileKind.EVENT_HANDLER_SOURCE, FileKind.INITIAL_RESPONSE_SOURCE
        };
        assertEquals(8, all.length);
    }
}
