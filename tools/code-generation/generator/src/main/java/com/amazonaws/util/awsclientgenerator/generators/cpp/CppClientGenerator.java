/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Error;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.EnumModel;
import com.amazonaws.util.awsclientgenerator.generators.ClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Sets;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

import org.apache.commons.lang3.tuple.Pair;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.Set;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.stream.Collectors;

public abstract class CppClientGenerator implements ClientGenerator {

    private static final int OPERATIONS_PER_CLIENT_FILE = 100;
    private static final int MAX_OPERATIONS_IN_CLIENT_FILE = 200;

    protected final VelocityEngine velocityEngine;
    protected final Set<String> requestlessOperations = new HashSet<>();

    public CppClientGenerator() throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        velocityEngine.setProperty("context.scope_control.macro", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());

        velocityEngine.init();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        //Add requests objects for requests that have no modeled request shapes
        addRequestlessRequestObjectS(serviceModel);

        //for c++, the way serialization works, we want to remove all required fields so we can do a value has been set
        //check on all fields.
        serviceModel.getShapes().values().stream().filter(hasMembers -> hasMembers.getMembers() != null).forEach(shape ->
                shape.getMembers().values().stream().filter(ShapeMember::isRequired)
                    .forEach( member -> member.setRequired(false)));

        getOperationsToRemove().stream().forEach(operation -> serviceModel.getOperations().remove(operation));
        addEventStreamInitialResponse(serviceModel);
        addRequestIdToResults(serviceModel);
        List<SdkFileEntry> fileList = new ArrayList<>();
        final Map<String, CppShapeInformation> shapeInformationCache = serviceModel.getShapes().values().stream()
            .map(shape -> Pair.of(shape.getName(), new CppShapeInformation(shape, serviceModel)))
            .collect(Collectors.toMap(Pair::getKey, Pair::getValue));
        fileList.addAll(generateModelHeaderFiles(serviceModel, shapeInformationCache));
        fileList.addAll(generateModelSourceFiles(serviceModel, shapeInformationCache));
        fileList.add(generateClientHeaderFile(serviceModel));
        fileList.add(generateServiceClientModelInclude(serviceModel));

        AtomicInteger operationCount = new AtomicInteger();

        final List<ServiceModel> serviceModels;
        if (serviceModel.getOperations().size() > MAX_OPERATIONS_IN_CLIENT_FILE) {
            serviceModels = serviceModel.getOperations().entrySet().stream()
                    .collect(Collectors.groupingBy(x -> operationCount.getAndIncrement() / OPERATIONS_PER_CLIENT_FILE))
                    .entrySet().stream()
                    .map(operationList -> serviceModel.toBuilder()
                            .operations(operationList.getValue().stream()
                                    .collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue, (x, y) -> y, LinkedHashMap::new)))
                            .build())
                    .collect(Collectors.toList());
        } else {
            serviceModels = ImmutableList.of(serviceModel);
        }

        fileList.addAll(generateClientSourceFile(serviceModels));
        if (serviceModel.getEndpointRules() == null) {
            fileList.add(generateARNHeaderFile(serviceModel));
            fileList.add(generateARNSourceFile(serviceModel));
        }
        fileList.add(generateClientConfigurationFile(serviceModel));
        if (serviceModel.getEndpointRules() != null) {
            fileList.add(generateEndpointRulesHeaderFile(serviceModel));
            fileList.add(generateEndpointRulesSourceFile(serviceModel));
            fileList.add(generateEndpointProviderHeaderFile(serviceModel));
            fileList.add(generateEndpointProviderSourceFile(serviceModel));

            if (serviceModel.hasServiceSpecificClientConfig()) {
                fileList.add(generateServiceClientConfigurationHeaderFile(serviceModel));
                fileList.add(generateServiceClientConfigurationSourceFile(serviceModel));
            }
        } else {
            fileList.add(generateRegionHeaderFile(serviceModel));
            fileList.add(generateRegionSourceFile(serviceModel));
        }
        fileList.add(generateErrorsHeaderFile(serviceModel));
        fileList.add(generateErrorMarshallerHeaderFile(serviceModel));
        fileList.add(generateErrorSourceFile(serviceModel));
        fileList.add(generateErrorMarshallingSourceFile(serviceModel));
        fileList.add(generateServiceRequestHeader(serviceModel));
        if (serviceModel.getEndpointRules() != null) {
            fileList.add(generateServiceRequestSource(serviceModel));
        }
        fileList.add(generateExportHeader(serviceModel));
        fileList.add(generateCmakeFile(serviceModel));

        SdkFileEntry[] retArray = new SdkFileEntry[fileList.size()];
        return fileList.toArray(retArray);
    }

    protected void addEventStreamInitialResponse(final ServiceModel serviceModel) {
        serviceModel.getOperations().entrySet().stream()
            .filter(operation -> Objects.nonNull(operation.getValue().getResult()))
            .filter(operation -> operation.getValue().getResult().getShape().hasEventStreamMembers())
            .map(operation -> Shape.builder()
                .name(operation.getKey() + "InitialResponse")
                .type("structure")
                .isReferenced(true)
                .event(true)
                .eventPayloadType("structure")
                .members(
                    operation.getValue().getResult().getShape().getMembers().entrySet().stream()
                        .filter(member -> !member.getValue().getShape().isEventStream())
                        .collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue, (x, y) -> y, LinkedHashMap::new)))
                .build())
            .forEach(shape -> serviceModel.getShapes().put(shape.getName(), shape));
    }

    protected void addRequestIdToResults(final ServiceModel serviceModel) {
        // generate a RequestId in a Result
        Shape requestId = new Shape();
        requestId.setName("RequestId");
        requestId.setType("string");
        requestId.hasHeaderMembers();
        requestId.setMembers(ImmutableMap.of());
        ShapeMember requestIdMember = new ShapeMember();
        requestIdMember.setShape(requestId);
        requestIdMember.setLocation("header");
        requestIdMember.setLocationName("x-amzn-requestid");

        ShapeMember responseMetadataMember = new ShapeMember();
        if (serviceModel.getMetadata().isAwsQueryCompatible()) {
            // duplicate the RequestId under ResponseMetadata object in a Result for legacy compatibility with XML clients
            responseMetadataMember.setRequired(true);
            responseMetadataMember.setValidationNeeded(true);
            responseMetadataMember.setLocation("header");
            responseMetadataMember.setLocationName("x-amzn-requestid");
            Shape responseMetadataShape = new Shape();
            responseMetadataMember.setShape(responseMetadataShape);

            responseMetadataShape.setName("ResponseMetadata");
            responseMetadataShape.setReferenced(true);
            responseMetadataShape.setType("structure");

            Shape stringShape = new Shape();
            stringShape.setName("RequestId");
            stringShape.setType("string");

            ShapeMember stringShapeMember = new ShapeMember();
            stringShapeMember.setShape(stringShape);
            stringShapeMember.setLocation("header");
            stringShapeMember.setLocationName("x-amzn-requestid");
            responseMetadataShape.setMembers(new HashMap<>());
            responseMetadataShape.getMembers().put("RequestId", stringShapeMember);

            if(!serviceModel.getShapes().containsKey("ResponseMetadata")) {
                serviceModel.getShapes().put("ResponseMetadata", responseMetadataShape);
            }
        }

        serviceModel.getShapes().values().stream()
                .filter(Shape::isResult)
                .filter(shape -> !shape.getMembers().containsKey("requestId"))
                .forEach(shape -> {
                    shape.getMembers().put("RequestId", requestIdMember);
                    if (serviceModel.getMetadata().isAwsQueryCompatible() &&
                            !shape.getMembers().containsKey("ResponseMetadata")) {
                        shape.getMembers().put("ResponseMetadata", responseMetadataMember);
                    }
                });
    }

    private static Set<String> servicesMissingMultiAuthMRAPTrait = ImmutableSet.of(
            "S3",
            "S3-CRT",
            "CloudFront KeyValueStore",
            "SESv2",
            "EventBridge");

    private void CheckAndEnableSigV4A(final ServiceModel serviceModel, VelocityContext context) {
        List<String> c2jAuthList = serviceModel.getMetadata().getAuth();
        String serviceId = serviceModel.getMetadata().getServiceId();
        if (c2jAuthList != null && c2jAuthList.contains("aws.auth#sigv4a") ||
             servicesMissingMultiAuthMRAPTrait.contains(serviceId)) {
            context.put("multiRegionAccessPointSupported", true);
        }
        // todo: remove these checks later
        if (!context.containsKey("multiRegionAccessPointSupported")) {
            boolean hasSigV4AOperation = serviceModel.getOperations().values().stream()
                    .anyMatch(op -> op.getAuth() != null && op.getAuth().contains("aws.auth#sigv4a"));

            if (serviceModel.getEndpointRules() != null &&
                    (serviceModel.getEndpointRules().contains("\"sigv4a\"") || hasSigV4AOperation)) {
                throw new RuntimeException("Endpoint rules or operation reference sigv4a auth scheme but c2j model " + serviceId +
                        " does not list aws.auth#sigv4a as a supported auth!");
            }
        }

        if (c2jAuthList != null) {
            boolean hasSigV4AndBearer = c2jAuthList.contains("smithy.api#httpBearerAuth") &&
                    (c2jAuthList.contains("aws.auth#sigv4a") || c2jAuthList.contains("aws.auth#sigv4"));
            /*TODO: re-enable after smithy identity migration is complete
            if (!serviceModel.isUseSmithyClient() && hasSigV4AndBearer) {
                throw new RuntimeException("SDK Clients cannot mix AWS and Bearer Credentials without enabling Smithy Identity!");
            }
            */
        }
    }

    protected final VelocityContext createContext(final ServiceModel serviceModel) {
        VelocityContext context = new VelocityContext();
        context.put("nl", System.lineSeparator());
        context.put("serviceModel", serviceModel);
        context.put("input.encoding", StandardCharsets.UTF_8.name());
        context.put("output.encoding", StandardCharsets.UTF_8.name());
        context.put("nullChar", '\0');

        CheckAndEnableSigV4A(serviceModel, context);

        return context;
    }

    protected List<SdkFileEntry> generateModelHeaderFiles(final ServiceModel serviceModel,
                                                          final Map<String, CppShapeInformation> shapeInformationCache)
    {
        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();

        for (Map.Entry<String, Shape> shapeEntry : serviceModel.getShapes().entrySet()) {
            SdkFileEntry sdkFileEntry = generateModelHeaderFile(serviceModel, shapeEntry, shapeInformationCache);
            if (sdkFileEntry != null) {
                sdkFileEntries.add(sdkFileEntry);
            }

            sdkFileEntry = generateEventStreamHandlerHeaderFile(serviceModel, shapeEntry, shapeInformationCache);
            if (sdkFileEntry != null) {
                sdkFileEntries.add(sdkFileEntry);
            }
        }

        return sdkFileEntries;
    }

    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, Map<String, CppShapeInformation> shapeInformationCache) {
        Shape shape = shapeEntry.getValue();
        if (!(shape.isRequest() || shape.isEnum() || shape.hasEventPayloadMembers() && shape.hasBlobMembers())) {
            return null;
        }

        Template template = null;
        VelocityContext context = createContext(serviceModel);

        if (shape.isRequest()) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/RequestHeader.vm", StandardCharsets.UTF_8.name());
            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName())
                {
                    context.put("operation", op);
                    context.put("operationName", key);
                    if((op.getResult() != null) && op.getResult().getShape().hasEventStreamMembers())
                    {
                        context.put("hasEventStreamResponse", true);
                    }
                    break;
                }
            }
        }
        else if (shape.isEnum()) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ModelEnumHeader.vm", StandardCharsets.UTF_8.name());
            EnumModel enumModel = new EnumModel(serviceModel.getMetadata().getNamespace(), shapeEntry.getKey(), shape.getEnumValues());
            context.put("enumModel", enumModel);
        }
        else if (shape.isEvent() && "blob".equals(shape.getEventPayloadType())) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EventHeader.vm", StandardCharsets.UTF_8.name());
            shape.getMembers().entrySet().stream().filter(memberEntry -> memberEntry.getKey().equals(shape.getEventPayloadMemberName())).forEach(blobMemberEntry -> context.put("blobMember", blobMemberEntry));
        }
        context.put("shape", shape);
        context.put("typeInfo", shapeInformationCache.get(shape.getName()));
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/model/%s.h", serviceModel.getMetadata().getProjectName(),
                shapeEntry.getKey());
        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateEventStreamHandlerHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, Map<String, CppShapeInformation> shapeInformationCache) {
        Shape shape = shapeEntry.getValue();
        if (shape.isRequest()) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/RequestEventStreamHandlerHeader.vm", StandardCharsets.UTF_8.name());
            VelocityContext context = createContext(serviceModel);

            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();

                if (op.getRequest() != null &&
                    op.getRequest().getShape().getName().equals(shape.getName()) &&
                    op.getResult() != null) {
                    if (op.getResult().getShape().hasEventStreamMembers()) {
                        for (Map.Entry<String, ShapeMember> shapeMemberEntry : op.getResult().getShape().getMembers().entrySet()) {
                            if (shapeMemberEntry.getValue().getShape().isEventStream()) {
                                context.put("eventStreamShape", shapeMemberEntry.getValue().getShape());
                                context.put("operation", op);
                                context.put("shape", shape);
                                context.put("typeInfo", shapeInformationCache.get(shape.getName()));
                                context.put("CppViewHelper", CppViewHelper.class);

                                String fileName = String.format("include/aws/%s/model/%sHandler.h", serviceModel.getMetadata().getProjectName(), key);
                                return makeFile(template, context, fileName, true);
                            }
                        }
                    }
                }
            }
        }

        return null;
    }

    protected List<SdkFileEntry> generateModelSourceFiles(final ServiceModel serviceModel, final Map<String, CppShapeInformation> shapeInformationCache) {

        return serviceModel.getShapes().entrySet().stream()
                .filter(entry -> Objects.nonNull(entry.getValue()))
                .map(entry -> Collections.unmodifiableList(Arrays.asList(generateModelSourceFile(serviceModel, entry, shapeInformationCache),
                        generateEventStreamHandlerSourceFile(serviceModel, entry, shapeInformationCache))))
                .flatMap(Collection::stream)
                .filter(Objects::nonNull)
                .collect(Collectors.toList());
    }

    protected abstract SdkFileEntry generateErrorMarshallerHeaderFile(ServiceModel serviceModel) throws Exception;

    //these probably don't need to be abstract, since xml and json implementations are not considered here.
    protected abstract SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception;

    protected SdkFileEntry generateServiceClientModelInclude(ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/common/model/ServiceClientModelHeaderInclude.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        context.put("RequestlessOperations", requestlessOperations);

        String fileName = String.format("include/aws/%s/%sServiceClientModel.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected abstract List<SdkFileEntry> generateClientSourceFile(final List<ServiceModel> serviceModels) throws Exception;

    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, final Map<String, CppShapeInformation> shapeInformationCache) {
        Shape shape = shapeEntry.getValue();
        Template template;
        VelocityContext context = createContext(serviceModel);

        if (shape.isEnum()) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EnumSource.vm", StandardCharsets.UTF_8.name());
            EnumModel enumModel = new EnumModel(serviceModel.getMetadata().getNamespace(), shapeEntry.getKey(), shape.getEnumValues());
            context.put("enumModel", enumModel);

            context.put("shape", shape);
            context.put("typeInfo", shapeInformationCache.get(shape.getName()));
            context.put("CppViewHelper", CppViewHelper.class);

            String fileName = String.format("source/model/%s.cpp", shapeEntry.getKey());
            return makeFile(template, context, fileName, true);
        }

        if (shape.isRequest()) {
            context.put("operation", serviceModel.getOperationForRequestShapeName(shape.getName()));
        }

        return null;
    }

    protected SdkFileEntry generateEventStreamHandlerSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry, final Map<String, CppShapeInformation> shapeInformationCache) {
        Shape shape = shapeEntry.getValue();
        if (shape.isRequest()) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlRequestEventStreamHandlerSource.vm", StandardCharsets.UTF_8.name());
            VelocityContext context = createContext(serviceModel);

            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName() && op.getResult() != null) {
                    if (op.getResult().getShape().hasEventStreamMembers()) {
                        for (Map.Entry<String, ShapeMember> shapeMemberEntry : op.getResult().getShape().getMembers().entrySet()) {
                            if (shapeMemberEntry.getValue().getShape().isEventStream()) {
                                context.put("eventStreamShape", shapeMemberEntry.getValue().getShape());
                                context.put("operation", op);
                                context.put("shape", shape);
                                context.put("typeInfo", shapeInformationCache.get(shape.getName()));
                                context.put("CppViewHelper", CppViewHelper.class);

                                String fileName = String.format("source/model/%sHandler.cpp", key);
                                return makeFile(template, context, fileName, true);
                            }
                        }
                    }
                }
            }
        }

        return null;
    }

    protected SdkFileEntry generateErrorSourceFile(final ServiceModel serviceModel) throws Exception {

        Set<String> retryableErrors = getRetryableErrors();
        for(Error error : serviceModel.getServiceErrors()) {
           if(retryableErrors.contains(error.getName())) {
               error.setRetryable(true);
           }
        }

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ServiceErrorsSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("ErrorFormatter", ErrorFormatter.class);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sErrors.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    protected Set<String> getRetryableErrors() {
        HashSet<String> exceptions = new HashSet<>();
        exceptions.add("Throttling");
        exceptions.add("ThrottlingException");
        exceptions.add("ThrottledException");
        exceptions.add("RequestThrottledException");
        exceptions.add("TooManyRequestsException");
        exceptions.add("ProvisionedThroughputExceededException");
        exceptions.add("TransactionInProgressException");
        exceptions.add("RequestLimitExceeded");
        exceptions.add("BandwidthLimitExceeded");
        exceptions.add("LimitExceededException");
        exceptions.add("RequestThrottled");
        exceptions.add("SlowDown");
        exceptions.add("PriorRequestNotComplete");
        exceptions.add("EC2ThrottledException");
        return exceptions;
    }

    protected SdkFileEntry generateErrorMarshallingSourceFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ServiceErrorMarshallerSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sErrorMarshaller.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateErrorsHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ErrorsHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        ErrorFormatter errorFormatter = new ErrorFormatter();
        context.put("errorConstNames", errorFormatter.formatErrorConstNames(serviceModel.getNonCoreServiceErrors()));
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sErrors.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateARNHeaderFile(final ServiceModel serviceModel) throws Exception {
        // no-op for services other than S3.
        return null;
    }

    protected SdkFileEntry generateARNSourceFile(final ServiceModel serviceModel) throws Exception {
        // no-op for services other than S3.
        return null;
    }

    protected SdkFileEntry generateClientConfigurationFile(final ServiceModel serviceModel) throws Exception {
        // no-op for services other than S3Crt.
        return null;
    }

    private SdkFileEntry generateServiceRequestHeader(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/AbstractServiceRequestHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sRequest.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    private SdkFileEntry generateServiceRequestSource(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/AbstractServiceRequestSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sRequest.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateRegionHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EndpointEnumHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sEndpoint.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateRegionSourceFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EndpointEnumSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("endpointMapping", computeEndpointMappingForService(serviceModel));

        String fileName = String.format("source/%sEndpoint.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateEndpointRulesHeaderFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointRulesHeader.vm";
        String fileName = String.format("include/aws/%s/%sEndpointRules.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateEndpointRulesSourceFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointRulesSource.vm";
        String fileName = String.format("source/%sEndpointRules.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateEndpointProviderHeaderFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointProviderHeader.vm";
        String fileName = String.format("include/aws/%s/%sEndpointProvider.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateEndpointProviderSourceFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointProviderSource.vm";
        String fileName = String.format("source/%sEndpointProvider.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateServiceClientConfigurationHeaderFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/common/ServiceClientConfigurationHeader.vm";
        String fileName = String.format("include/aws/%s/%sClientConfiguration.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateServiceClientConfigurationSourceFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/common/ServiceClientConfigurationSource.vm";
        String fileName = String.format("source/%sClientConfiguration.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected Map<String, String> computeEndpointMappingForService(ServiceModel serviceModel) {
        Map<String, String> endpoints = new HashMap<>();

        if (serviceModel.getServiceName().equals("budgets") ||
            serviceModel.getServiceName().equals("cloudfront") ||
            serviceModel.getServiceName().equals("importexport") ||
            serviceModel.getServiceName().equals("savingsplans") ||
            serviceModel.getServiceName().equals("waf"))
        {
            serviceModel.getMetadata().setGlobalEndpoint(serviceModel.getServiceName() + ".amazonaws.com");

        } else if (serviceModel.getServiceName().equals("ce")) {
            serviceModel.getMetadata().setGlobalEndpoint("ce.us-east-1.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("chime")) {
            serviceModel.getMetadata().setGlobalEndpoint("chime.us-east-1.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("iam")) {
            endpoints.put("cn-north-1", "iam.cn-north-1.amazonaws.com.cn");
            endpoints.put("cn-northwest-1", "iam.cn-north-1.amazonaws.com.cn");
            endpoints.put("us-gov-east-1", "iam.us-gov.amazonaws.com");
            endpoints.put("us-gov-west-1", "iam.us-gov.amazonaws.com");
            endpoints.put("us-iso-east-1", "iam.us-iso-east-1.c2s.ic.gov");
            endpoints.put("us-isob-east-1", "iam.us-isob-east-1.sc2s.sgov.gov");
            serviceModel.getMetadata().setGlobalEndpoint("iam.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("kms")) {
            endpoints.put("us-iso-east-1", "kms-fips.us-iso-east-1.c2s.ic.gov");
            endpoints.put("us-isob-east-1", "kms-fips.us-isob-east-1.sc2s.sgov.gov");
            endpoints.put("us-iso-west-1", "kms-fips.us-iso-west-1.c2s.ic.gov");

        } else if (serviceModel.getServiceName().equals("organizations")) {
            endpoints.put("us-gov-west-1", "organizations.us-gov-west-1.amazonaws.com");
            endpoints.put("fips-aws-global", "organizations-fips.us-east-1.amazonaws.com");
            serviceModel.getMetadata().setGlobalEndpoint("organizations.us-east-1.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("route53")) {
            endpoints.put("us-gov-west-1", "route53.us-gov.amazonaws.com");
            endpoints.put("us-iso-east-1", "route53.c2s.ic.gov");
            endpoints.put("fips-aws-global", "route53-fips.amazonaws.com");
            serviceModel.getMetadata().setGlobalEndpoint("route53.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("shield")) {
            endpoints.put("fips-aws-global", "shield-fips.us-east-1.amazonaws.com");
        }

        else if (serviceModel.getServiceName().equals("sts")) {
             serviceModel.getMetadata().setGlobalEndpoint(null);
        }

        return endpoints;
    }

    private SdkFileEntry generateExportHeader(final ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/ServiceExportHeader.vm";
        String fileName = String.format("include/aws/%s/%s_EXPORTS.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    private SdkFileEntry generateCmakeFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/CMakeFile.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        return makeFile(template, context, "CMakeLists.txt", false);
    }

    private SdkFileEntry generateSingleSourceFile(final ServiceModel serviceModel, final String templatePath, final String dstFileName) {
        Template template = velocityEngine.getTemplate(templatePath, StandardCharsets.UTF_8.name());
        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));
        return makeFile(template, context, dstFileName, true);
    }

    protected final SdkFileEntry makeFile(Template template, VelocityContext context, String path, boolean needsBOM) {
        StringWriter sw = new StringWriter();
        template.merge(context, sw);

        try {
            sw.close();
        } catch (IOException e) {
            throw new SourceGenerationFailedException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
        sw.flush();
        StringBuffer sb = new StringBuffer();
        sb.append(sw.toString());

        SdkFileEntry file = new SdkFileEntry();
        file.setPathRelativeToRoot(path);
        file.setSdkFile(sb);
        file.setNeedsByteOrderMark(needsBOM);
        return file;
    }

    protected Set<String> getOperationsToRemove(){
        return new HashSet<String>();
    }

    protected SdkFileEntry generateClientSmithyHeaderFile(final ServiceModel serviceModel) {
        Template template = velocityEngine.getTemplate("com/amazonaws/util/awsclientgenerator/velocity/cpp/smithy/SmithyClientHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        context.put("RequestlessOperations", requestlessOperations);
        selectAuthschemeResolver(serviceModel, context);
        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    private void selectAuthschemeResolver(final ServiceModel serviceModel, VelocityContext context)
    {
        if(serviceModel.getAuthSchemes().size() > 1)
        {
            context.put("AuthSchemeResolver", "SigV4MultiAuthSchemeResolver");
        }
        else
        {
            Optional<String> firstAuthScheme = serviceModel.getAuthSchemes().stream().filter(entry->ResolverMapping.containsKey(entry)).findFirst();

            if(firstAuthScheme.isPresent())
            {
                context.put("AuthSchemeResolver", ResolverMapping.get(firstAuthScheme.get()));
            }
            else
            {
                throw new RuntimeException(String.format("authSchemes '%s'",serviceModel.getAuthSchemes().stream().collect(Collectors.toList())));
            }
        }
        context.put("AuthSchemeVariants", serviceModel.getAuthSchemes().stream().map(this::mapAuthSchemes).collect(Collectors.joining(",")));
    }

    protected SdkFileEntry GenerateSmithyClientSourceFile(final ServiceModel serviceModel, int i, Optional<String> templateFile) {

        String templatePath = templateFile.orElse("/com/amazonaws/util/awsclientgenerator/velocity/cpp/smithy/SmithyClientSource.vm");
        Template template = velocityEngine.getTemplate(templatePath, StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        selectAuthschemeResolver(serviceModel, context);
        context.put("AuthSchemeMapEntries", createAuthSchemeMapEntries(serviceModel));

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

    protected SdkFileEntry GenerateLegacyClientSourceFile(final ServiceModel serviceModel, int i){

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientSource.vm", StandardCharsets.UTF_8.name());

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

    private static final Map<String, String> AuthSchemeMapping = ImmutableMap.of(
            "aws.auth#sigv4", "smithy::SigV4AuthScheme",
            "aws.auth#sigv4a", "smithy::SigV4aAuthScheme",
            "bearer", "smithy::BearerTokenAuthScheme",
            "v4","smithy::SigV4AuthScheme",
            "sigv4-s3express","S3ExpressSigV4AuthScheme",
            "v2","smithy::SigV4AuthScheme"
    );

    protected String mapAuthSchemes(final String authSchemeName) {
        if (AuthSchemeMapping.containsKey(authSchemeName)) {
            return AuthSchemeMapping.get(authSchemeName);
        }
        throw new RuntimeException(String.format("Unsupported authScheme '%s'", authSchemeName));
    }


    private static final Map<String, String> SchemeIdMapping = ImmutableMap.of(
            "aws.auth#sigv4", "smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption",
            "aws.auth#sigv4a", "smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption",
            "bearer", "smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption",
            "v4", "smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption",
            "sigv4-s3express", "S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption",
            "v2", "smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption"
    );

    protected static final Map<String, String> ResolverMapping = ImmutableMap.of(
            "aws.auth#sigv4", "SigV4AuthSchemeResolver",
            "aws.auth#sigv4a", "SigV4aAuthSchemeResolver",
            "bearer", "BearerTokenAuthSchemeResolver",
            "v4", "SigV4AuthSchemeResolver",
            "v2", "SigV4AuthSchemeResolver"
    );


    private static final String SchemeMapFormat = "%s.schemeId, %s";
    protected List<String> createAuthSchemeMapEntries(final ServiceModel serviceModel) {
        return  getSupportedAuthSchemes(serviceModel).stream()
                .map(authScheme -> String.format(SchemeMapFormat, SchemeIdMapping.get(authScheme), AuthSchemeMapping.get(authScheme)))
                .collect(Collectors.toList());
    }

    protected List<String> getSupportedAuthSchemes(final ServiceModel serviceModel) {
        return serviceModel.getAuthSchemes().stream()
                .collect(Collectors.toList());
    }

    private void addRequestlessRequestObjectS(final ServiceModel serviceModel) {
        serviceModel.getOperations().values().stream()
                .filter(operation -> !operation.hasRequest() || operation.getRequest().getShape().getMembers().values().stream().noneMatch(ShapeMember::isRequired))
                .forEach(operation -> {
                    if (!operation.hasRequest()) {
                        final Shape requestShape = Shape.builder()
                                .name(operation.getName() + "Request")
                                .referencedBy(Sets.newHashSet(operation.getName()))
                                .type("structure")
                                .isRequest(true)
                                .isReferenced(true)
                                .members(ImmutableMap.of())
                                .enumValues(ImmutableList.of())
                                .build();
                        serviceModel.getShapes().put(requestShape.getName(), requestShape);
                        operation.addRequest(ShapeMember.builder().shape(requestShape).build());
                    }
                    operation.setRequestlessDefault(true);
                    requestlessOperations.add(operation.getName());
                });
    }

    //dfs
    protected static void findNestedField(JsonElement element, String targetField, List<JsonElement> results) {
        if (element == null || element.isJsonNull()) {
            return;
        }

        if (element.isJsonObject()) {
            JsonObject obj = element.getAsJsonObject();

            if (obj.has(targetField)) {
                JsonElement targetElement = obj.get(targetField);

                results.add(targetElement);
                //assumption is target field wont contain internal target fields
                return;
            }

            //recurse
            obj.entrySet().stream().forEach(entry -> {
                findNestedField(entry.getValue(), targetField, results);
            });

        } else if (element.isJsonArray()) {
            element.getAsJsonArray().forEach(entry ->
            {
                findNestedField(entry, targetField, results);
            });
        }
    }

    protected void updateAuthSchemesFromEndpointRules(ServiceModel serviceModel, String rawjson)
    {
        if(rawjson == null || rawjson.isEmpty())
        {
            return;
        }

        List<String> authschemes =  new ArrayList<>(serviceModel.getAuthSchemes());
        Set<String> authSchemeSet = new HashSet<>(authschemes);

        // parse the JSON into a JsonElement tree
        JsonElement jsonElement = JsonParser.parseString(rawjson);

        // search for the "authSchemes" field in endpoint rules recursively to get all authschemes
        List<JsonElement> authSchemes = new ArrayList<>();
        findNestedField(jsonElement, "authSchemes", authSchemes);
        // Extract authschemes
        authSchemes.stream()
            .filter(entry -> entry.isJsonArray()) // Check if the element is a JsonArray
            .map(JsonElement::getAsJsonArray) // Convert to JsonArray
            .forEach(arrelem -> {
                arrelem.forEach(entry -> { // Iterate over each element in the JsonArray
                    // Array element with key "name" has the auth scheme name as value
                    if (entry.isJsonObject() && entry.getAsJsonObject().has("name")) {
                        JsonElement elem = entry.getAsJsonObject().get("name");
                        if (elem.isJsonPrimitive() && elem.getAsJsonPrimitive().isString()) {
                            String authscheme = elem.getAsJsonPrimitive().getAsString();
                            if (AuthSchemeNameMapping.containsKey(authscheme)) {
                                authscheme = AuthSchemeNameMapping.get(authscheme);
                            }
                            if (!authSchemeSet.contains(authscheme)) {
                                authschemes.add(authscheme);
                                authSchemeSet.add(authscheme);
                            }
                        }
                    }
                });
            });
        serviceModel.setAuthSchemes(authschemes);
    }


    protected void updateAuthSchemesFromOperations(ServiceModel serviceModel)
    {
        List<String> authschemes =  new ArrayList<>(serviceModel.getAuthSchemes());
        Set<String> authSchemeSet = new HashSet<>(authschemes);

        serviceModel.getOperations().values().forEach(operation -> {
            if (operation.getAuth() == null) {
                return;
            }
            operation.getAuth().forEach(authScheme -> {
                if(AuthSchemeNameMapping.containsKey(authScheme)) {
                    authScheme = AuthSchemeNameMapping.get(authScheme);
                }
                // only add if it's not already present in the authSchemeSet
                if (!authSchemeSet.contains(authScheme)) {
                    serviceModel.getAuthSchemes().add(authScheme);
                    authSchemeSet.add(authScheme);
                }
            });
        });
        serviceModel.setAuthSchemes(authschemes);
    }
    //auth schemes can be named differently in endpoints/operations, this is a mapping
    private static final Map<String, String> AuthSchemeNameMapping = ImmutableMap.of(
        "v4", "aws.auth#sigv4",
        "sigv4", "aws.auth#sigv4",
        "sigv4a","aws.auth#sigv4a"
    );
}
