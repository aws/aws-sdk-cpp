/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

 package com.amazonaws.util.awsclientsmithygenerator.generators;

 import software.amazon.smithy.codegen.core.ImportContainer;
 import software.amazon.smithy.codegen.core.Symbol;
 
 public final class CppImportContainer implements ImportContainer {

     private final String localNamespace;

     public CppImportContainer(String namespace) {
         this.localNamespace = namespace;
    }
    
    @Override
     public void importSymbol(Symbol symbol, String alias) {
        //not supported for now
     }
 
     @Override
     public String toString() {
         //pass through for now
         return "";
     }
 
 }