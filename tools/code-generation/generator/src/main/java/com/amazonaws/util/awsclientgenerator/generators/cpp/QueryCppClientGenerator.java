/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class QueryCppClientGenerator extends CppClientGenerator {

    public QueryCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected void addRequestIdToResults(final ServiceModel serviceModel) {
        Shape shape = new Shape();
        shape.setName("ResponseMetadata");
        shape.setReferenced(true);
        shape.setType("structure");

        Shape stringShape = new Shape();
        stringShape.setName("RequestId");
        stringShape.setType("string");

        ShapeMember stringShapeMember = new ShapeMember();
        stringShapeMember.setShape(stringShape);
        shape.setMembers(new HashMap<>());
        shape.getMembers().put("RequestId", stringShapeMember);

        serviceModel.getShapes().put("ResponseMetadata", shape);

        ShapeMember responseMetadataMember = new ShapeMember();
        responseMetadataMember.setShape(shape);
        responseMetadataMember.setRequired(true);
        responseMetadataMember.setValidationNeeded(true);

        for (Shape resultShape : serviceModel.getShapes().values()) {
            if (resultShape.isResult()) {
                resultShape.getMembers().put("ResponseMetadata", responseMetadataMember);
            }
        }
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        //query api ALWAYS needs a request shape, because it needs to send action and version as part of the payload
        //we don't want to add it to the operation however, because there is no need for the user to be aware of the existence of this
        //type.
        serviceModel.getOperations().values().stream().filter(operation -> operation.getRequest() == null).forEach(operation -> {
            Shape requestShape = new Shape();
            requestShape.setName(operation.getName() + "Request");
            requestShape.setReferenced(true);
            requestShape.setRequest(true);
            requestShape.setType("structure");
            requestShape.setMembers(new HashMap<>());
            requestShape.setSupportsPresigning(true);

            serviceModel.getShapes().put(requestShape.getName(), requestShape);
            ShapeMember shapeMemberForRequest = new ShapeMember();
            shapeMemberForRequest.setDocumentation("");
            shapeMemberForRequest.setShape(requestShape);
            operation.setRequest(shapeMemberForRequest);
        });

        serviceModel.getOperations().values().stream().forEach(operation -> {
            operation.getRequest().getShape().setSupportsPresigning(true);
        });

        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, Map<String, CppShapeInformation> shapeInformationCache) {
        Shape shape = shapeEntry.getValue();
        if (shape.isException() && !shape.isXmlModeledException())
            return null;

        //we only want to handle results and internal structures. We don't want requests or enums.
        if (shape.isRequest() || shape.isEnum() || shape.hasEventPayloadMembers() && shape.hasBlobMembers()) {
            return super.generateModelHeaderFile(serviceModel, shapeEntry, shapeInformationCache);
        }

        if (shape.isStructure() && shape.isReferenced()) {
            Template template = null;
            VelocityContext context = createContext(serviceModel);

            if (shape.isResult()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlResultHeader.vm", StandardCharsets.UTF_8.name());
            } else if (!shape.isRequest() && shape.isStructure()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/queryxml/QueryXmlSubObjectHeader.vm", StandardCharsets.UTF_8.name());
            }

            context.put("shape", shape);
            context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
            context.put("CppViewHelper", CppViewHelper.class);

            String fileName = String.format("include/aws/%s/model/%s.h", serviceModel.getMetadata().getProjectName(),
                    shapeEntry.getKey());
            return makeFile(template, context, fileName, true);
        }

        return null;
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, final Map<String, CppShapeInformation> shapeInformationCache) {
        Shape shape = shapeEntry.getValue();
        if (shape.isException() && !shape.isXmlModeledException())
            return null;

        if (shape.isEnum()) {
            return super.generateModelSourceFile(serviceModel, shapeEntry, shapeInformationCache);
        }

        Template template = null;
        VelocityContext context = createContext(serviceModel);

        if (shape.isStructure() && shape.isReferenced()) {
            if (shape.isRequest()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/queryxml/QueryRequestSource.vm", StandardCharsets.UTF_8.name());
            } else if (shape.isResult()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/queryxml/QueryXmlResultSource.vm", StandardCharsets.UTF_8.name());
            } else {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/queryxml/QueryXmlSubObjectSource.vm", StandardCharsets.UTF_8.name());
            }
        }

        context.put("shape", shape);
        context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/model/%s.cpp", shapeEntry.getKey());
        if (template == null)
            return null;

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {

        if (serviceModel.isUseSmithyClient())
        {
            return generateClientSmithyHeaderFile(serviceModel);
        }

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlServiceClientHeader.vm", StandardCharsets.UTF_8.name());
        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        context.put("RequestlessOperations", requestlessOperations);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

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

    @Override
    protected SdkFileEntry GenerateLegacyClientSourceFile(final ServiceModel serviceModel, int i){
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/queryxml/QueryXmlServiceClientSource.vm", StandardCharsets.UTF_8.name());

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
    protected SdkFileEntry generateErrorMarshallerHeaderFile(ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlErrorMarshallerHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sErrorMarshaller.h",
                serviceModel.getMetadata().getProjectName(), serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }
}
