/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import software.amazon.smithy.model.shapes.*;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.templates.PaginationData;
import java.util.*;

public class HeaderCompilationTemplate {
    private final List<ServiceShape> services;
    private final List<PaginationData> allPaginatedOps;

    public HeaderCompilationTemplate(List<ServiceShape> services, List<PaginationData> allPaginatedOps) {
        this.services = services;
        this.allPaginatedOps = allPaginatedOps;
    }

    public void render(CppWriter writer) {
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("// Header compilation test for ALL pagination headers")
              .write("// This test ensures all generated pagination headers compile successfully")
              .write("");

        // Include all service headers
        writeIncludes(writer);
        
        writer.write("")
              .write("#include <aws/testing/AwsCppSdkGTestSuite.h>")
              .write("")
              .write("class AllPaginationHeadersCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite")
              .write("{")
              .write("};")
              .write("")
              .write("TEST_F(AllPaginationHeadersCompilationTest, AllPaginationHeadersCompile)")
              .write("{")
              .write("    // Test passes if compilation succeeds")
              .write("    SUCCEED();")
              .write("}");
    }

    private void writeIncludes(CppWriter writer) {
        for (PaginationData paginationData : allPaginatedOps) {
            ServiceShape service = paginationData.getService();
            String serviceName = getServiceName(service);
            
            // Include pagination client header
            writer.writeInclude("aws/" + serviceName.toLowerCase() + "/" + serviceName + "ClientPagination.h");
            
            // Include pagination traits headers
            String operationName = paginationData.getOperation().getId().getName();
            writer.writeInclude("aws/" + serviceName.toLowerCase() + "/model/pagination/" + operationName + "PaginationTraits.h");
        }
    }
    
    private String getServiceName(ServiceShape service) {
        return service.getTrait(software.amazon.smithy.aws.traits.ServiceTrait.class)
            .map(software.amazon.smithy.aws.traits.ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");
    }

}