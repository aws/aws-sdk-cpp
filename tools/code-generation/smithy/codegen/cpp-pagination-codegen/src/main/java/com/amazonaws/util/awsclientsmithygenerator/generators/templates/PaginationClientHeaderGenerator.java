/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.traits.PaginatedTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.List;
import java.util.Map;

public class PaginationClientHeaderGenerator {
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    private final Map<String, String> serviceMap;
    private final String smithyServiceName;
    
    public PaginationClientHeaderGenerator(ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, Map<String, String> serviceMap) {
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.serviceMap = serviceMap;
        this.smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
    }
    
    public void render(CppWriter writer) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String smithyServiceName = ServiceNameUtil.getSmithyServiceName(service, serviceMap);
        
        // Header and includes
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#pragma once");
        
        renderIncludes(writer, serviceName, smithyServiceName);
        renderNamespaces(writer, serviceName);
    }
    
    private void renderIncludes(CppWriter writer, String serviceName, String smithyServiceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        writer.writeInclude("aws/" + smithyServiceName + "/" + classPrefix + "Client.h");
        writer.writeInclude("aws/core/utils/pagination/Paginator.h");
        
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            writer.writeInclude("aws/" + smithyServiceName + "/model/pagination/" + opName + "PaginationTraits.h");
        }
        writer.write("");
    }
    
    private void renderNamespaces(CppWriter writer, String serviceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        writer.writeNamespaceOpen("Aws");
        writer.writeNamespaceOpen(serviceName);
        writer.write("");
        
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
            writer.write("using $LPaginator = Aws::Utils::Pagination::PagePaginator<$LClient, Model::$LRequest, Pagination::$LPaginationTraits>;",
                opName, classPrefix, methodName, opName);
        }
        
        writer.write("");
        writer.writeNamespaceClose(serviceName);
        writer.writeNamespaceClose("Aws");
    }
}