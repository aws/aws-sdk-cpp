/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

 package com.amazonaws.util.awsclientsmithygenerator.generators;

 import software.amazon.smithy.codegen.core.ImportContainer;
 import software.amazon.smithy.codegen.core.Symbol;
 
 import java.util.List;
 import java.util.Arrays;
 import java.util.TreeMap;
 import java.util.Map;
 
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