/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.jmespath.ast.CurrentExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FilterProjectionExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.FunctionExpression;
import software.amazon.smithy.jmespath.ast.LiteralExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;

/**
 * Emits operands within a filter predicate — fields resolve relative to the item,
 * not to "result".
 */
public class FilterOperandEmitter extends UnsupportedExpressionVisitor<String> {
    private final String itemVar;
    private final Model model;
    private final OperationShape operation;
    private final Shape itemShape;
    private final String smithyServiceName;

    FilterOperandEmitter(String itemVar) {
        this(itemVar, null, null, null, null);
    }

    FilterOperandEmitter(String itemVar, Model model, OperationShape operation,
                         Shape itemShape, String smithyServiceName) {
        this.itemVar = itemVar;
        this.model = model;
        this.operation = operation;
        this.itemShape = itemShape;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public String visitField(FieldExpression expression) {
        return itemVar + ".Get" + ServiceNameUtil.capitalize(expression.getName()) + "()";
    }

    @Override
    public String visitSubexpression(Subexpression expression) {
        return expression.getLeft().accept(this) + expression.getRight().accept(new GetterChainEmitter());
    }

    @Override
    public String visitLiteral(LiteralExpression expression) {
        if (expression.isNumberValue()) return String.valueOf(expression.expectNumberValue().intValue());
        if (expression.isStringValue()) return "\"" + expression.expectStringValue() + "\"";
        if (expression.isBooleanValue()) return expression.expectBooleanValue() ? "true" : "false";
        throw new UnsupportedOperationException("Unsupported literal type");
    }

    @Override
    public String visitFunction(FunctionExpression expression) {
        if ("length".equals(expression.getName())) {
            JmespathExpression arg = expression.getArguments().get(0);
            if (arg instanceof FilterProjectionExpression) {
                return emitItemCountIf((FilterProjectionExpression) arg);
            }
            String collection = arg.accept(this);
            return collection + ".size()";
        }
        throw new UnsupportedOperationException("Unsupported function: " + expression.getName());
    }

    private String emitItemCountIf(FilterProjectionExpression filterExpr) {
        String collection = itemVar + filterExpr.getLeft().accept(new CollectionGetterEmitter());
        String innerElementType = resolveInnerElementType(filterExpr.getLeft());
        String predicate = filterExpr.getComparison().accept(new FilterPredicateEmitter("inner"));
        return "std::count_if(" + collection + ".begin(), " + collection + ".end(), "
                + "[](const " + innerElementType + "& inner) { return " + predicate + "; })";
    }

    private String resolveInnerElementType(JmespathExpression collectionExpr) {
        if (model == null || itemShape == null) return "auto";
        // Wrap the field as a projection to use CollectionElementTypeResolver
        JmespathExpression syntheticProj = new ProjectionExpression(
                new FlattenExpression(collectionExpr), new CurrentExpression());
        return CollectionElementTypeResolver.resolveFromShape(
                syntheticProj, itemShape, model, smithyServiceName);
    }
}
