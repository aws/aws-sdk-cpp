package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.codegen.core.ImportContainer;
import software.amazon.smithy.codegen.core.Symbol;

import java.util.List;
import java.util.Arrays;
import java.util.TreeMap;
import java.util.Map;

public final class CppImportContainer implements ImportContainer {

    @Override
    public void importSymbol(Symbol symbol, String alias) {
       System.out.println("importSymbol called");
    }

    @Override
    public String toString() {
        System.out.println("toString called");
        return "";
    }
}