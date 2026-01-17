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
        writer.writeInclude("aws/" + c2jServiceName + "/" + serviceName + "_EXPORTS.h")
              .writeInclude("aws/" + c2jServiceName + "/model/" + opName + "Request.h")
              .writeInclude("aws/" + c2jServiceName + "/model/" + opName + resultSuffix + ".h")
              .writeInclude("aws/" + c2jServiceName + "/" + serviceName + "Client.h")
              .write("");
        
        // Namespaces
        writer.writeNamespaceOpen("Aws")
              .writeNamespaceOpen(serviceName)
              .writeNamespaceOpen("Pagination")
              .write("");
        
        // Struct definition
        writer.openBlock("struct " + opName + "PaginationTraits\n{", "};", () -> {
            // Use detected suffix to match C2J renameShape logic
            writer.write("    using RequestType = Model::$LRequest;", opName)
                  .write("    using ResultType = Model::$L$L;", opName, resultSuffix)
                  .write("    using OutcomeType = Model::$LOutcome;", opName)
                  .write("    using ClientType = $LClient;", serviceName)
                  .write("");
            
            // Invoke method
            writer.openBlock("    static OutcomeType Invoke(ClientType& client, const RequestType& request)\n    {", "    }", () -> {
                writer.write("        return client.$L(request);", opName);
            });
            
            writer.write("");
            
            // HasMoreResults method
            writer.openBlock("    static bool HasMoreResults(const ResultType& result)\n    {", "    }", () -> {
                if (trait.getOutputToken().isPresent()) {
                    String outToken = trait.getOutputToken().get();
                    if (outToken.toLowerCase().contains("marker") || outToken.toLowerCase().contains("number")) {
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
                    writer.write("        request.Set$L(result.Get$L());", capitalize(inToken), capitalize(outToken));
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
        
        // For now, use the simple approach that works:
        // If the actual generated file exists, use Result; otherwise use SdkResult
        
        // Check for known SdkResult cases (where data model conflicts exist)
        Set<Shape> allShapes = context.getModel().toSet();
        boolean hasDataModelConflict = allShapes.stream()
            .anyMatch(shape -> {
                String shapeName = shape.getId().getName();
                if (shapeName.equals(opName + "Result")) {
                    // Found a shape with the same name - check if it's a data model
                    if (shape instanceof StructureShape) {
                        StructureShape structShape = (StructureShape) shape;
                        // If it doesn't have NextToken/nextToken, it's likely a data model
                        Set<String> memberNames = structShape.getAllMembers().keySet();
                        // TODO: Sanitize member names for other edge cases (e.g., different casing, underscores, etc.)
                        boolean hasNextToken = memberNames.contains("NextToken") || memberNames.contains("nextToken");
                        return !hasNextToken;
                    }
                }
                return false;
            });
            
        return hasDataModelConflict ? "SdkResult" : "Result";
    }
    
    // TODO: Delete this method if it's not used - replaced by simpler conflict detection in getResultSuffix
    // Replicate the precise conflict detection logic from C2jModelToGeneratorModelTransformer
    private boolean hasNamingConflict(String candidateName, String opName) {
        // Get all shapes in the model to check for conflicts
        Set<Shape> allShapes = context.getModel().toSet();
        
        for (Shape shape : allShapes) {
            String shapeName = shape.getId().getName();
            
            // Direct exact name conflict - this is the main case
            if (candidateName.equals(shapeName)) {
                // If this is a structure, check if it's already a suitable operation result
                if (shape instanceof StructureShape) {
                    StructureShape structShape = (StructureShape) shape;
                    // If the existing shape has pagination tokens, it's already an operation result - no conflict
                    // Check for various pagination token field names
                    boolean hasNextToken = structShape.getAllMembers().keySet().stream()
                        .anyMatch(memberName -> memberName.toLowerCase().contains("nexttoken") || 
                                              memberName.toLowerCase().contains("token"));
                    
                    if (hasNextToken) {
                        // This is already an operation result shape, no conflict
                        return false;
                    }
                    
                    // If it doesn't have pagination tokens, it's a data model - conflict!
                    return true;
                }
                return true;
            }
        }
        
        return false;
    }
    
    // Remove the hardcoded method - no longer needed
    // private boolean isKnownConflictingOperation(String opName) { ... }
    
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
}
