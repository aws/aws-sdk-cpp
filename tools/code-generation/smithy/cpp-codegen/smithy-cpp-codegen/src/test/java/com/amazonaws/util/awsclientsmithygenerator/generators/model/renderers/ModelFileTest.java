/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

class ModelFileTest {
    @Test
    void modelNamespace_matchesHandWrittenTripleNest() {
        CppWriter manual = new CppWriter();
        manual.writeNamespaceOpen("Aws");
        manual.writeNamespaceOpen("S3");
        manual.writeNamespaceOpen("Model");
        manual.write("int x = 1;");
        manual.writeNamespaceClose("Model");
        manual.writeNamespaceClose("S3");
        manual.writeNamespaceClose("Aws");

        CppWriter viaHelper = new CppWriter();
        ModelFile.modelNamespace(viaHelper, "S3", () -> viaHelper.write("int x = 1;"));

        assertEquals(manual.toString(), viaHelper.toString());
    }
}
