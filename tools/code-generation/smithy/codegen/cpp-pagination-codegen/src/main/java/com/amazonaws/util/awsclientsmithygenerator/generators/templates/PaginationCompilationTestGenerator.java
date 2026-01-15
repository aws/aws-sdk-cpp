/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.*;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CompilationTestParser;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.util.*;

public class PaginationCompilationTestGenerator {
    private final CompilationTestParser<OperationData<PaginatedTrait>> parser;
    private final List<OperationData<PaginatedTrait>> allPaginatedOps;
    private final Map<String, String> c2jMap;

    public PaginationCompilationTestGenerator(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> allPaginatedOps, Map<String, String> c2jMap) {
        this.allPaginatedOps = allPaginatedOps;
        this.c2jMap = c2jMap;
        this.parser = new CompilationTestParser<>(
            context,
            service,
            allPaginatedOps,
            "Pagination",
            this::render,
            c2jMap
        );
    }

    public void run() {
        parser.run();
    }

    public void render(CppWriter writer) {
        // Get service from the first operation since all operations belong to the same service
        ServiceShape service = allPaginatedOps.get(0).getService();
        String serviceName = ServiceNameUtil.getServiceName(service);
        
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("// Header compilation test for " + serviceName + " pagination headers")
              .write("// This test ensures all generated pagination headers compile successfully")
              .write("");

        // Include all service headers
        writeIncludes(writer);
        
        writer.write("")
              .write("#include <aws/testing/AwsCppSdkGTestSuite.h>")
              .write("");
        
        writer.openBlock("class " + serviceName + "PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite\n{", "};", () -> {
            // Empty class body
        });
        
        writer.write("");
        
        writer.openBlock("TEST_F(" + serviceName + "PaginationCompilationTest, " + serviceName + "PaginationHeadersCompile)\n{", "}", () -> {
            writer.write("    // Test passes if compilation succeeds")
                  .write("    SUCCEED();");
        });
    }

    private void writeIncludes(CppWriter writer) {
        Set<String> clientHeaders = new HashSet<>();
        Set<String> traitHeaders = new HashSet<>();
        
        for (OperationData<PaginatedTrait> paginationData : allPaginatedOps) {
            ServiceShape service = paginationData.getService();
            String serviceName = ServiceNameUtil.getServiceName(service);
            String c2jServiceName = ServiceNameUtil.getC2jServiceName(service, c2jMap);
            
            // Collect unique client headers
            clientHeaders.add("aws/" + c2jServiceName + "/" + serviceName + "ClientPagination.h");
            
            // Collect unique trait headers
            String operationName = paginationData.getOperation().getId().getName();
            traitHeaders.add("aws/" + c2jServiceName + "/model/pagination/" + operationName + "PaginationTraits.h");
        }
        
        // Write unique client headers
        for (String header : clientHeaders) {
            writer.writeInclude(header);
        }
        
        // Write unique trait headers
        for (String header : traitHeaders) {
            writer.writeInclude(header);
        }
    }
}