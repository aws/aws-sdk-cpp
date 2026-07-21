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
    private final FileManifest fileManifest;
    private final Map<String, CppWriter> writers = new HashMap<>();
    
    public CppWriterDelegator(FileManifest fileManifest) {
        this.fileManifest = fileManifest;
    }
    
    public void useFileWriter(String filename, Consumer<CppWriter> writerConsumer) {
        CppWriter writer = writers.computeIfAbsent(filename, k -> new CppWriter());
        writerConsumer.accept(writer);
    }
    
    public void flushWriters() {
        writers.forEach((filename, writer) -> {
            // Add UTF-8 BOM to match C2J-generated file format
            String content = "﻿" + writer.toString();
            fileManifest.writeFile(filename, content);
        });
    }
}