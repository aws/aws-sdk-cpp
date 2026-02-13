/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.pagination;

import software.amazon.smithy.build.PluginContext;
import software.amazon.smithy.model.shapes.*;
import software.amazon.smithy.model.traits.PaginatedTrait;
import com.amazonaws.util.awsclientsmithygenerator.generators.BaseTraitsGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.OperationData;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import java.util.List;
import java.util.Optional;

public class PaginationTraitsGenerator extends BaseTraitsGenerator<OperationData<PaginatedTrait>> {

    private final List<TokenResolver> resolvers;

    public PaginationTraitsGenerator(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, String smithyServiceName) {
        super(context, service, paginatedOps, smithyServiceName);
        this.resolvers = List.of(
            // Pattern A: Nested token
            new TokenResolver() {
                public boolean canResolve(String token, OperationShape op) { return token.contains("."); }
                public void writeLogic(CppWriter writer, String token, OperationShape op) {
                    String[] parts = token.split("\\.", 2);
                    boolean isNumeric = ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, parts[0], parts[1]);
                    writeResultLogic(writer, Optional.of(ServiceNameUtil.capitalize(parts[0])), 
                        ServiceNameUtil.capitalize(parts[1]), isNumeric);
                }
            },
            // Pattern B: Top-level token
            new TokenResolver() {
                public boolean canResolve(String token, OperationShape op) { 
                    return ShapeUtil.hasTopLevelMember(context.getModel(), op, token); 
                }
                public void writeLogic(CppWriter writer, String token, OperationShape op) {
                    boolean isNumeric = ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, null, token);
                    writeResultLogic(writer, Optional.empty(), ServiceNameUtil.capitalize(token), isNumeric);
                }
            },
            // Pattern C: Wrapped token
            new TokenResolver() {
                public boolean canResolve(String token, OperationShape op) { 
                    return Optional.ofNullable(ShapeUtil.findWrapperMemberContainingToken(context.getModel(), op, token)).isPresent(); 
                }
                public void writeLogic(CppWriter writer, String token, OperationShape op) {
                    Optional.ofNullable(ShapeUtil.findWrapperMemberContainingToken(context.getModel(), op, token))
                        .ifPresent(wrapper -> {
                            boolean isNumeric = ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, wrapper, token);
                            writeResultLogic(writer, Optional.of(ServiceNameUtil.capitalize(wrapper)), 
                                ServiceNameUtil.capitalize(token), isNumeric);
                        });
                }
            }
        );
    }

    @Override
    protected String getFileNameForOperation(OperationData<PaginatedTrait> operationData) {
        return "include/aws/" + smithyServiceName + "/model/" + operationData.getOperation().getId().getName() + "PaginationTraits.h";
    }

    @Override
    protected void generateOperationContent(CppWriter writer, OperationData<PaginatedTrait> data, String serviceName) {
        OperationShape op = data.getOperation();
        PaginatedTrait trait = data.getTrait();
        String opName = op.getId().getName();
        
        // Includes - detect suffix like C2J renameShape logic
        String resultSuffix = ShapeUtil.getResultSuffix(context.getModel(), op, smithyServiceName);
        String capitalizedServiceName = ServiceNameUtil.getServiceNameUpperCamel(service);
        String requestFileName = ShapeUtil.getOperationMethodName(opName, smithyServiceName) + "Request";
        String resultFileName = ShapeUtil.getOperationMethodName(opName, smithyServiceName) + resultSuffix;
        String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
        
        writer.writeInclude("aws/" + smithyServiceName + "/" + capitalizedServiceName + "_EXPORTS.h")
              .writeInclude("aws/" + smithyServiceName + "/model/" + requestFileName + ".h")
              .writeInclude("aws/" + smithyServiceName + "/model/" + resultFileName + ".h")
              .writeInclude("aws/" + smithyServiceName + "/" + capitalizedServiceName + "ServiceClientModel.h")
              .write("");
        
        // Namespaces
        writer.writeNamespaceOpen("Aws")
              .writeNamespaceOpen(serviceName)
              .writeNamespaceOpen("Pagination")
              .write("");
        
        // Struct definition
        writer.openBlock("template<typename Client = " + capitalizedServiceName + "Client>\nstruct " + opName + "PaginationTraits\n{", "};", () -> {
            // Use detected suffix to match C2J renameShape logic
            writer.write("    using RequestType = Model::$LRequest;", methodName)
                  .write("    using ResultType = Model::$L$L;", methodName, resultSuffix)
                  .write("    using OutcomeType = Model::$LOutcome;", methodName)
                  .write("    using ClientType = Client;")
                  .write("");
            
            // Invoke method - no template needed since struct is templated
            writer.openBlock("    static OutcomeType Invoke(Client* client, const RequestType& request)\n    {", "    }", () -> {
                writer.write("        return client->$L(request);", methodName);
            });
            
            writer.write("");
            
            // HasMoreResults method
            writer.openBlock("    static bool HasMoreResults(const ResultType& result)\n    {", "    }", () -> {
                generateHasMoreResultsLogic(writer, trait, op);
            });
            
            writer.write("");
            
            // SetNextRequest method
            writer.openBlock("    static void SetNextRequest(const ResultType& result, RequestType& request)\n    {", "    }", () -> {
                generateSetNextRequestLogic(writer, trait, op);
            });
        });
        
        writer.write("");
        writer.writeNamespaceClose("Pagination");
        writer.writeNamespaceClose(serviceName);
        writer.writeNamespaceClose("Aws");
    }

    private interface TokenResolver {
        boolean canResolve(String token, OperationShape op);
        void writeLogic(CppWriter writer, String token, OperationShape op);
    }

    private void generateHasMoreResultsLogic(CppWriter writer, PaginatedTrait trait, OperationShape op) {
        Optional<String> outToken = trait.getOutputToken()
            .or(() -> Optional.ofNullable(ShapeUtil.getServiceLevelToken(service, 
                software.amazon.smithy.model.traits.PaginatedTrait.class, t -> t.getOutputToken())));

        if (outToken.isEmpty()) {
            writer.write("        return result.GetIsTruncated();");
            return;
        }

        String token = outToken.get();

        resolvers.stream()
            .filter(resolver -> resolver.canResolve(token, op))
            .findFirst()
            .ifPresentOrElse(
                resolver -> resolver.writeLogic(writer, token, op),
                () -> {
                    if (ShapeUtil.hasTopLevelMember(context.getModel(), op, "IsTruncated")) {
                        writer.write("        return result.GetIsTruncated();");
                    } else {
                        writer.write("        return false;");
                    }
                }
            );
    }
    
    private void writeResultLogic(CppWriter writer, Optional<String> wrapperMember, String tokenName, boolean isNumeric) {
        String getter = wrapperMember.isPresent() ? "result.Get$L().Get$L()" : "result.Get$L()";
        String condition = isNumeric ? " != 0" : ".empty()";
        String prefix = isNumeric ? "" : "!";
        
        if (wrapperMember.isPresent()) {
            writer.write("        return " + prefix + getter + condition + ";", wrapperMember.get(), tokenName);
        } else {
            writer.write("        return " + prefix + getter + condition + ";", tokenName);
        }
    }

    private void generateSetNextRequestLogic(CppWriter writer, PaginatedTrait trait, OperationShape op) {
        Optional<String> inToken = Optional.empty();
        Optional<String> outToken = Optional.empty();
        
        if (trait.getInputToken().isPresent() && trait.getOutputToken().isPresent()) {
            inToken = trait.getInputToken();
            outToken = trait.getOutputToken();
        } else {
            // Fallback to service-level pagination configuration
            Optional<String> serviceLevelInputToken = Optional.ofNullable(ShapeUtil.getServiceLevelToken(service, software.amazon.smithy.model.traits.PaginatedTrait.class, t -> t.getInputToken()));
            Optional<String> serviceLevelOutputToken = Optional.ofNullable(ShapeUtil.getServiceLevelToken(service, software.amazon.smithy.model.traits.PaginatedTrait.class, t -> t.getOutputToken()));
            if (serviceLevelInputToken.isPresent() && serviceLevelOutputToken.isPresent()) {
                inToken = serviceLevelInputToken;
                outToken = serviceLevelOutputToken;
            }
        }
        
        if (inToken.isPresent() && outToken.isPresent()) {
            String inTokenValue = inToken.get();
            String outTokenValue = outToken.get();
            // Pattern A: Explicit nested token like "EngineDefaults.Marker"
            if (outTokenValue.contains(".")) {
                String[] parts = outTokenValue.split("\\.", 2);
                String memberName = parts[0];
                String nestedTokenName = parts[1];
                writer.write("        request.Set$L(result.Get$L().Get$L());", ServiceNameUtil.capitalize(inTokenValue), ServiceNameUtil.capitalize(memberName), ServiceNameUtil.capitalize(nestedTokenName));
            }
            // Pattern B: Check if token is on top-level output
            else if (ShapeUtil.hasTopLevelMember(context.getModel(), op, outTokenValue)) {
                writer.write("        request.Set$L(result.Get$L());", ServiceNameUtil.capitalize(inTokenValue), ServiceNameUtil.capitalize(outTokenValue));
            }
            // Pattern C: Find wrapper member containing the token
            else {
                Optional.ofNullable(ShapeUtil.findWrapperMemberContainingToken(context.getModel(), op, outTokenValue))
                    .ifPresentOrElse(
                        wrapperMember -> writer.write("        request.Set$L(result.Get$L().Get$L());", 
                            ServiceNameUtil.capitalize(inTokenValue), ServiceNameUtil.capitalize(wrapperMember), ServiceNameUtil.capitalize(outTokenValue)),
                        () -> writer.write("        (void)result; (void)request; // Token not found")
                    );
            }
        } else {
            writer.write("        (void)result; (void)request; // Unused parameters");
        }
    }
}