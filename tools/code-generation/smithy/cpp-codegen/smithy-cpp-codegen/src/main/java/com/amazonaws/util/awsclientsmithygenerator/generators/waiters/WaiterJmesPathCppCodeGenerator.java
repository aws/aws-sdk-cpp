/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters;

import com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath.TopLevelVisitor;
import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.waiters.PathComparator;

import java.util.HashSet;
import java.util.Set;

/**
 * Generates C++ lambda code for evaluating JmesPath expressions in waiter path matchers.
 *
 * Delegates to visitors in the {@code jmespath} subpackage.
 */
public final class WaiterJmesPathCppCodeGenerator {

    private WaiterJmesPathCppCodeGenerator() {}

    public static class WaiterJmesPathResult {
        private final String code;
        private final Set<String> enumIncludes;

        WaiterJmesPathResult(String code, Set<String> enumIncludes) {
            this.code = code;
            this.enumIncludes = enumIncludes;
        }

        public String getCode() { return code; }
        public Set<String> getEnumIncludes() { return enumIncludes; }
    }

    public static WaiterJmesPathResult generate(String jmesPath, PathComparator comparator, String outcomeType,
                                                Model model, OperationShape operation,
                                                String smithyServiceName) {
        JmespathExpression expr = JmespathExpression.parse(jmesPath);
        Set<String> enumIncludes = new HashSet<>();

        StringBuilder sb = new StringBuilder();
        sb.append("[](const ").append(outcomeType)
                .append("& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {\n");
        sb.append("    if (!outcome.IsSuccess()) return false;\n");
        sb.append("    const auto& result = outcome.GetResult();\n");

        String body = expr.accept(new TopLevelVisitor(comparator, model, operation, enumIncludes, smithyServiceName));
        sb.append(body);

        sb.append("}");
        return new WaiterJmesPathResult(sb.toString(), enumIncludes);
    }
}
