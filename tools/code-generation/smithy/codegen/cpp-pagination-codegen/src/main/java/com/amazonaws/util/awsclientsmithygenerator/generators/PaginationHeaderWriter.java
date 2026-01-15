/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.codegen.core.SymbolProvider;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.PaginatedTrait;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.nio.file.*;
import java.util.*;

public class PaginationHeaderWriter {
    private final PluginContext context;
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    private final String c2jServiceName;

    public PaginationHeaderWriter(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, String c2jServiceName) {
        this.context = context;
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.c2jServiceName = c2jServiceName;
    }

    public void write() {
        String serviceName = service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");
        Path outputPath = context.getFileManifest().getBaseDir()
                .resolve("include/aws/" + c2jServiceName + "/model/pagination");

        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String content = generateTraitsHeader(data, serviceName);
            String fileName = data.getOperation().getId().getName() + "PaginationTraits.h";
            
            try {
                Files.createDirectories(outputPath);
                Files.writeString(outputPath.resolve(fileName), content);
            } catch (Exception e) {
                throw new RuntimeException("Failed to write pagination traits header", e);
            }
        }
    }

    private String generateTraitsHeader(OperationData<PaginatedTrait> data, String serviceName) {
        OperationShape op = data.getOperation();
        PaginatedTrait trait = data.getTrait();
        String opName = op.getId().getName();

        StringBuilder sb = new StringBuilder();
        sb.append("/**\n");
        sb.append(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.\n");
        sb.append(" * SPDX-License-Identifier: Apache-2.0.\n");
        sb.append(" */\n\n");
        sb.append("#pragma once\n");
        sb.append("#include <aws/").append(c2jServiceName).append("/").append(serviceName).append("_EXPORTS.h>\n");
        sb.append("#include <aws/").append(c2jServiceName).append("/model/").append(opName).append("Request.h>\n");
        sb.append("#include <aws/").append(c2jServiceName).append("/model/").append(opName).append("Result.h>\n");
        sb.append("#include <aws/").append(c2jServiceName).append("/").append(serviceName).append("Client.h>\n\n");
        sb.append("namespace Aws\n{\nnamespace ").append(serviceName).append("\n{\nnamespace Pagination\n{\n\n");
        sb.append("struct ").append(opName).append("PaginationTraits\n{\n");
        sb.append("    using RequestType = Model::").append(opName).append("Request;\n");
        sb.append("    using ResultType = Model::").append(opName).append("Result;\n");
        sb.append("    using OutcomeType = Model::").append(opName).append("Outcome;\n");
        sb.append("    using ClientType = ").append(serviceName).append("Client;\n\n");
        
        sb.append("    static OutcomeType Invoke(ClientType& client, const RequestType& request)\n    {\n");
        sb.append("        return client.").append(opName).append("(request);\n    }\n\n");
        
        sb.append("    static bool HasMoreResults(const ResultType& result)\n    {\n");
        // Use the output token to determine if there are more results
        if (trait.getOutputToken().isPresent()) {
            String outToken = trait.getOutputToken().get();
            // Handle different token types - strings use .empty(), numbers check for non-zero
            if (outToken.toLowerCase().contains("marker") || outToken.toLowerCase().contains("number")) {
                // Numeric tokens - check if they exist/are set
                sb.append("        return result.Get").append(capitalize(outToken)).append("() != 0;\n");
            } else {
                // String tokens - check if not empty
                sb.append("        return !result.Get").append(capitalize(outToken)).append("().empty();\n");
            }
        } else {
            // Fallback to checking for IsTruncated if no output token
            sb.append("        return result.GetIsTruncated();\n");
        }
        sb.append("    }\n\n");
        
        sb.append("    static void SetNextRequest(const ResultType& result, RequestType& request)\n    {\n");
        if (trait.getInputToken().isPresent() && trait.getOutputToken().isPresent()) {
            String inToken = trait.getInputToken().get();
            String outToken = trait.getOutputToken().get();
            sb.append("        request.Set").append(capitalize(inToken)).append("(result.Get").append(capitalize(outToken)).append("());\n");
        }
        sb.append("    }\n");
        
        sb.append("};\n\n");
        sb.append("} // namespace Pagination\n");
        sb.append("} // namespace ").append(serviceName).append("\n");
        sb.append("} // namespace Aws\n");
        
        return sb.toString();
    }

    private String capitalize(String str) {
        return str.substring(0, 1).toUpperCase() + str.substring(1);
    }
}
