/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;

/**
 * Emits the {@code Aws::<namespace>::Model} nesting shared by every generated model file. Callers
 * supply the class body; the triple open/close is owned here so it can't drift. Files interleaving
 * forward declarations between {@code Aws} and {@code <namespace>} use {@link CppWriter#withNamespace}.
 */
final class ModelFile {

    private ModelFile() {}

    static void modelNamespace(CppWriter writer, String namespace, Runnable body) {
        writer.withNamespace("Aws", () ->
            writer.withNamespace(namespace, () ->
                writer.withNamespace("Model", body)));
    }

    /**
     * Like {@link #modelNamespace(CppWriter, String, Runnable)} but emits {@code awsProlog} at
     * {@code Aws} scope (before {@code namespace}) for headers needing forward declarations there
     * (e.g. {@code AmazonWebServiceResult}). The body still renders in {@code Aws::<namespace>::Model}.
     */
    static void modelNamespace(CppWriter writer, String namespace, Runnable awsProlog, Runnable body) {
        writer.withNamespace("Aws", () -> {
            awsProlog.run();
            writer.withNamespace(namespace, () -> writer.withNamespace("Model", body));
        });
    }
}
