/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.FileManifest;
import software.amazon.smithy.codegen.core.SymbolProvider;
import software.amazon.smithy.codegen.core.WriterDelegator;

/**
 * Manages writers for Cpp Files
 */
public class SmokeTestsSourceDelegator extends WriterDelegator<SmokeTestsSourceWriter> {

    public SmokeTestsSourceDelegator(FileManifest fileManifest, SymbolProvider symbolProvider) {
        super(fileManifest, symbolProvider, new SmokeTestsSourceWriter.SmokeTestsSourceWriterFactory());
    }
}