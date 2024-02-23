/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.s3;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.RestXmlCppClientGenerator;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import org.apache.commons.lang3.tuple.Pair;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class S3RestXmlCppClientGenerator extends RestXmlCppClientGenerator {

    private static Set<String> opsThatDoNotSupportVirtualAddressing = new HashSet<>();
    private static Set<String> opsThatDoNotSupportArnEndpoint = new HashSet<>();
    private static Set<String> s3CrtEnabledOps = new HashSet<>(); // All other ops are in fact regular SDK calls
    private static Set<String> bucketLocationConstraints = new HashSet<>();
    private Set<String> functionsWithEmbeddedErrors = ImmutableSet.of(
            "CompleteMultipartUploadRequest",
            "CopyObjectRequest",
            "UploadPartCopyRequest"
    );

    private final Set<String> opsThatDoNotSupportBucketArguments = ImmutableSet.of(
            "ListDirectoryBuckets",
            "WriteGetObjectResponse"
    );

    private static final Set<String> OPS_TO_SKIP_CHECKSUMS = ImmutableSet.of(
            "UploadPart"
    );

    private static final Set<String> REQUESTS_TO_OVERRIDE_STREAMING = ImmutableSet.of(
            "PutBucketPolicyRequest"
    );

    private static final Map<String, String> CHECKSUM_MEMBERS_ENUMS = ImmutableMap.of(
            "ChecksumCRC32", "CRC32",
            "ChecksumCRC32C", "CRC32C",
            "ChecksumSHA1", "SHA1",
            "ChecksumSHA256", "SHA256"
    );

    static {
        opsThatDoNotSupportVirtualAddressing.add("CreateBucket");
        opsThatDoNotSupportVirtualAddressing.add("ListBuckets");
        opsThatDoNotSupportVirtualAddressing.add("ListDirectoryBuckets");
        opsThatDoNotSupportVirtualAddressing.add("WriteGetObjectResponse");

        opsThatDoNotSupportArnEndpoint.add("CreateBucket");
        opsThatDoNotSupportArnEndpoint.add("ListBuckets");
        opsThatDoNotSupportArnEndpoint.add("ListDirectoryBuckets");
        opsThatDoNotSupportArnEndpoint.add("WriteGetObjectResponse");

        s3CrtEnabledOps.add("GetObject");
        s3CrtEnabledOps.add("PutObject");
        s3CrtEnabledOps.add("CopyObject");

        bucketLocationConstraints.add("us-east-1");
        bucketLocationConstraints.add("us-east-2");
        bucketLocationConstraints.add("us-west-1");
        bucketLocationConstraints.add("us-west-2");
        bucketLocationConstraints.add("eu-west-1");
        bucketLocationConstraints.add("eu-west-2");
        bucketLocationConstraints.add("eu-west-3");
        bucketLocationConstraints.add("eu-central-1");
        bucketLocationConstraints.add("ap-southeast-1");
        bucketLocationConstraints.add("ap-southeast-2");
        bucketLocationConstraints.add("ap-northeast-1");
        bucketLocationConstraints.add("ap-northeast-2");
        bucketLocationConstraints.add("ap-south-1");
        bucketLocationConstraints.add("sa-east-1");
        bucketLocationConstraints.add("cn-north-1");
        bucketLocationConstraints.add("cn-northwest-1");
        bucketLocationConstraints.add("ca-central-1");
        bucketLocationConstraints.add("us-gov-west-1");
        bucketLocationConstraints.add("eu-north-1");
        bucketLocationConstraints.add("us-iso-west-1");
    }

    public S3RestXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        // Add ID2 and RequestId to GetObjectResult
        hackGetObjectOutputResponse(serviceModel);

        //size and content length should ALWAYS be 64 bit integers, if they aren't set them as that now.
        serviceModel.getShapes().entrySet().stream().filter(shapeEntry -> shapeEntry.getKey().toLowerCase().equals("contentlength") || shapeEntry.getKey().toLowerCase().equals("size"))
                .forEach(shapeEntry -> shapeEntry.getValue().setType("long"));

        serviceModel.getOperations().values().stream()
                .filter(operationEntry ->
                        !opsThatDoNotSupportVirtualAddressing.contains(operationEntry.getName()))
                .forEach(operationEntry -> {
                    operationEntry.setVirtualAddressAllowed(true);
                    operationEntry.setVirtualAddressMemberName("Bucket");
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry ->
                        !opsThatDoNotSupportArnEndpoint.contains(operationEntry.getName()))
                .forEach(operationEntry -> {
                    operationEntry.setArnEndpointAllowed(true);
                    operationEntry.setArnEndpointMemberName("Bucket");
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getName().equals("WriteGetObjectResponse"))
                .forEach(operationEntry -> {
                    operationEntry.setRequiresServiceNameOverride(true);
                    operationEntry.setServiceNameOverride("s3-object-lambda");
                    operationEntry.setSupportsChunkedEncoding(true);
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getName().equals("WriteGetObjectResponse"))
                .forEach(operationEntry -> {
                    operationEntry.setRequiresServiceNameOverride(true);
                    operationEntry.setServiceNameOverride("s3-object-lambda");
                    operationEntry.setSupportsChunkedEncoding(true);
                });


        if (serviceModel.getMetadata().getServiceId().equalsIgnoreCase("S3") ||
                serviceModel.getMetadata().getServiceId().equalsIgnoreCase("S3-CRT")) {
            serviceModel.getOperations().values().stream()
                    .filter(operationEntry -> s3CrtEnabledOps.contains(operationEntry.getName()))
                    .forEach(operationEntry -> operationEntry.setS3CrtEnabled(true));
        }

        Shape locationConstraints = serviceModel.getShapes().get("BucketLocationConstraint");

        if (locationConstraints != null) {
            bucketLocationConstraints.stream()
                    .filter(enumEntry -> !locationConstraints.getEnumValues().contains(enumEntry))
                    .forEach(enumEntry -> locationConstraints.getEnumValues().add(enumEntry));
        }

        // We created a customization for transforming an incorrect "COMPLETE" to "COMPLETED" enum
        // value in the past https://github.com/aws/aws-sdk-cpp/issues/859. S3 is fixing their model
        // for other SDKs that have this modeling issue. They will include both COMPLETED and COMPLETE
        // in the model for other SDK backwards compat. For C++ we will remove the "COMPLETED" value
        // to preserve backwards compat and keep the existing customization.
        //
        // If "COMPLETE" is removed from the model we will execute none of this customization, and it
        // is the safe to remove it.
        final Shape replicationStatus = serviceModel.getShapes().get("ReplicationStatus");
        final boolean hasCompleted = replicationStatus.getEnumValues().contains("COMPLETED");
        final boolean hasComplete = replicationStatus.getEnumValues().contains("COMPLETE");
        if (hasCompleted && hasComplete) {
            // If we have both we remove the additional COMPLETED to preserve backwards compat
            replicationStatus.setEnumValues(replicationStatus.getEnumValues().stream()
                    .filter(value -> !"COMPLETED".equals(value))
                    .collect(Collectors.toList()));
        }
        if (hasComplete) {
            // Preserve existing customization to transform COMPLETE to COMPLETED
            int indexOfComplete = replicationStatus.getEnumValues().indexOf("COMPLETE");
            if (indexOfComplete != -1) {
                replicationStatus.getEnumValues().set(indexOfComplete, "COMPLETED");
            }
        }

        // Some S3 operations have embedded errors, and we need to search for errors in the response.
        serviceModel.getShapes().values().stream()
                .filter(shape -> functionsWithEmbeddedErrors.contains(shape.getName()))
                .forEach(shape -> shape.setEmbeddedErrors(true));

        serviceModel.getOperations().entrySet().stream()
                .filter(entry -> !opsThatDoNotSupportBucketArguments.contains(entry.getValue().getName()))
                .forEach(entry -> entry.getValue().setShouldUsePropertyBag(true));

        serviceModel.getOperations().entrySet().stream()
                .filter(entry -> OPS_TO_SKIP_CHECKSUMS.contains(entry.getValue().getName()))
                .forEach(entry -> entry.getValue().setShouldSkipChecksum(true));

        serviceModel.getShapes().values().stream()
                .filter(shape -> REQUESTS_TO_OVERRIDE_STREAMING.contains(shape.getName()))
                .forEach(shape -> shape.setOverrideStreaming(true));

        // Customized Log Information
        Shape logTagKeyShape = new Shape();
        logTagKeyShape.setName("customizedAccessLogTagKey");
        logTagKeyShape.setType("string");
        logTagKeyShape.setReferenced(true);
        HashSet<String> keyReferencedBy = new HashSet<String>();
        logTagKeyShape.setReferencedBy(keyReferencedBy);
        ShapeMember shapeMemberKey = new ShapeMember();
        shapeMemberKey.setShape(logTagKeyShape);

        Shape logTagValShape = new Shape();
        logTagValShape.setName("customizedAccessLogTagVal");
        logTagValShape.setType("string");
        logTagValShape.setReferenced(true);
        HashSet<String> valReferencedBy = new HashSet<String>();
        logTagValShape.setReferencedBy(valReferencedBy);
        ShapeMember shapeMemberVal = new ShapeMember();
        shapeMemberVal.setShape(logTagValShape);

        Shape logTagShape = new Shape();
        logTagShape.setName("customizedAccessLogTag");
        logTagShape.setType("map");
        logTagShape.setReferenced(true);
        HashSet<String> tagReferencedBy = new HashSet<String>();
        logTagShape.setReferencedBy(tagReferencedBy);
        logTagKeyShape.getReferencedBy().add(logTagShape.getName());
        logTagValShape.getReferencedBy().add(logTagShape.getName());
        logTagShape.setMapKey(shapeMemberKey);
        logTagShape.setMapValue(shapeMemberVal);

        ShapeMember shapeMemberTag = new ShapeMember();
        shapeMemberTag.setLocation("querystring");
        shapeMemberTag.setCustomizedQuery(true);
        shapeMemberTag.setShape(logTagShape);

        serviceModel.getOperations().values().forEach(operationEntry -> {
            if (operationEntry.getRequest() != null) {
                operationEntry.getRequest().getShape().getMembers().put(logTagShape.getName(), shapeMemberTag);
                operationEntry.getRequest().getShape().setCustomizedQuery(shapeMemberTag);
                logTagShape.getReferencedBy().add(operationEntry.getRequest().getShape().getName());
            }
        });

        serviceModel.getOperations().values().stream()
                .filter(Operation::hasRequest)
                .map(Operation::getRequest)
                .map(ShapeMember::getShape)
                .filter(requestShape -> requestShape.hasMember("ChecksumAlgorithm"))
                .forEach(requestShape -> requestShape.getMembers().values().stream()
                        .filter(member -> CHECKSUM_MEMBERS_ENUMS.containsKey(member.getShape().getName()))
                        .forEach(member -> {
                            member.setChecksumMember(true);
                            member.setChecksumEnumMember(CHECKSUM_MEMBERS_ENUMS.get(member.getShape().getName()));
                        }));

        return Stream.concat(generateS3ExpressFiles(serviceModel).stream(),
                        Arrays.stream(super.generateSourceFiles(serviceModel)))
                .toArray(SdkFileEntry[]::new);
    }

    protected void hackGetObjectOutputResponse(ServiceModel serviceModel) {
        Shape getObjectResult = serviceModel.getShapes().get("GetObjectResult");
        if (getObjectResult == null) return;

        Shape id2 = new Shape();
        id2.setName("ObjectId2");
        id2.setType("string");
        if (serviceModel.getShapes().get("ObjectId2") == null) {
            serviceModel.getShapes().put("ObjectId2", id2);
        } else {
            id2 = serviceModel.getShapes().get("ObjectId2");
        }

        Shape requestId = new Shape();
        requestId.setName("ObjectRequestId");
        requestId.setType("string");
        if (serviceModel.getShapes().get("ObjectRequestId") == null) {
            serviceModel.getShapes().put("ObjectRequestId", requestId);
        } else {
            requestId = serviceModel.getShapes().get("ObjectRequestId");
        }

        ShapeMember id2ShapeMember = new ShapeMember();
        id2ShapeMember.setShape(id2);
        id2ShapeMember.setLocation("header");
        id2ShapeMember.setLocationName("x-amz-id-2");

        ShapeMember requestIdShapeMember = new ShapeMember();
        requestIdShapeMember.setShape(requestId);
        requestIdShapeMember.setLocation("header");
        requestIdShapeMember.setLocationName("x-amz-request-id");


        if (getObjectResult.getMembers().get("Id2") == null) {
            getObjectResult.getMembers().put("Id2", id2ShapeMember);
        }
        if (getObjectResult.getMembers().get("RequestId") == null) {
            getObjectResult.getMembers().put("RequestId", requestIdShapeMember);
        }
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ClientHeader.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected List<SdkFileEntry> generateClientSourceFile(final List<ServiceModel> serviceModels) throws Exception {
        List<SdkFileEntry> sourceFiles = new ArrayList<>();
        for (int i = 0; i < serviceModels.size(); i++) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ClientSource.vm");

            Map<String, String> templateOverride = new HashMap<>();
            if ("S3-CRT".equalsIgnoreCase(serviceModels.get(i).getMetadata().getProjectName())) {
                templateOverride.put("ServiceClientSourceInit_template",
                        "/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/s3-crt/S3CrtServiceClientSourceInit.vm");
            }
            VelocityContext context = createContext(serviceModels.get(i));
            context.put("CppViewHelper", CppViewHelper.class);
            context.put("TemplateOverride", templateOverride);

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

    private List<SdkFileEntry> generateS3ExpressFiles(final ServiceModel serviceModel) {
        final String projectName = serviceModel.getMetadata().getProjectName();
        // Only generate S3Express files for s3.
        if (!ImmutableSet.of("s3", "s3-crt").contains(projectName)) {
            return ImmutableList.of();
        }
        final String vmFilePrefixFormat = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/%s";
        final String includePath = String.format("include/aws/%s/", projectName);
        final VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        Stream<Pair<String, String>> crtAdapters = Optional.of(projectName)
                .filter("s3-crt"::equals)
                .map(__ -> Stream.of(Pair.of(includePath + "S3CrtIdentityProviderAdapter.h", String.format(vmFilePrefixFormat, "S3CrtIdentityProviderAdapterHeader.vm")),
                        Pair.of("source/S3CrtIdentityProviderAdapter.cpp", String.format(vmFilePrefixFormat, "S3CrtIdentityProviderAdapterSource.vm"))))
                .orElse(Stream.of());

        return Stream.concat(
                        Stream.of(Pair.of(includePath + "S3ExpressIdentity.h", String.format(vmFilePrefixFormat, "S3ExpressIdentityHeader.vm")),
                                Pair.of(includePath + "S3ExpressIdentityProvider.h", String.format(vmFilePrefixFormat, "S3ExpressIdentityProviderHeader.vm")),
                                Pair.of(includePath + "S3ExpressSigner.h", String.format(vmFilePrefixFormat, "S3ExpressSignerHeader.vm")),
                                Pair.of(includePath + "S3ExpressSignerProvider.h", String.format(vmFilePrefixFormat, "S3ExpressSignerProviderHeader.vm")),
                                Pair.of("source/S3ExpressIdentityProvider.cpp", String.format(vmFilePrefixFormat, "S3ExpressIdentityProviderSource.vm")),
                                Pair.of("source/S3ExpressSigner.cpp", String.format(vmFilePrefixFormat, "S3ExpressSignerSource.vm")),
                                Pair.of("source/S3ExpressSignerProvider.cpp", String.format(vmFilePrefixFormat, "S3ExpressSignerProviderSource.vm"))),
                        crtAdapters)
                .map(codeGenPair -> makeFile(velocityEngine.getTemplate(codeGenPair.getValue()),
                        context,
                        codeGenPair.getKey(),
                        true))
                .collect(Collectors.toList());
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Template template = null;
        String fileName = "";

        switch (shapeEntry.getKey()) {
            case "GetBucketLocationResult": {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/GetBucketLocationResult.vm", StandardCharsets.UTF_8.name());
                fileName = "source/model/GetBucketLocationResult.cpp";
                break;
            }
            case "PutBucketNotificationConfigurationRequest": {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/PutBucketNotificationConfigurationRequest.vm", StandardCharsets.UTF_8.name());
                fileName = "source/model/PutBucketNotificationConfigurationRequest.cpp";
                break;
            }
            default:
                return super.generateModelSourceFile(serviceModel, shapeEntry);
        }

        Shape shape = shapeEntry.getValue();
        VelocityContext context = createContext(serviceModel);
        context.put("shape", shape);
        if (shape.isRequest()) {
            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName()) {
                    context.put("operation", op);
                    break;
                }
            }
        }
        context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
        context.put("CppViewHelper", CppViewHelper.class);
        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateErrorMarshallerHeaderFile(ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ErrorMarshallerHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sErrorMarshaller.h",
                serviceModel.getMetadata().getProjectName(), serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateErrorMarshallingSourceFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ErrorMarshallerSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sErrorMarshaller.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3EndpointEnumHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sEndpoint.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionSourceFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3EndpointEnumSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sEndpoint.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateARNHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ARNHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sARN.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateARNSourceFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ARNSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sARN.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateClientConfigurationFile(final ServiceModel serviceModel) throws Exception {
        if ("S3-CRT".equalsIgnoreCase(serviceModel.getMetadata().getProjectName())) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/s3-crt/S3CrtClientConfig.vm", StandardCharsets.UTF_8.name());

            VelocityContext context = createContext(serviceModel);
            context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

            String fileName = String.format("include/aws/%s/ClientConfiguration.h", serviceModel.getMetadata().getProjectName());

            return makeFile(template, context, fileName, true);
        }

        return null;
    }

    @Override
    protected void addRequestIdToResults(final ServiceModel serviceModel) {
        serviceModel.getShapes().values().stream()
                .filter(Shape::isResult)
                .filter(shape -> !shape.getMembers().containsKey("requestId"))
                .forEach(shape -> {
                    Shape requestId = new Shape();
                    requestId.setName("RequestId");
                    requestId.setType("string");
                    requestId.hasHeaderMembers();
                    requestId.setMembers(ImmutableMap.of());

                    ShapeMember requestIdMember = new ShapeMember();
                    requestIdMember.setShape(requestId);
                    requestIdMember.setLocation("header");
                    //S3 uses a different header location than other services.
                    requestIdMember.setLocationName("x-amz-request-id");
                    shape.getMembers().put("RequestId", requestIdMember);
                });
    }
}
