/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.codegen.core.SymbolProvider;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.PaginatedTrait;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import java.util.*;

public class PaginationTraitsGenerator {
    private final PluginContext context;
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    private final String c2jServiceName;

    private final CppWriterDelegator writerDelegator;

    public PaginationTraitsGenerator(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, String c2jServiceName) {
        this.context = context;
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.c2jServiceName = c2jServiceName;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
    }

    public void write() {
        String serviceName = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");

        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String fileName = "include/aws/" + c2jServiceName + "/model/pagination/" + data.getOperation().getId().getName() + "PaginationTraits.h";
            
            writerDelegator.useFileWriter(fileName, writer -> {
                generateTraitsHeader(writer, data, serviceName);
            });
        }
        
        writerDelegator.flushWriters();
    }

    private void generateTraitsHeader(CppWriter writer, OperationData<PaginatedTrait> data, String serviceName) {
        OperationShape op = data.getOperation();
        PaginatedTrait trait = data.getTrait();
        String opName = op.getId().getName();
        
        // Header comment
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("#pragma once");
        
        // Includes
        writer.writeInclude("aws/" + c2jServiceName + "/" + serviceName + "_EXPORTS.h")
              .writeInclude("aws/" + c2jServiceName + "/model/" + opName + "Request.h")
              .writeInclude("aws/" + c2jServiceName + "/model/" + opName + "Result.h")
              .writeInclude("aws/" + c2jServiceName + "/" + serviceName + "Client.h")
              .write("");
        
        // Namespaces
        writer.writeNamespaceOpen("Aws")
              .writeNamespaceOpen(serviceName)
              .writeNamespaceOpen("Pagination")
              .write("");
        
        // Struct definition
        writer.openBlock("struct " + opName + "PaginationTraits\n{", "};", () -> {
            writer.write("    using RequestType = Model::$LRequest;", opName)
                  .write("    using ResultType = Model::$LResult;", opName)
                  .write("    using OutcomeType = Model::$LOutcome;", opName)
                  .write("    using ClientType = $LClient;", serviceName)
                  .write("");
            
            // Invoke method
            writer.openBlock("    static OutcomeType Invoke(ClientType& client, const RequestType& request)\n    {", "    }", () -> {
                writer.write("        return client.$L(request);", opName);
            });
            
            writer.write("");
            
            // HasMoreResults method
            writer.openBlock("    static bool HasMoreResults(const ResultType& result)\n    {", "    }", () -> {
                if (trait.getOutputToken().isPresent()) {
                    String outToken = trait.getOutputToken().get();
                    if (outToken.toLowerCase().contains("marker") || outToken.toLowerCase().contains("number")) {
                        writer.write("        return result.Get$L() != 0;", capitalize(outToken));
                    } else {
                        writer.write("        return !result.Get$L().empty();", capitalize(outToken));
                    }
                } else {
                    writer.write("        return result.GetIsTruncated();");
                }
            });
            
            writer.write("");
            
            // SetNextRequest method
            writer.openBlock("    static void SetNextRequest(const ResultType& result, RequestType& request)\n    {", "    }", () -> {
                if (trait.getInputToken().isPresent() && trait.getOutputToken().isPresent()) {
                    String inToken = trait.getInputToken().get();
                    String outToken = trait.getOutputToken().get();
                    writer.write("        request.Set$L(result.Get$L());", capitalize(inToken), capitalize(outToken));
                }
            });
        });
        
        writer.write("")
              .writeNamespaceClose("Pagination")
              .writeNamespaceClose(serviceName)
              .writeNamespaceClose("Aws");
    }

    private String capitalize(String str) {
        return str.substring(0, 1).toUpperCase() + str.substring(1);
    }
}
