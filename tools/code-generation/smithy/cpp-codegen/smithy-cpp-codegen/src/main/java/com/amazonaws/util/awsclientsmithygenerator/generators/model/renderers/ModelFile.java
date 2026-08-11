/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;

/**
 * Emits the {@code Aws::<namespace>::Model} nesting shared by every generated model
 * file. Callers supply the class body; the triple open/close is owned here so it can
 * never drift out of sync. Files that must interleave forward declarations between
 * {@code Aws} and {@code <namespace>} use {@link CppWriter#withNamespace} directly.
 */
final class ModelFile {

    private ModelFile() {}

    static void modelNamespace(CppWriter writer, String namespace, Runnable body) {
        writer.withNamespace("Aws", () ->
            writer.withNamespace(namespace, () ->
                writer.withNamespace("Model", body)));
    }
}
