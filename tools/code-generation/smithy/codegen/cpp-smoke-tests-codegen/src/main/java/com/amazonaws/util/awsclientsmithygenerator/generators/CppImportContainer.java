/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

 package com.amazonaws.util.awsclientsmithygenerator.generators;

 import software.amazon.smithy.codegen.core.ImportContainer;
 import software.amazon.smithy.codegen.core.Symbol;
 import java.util.Collections;
 import java.util.HashSet;
 import java.util.Set;
 import java.util.Map;

 public final class CppImportContainer implements ImportContainer {

     private final String c2jNamespace;
     private final Set<String> coreHeaders;
     private final Set<String> unitTestHeaders;
     private final Map<String, String> containerHeaderMap;
     private Set<String> dynamicHeaders;

     public CppImportContainer(String namespace) {
         String clientNamespace = SmokeTestsParser.removeSpaces(namespace);
         String folderNamespace = SmokeTestsParser.toKebabCase(namespace);
        this.c2jNamespace = SmithyC2JNamespaceMap.getInstance().getC2JServiceName(folderNamespace);
        this.coreHeaders = new HashSet<>();
        this.dynamicHeaders = new HashSet<>();
        Collections.addAll(coreHeaders, 
            "aws/core/client/AsyncCallerContext.h",
            "aws/core/client/AsyncCallerContext.h",
            "aws/core/client/ClientConfiguration.h",
            "aws/core/client/CoreErrors.h",
            "aws/core/auth/AWSCredentialsProviderChain.h",
            "aws/core/http/HttpTypes.h",
            "aws/core/utils/logging/LogMacros.h",
            "aws/core/utils/memory/AWSMemory.h",
            "aws/core/utils/UnreferencedParam.h",
            "aws/core/utils/Outcome.h",
            "utility",
            "algorithm"
            );

        this.unitTestHeaders = Set.of(
            "aws/testing/AwsCppSdkGTestSuite.h",
            "aws/testing/AwsTestHelpers.h"
            );

        //this will be added to based upon datastructures found
        containerHeaderMap = Map.ofEntries(
            Map.entry("Aws::String", "aws/core/utils/memory/stl/AWSString.h"),
            Map.entry("Aws::Map", "aws/core/utils/memory/stl/AWSMap.h"),
            Map.entry("Aws::Utils::DateTime", "aws/core/utils/DateTime.h"),
            Map.entry("Aws::Utils::Document","aws/core/utils/Document.h"),
            Map.entry("Aws::Utils::ByteBuffer","aws/core/utils/Array.h")
        );
        
        dynamicHeaders.add(String.format("aws/%s/%sClient.h", c2jNamespace, clientNamespace));
        
    }

    void importOperationInput(String operationName)
    {
        dynamicHeaders.add(String.format("aws/%s/model/%sRequest.h", c2jNamespace, operationName));
    };

    private void importModelStructure(String shapeName)
    {
        dynamicHeaders.add (String.format("aws/%s/model/%s.h", c2jNamespace, shapeName));
    };

    public void addDependencyHeader(String header)
    {
        dynamicHeaders.add (header);
    }

    @Override
     public void importSymbol(Symbol symbol, String alias) {

        if(containerHeaderMap.containsKey(symbol.getName()))
        {
            dynamicHeaders.add(containerHeaderMap.get(symbol.getName()));
        }
     }
 
     @Override
     public String toString() {
        StringBuilder sb = new StringBuilder();

        coreHeaders.forEach(
            elem -> sb.append(String.format("#include <%s>\n",elem))
        );

        unitTestHeaders.forEach(
            elem -> sb.append(String.format("#include <%s>\n",elem))
        );
        dynamicHeaders.forEach(
            elem -> sb.append(String.format("#include <%s>\n",elem))
        );

        return sb.toString();
     }
 
 }