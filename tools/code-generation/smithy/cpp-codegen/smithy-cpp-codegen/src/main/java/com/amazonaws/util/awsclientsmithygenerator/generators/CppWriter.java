/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.codegen.core.SymbolWriter;

public class CppWriter extends SymbolWriter<CppWriter, CppImportContainer> {
    
    public CppWriter() {
        super(new CppImportContainer());
        
        // Add custom formatter for symbols
        putFormatter('T', (arg, indent) -> {
            if (!(arg instanceof software.amazon.smithy.codegen.core.Symbol symbol)) {
                throw new software.amazon.smithy.codegen.core.CodegenException("Expected a symbol but got " + arg);
            }
            
            // Record our symbol so we can generate appropriate includes later if needed
            getImportContainer().importSymbol(symbol, null);
            
            // For C++, use namespace::name syntax (e.g. Aws::S3::Model::ListBucketsRequest)
            if (symbol.getNamespace() != null && !symbol.getNamespace().isEmpty()) {
                return symbol.getNamespace() + "::" + symbol.getName();
            }
            return symbol.getName();
        });
    }
    
    public CppWriter writeInclude(String header) {
        write("#include <$L>", header);
        return this;
    }
    
    public CppWriter writeNamespaceOpen(String namespace) {
        openBlock("namespace $L\n{", namespace);
        return this;
    }
    
    public CppWriter writeNamespaceClose(String namespace) {
        closeBlock("} // namespace $L", namespace);
        return this;
    }
}