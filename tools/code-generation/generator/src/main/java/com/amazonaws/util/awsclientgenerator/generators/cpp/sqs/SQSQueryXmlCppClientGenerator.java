/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.sqs;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.QueryCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class SQSQueryXmlCppClientGenerator extends QueryCppClientGenerator {

    public SQSQueryXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        Shape queueAttributeNameShape = serviceModel.getShapes().get("QueueAttributeName");

        //currently SQS doesn't model some values that can be returned as "members" of the QueueAttributeName enum
        //this is not the right solution. The right solution is to add a separate enum for use for ReceiveMessageRequest
        //but backwards compatibility and all that...
        //anyways, add the missing values here.
        if(queueAttributeNameShape != null) {
            queueAttributeNameShape.getEnumValues().add("SentTimestamp");
            queueAttributeNameShape.getEnumValues().add("ApproximateFirstReceiveTimestamp");
            queueAttributeNameShape.getEnumValues().add("ApproximateReceiveCount");
            queueAttributeNameShape.getEnumValues().add("SenderId");
        }

        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected List<SdkFileEntry> generateClientSourceFile(final List<ServiceModel> serviceModels) throws Exception {
        List<SdkFileEntry> sourceFiles = new ArrayList<>();
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/sqs/SQSServiceClientSource.vm", StandardCharsets.UTF_8.name());
        for (int i = 0; i < serviceModels.size(); i++) {
            VelocityContext context = createContext(serviceModels.get(i));
            context.put("CppViewHelper", CppViewHelper.class);

            final String fileName;
            if (i == 0) {
                context.put("onlyGeneratedOperations", false);
                fileName = String.format("source/%sClient.cpp", serviceModels.get(i).getMetadata().getClassNamePrefix());
            } else {
                context.put("onlyGeneratedOperations", true);
                fileName = String.format("source/%sClient%d.cpp", serviceModels.get(i).getMetadata().getClassNamePrefix(), i);
            }

            sourceFiles.add(makeFile(template, context, fileName, true));
        }
        return sourceFiles;
    }
}
