/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.jmespath.ast.AndExpression;
import software.amazon.smithy.jmespath.ast.ComparatorExpression;
import software.amazon.smithy.jmespath.ast.NotExpression;
import software.amazon.smithy.jmespath.ast.OrExpression;

/**
 * Emits a boolean predicate for use inside a filter projection lambda.
 * Handles Or, And, Comparator with field/literal operands relative to the lambda parameter.
 */
public class FilterPredicateEmitter extends UnsupportedExpressionVisitor<String> {
    private final String itemVar;

    FilterPredicateEmitter(String itemVar) {
        this.itemVar = itemVar;
    }

    @Override
    public String visitNot(NotExpression expression) {
        String inner = expression.getExpression().accept(this);
        return "!" + inner;
    }

    @Override
    public String visitOr(OrExpression expression) {
        String left = expression.getLeft().accept(this);
        String right = expression.getRight().accept(this);
        return "(" + left + " || " + right + ")";
    }

    @Override
    public String visitAnd(AndExpression expression) {
        String left = expression.getLeft().accept(this);
        String right = expression.getRight().accept(this);
        return "(" + left + " && " + right + ")";
    }

    @Override
    public String visitComparator(ComparatorExpression expression) {
        String left = expression.getLeft().accept(new FilterOperandEmitter(itemVar));
        String right = expression.getRight().accept(new FilterOperandEmitter(itemVar));

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
        return "(" + left + op + right + ")";
    }
}
