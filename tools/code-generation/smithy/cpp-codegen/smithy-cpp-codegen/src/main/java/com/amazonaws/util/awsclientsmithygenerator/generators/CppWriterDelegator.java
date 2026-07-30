/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.FileManifest;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;

public class CppWriterDelegator {
    /** UTF-8 byte order mark (U+FEFF), prepended to every file to match C2J-generated output. */
    private static final String UTF8_BOM = "\uFEFF";

    private final FileManifest fileManifest;
    private final Map<String, CppWriter> writers = new HashMap<>();
    
    public CppWriterDelegator(FileManifest fileManifest) {
        this.fileManifest = fileManifest;
    }
    
    public void useFileWriter(String filename, Consumer<CppWriter> writerConsumer) {
        // Every generated file begins with the standard copyright/SPDX header. Emit it once,
        // when the writer is first created, so callers don't repeat it (and reopening a file
        // for appending does not duplicate it).
        CppWriter writer = writers.computeIfAbsent(filename, k -> new CppWriter().writeCopyright());
        writerConsumer.accept(writer);
    }
    
    public void flushWriters() {
        writers.forEach((filename, writer) -> {
            // Add UTF-8 BOM to match C2J-generated file format
            String content = UTF8_BOM + writer.toString();
            fileManifest.writeFile(filename, content);
        });
    }
}