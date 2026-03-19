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
import software.amazon.smithy.jmespath.ast.FunctionExpression;
import software.amazon.smithy.jmespath.ast.LiteralExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;

/**
 * Emits scalar operands in comparisons: length(), literals, and field access.
 */
public class ScalarEmitter extends UnsupportedExpressionVisitor<String> {
    private final Model model;
    private final OperationShape operation;
    private final String smithyServiceName;

    public ScalarEmitter() {
        this(null, null, null);
    }

    public ScalarEmitter(Model model, OperationShape operation, String smithyServiceName) {
        this.model = model;
        this.operation = operation;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public String visitFunction(FunctionExpression expression) {
        if ("length".equals(expression.getName())) {
            JmespathExpression arg = expression.getArguments().get(0);
            if (arg instanceof FilterProjectionExpression) {
                return emitCountIf((FilterProjectionExpression) arg);
            }
            String collection = arg.accept(new CollectionGetterEmitter());
            return "result" + collection + ".size()";
        }
        throw new UnsupportedOperationException("Unsupported function: " + expression.getName());
    }

    private String emitCountIf(FilterProjectionExpression filterExpr) {
        String collection = "result" + filterExpr.getLeft().accept(new CollectionGetterEmitter());
        String elementType = resolveFilterElementType(filterExpr);
        
        // Resolve the element shape for enum handling
        Shape elementShape = null;
        if (model != null && operation != null) {
            elementShape = CollectionElementTypeResolver.resolveElementShape(
                new ProjectionExpression(filterExpr.getLeft(), new CurrentExpression()),
                model.expectShape(operation.getOutputShape()), model).orElse(null);
        }
        
        String predicate = filterExpr.getComparison().accept(
            new FilterPredicateEmitter("item", model, elementShape, smithyServiceName));
        return "std::count_if(" + collection + ".begin(), " + collection + ".end(), "
                + "[](const " + elementType + "& item) { return " + predicate + "; })";
    }

    private String resolveFilterElementType(FilterProjectionExpression filterExpr) {
        if (model == null || operation == null) return "auto";
        // The left side of the filter projection is the collection (e.g. Flatten(Field("Items")))
        // Wrap it as a projection to resolve the element type
        JmespathExpression syntheticProj = new ProjectionExpression(
                filterExpr.getLeft(), new CurrentExpression());
        return CollectionElementTypeResolver.resolve(syntheticProj, model, operation, smithyServiceName);
    }

    @Override
    public String visitLiteral(LiteralExpression expression) {
        if (expression.isNumberValue()) return String.valueOf(expression.expectNumberValue().intValue());
        if (expression.isStringValue()) return "\"" + expression.expectStringValue() + "\"";
        if (expression.isBooleanValue()) return expression.expectBooleanValue() ? "true" : "false";
        throw new UnsupportedOperationException("Unsupported literal type");
    }

    @Override
    public String visitField(FieldExpression expression) {
        return "result.Get" + ServiceNameUtil.capitalize(expression.getName()) + "()";
    }
}
