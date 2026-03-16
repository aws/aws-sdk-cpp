/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters;

import com.amazonaws.util.awsclientsmithygenerator.generators.BaseHeaderGenerator;
import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.waiters.Acceptor;
import software.amazon.smithy.waiters.AcceptorState;
import software.amazon.smithy.waiters.Matcher;
import software.amazon.smithy.waiters.PathMatcher;
import software.amazon.smithy.waiters.PathComparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class WaiterHeaderGenerator extends BaseHeaderGenerator<WaiterOperationData> {

    private final Model model;
    /** Cached code generation results, keyed by PathMatcher identity. */
    private final Map<PathMatcher, WaiterJmesPathCppCodeGenerator.WaiterJmesPathResult> generatedCode = new HashMap<>();

    public WaiterHeaderGenerator(ServiceShape service, List<WaiterOperationData> waiterOps,
                                 Map<String, String> serviceMap, Model model) {
        super(service, waiterOps, serviceMap);
        this.model = model;
    }

    /**
     * This is a map of error types that are not present in the smithy models but are present in the C2J models.
     * We map them to the error codes and rely on a STATUS matcher instead
     */

    private static final Map<String, Integer> C2J_LOST_ERRORS = new HashMap<>();
    static {
        C2J_LOST_ERRORS.put("NotFound", 404); //S3
    }

    @Override
    protected void writeSpecificIncludes(CppWriter writer, String serviceName, String smithyServiceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);
        writer.writeInclude("aws/" + smithyServiceName + "/" + classPrefix + "Client.h");
        writer.writeInclude("aws/core/utils/Waiter.h");
        writer.writeInclude("algorithm");

        for (WaiterOperationData data : operations) {
            String opName = data.getOperation().getId().getName();
            String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
            writer.writeInclude("aws/" + smithyServiceName + "/model/" + methodName + "Request.h");
            writer.writeInclude("aws/" + smithyServiceName + "/model/" + methodName + (smithyServiceName.equals("ec2") ? "Response.h" : "Result.h"));
        }

        // Generate all path matcher code once; cache results and collect enum includes.
        Set<String> enumIncludes = preGenerateAll();

        for (String enumName : enumIncludes) {
            writer.writeInclude("aws/" + smithyServiceName + "/model/" + enumName + ".h");
        }
        writer.write("");
    }

    /** Generate code for every path matcher, cache results, return all enum includes. */
    private Set<String> preGenerateAll() {
        Set<String> enums = new HashSet<>();
        for (WaiterOperationData data : operations) {
            String outcomeType = "Model::" + ShapeUtil.getOperationMethodName(
                    data.getOperation().getId().getName(), smithyServiceName) + "Outcome";
            for (Acceptor acceptor : data.getWaiter().getAcceptors()) {
                PathMatcher pm = extractPathMatcher(acceptor.getMatcher());
                if (pm != null) {
                    WaiterJmesPathCppCodeGenerator.WaiterJmesPathResult result =
                            WaiterJmesPathCppCodeGenerator.generate(
                                    pm.getPath(), pm.getComparator(), outcomeType, model, data.getOperation(),
                                    smithyServiceName);
                    generatedCode.put(pm, result);
                    enums.addAll(result.getEnumIncludes());
                }
            }
        }
        return enums;
    }

    private static PathMatcher extractPathMatcher(Matcher<?> matcher) {
        if (matcher instanceof Matcher.OutputMember) {
            return ((Matcher.OutputMember) matcher).getValue();
        } else if (matcher instanceof Matcher.InputOutputMember) {
            return ((Matcher.InputOutputMember) matcher).getValue();
        }
        return null;
    }

    @Override
    protected void writeSpecificContent(CppWriter writer, String serviceName) {
        String classPrefix = ServiceNameUtil.getServiceNameUpperCamel(service);

        writer.write("template<typename DerivedClient = " + classPrefix + "Client>");
        writer.openBlock("class " + classPrefix + "Waiter {", "};", () -> {
            writer.write("public:");
            writer.write("");

            for (WaiterOperationData data : operations) {
                writeWaiterMethod(writer, data);
            }
        });
    }

    private void writeWaiterMethod(CppWriter writer, WaiterOperationData data) {
        String opName = data.getOperation().getId().getName();
        String methodName = ShapeUtil.getOperationMethodName(opName, smithyServiceName);
        String waiterFuncName = "WaitUntil" + ServiceNameUtil.capitalize(data.getWaiterName());
        String outcomeType = "Model::" + methodName + "Outcome";

        writer.write("");
        writer.openBlock("Aws::Utils::WaiterOutcome<" + outcomeType + "> " + waiterFuncName +
                "(const Model::" + methodName + "Request& request) {", "}", () -> {

            writer.write("std::vector<Aws::Utils::Acceptor<" + outcomeType + ">> acceptors;");

            for (Acceptor acceptor : data.getWaiter().getAcceptors()) {
                writeAcceptor(writer, acceptor, outcomeType, data);
            }

            int delay = data.getWaiter().getMinDelay();
            int maxAttempts = data.getWaiter().getMaxDelay() / delay;

            writer.write("");
            writer.write("auto operation = [this](const Model::$LRequest& req) { return static_cast<DerivedClient*>(this)->$L(req); };",
                    methodName, methodName);
            writer.write("Aws::Utils::Waiter<Model::$LRequest, $L> waiter(", methodName, outcomeType);
            writer.write("    $L, $L, acceptors, operation, \"$L\");", delay, maxAttempts, waiterFuncName);
            writer.write("return waiter.Wait(request);");
        });
    }

    private void writeAcceptor(CppWriter writer, Acceptor acceptor, String outcomeType,
                               WaiterOperationData data) {
        String state = waiterStateToEnum(acceptor.getState());
        Matcher<?> matcher = acceptor.getMatcher();

        if (matcher instanceof Matcher.SuccessMember) {
            boolean expectSuccess = ((Matcher.SuccessMember) matcher).getValue();
            writer.write("acceptors.push_back({");
            writer.write("    $L,", state);
            writer.write("    Aws::Utils::MatcherType::ERROR,");
            writer.write("    $L", expectSuccess ? "false" : "true");
            writer.write("});");
        } else if (matcher instanceof Matcher.ErrorTypeMember) {
            String errorType = ((Matcher.ErrorTypeMember) matcher).getValue();
            if(!C2J_LOST_ERRORS.containsKey(errorType)) {
                writer.write("acceptors.push_back({");
                writer.write("    $L,", state);
                writer.write("    Aws::Utils::MatcherType::ERROR,");
                writer.write("    Aws::String(\"$L\")", errorType);
                writer.write("});");
            } else {
                int statusCode = C2J_LOST_ERRORS.get(errorType);
                writer.write("acceptors.push_back({");
                writer.write("    $L,", state);
                writer.write("    Aws::Utils::MatcherType::STATUS,");
                writer.write("    $L", statusCode);
                writer.write("});");
            }
        } else if (matcher instanceof Matcher.OutputMember) {
            writePathAcceptor(writer, ((Matcher.OutputMember) matcher).getValue(),
                    state, outcomeType, data);
        } else if (matcher instanceof Matcher.InputOutputMember) {
            writePathAcceptor(writer, ((Matcher.InputOutputMember) matcher).getValue(),
                    state, outcomeType, data);
        } else {
            throw new UnsupportedOperationException("Unsupported matcher type: " + matcher.getClass().getSimpleName());
        }
    }

    private void writePathAcceptor(CppWriter writer, PathMatcher pathMatcher,
                                   String state, String outcomeType, WaiterOperationData data) {
        String expected = pathMatcher.getExpected();
        PathComparator comparator = pathMatcher.getComparator();

        writer.write("acceptors.push_back({");
        writer.write("    $L,", state);
        writer.write("    Aws::Utils::MatcherType::PATH,");

        if ("true".equals(expected) || "false".equals(expected)) {
            writer.write("    $L,", expected);
        } else {
            try {
                Integer.parseInt(expected);
                writer.write("    $L,", expected);
            } catch (NumberFormatException e) {
                writer.write("    Aws::String(\"$L\"),", expected);
            }
        }

        writer.write(generatedCode.get(pathMatcher).getCode());
        writer.write("});");
    }

    private static String waiterStateToEnum(AcceptorState state) {
        switch (state) {
            case SUCCESS: return "Aws::Utils::WaiterState::SUCCESS";
            case FAILURE: return "Aws::Utils::WaiterState::FAILURE";
            case RETRY: return "Aws::Utils::WaiterState::RETRY";
            default: throw new UnsupportedOperationException("Unknown waiter state: " + state);
        }
    }
}
