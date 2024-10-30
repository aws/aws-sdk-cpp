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
public class SmokeTestsCMakeDelegator extends WriterDelegator<SmokeTestsCMakeWriter> {

    public SmokeTestsCMakeDelegator(FileManifest fileManifest, SymbolProvider symbolProvider) {
        super(fileManifest, symbolProvider, new SmokeTestsCMakeWriter.SmokeTestsCMakeWriterFactory());
    }
}