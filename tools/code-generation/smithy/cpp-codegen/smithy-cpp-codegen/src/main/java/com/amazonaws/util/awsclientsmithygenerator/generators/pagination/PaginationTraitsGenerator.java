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

    public PaginationTraitsGenerator(PluginContext context, ServiceShape service, List<OperationData<PaginatedTrait>> paginatedOps, String smithyServiceName) {
        super(context, service, paginatedOps, smithyServiceName);
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
            writer.openBlock("    static OutcomeType Invoke(Client& client, const RequestType& request)\n    {", "    }", () -> {
                writer.write("        return client.$L(request);", methodName);
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

    private void generateHasMoreResultsLogic(CppWriter writer, PaginatedTrait trait, OperationShape op) {
        if (trait.getOutputToken().isPresent()) {
            String outToken = trait.getOutputToken().get();
            
            // Pattern A: Explicit nested token like "EngineDefaults.Marker"
            if (outToken.contains(".")) {
                String[] parts = outToken.split("\\.", 2);
                String memberName = parts[0];
                String nestedTokenName = parts[1];
                if (ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, memberName, nestedTokenName)) {
                    writer.write("        return result.Get$L().Get$L() != 0;", ServiceNameUtil.capitalize(memberName), ServiceNameUtil.capitalize(nestedTokenName));
                } else {
                    writer.write("        return !result.Get$L().Get$L().empty();", ServiceNameUtil.capitalize(memberName), ServiceNameUtil.capitalize(nestedTokenName));
                }
            }
            // Pattern B: Check if token is on top-level output
            else if (ShapeUtil.hasTopLevelMember(context.getModel(), op, outToken)) {
                if (ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, null, outToken)) {
                    writer.write("        return result.Get$L() != 0;", ServiceNameUtil.capitalize(outToken));
                } else {
                    writer.write("        return !result.Get$L().empty();", ServiceNameUtil.capitalize(outToken));
                }
            }
            // Pattern C: Find wrapper member containing the token
            else {
                String wrapperMember = ShapeUtil.findWrapperMemberContainingToken(context.getModel(), op, outToken);
                if (wrapperMember != null) {
                    if (ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, wrapperMember, outToken)) {
                        writer.write("        return result.Get$L().Get$L() != 0;", ServiceNameUtil.capitalize(wrapperMember), ServiceNameUtil.capitalize(outToken));
                    } else {
                        writer.write("        return !result.Get$L().Get$L().empty();", ServiceNameUtil.capitalize(wrapperMember), ServiceNameUtil.capitalize(outToken));
                    }
                } else if (ShapeUtil.hasTopLevelMember(context.getModel(), op, "IsTruncated")) {
                    writer.write("        return result.GetIsTruncated();");
                } else {
                    writer.write("        return false;");
                }
            }
        } else {
            // Fallback to service-level pagination configuration
            String serviceLevelOutputToken = ShapeUtil.getServiceLevelToken(service, software.amazon.smithy.model.traits.PaginatedTrait.class, t -> t.getOutputToken());
            if (serviceLevelOutputToken != null) {
                if (ShapeUtil.isNumericToken(context.getModel(), op, smithyServiceName, null, serviceLevelOutputToken)) {
                    writer.write("        return result.Get$L() != 0;", ServiceNameUtil.capitalize(serviceLevelOutputToken));
                } else {
                    writer.write("        return !result.Get$L().empty();", ServiceNameUtil.capitalize(serviceLevelOutputToken));
                }
            } else {
                writer.write("        return result.GetIsTruncated();");
            }
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
                String wrapperMember = ShapeUtil.findWrapperMemberContainingToken(context.getModel(), op, outTokenValue);
                if (wrapperMember != null) {
                    writer.write("        request.Set$L(result.Get$L().Get$L());", ServiceNameUtil.capitalize(inTokenValue), ServiceNameUtil.capitalize(wrapperMember), ServiceNameUtil.capitalize(outTokenValue));
                } else {
                    writer.write("        (void)result; (void)request; // Token not found");
                }
            }
        } else {
            writer.write("        (void)result; (void)request; // Unused parameters");
        }
    }
}