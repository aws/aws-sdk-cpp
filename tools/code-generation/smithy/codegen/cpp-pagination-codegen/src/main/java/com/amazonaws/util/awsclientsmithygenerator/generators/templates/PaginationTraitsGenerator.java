/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.templates;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.PaginatedTrait;
import software.amazon.smithy.aws.traits.ServiceTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriterDelegator;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import java.util.*;
import java.util.Arrays;

public class PaginationTraitsGenerator {
    private final PluginContext context;
    private final ServiceShape service;
    private final List<OperationData<PaginatedTrait>> paginatedOps;
    private final String c2jServiceName;

    private final CppWriterDelegator writerDelegator;

    public PaginationTraitsGenerator(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, String c2jServiceName) {
        this.context = context;
        this.service = service;
        this.paginatedOps = paginatedOps;
        this.c2jServiceName = c2jServiceName;
        this.writerDelegator = new CppWriterDelegator(context.getFileManifest());
    }

    public void write() {
        String serviceName = ServiceNameUtil.getServiceName(service);

        for (OperationData<PaginatedTrait> data : paginatedOps) {
            String fileName = "include/aws/" + c2jServiceName + "/model/pagination/" + data.getOperation().getId().getName() + "PaginationTraits.h";
            
            writerDelegator.useFileWriter(fileName, writer -> {
                generateTraitsHeader(writer, data, serviceName);
            });
        }
        
        writerDelegator.flushWriters();
    }

    private void generateTraitsHeader(CppWriter writer, OperationData<PaginatedTrait> data, String serviceName) {
        OperationShape op = data.getOperation();
        PaginatedTrait trait = data.getTrait();
        String opName = op.getId().getName();
        
        // Header comment
        writer.write("/**")
              .write(" * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.")
              .write(" * SPDX-License-Identifier: Apache-2.0.")
              .write(" */")
              .write("")
              .write("#pragma once");
        
        // Includes - detect suffix like C2J renameShape logic
        String resultSuffix = getResultSuffix(opName);
        String capitalizedServiceName = ServiceNameUtil.getServiceNameUpperCamel(service);
        String requestFileName = ServiceNameUtil.getClientMethodName(opName, c2jServiceName) + "Request";
        String resultFileName = ServiceNameUtil.getClientMethodName(opName, c2jServiceName) + resultSuffix;
        writer.writeInclude("aws/" + c2jServiceName + "/" + capitalizedServiceName + "_EXPORTS.h")
              .writeInclude("aws/" + c2jServiceName + "/model/" + requestFileName + ".h")
              .writeInclude("aws/" + c2jServiceName + "/model/" + resultFileName + ".h")
              .writeInclude("aws/" + c2jServiceName + "/" + capitalizedServiceName + "Client.h")
              .write("");
        
        // Namespaces
        writer.writeNamespaceOpen("Aws")
              .writeNamespaceOpen(serviceName)
              .writeNamespaceOpen("Pagination")
              .write("");
        
        // Struct definition
        writer.openBlock("struct " + opName + "PaginationTraits\n{", "};", () -> {
            // Use detected suffix to match C2J renameShape logic
            String methodName = ServiceNameUtil.getClientMethodName(opName, c2jServiceName);
            writer.write("    using RequestType = Model::$LRequest;", methodName)
                  .write("    using ResultType = Model::$L$L;", methodName, resultSuffix)
                  .write("    using OutcomeType = Model::$LOutcome;", methodName)
                  .write("    using ClientType = $LClient;", capitalizedServiceName)
                  .write("");
            
            // Invoke method
            writer.openBlock("    static OutcomeType Invoke(ClientType& client, const RequestType& request)\n    {", "    }", () -> {
                writer.write("        return client.$L(request);", methodName);
            });
            
            writer.write("");
            
            // HasMoreResults method
            writer.openBlock("    static bool HasMoreResults(const ResultType& result)\n    {", "    }", () -> {
                if (trait.getOutputToken().isPresent()) {
                    String outToken = trait.getOutputToken().get();
                    String nestedListMember = getNestedListMember(op);
                    String tokenName = extractTokenName(outToken);
                    if (nestedListMember != null) {
                        writer.write("        return !result.Get$L().Get$L().empty();", capitalize(nestedListMember), capitalize(tokenName));
                    } else if (isNumericToken(op, outToken)) {
                        writer.write("        return result.Get$L() != 0;", capitalize(outToken));
                    } else {
                        writer.write("        return !result.Get$L().empty();", capitalize(outToken));
                    }
                } else {
                    // TODO: Check how legacy C2J code generation handles service-level pagination
                    // This is a temporary fix for AccessAnalyzer which uses service-level pagination config.
                    // We should investigate how the legacy generator in C2jModelToGeneratorModelTransformer
                    // or other legacy components handle service-level vs operation-level pagination traits
                    // and implement a more comprehensive solution that matches that behavior.
                    String serviceLevelOutputToken = getServiceLevelOutputToken();
                    if (serviceLevelOutputToken != null) {
                        if (serviceLevelOutputToken.toLowerCase().contains("marker") || serviceLevelOutputToken.toLowerCase().contains("number")) {
                            writer.write("        return result.Get$L() != 0;", capitalize(serviceLevelOutputToken));
                        } else {
                            writer.write("        return !result.Get$L().empty();", capitalize(serviceLevelOutputToken));
                        }
                    } else {
                        writer.write("        return result.GetIsTruncated();");
                    }
                }
            });
            
            writer.write("");
            
            // SetNextRequest method
            writer.openBlock("    static void SetNextRequest(const ResultType& result, RequestType& request)\n    {", "    }", () -> {
                String inToken = null;
                String outToken = null;
                
                if (trait.getInputToken().isPresent() && trait.getOutputToken().isPresent()) {
                    inToken = trait.getInputToken().get();
                    outToken = trait.getOutputToken().get();
                } else {
                    // TODO: Check how legacy C2J code generation handles service-level pagination
                    // This is a temporary fix for AccessAnalyzer which uses service-level pagination config.
                    // We should investigate how the legacy generator in C2jModelToGeneratorModelTransformer
                    // or other legacy components handle service-level vs operation-level pagination traits
                    // and implement a more comprehensive solution that matches that behavior.
                    String serviceLevelInputToken = getServiceLevelInputToken();
                    String serviceLevelOutputToken = getServiceLevelOutputToken();
                    if (serviceLevelInputToken != null && serviceLevelOutputToken != null) {
                        inToken = serviceLevelInputToken;
                        outToken = serviceLevelOutputToken;
                    }
                }
                
                if (inToken != null && outToken != null) {
                    String nestedListMember = getNestedListMember(op);
                    String tokenName = extractTokenName(outToken);
                    if (nestedListMember != null) {
                        writer.write("        request.Set$L(result.Get$L().Get$L());", capitalize(inToken), capitalize(nestedListMember), capitalize(tokenName));
                    } else {
                        writer.write("        request.Set$L(result.Get$L());", capitalize(inToken), capitalize(outToken));
                    }
                } else {
                    // TODO: Check AWS SDK C++ standard for handling null pagination tokens
                    // Should we throw an exception, log a warning, or silently ignore?
                    // Verify behavior with other AWS SDK implementations.
                    writer.write("        (void)result; (void)request; // Unused parameters");
                }
            });
        });
        
        writer.write("")
              .writeNamespaceClose("Pagination")
              .writeNamespaceClose(serviceName)
              .writeNamespaceClose("Aws");
    }

    // Replicate C2J renameShape conflict detection logic
    // TODO: This conflict detection logic may need to be moved to a shared utility class, its also very complicated and can be refactor
    // to avoid duplication between C2J and Smithy generators and ensure consistency.
    // Consider reusing the already implemented ShapeUtil class for shape name operations.
    private String getResultSuffix(String opName) {
        // Check if this service uses EC2 protocol which renames Result to Response
        if (isEc2Protocol()) {
            return "Response";
        }
        
        // For CloudFront, use the base operation name (without version suffix) for conflict detection
        final String baseOpName;
        if ("cloudfront".equals(c2jServiceName) && opName.endsWith("2020_05_31")) {
            baseOpName = opName.substring(0, opName.length() - "2020_05_31".length());
        } else {
            baseOpName = opName;
        }
        
        // Check for known SdkResult cases (where data model conflicts exist)
        Set<Shape> allShapes = context.getModel().toSet();
        boolean hasDataModelConflict = allShapes.stream()
            .anyMatch(shape -> {
                String shapeName = shape.getId().getName();
                // Check if there's a conflicting shape with the base name + "Result"
                String candidateName = baseOpName + "Result";
                if (shapeName.equals(candidateName)) {
                    // Found a shape with the same name - check if it's a data model (not an operation result)
                    if (shape instanceof StructureShape) {
                        StructureShape structShape = (StructureShape) shape;
                        // Check if this is an operation result by looking for pagination-related patterns
                        Set<String> memberNames = structShape.getAllMembers().keySet();
                        
                        // Direct pagination tokens
                        boolean hasDirectPaginationTokens = memberNames.contains("NextToken") || memberNames.contains("nextToken") ||
                                             memberNames.contains("Marker") || memberNames.contains("marker") ||
                                             memberNames.contains("NextMarker") || memberNames.contains("nextMarker") ||
                                             memberNames.contains("IsTruncated") || memberNames.contains("isTruncated");
                        
                        // Check for nested list structures (common in AWS APIs)
                        boolean hasNestedListStructure = memberNames.stream()
                            .anyMatch(memberName -> memberName.toLowerCase().contains("list"));
                        
                        // If it has direct pagination tokens or nested list structure, it's likely an operation result
                        boolean isOperationResult = hasDirectPaginationTokens || hasNestedListStructure;
                        
                        return !isOperationResult;
                    }
                }
                return false;
            });
            
        return hasDataModelConflict ? "SdkResult" : "Result";
    }
    
    private boolean isEc2Protocol() {
        // EC2 protocol services rename all Result shapes to Response
        // This matches the logic in Ec2CppClientGenerator.legacyPatchEc2Model
        return "ec2".equals(c2jServiceName);
    }


    // TODO: These service-level pagination helper methods are a temporary solution.
    // We should investigate how the legacy C2J code generation system handles the precedence
    // between operation-level and service-level pagination traits, and implement a solution
    // that matches that behavior. This may involve:
    // 1. Checking how C2jModelToGeneratorModelTransformer processes pagination
    // 2. Understanding the inheritance model for pagination traits
    // 3. Implementing proper trait resolution that matches legacy behavior
    private String getServiceLevelInputToken() {
        // Check if service has service-level pagination configuration
        return service.getTrait(software.amazon.smithy.model.traits.PaginatedTrait.class)
                .map(trait -> trait.getInputToken().orElse(null))
                .orElse(null);
    }
    
    private String getServiceLevelOutputToken() {
        // Check if service has service-level pagination configuration
        return service.getTrait(software.amazon.smithy.model.traits.PaginatedTrait.class)
                .map(trait -> trait.getOutputToken().orElse(null))
                .orElse(null);
    }

    private String capitalize(String str) {
        return str.substring(0, 1).toUpperCase() + str.substring(1);
    }
    
    private String extractTokenName(String outToken) {
        // Pagination token may be in format "MemberName.TokenName", extract just the token name
        return outToken.contains(".") ? outToken.substring(outToken.lastIndexOf(".") + 1) : outToken;
    }
    
    private String getNestedListMember(OperationShape op) {
        // Check if the output has a nested list structure containing pagination tokens
        // This pattern is used by CloudFront and potentially other services
        String result = op.getOutput()
            .flatMap(outputId -> context.getModel().getShape(outputId))
            .filter(shape -> shape instanceof StructureShape)
            .map(shape -> (StructureShape) shape)
            .flatMap(outputShape -> {
                // Find a member that contains "list" in its name and has pagination tokens
                return outputShape.getAllMembers().entrySet().stream()
                    .filter(entry -> entry.getKey().toLowerCase().contains("list"))
                    .filter(entry -> {
                        // Check if this member's target shape has pagination tokens
                        return context.getModel().getShape(entry.getValue().getTarget())
                            .filter(targetShape -> targetShape instanceof StructureShape)
                            .map(targetShape -> (StructureShape) targetShape)
                            .map(targetStruct -> {
                                Set<String> memberNames = targetStruct.getAllMembers().keySet();
                                return memberNames.contains("NextMarker") || memberNames.contains("nextMarker") ||
                                       memberNames.contains("Marker") || memberNames.contains("marker") ||
                                       memberNames.contains("IsTruncated") || memberNames.contains("isTruncated");
                            })
                            .orElse(false);
                    })
                    .map(entry -> entry.getKey())
                    .findFirst();
            })
            .orElse(null);
        
        return result;
    }
    
    private boolean isNumericToken(OperationShape op, String tokenName) {
        // Check if the token is numeric by examining the shape type
        return op.getOutput()
            .flatMap(outputId -> context.getModel().getShape(outputId))
            .filter(shape -> shape instanceof StructureShape)
            .map(shape -> (StructureShape) shape)
            .flatMap(outputShape -> outputShape.getMember(tokenName))
            .flatMap(member -> context.getModel().getShape(member.getTarget()))
            .map(targetShape -> targetShape instanceof IntegerShape || targetShape instanceof LongShape)
            .orElse(false);
    }
}
