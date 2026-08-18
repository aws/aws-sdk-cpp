/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

class CppNamesTest {
    @Test
    void capitalize_upsFirstChar() {
        assertEquals("AudioStream", CppNames.capitalize("audioStream"));
        assertEquals("", CppNames.capitalize(""));
        assertEquals("X", CppNames.capitalize("x"));
    }

    @Test
    void decapitalize_downsFirstChar() {
        assertEquals("audioStream", CppNames.decapitalize("AudioStream"));
        assertEquals("", CppNames.decapitalize(""));
    }

    @Test
    void fieldName_prefixesMUnderscoreAndDecapitalizes() {
        assertEquals("m_audioStream", CppNames.fieldName("AudioStream"));
        assertEquals("m_shardId", CppNames.fieldName("shardId"));
    }
}
