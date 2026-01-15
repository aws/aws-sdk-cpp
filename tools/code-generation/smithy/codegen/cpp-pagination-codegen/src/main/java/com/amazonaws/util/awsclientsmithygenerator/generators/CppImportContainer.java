/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.codegen.core.ImportContainer;
import software.amazon.smithy.codegen.core.Symbol;
import java.util.HashSet;
import java.util.Set;

/**
 * CppImportContainer tracks symbols used in code generation.
 * For C++, we handle includes manually via writeInclude method.
 */
public class CppImportContainer implements ImportContainer {
    private final Set<String> imports = new HashSet<>();
    
    @Override
    public void importSymbol(Symbol symbol, String alias) {
        // Track the symbol's namespace for potential future use
        if (symbol.getNamespace() != null && !symbol.getNamespace().isEmpty()) {
            imports.add(symbol.getNamespace());
        }
    }

    public Set<String> getImports() {
        return imports;
    }

    @Override
    public String toString() {
        // Return empty string since we handle includes manually
        return "";
    }
}