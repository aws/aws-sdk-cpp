/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.ast.AndExpression;
import software.amazon.smithy.jmespath.ast.ComparatorExpression;
import software.amazon.smithy.jmespath.ast.NotExpression;
import software.amazon.smithy.jmespath.ast.OrExpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.Shape;

/**
 * Emits a boolean predicate for use inside a filter projection lambda.
 * Handles Or, And, Comparator with field/literal operands relative to the lambda parameter.
 */
public class FilterPredicateEmitter extends UnsupportedExpressionVisitor<String> {
    private final String itemVar;
    private final Model model;
    private final Shape itemShape;
    private final String smithyServiceName;

    FilterPredicateEmitter(String itemVar) {
        this(itemVar, null, null, null);
    }

    FilterPredicateEmitter(String itemVar, Model model, Shape itemShape, String smithyServiceName) {
        this.itemVar = itemVar;
        this.model = model;
        this.itemShape = itemShape;
        this.smithyServiceName = smithyServiceName;
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
        String left = expression.getLeft().accept(new FilterOperandEmitter(itemVar, model, null, itemShape, smithyServiceName));
        String right = expression.getRight().accept(new FilterOperandEmitter(itemVar, model, null, itemShape, smithyServiceName));

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
        left = ComparatorEmitter.castCountIfForSizeComparison(left, right);
        right = ComparatorEmitter.castCountIfForSizeComparison(right, left);
        return "(" + left + op + right + ")";
    }
}
