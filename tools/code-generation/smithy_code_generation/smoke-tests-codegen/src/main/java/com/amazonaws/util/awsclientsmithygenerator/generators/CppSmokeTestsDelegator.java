package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.FileManifest;
import software.amazon.smithy.codegen.core.SymbolProvider;
import software.amazon.smithy.codegen.core.WriterDelegator;

/**
 * Manages writers for C# Files
 */
public class CppSmokeTestsDelegator extends WriterDelegator<CppSmokeTestsWriter> {

    public CppSmokeTestsDelegator(FileManifest fileManifest, SymbolProvider symbolProvider) {
        super(fileManifest, symbolProvider, new CppSmokeTestsWriter.CppSmokeTestsWriterFactory());

        System.out.println(String.format("base=%s",fileManifest.getBaseDir().toString()));
    }
}