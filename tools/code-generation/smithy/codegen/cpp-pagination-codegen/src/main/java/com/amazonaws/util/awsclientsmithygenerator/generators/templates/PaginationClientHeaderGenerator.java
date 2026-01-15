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
import java.util.List;

public class PaginationClientHeaderGenerator {
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    
    public PaginationClientHeaderGenerator(ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps) {
        this.service = service;
        this.paginatedOps = paginatedOps;
    }
    
    public void render(CppWriter writer) {
        String serviceName = getServiceName();
        
        // Header and includes
        writer.write("/**");
        writer.write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.");
        writer.write(" * SPDX-License-Identifier: Apache-2.0.");
        writer.write(" */");
        writer.write("");
        writer.write("#pragma once");
        
        renderIncludes(writer, serviceName);
        renderNamespaces(writer, serviceName);
    }
    
    private void renderIncludes(CppWriter writer, String serviceName) {
        writer.writeInclude("aws/" + serviceName.toLowerCase() + "/" + serviceName + "Client.h");
        writer.writeInclude("aws/core/utils/pagination/Paginator.h");
        
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            writer.writeInclude("aws/" + serviceName.toLowerCase() + "/model/pagination/" + opName + "PaginationTraits.h");
        }
        writer.write("");
    }
    
    private void renderNamespaces(CppWriter writer, String serviceName) {
        writer.writeNamespaceOpen("Aws");
        writer.writeNamespaceOpen(serviceName);
        writer.write("");
        
        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String opName = data.getOperation().getId().getName();
            writer.write("using $LPaginator = Aws::Utils::Pagination::PagePaginator<$LClient, Model::$LRequest, Pagination::$LPaginationTraits>;",
                opName, serviceName, opName, opName);
        }
        
        writer.write("");
        writer.writeNamespaceClose(serviceName);
        writer.writeNamespaceClose("Aws");
    }
    
    private String getServiceName() {
        return service.getTrait(ServiceTrait.class)
            .map(ServiceTrait::getSdkId)
            .orElse(service.getId().getName())
            .replace(" ", "")
            .replace("-", "");
    }
}