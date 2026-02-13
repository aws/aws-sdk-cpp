/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.pagination;

import com.amazonaws.util.awsclientsmithygenerator.generators.BaseHeaderGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.util.List;
import java.util.Map;

public class PaginationBaseGenerator extends BaseHeaderGenerator<OperationData<PaginatedTrait>> {
    
    public PaginationBaseGenerator(ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, Map<String, String> serviceMap) {
        super(service, paginatedOps, serviceMap);
    }
    
    @Override
    protected void writeSpecificIncludes(CppWriter writer, String serviceName, String smithyServiceName) {
        writer.write("");
        writer.writeInclude("aws/core/utils/pagination/Paginator.h");
        
        // Include paginator headers
        for (OperationData<PaginatedTrait> data : operations) {
            String opName = data.getOperation().getId().getName();
            writer.writeInclude("aws/" + smithyServiceName + "/model/" + opName + "PaginationTraits.h");
        }
        
        writer.writeInclude("memory");
        writer.write("");
    }
    
    @Override
    protected void writeSpecificContent(CppWriter writer, String serviceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        
        // Forward declare the client
        writer.write("class " + classPrefix + "Client;");
        writer.write("");
        
        // CRTP base class
        writer.write("template<typename DerivedClient>");
        writer.openBlock("class " + classPrefix + "PaginationBase {\npublic:", "};", () -> {
            if (operations.isEmpty()) {
                // Empty base class for services without pagination
                // Required because legacy C2J generator always includes PaginationBase inheritance in client headers
                writer.write("virtual ~" + classPrefix + "PaginationBase() = default;");
            } else {
                // Generate paginator methods
                for (OperationData<PaginatedTrait> data : operations) {
                    String opName = data.getOperation().getId().getName();
                    String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
                    
                    writer.write("");
                    writer.write("/**")
                          .write(" * Create a paginator for " + opName + " operation")
                          .write(" */");
                    
                    writer.write("Aws::Utils::Pagination::Paginator<DerivedClient, Model::" + methodName + "Request, Pagination::" + opName + "PaginationTraits<DerivedClient>>")
                          .write(opName + "Paginator(const Model::" + methodName + "Request& request)");
                    
                    writer.openBlock("{", "}", () -> {
                    writer.write("return Aws::Utils::Pagination::Paginator<DerivedClient, Model::" + methodName + "Request, Pagination::" + opName + "PaginationTraits<DerivedClient>>{")
                          .write("    static_cast<DerivedClient*>(this), request};");
                    });
                }
            }
        });
    }
}