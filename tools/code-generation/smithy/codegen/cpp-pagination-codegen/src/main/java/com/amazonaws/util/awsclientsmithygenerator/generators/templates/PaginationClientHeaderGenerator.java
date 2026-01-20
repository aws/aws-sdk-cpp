/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.traits.PaginatedTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.List;
import java.util.Map;

public class PaginationClientHeaderGenerator {
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    private final Map<String, String> c2jMap;
    private final String c2jServiceName;
    
    public PaginationClientHeaderGenerator(ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, Map<String, String> c2jMap) {
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.c2jMap = c2jMap;
        this.c2jServiceName = ServiceNameUtil.getC2jServiceName(service, c2jMap);
    }
    
    public void render(CppWriter writer) {
        String serviceName = ServiceNameUtil.getServiceName(service);
        String c2jServiceName = ServiceNameUtil.getC2jServiceName(service, c2jMap);
        
        // Header and includes
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#pragma once");
        
        renderIncludes(writer, serviceName, c2jServiceName);
        renderNamespaces(writer, serviceName);
    }
    
    private void renderIncludes(CppWriter writer, String serviceName, String c2jServiceName) {
        String capitalizedServiceName = ServiceNameUtil.getServiceNameUpperCamel(service);
        writer.writeInclude("aws/" + c2jServiceName + "/" + capitalizedServiceName + "Client.h");
        writer.writeInclude("aws/core/utils/pagination/Paginator.h");
        
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            writer.writeInclude("aws/" + c2jServiceName + "/model/pagination/" + opName + "PaginationTraits.h");
        }
        writer.write("");
    }
    
    private void renderNamespaces(CppWriter writer, String serviceName) {
        writer.writeNamespaceOpen("Aws");
        writer.writeNamespaceOpen(serviceName);
        writer.write("");
        
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            String methodName = ServiceNameUtil.getClientMethodName(opName, c2jServiceName);
            writer.write("using $LPaginator = Aws::Utils::Pagination::PagePaginator<$LClient, Model::$LRequest, Pagination::$LPaginationTraits>;",
                opName, ServiceNameUtil.getServiceNameUpperCamel(service), methodName, opName);
        }
        
        writer.write("");
        writer.writeNamespaceClose(serviceName);
        writer.writeNamespaceClose("Aws");
    }
}