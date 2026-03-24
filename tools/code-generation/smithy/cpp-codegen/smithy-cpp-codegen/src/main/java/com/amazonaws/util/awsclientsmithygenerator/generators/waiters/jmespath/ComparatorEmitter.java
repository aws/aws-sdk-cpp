/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.ast.AndExpression;
import software.amazon.smithy.jmespath.ast.ComparatorExpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;

import java.util.Set;

/**
 * Emits code for comparator expressions like {@code length(Items[]) > `0`}.
 */
public class ComparatorEmitter extends UnsupportedExpressionVisitor<String> {
    private final Model model;
    private final OperationShape operation;
    private final String smithyServiceName;
    private final Set<String> enumIncludes;

    public ComparatorEmitter() {
        this(null, null, null, null);
    }

    public ComparatorEmitter(Model model, OperationShape operation, String smithyServiceName, Set<String> enumIncludes) {
        this.model = model;
        this.operation = operation;
        this.smithyServiceName = smithyServiceName;
        this.enumIncludes = enumIncludes;
    }

    @Override
    public String visitAnd(AndExpression expression) {
        String left = expression.getLeft().accept(this);
        String right = expression.getRight().accept(this);
        return "(" + left + " && " + right + ")";
    }

    @Override
    public String visitComparator(ComparatorExpression expression) {
        ScalarEmitter scalar = new ScalarEmitter(model, operation, smithyServiceName, enumIncludes);
        String left = expression.getLeft().accept(scalar);
        String right = expression.getRight().accept(scalar);

        String op;
        switch (expression.getComparator()) {
            case GREATER_THAN: op = " > "; break;
            case GREATER_THAN_EQUAL: op = " >= "; break;
            case LESS_THAN: op = " < "; break;
            case LESS_THAN_EQUAL: op = " <= "; break;
            case EQUAL: op = " == "; break;
            case NOT_EQUAL: op = " != "; break;
            default: throw new UnsupportedOperationException("Unsupported comparator: " + expression.getComparator());
        }
        left = castCountIfForSizeComparison(left, right);
        right = castCountIfForSizeComparison(right, left);
        return "(" + left + op + right + ")";
    }

    static String castCountIfForSizeComparison(String operand, String other) {
        if (operand.contains("std::count_if") && other.contains(".size()")) {
            return "static_cast<std::size_t>(" + operand + ")";
        }
        return operand;
    }
}
