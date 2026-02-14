/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.pagination;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.*;
import com.amazonaws.util.awsclientsmithygenerator.generators.BaseCompilationTestGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.model.traits.PaginatedTrait;
import java.util.*;

public class PaginationCompilationTestGenerator extends BaseCompilationTestGenerator<OperationData<PaginatedTrait>> {

    public PaginationCompilationTestGenerator(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> allPaginatedOps, Map<String, String> serviceMap) {
        super(context, service, allPaginatedOps, serviceMap);
    }

    @Override
    protected String getTestType() {
        return "Pagination";
    }

    @Override
    protected String getTestDescription() {
        return "This test ensures all generated pagination headers compile successfully";
    }

    @Override
    protected void writeTestSpecificIncludes(CppWriter writer) {
        Set<String> clientHeaders = new HashSet<>();
        Set<String> traitHeaders = new HashSet<>();
        Set<String> serviceHeaders = new HashSet<>();
        
        for (OperationData<PaginatedTrait> paginationData : operations) {
            ServiceShape service = paginationData.getService();
            String serviceName = ServiceNameUtil.getServiceNameUpperCamel(service);
            String smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
            
            // Collect unique client headers
            clientHeaders.add("aws/" + smithyServiceName + "/" + serviceName + "ClientPagination.h");
            
            // Collect unique service headers
            serviceHeaders.add("aws/" + smithyServiceName + "/" + serviceName + "PaginationBase.h");
            
            // Collect unique trait headers
            String operationName = paginationData.getOperation().getId().getName();
            traitHeaders.add("aws/" + smithyServiceName + "/model/" + operationName + "PaginationTraits.h");
        }
        
        // Write unique client headers
        for (String header : clientHeaders) {
            writer.writeInclude(header);
        }
        
        // Write unique service headers
        for (String header : serviceHeaders) {
            writer.writeInclude(header);
        }
        
        // Write unique trait headers
        for (String header : traitHeaders) {
            writer.writeInclude(header);
        }
    }
}