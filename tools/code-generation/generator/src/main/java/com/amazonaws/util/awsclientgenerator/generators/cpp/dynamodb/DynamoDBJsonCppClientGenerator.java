/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.dynamodb;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import org.apache.velocity.Template;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.stream.IntStream;

public class DynamoDBJsonCppClientGenerator extends JsonCppClientGenerator {

    public DynamoDBJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        // add a helper class that is used for AttributeValue values.
        Shape attributeValueShape = new Shape();
        attributeValueShape.setName("AttributeValueValue");
        attributeValueShape.setType("structure");
        serviceModel.getShapes().put(attributeValueShape.getName(), attributeValueShape);

        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(ServiceModel serviceModel) throws Exception {
        if (!serviceModel.isUseSmithyClient()) {
            return super.generateClientHeaderFile(serviceModel);
        }
        return super.generateClientSmithyHeaderFile(serviceModel);
    }

    @Override
    protected List<SdkFileEntry> generateClientSourceFile(List<ServiceModel> serviceModels) throws Exception {
        final List<SdkFileEntry> awsClients = super.generateClientSourceFile(serviceModels.stream()
                .filter(serviceModel -> !serviceModel.isUseSmithyClient())
                .collect(Collectors.toList()));

        List<Integer> serviceModelsIndices = IntStream.range(0, serviceModels.size()).boxed().collect(Collectors.toList());

        final List<SdkFileEntry> smithyClients = new ArrayList<>();
        serviceModelsIndices.stream().forEach(index -> {
            if(serviceModels.get(index).isUseSmithyClient())
            {
                smithyClients.add(GenerateSmithyClientSourceFile(serviceModels.get(index), index,Optional.empty()));
            }
        });
        return Stream.concat(awsClients.stream(), smithyClients.stream()).collect(Collectors.toList());
    }

    @Override
    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, Map<String, CppShapeInformation> shapeInformationCache) {
        switch(shapeEntry.getKey()) {
            case "AttributeValue": {
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/dynamodb/AttributeValueHeader.vm", StandardCharsets.UTF_8.name());
                return makeFile(template, createContext(serviceModel), "include/aws/dynamodb/model/AttributeValue.h", true);
            }
            case "AttributeValueValue": {
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/dynamodb/AttributeValueValueHeader.vm", StandardCharsets.UTF_8.name());
                return makeFile(template, createContext(serviceModel), "include/aws/dynamodb/model/AttributeValueValue.h", true);
            }
            default:
                return super.generateModelHeaderFile(serviceModel, shapeEntry, shapeInformationCache);
        }
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, final Map<String, CppShapeInformation> shapeInformationCache) {
        switch(shapeEntry.getKey()) {
            case "AttributeValue": {
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/dynamodb/AttributeValueSource.vm");
                return makeFile(template, createContext(serviceModel), "source/model/AttributeValue.cpp", true);
            }
            case "AttributeValueValue": {
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/dynamodb/AttributeValueValueSource.vm");
                return makeFile(template, createContext(serviceModel), "source/model/AttributeValueValue.cpp", true);
            }
            default:
                return super.generateModelSourceFile(serviceModel, shapeEntry, shapeInformationCache);
        }
    }

    @Override
    protected Set<String> getRetryableErrors() {
        Set<String> exceptions = super.getRetryableErrors();
        exceptions.add("ResourceInUseException");
        return exceptions;
    }
}
