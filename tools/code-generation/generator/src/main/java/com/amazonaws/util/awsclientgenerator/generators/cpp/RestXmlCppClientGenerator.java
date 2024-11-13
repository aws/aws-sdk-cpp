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
import com.google.common.collect.ImmutableMap;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class RestXmlCppClientGenerator  extends CppClientGenerator {

    public RestXmlCppClientGenerator() throws Exception {
        super();
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

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
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
        List<SdkFileEntry> sourceFiles = new ArrayList<>();
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/rest/RestXmlServiceClientSource.vm", StandardCharsets.UTF_8.name());
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

    @Override
    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {

        Shape shape = shapeEntry.getValue();
        if (shape.isException() && !shape.isXmlModeledException())
            return null;

        //we only want to override json related stuff.
        if (shape.isRequest() || shape.isEnum() || shape.hasEventPayloadMembers() && shape.hasBlobMembers()) {
            return super.generateModelHeaderFile(serviceModel, shapeEntry);
        }

        // Will not generate source code if it's a shape of event, with empty member.
        if (shape.isStructure() && shape.isReferenced() &&
            !(shape.isEventStream() ||
                (shape.isEvent() && shape.getMembers().isEmpty() && !shape.getName().endsWith("InitialResponse")) ||
                (shape.isResult() && shape.hasEventStreamMembers()))) {
            Template template = null;
            VelocityContext context = createContext(serviceModel);

            if (shape.isResult() && shape.hasStreamMembers()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/StreamResultHeader.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isResult()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlResultHeader.vm", StandardCharsets.UTF_8.name());
            }else if (!shape.isRequest() && shape.isStructure()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/rest/RestXmlSubObjectHeader.vm", StandardCharsets.UTF_8.name());
            }

            if(template == null) return null; //temporary

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
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) {
        Shape shape = shapeEntry.getValue();
        if (shape.isException() && !shape.isXmlModeledException())
            return null;

        if (shape.isEnum()) {
            return super.generateModelSourceFile(serviceModel, shapeEntry);
        }

        if (shape.isStructure() && shape.isReferenced() &&
            !(shape.isEventStream() ||
                (shape.hasBlobMembers() && shape.hasEventPayloadMembers()) ||
                (shape.isEvent() && shape.getMembers().isEmpty() && !shape.getName().endsWith("InitialResponse")) ||
                (shape.isResult() && shape.hasEventStreamMembers()))) {
            Template template = null;
            VelocityContext context = createContext(serviceModel);
            context.put("operation", serviceModel.getOperationForRequestShapeName(shape.getName()));

            if (shape.isRequest() && shape.hasStreamMembers()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/StreamRequestSource.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isRequest()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlRequestSource.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isResult() && shape.hasStreamMembers()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/StreamResultSource.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isResult()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/rest/RestXmlResultSource.vm", StandardCharsets.UTF_8.name());
            } else {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/rest/RestXmlSubObjectSource.vm", StandardCharsets.UTF_8.name());
            }

            if(template == null) return null; //temporary;
            context.put("shape", shape);
            context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
            context.put("CppViewHelper", CppViewHelper.class);

            String fileName = String.format("source/model/%s.cpp", shapeEntry.getKey());

            return makeFile(template, context, fileName, true);
        }
        return null;
    }

    /**
     * Adds a new shape member to all results shapes.
     * Currently used by S3 and S3 Control to add a unmodeled Request-id metadata.
     * @param serviceModel
     * @param key
     * @param shapeMemberName
     * @param headerName
     * @param doc
     */
    protected void addToAllResultsShape(final ServiceModel serviceModel,
                                      String key,
                                      String shapeMemberName,
                                      String headerName,
                                      String doc) {

        serviceModel.getShapes().values().stream()
                .filter(Shape::isResult)
                .filter(shape -> !shape.getMembers().containsKey(key))
                .forEach(shape -> {
                    Shape newShape = new Shape();
                    newShape.setName(shapeMemberName);
                    newShape.setType("string");
                    newShape.setMembers(ImmutableMap.of());

                    ShapeMember newShapeMember = new ShapeMember();
                    newShapeMember.setShape(newShape);
                    newShapeMember.setLocation("header");
                    newShapeMember.setLocationName(headerName);
                    newShapeMember.setDocumentation(doc);
                    shape.getMembers().put(shapeMemberName, newShapeMember);
                });
    }
}
