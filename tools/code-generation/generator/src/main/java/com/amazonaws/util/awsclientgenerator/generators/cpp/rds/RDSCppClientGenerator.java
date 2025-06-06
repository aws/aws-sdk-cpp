/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.rds;

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
import java.util.List;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import java.util.HashSet;

public class RDSCppClientGenerator extends QueryCppClientGenerator {

    private static Set<String> opsThatHavePreSignedUrl = new HashSet<>();

    static {
        opsThatHavePreSignedUrl.add("CopyDBClusterSnapshot");
        opsThatHavePreSignedUrl.add("CreateDBCluster");
        opsThatHavePreSignedUrl.add("CopyDBSnapshot");
        opsThatHavePreSignedUrl.add("CreateDBInstanceReadReplica");
        opsThatHavePreSignedUrl.add("StartDBInstanceAutomatedBackupsReplication");
    }

    public RDSCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        serviceModel.getMetadata().setHasPreSignedUrl(true);

        Shape sourceRegionShape = new Shape();
        sourceRegionShape.setName("SourceRegion");
        sourceRegionShape.setType("string");
        sourceRegionShape.setReferenced(true);
        HashSet<String> sourceRegionReferencedBy = new HashSet<String>();
        sourceRegionShape.setReferencedBy(sourceRegionReferencedBy);
        ShapeMember sourceRegionShapeMember = new ShapeMember();
        sourceRegionShapeMember.setShape(sourceRegionShape);
        sourceRegionShapeMember.setDocumentation("If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.");

        serviceModel.getOperations().values().stream()
            .filter(operationEntry -> opsThatHavePreSignedUrl.contains(operationEntry.getName()))
            .forEach(operationEntry -> {
                operationEntry.setHasPreSignedUrl(true);
                operationEntry.getRequest().getShape().setHasPreSignedUrl(true);
                operationEntry.getRequest().getShape().getMembers().put(sourceRegionShape.getName(), sourceRegionShapeMember);
                sourceRegionShape.getReferencedBy().add(operationEntry.getRequest().getShape().getName());
            });

        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        if (serviceModel.isUseSmithyClient())
        {
            return generateClientSmithyHeaderFile(serviceModel);
        }
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/rds/RDSClientHeader.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry GenerateLegacyClientSourceFile(final ServiceModel serviceModel, int i){
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/rds/RDSClientSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        final String fileName;
        if (i == 0) {
            context.put("onlyGeneratedOperations", false);
            fileName = String.format("source/%sClient.cpp", serviceModel.getMetadata().getClassNamePrefix());
        } else {
            context.put("onlyGeneratedOperations", true);
            fileName = String.format("source/%sClient%d.cpp", serviceModel.getMetadata().getClassNamePrefix(), i);
        }
        return makeFile(template, context, fileName, true);
    }

    @Override
    protected List<SdkFileEntry> generateClientSourceFile(final List<ServiceModel> serviceModels) throws Exception {
        List<Integer> serviceModelsIndices = IntStream.range(0, serviceModels.size()).boxed().collect(Collectors.toList());

        return serviceModelsIndices.stream().map(index -> 
        {
            if(serviceModels.get(index).isUseSmithyClient())
            {
                return GenerateSmithyClientSourceFile(serviceModels.get(index), index, Optional.of("/com/amazonaws/util/awsclientgenerator/velocity/cpp/smithy/SmithyRestXmlServiceClientSource.vm"));
            }
            else
            {
                return GenerateLegacyClientSourceFile(serviceModels.get(index), index);
            }
        }).collect(Collectors.toList()); 
    }
}

