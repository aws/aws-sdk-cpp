/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

class CppWriterTest {
    @Test
    void withNamespace_wrapsBodyInMatchingOpenAndClose() {
        CppWriter plain = new CppWriter();
        plain.writeNamespaceOpen("Aws");
        plain.write("int x = 1;");
        plain.writeNamespaceClose("Aws");

        CppWriter scoped = new CppWriter();
        scoped.withNamespace("Aws", () -> scoped.write("int x = 1;"));

        assertEquals(plain.toString(), scoped.toString());
    }
}
