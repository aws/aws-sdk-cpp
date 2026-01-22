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
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
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
        String resultSuffix = getResultSuffix(op);
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
                    
                    // TODO: Refactor HasMoreResults and SetNextRequest to share common token resolution logic
                    // Both methods duplicate the same pattern matching (explicit nesting, top-level, wrapper)
                    // Pattern A: Explicit nested token like "EngineDefaults.Marker"
                    if (outToken.contains(".")) {
                        String[] parts = outToken.split("\\.", 2);
                        String memberName = parts[0];
                        String nestedTokenName = parts[1];
                        if (isNumericToken(op, memberName, nestedTokenName)) {
                            writer.write("        return result.Get$L().Get$L() != 0;", capitalize(memberName), capitalize(nestedTokenName));
                        } else {
                            writer.write("        return !result.Get$L().Get$L().empty();", capitalize(memberName), capitalize(nestedTokenName));
                        }
                    }
                    // Pattern B: Check if token is on top-level output
                    else if (hasTopLevelMember(op, outToken)) {
                        if (isNumericToken(op, null, outToken)) {
                            writer.write("        return result.Get$L() != 0;", capitalize(outToken));
                        } else {
                            writer.write("        return !result.Get$L().empty();", capitalize(outToken));
                        }
                    }
                    // Pattern C: Find wrapper member containing the token
                    else {
                        String wrapperMember = findWrapperMemberContainingToken(op, outToken);
                        if (wrapperMember != null) {
                            if (isNumericToken(op, wrapperMember, outToken)) {
                                writer.write("        return result.Get$L().Get$L() != 0;", capitalize(wrapperMember), capitalize(outToken));
                            } else {
                                writer.write("        return !result.Get$L().Get$L().empty();", capitalize(wrapperMember), capitalize(outToken));
                            }
                        } else if (hasTopLevelMember(op, "IsTruncated")) {
                            writer.write("        return result.GetIsTruncated();");
                        } else {
                            writer.write("        return false;");
                        }
                    }
                } else {
                    // TODO: Check how legacy C2J code generation handles service-level pagination
                    // This is a temporary fix for AccessAnalyzer which uses service-level pagination config.
                    // We should investigate how the legacy generator in C2jModelToGeneratorModelTransformer
                    // or other legacy components handle service-level vs operation-level pagination traits
                    // and implement a more comprehensive solution that matches that behavior.
                    String serviceLevelOutputToken = getServiceLevelOutputToken();
                    if (serviceLevelOutputToken != null) {
                        if (isNumericToken(op, null, serviceLevelOutputToken)) {
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
                    // Pattern A: Explicit nested token like "EngineDefaults.Marker"
                    if (outToken.contains(".")) {
                        String[] parts = outToken.split("\\.", 2);
                        String memberName = parts[0];
                        String nestedTokenName = parts[1];
                        writer.write("        request.Set$L(result.Get$L().Get$L());", capitalize(inToken), capitalize(memberName), capitalize(nestedTokenName));
                    }
                    // Pattern B: Check if token is on top-level output
                    else if (hasTopLevelMember(op, outToken)) {
                        writer.write("        request.Set$L(result.Get$L());", capitalize(inToken), capitalize(outToken));
                    }
                    // Pattern C: Find wrapper member containing the token
                    else {
                        String wrapperMember = findWrapperMemberContainingToken(op, outToken);
                        if (wrapperMember != null) {
                            writer.write("        request.Set$L(result.Get$L().Get$L());", capitalize(inToken), capitalize(wrapperMember), capitalize(outToken));
                        } else {
                            writer.write("        (void)result; (void)request; // Token not found");
                        }
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

    // TODO: Consider inlining this method since it's only called once and just delegates to ShapeUtil.
    // Verify no other generators use this pattern before removing.
    private String getResultSuffix(OperationShape op) {
        return ShapeUtil.getResultSuffix(context.getModel(), op, c2jServiceName);
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
    
    private String findWrapperMemberContainingToken(OperationShape op, String tokenName) {
        return op.getOutput()
            .flatMap(outputId -> context.getModel().getShape(outputId))
            .flatMap(shape -> shape.asStructureShape())
            .flatMap(outputShape ->
                outputShape.getAllMembers().entrySet().stream()
                    .filter(entry -> context.getModel().getShape(entry.getValue().getTarget())
                        .flatMap(t -> t.asStructureShape())
                        .map(s -> s.getAllMembers().containsKey(tokenName))
                        .orElse(false))
                    .map(Map.Entry::getKey)
                    .findFirst()
            )
            .orElse(null);
    }
    
    private boolean hasTopLevelMember(OperationShape op, String memberName) {
        return op.getOutput()
            .flatMap(outputId -> context.getModel().getShape(outputId))
            .flatMap(shape -> shape.asStructureShape())
            .map(outputShape -> outputShape.getAllMembers().containsKey(memberName))
            .orElse(false);
    }
    
    private boolean isNumericToken(OperationShape op, String wrapperMember, String tokenName) {
        // Check for C2J/Smithy model mismatch overrides first
        if (ShapeUtil.isNumericTokenOverride(c2jServiceName, op.getId().getName(), tokenName)) {
            return true;
        }
        
        Optional<Shape> tokenShape =
            op.getOutput()
              .flatMap(outputId -> context.getModel().getShape(outputId))
              .flatMap(s -> s.asStructureShape())
              .flatMap(out -> {
                  if (wrapperMember == null) {
                      return out.getMember(tokenName);
                  }
                  return out.getMember(wrapperMember)
                            .flatMap(m -> context.getModel().getShape(m.getTarget()))
                            .flatMap(t -> t.asStructureShape())
                            .flatMap(w -> w.getMember(tokenName));
              })
              .flatMap(member -> context.getModel().getShape(member.getTarget()));

        return tokenShape.map(ts -> ts instanceof IntegerShape || ts instanceof LongShape).orElse(false);
    }
}
