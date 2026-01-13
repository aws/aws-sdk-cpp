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

public class PaginationClientHeaderGenerator extends BaseHeaderGenerator<OperationData<PaginatedTrait>> {
    
    public PaginationClientHeaderGenerator(ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, Map<String, String> serviceMap) {
        super(service, paginatedOps, serviceMap);
    }
    
    @Override
    protected void writeSpecificIncludes(CppWriter writer, String serviceName, String smithyServiceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        writer.writeInclude("aws/" + smithyServiceName + "/" + classPrefix + "Client.h");
        writer.writeInclude("aws/core/utils/pagination/Paginator.h");
        
        for (OperationData<PaginatedTrait> data : operations) {
            String opName = data.getOperation().getId().getName();
            writer.writeInclude("aws/" + smithyServiceName + "/model/" + opName + "PaginationTraits.h");
        }
        writer.write("");
    }
    
    @Override
    protected void writeSpecificContent(CppWriter writer, String serviceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        
        for (OperationData<PaginatedTrait> data : operations) {
            String opName = data.getOperation().getId().getName();
            String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
            writer.write("using $LPaginator = Aws::Utils::Pagination::Paginator<$LClient, Model::$LRequest, Pagination::$LPaginationTraits<$LClient>>;",
                opName, classPrefix, methodName, opName, classPrefix);
        }
        writer.write("");
    }
}