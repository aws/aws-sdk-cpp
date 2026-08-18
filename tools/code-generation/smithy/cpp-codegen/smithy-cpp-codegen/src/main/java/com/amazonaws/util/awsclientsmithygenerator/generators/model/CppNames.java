/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

/**
 * Pure C++ identifier helpers shared by the model renderers. Centralizes the
 * capitalize / decapitalize / field-name convention so it lives in one place
 * rather than being copied privately into each renderer.
 */
public final class CppNames {

    private CppNames() {}

    /** First character upper-cased (e.g. {@code audioStream} -> {@code AudioStream}). */
    public static String capitalize(String s) {
        return s.isEmpty() ? s : Character.toUpperCase(s.charAt(0)) + s.substring(1);
    }

    /** First character lower-cased (e.g. {@code AudioStream} -> {@code audioStream}). */
    public static String decapitalize(String s) {
        return s.isEmpty() ? s : Character.toLowerCase(s.charAt(0)) + s.substring(1);
    }

    /** The private field name for a member: {@code m_} + decapitalized name. */
    public static String fieldName(String memberName) {
        return "m_" + decapitalize(memberName);
    }
}
