/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.pagination;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.util.List;
import java.util.Map;

public class PaginationBaseGenerator {
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    private final Map<String, String> serviceMap;
    
    public PaginationBaseGenerator(ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, Map<String, String> serviceMap) {
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.serviceMap = serviceMap;
    }
    
    public void render(CppWriter writer) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        
        renderHeader(writer);
        renderIncludes(writer, serviceName, smithyServiceName);
        renderBaseClass(writer, serviceName, smithyServiceName, classPrefix);
    }
    
    private void renderHeader(CppWriter writer) {
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("#pragma once")
              .write("");
    }
    
    private void renderIncludes(CppWriter writer, String serviceName, String smithyServiceName) {
        writer.writeInclude("memory");
        
        // Include paginator headers
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            writer.writeInclude("aws/" + smithyServiceName + "/model/" + opName + "PaginationTraits.h");
        }
        
        writer.writeInclude("aws/core/utils/pagination/Paginator.h");
        writer.write("");
    }
    
    private void renderBaseClass(CppWriter writer, String serviceName, String smithyServiceName, String classPrefix) {
        writer.writeNamespaceOpen("Aws");
        writer.writeNamespaceOpen(serviceName);
        writer.write("");
        
        // Forward declare the client
        writer.write("class " + classPrefix + "Client;");
        writer.write("");
        
        // CRTP base class
        writer.write("template<typename DerivedClient>");
        writer.openBlock("class " + classPrefix + "PaginationBase {\npublic:", "};", () -> {
            if (paginatedOps.isEmpty()) {
                // Empty base class for services without pagination
                // Required because legacy C2J generator always includes PaginationBase inheritance in client headers
                writer.write("virtual ~" + classPrefix + "PaginationBase() = default;");
            } else {
                // Generate paginator methods
                for (OperationData<PaginatedTrait> data : paginatedOps) {
                    String opName = data.getOperation().getId().getName();
                    String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
                    
                    writer.write("");
                    writer.write("/**")
                          .write(" * Create a paginator for " + opName + " operation")
                          .write(" */");
                    
                    writer.write("Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::" + methodName + "Request, Pagination::" + opName + "PaginationTraits>")
                          .write(opName + "Paginator(const Model::" + methodName + "Request& request)");
                    
                    writer.openBlock("{", "}", () -> {
                    writer.write("return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::" + methodName + "Request, Pagination::" + opName + "PaginationTraits>{")
                          .write("    std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*){}), request};");
                    });
                }
            }
        });
        
        writer.writeNamespaceClose(serviceName);
        writer.writeNamespaceClose("Aws");

    }
}