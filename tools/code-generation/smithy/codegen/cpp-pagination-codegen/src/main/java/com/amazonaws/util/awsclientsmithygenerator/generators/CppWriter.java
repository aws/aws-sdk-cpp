/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator;

import java.util.function.Consumer;

public class CppWriter {
    private final StringBuilder content = new StringBuilder();
    
    public void write(String text, Object... args) {
        content.append(String.format(text, args)).append("\n");
    }
    
    public void openBlock(String opener, String closer, Consumer<Void> block) {
        write(opener);
        block.accept(null);
        write(closer);
    }
    
    public void writeInclude(String header) {
        write("#include <%s>", header);
    }
    
    public void writeNamespaceOpen(String namespace) {
        write("namespace %s\n{", namespace);
    }
    
    public void writeNamespaceClose(String namespace) {
        write("} // namespace %s", namespace);
    }
    
    @Override
    public String toString() {
        return content.toString();
    }
}