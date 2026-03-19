/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.jmespath.ast.AndExpression;
import software.amazon.smithy.jmespath.ast.ComparatorExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.FunctionExpression;
import software.amazon.smithy.jmespath.ast.LiteralExpression;
import software.amazon.smithy.jmespath.ast.MultiSelectListExpression;
import software.amazon.smithy.jmespath.ast.ObjectProjectionExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.waiters.PathComparator;

import java.util.Set;

/**
 * Top-level visitor that dispatches to the appropriate code emitter based on
 * expression type. Integrates comparator handling into the visitor dispatch.
 */
public class TopLevelVisitor extends UnsupportedExpressionVisitor<String> {
    private final PathComparator comparator;
    private final Model model;
    private final OperationShape operation;
    private final Set<String> enumIncludes;
    private final String smithyServiceName;

    public TopLevelVisitor(PathComparator comparator, Model model, OperationShape operation,
                           Set<String> enumIncludes, String smithyServiceName) {
        this.comparator = comparator;
        this.model = model;
        this.operation = operation;
        this.enumIncludes = enumIncludes;
        this.smithyServiceName = smithyServiceName;
    }

    @Override
    public String visitFunction(FunctionExpression expression) {
        if ("contains".equals(expression.getName())) {
            return emitContains(expression);
        }
        throw new UnsupportedOperationException("Unsupported top-level function: " + expression.getName());
    }

    @Override
    public String visitComparator(ComparatorExpression expression) {
        String cmpCode = expression.accept(new ComparatorEmitter(model, operation, smithyServiceName));
        return "    return " + cmpCode + " == expected.get<bool>();\n";
    }

    @Override
    public String visitAnd(AndExpression expression) {
        if (comparator != PathComparator.BOOLEAN_EQUALS) {
            throw new UnsupportedOperationException(
                    "AND expressions only supported with BOOLEAN_EQUALS comparator, got: " + comparator);
        }
        String andCode = expression.accept(new ComparatorEmitter(model, operation, smithyServiceName));
        return "    return " + andCode + " == expected.get<bool>();\n";
    }

    @Override
    public String visitField(FieldExpression expression) {
        return emitPathCode(expression);
    }

    @Override
    public String visitSubexpression(Subexpression expression) {
        return emitPathCode(expression);
    }

    @Override
    public String visitProjection(ProjectionExpression expression) {
        return emitPathCode(expression);
    }

    @Override
    public String visitObjectProjection(ObjectProjectionExpression expression) {
        return emitPathCode(expression);
    }

    @Override
    public String visitFlatten(FlattenExpression expression) {
        return emitPathCode(expression);
    }

    /**
     * Emits contains(projection, literal) as std::any_of.
     *
     * Pattern: contains(Collection[].[comparatorExpr][], `false`)
     * The projection produces a bool per item; contains checks if the literal is among them.
     * contains(..., false) → any_of where condition is negated
     * contains(..., true)  → any_of where condition is kept
     */
    private String emitContains(FunctionExpression expression) {
        JmespathExpression collectionArg = expression.getArguments().get(0);
        JmespathExpression searchArg = expression.getArguments().get(1);

        boolean searchForFalse = (searchArg instanceof LiteralExpression)
                && ((LiteralExpression) searchArg).isBooleanValue()
                && !((LiteralExpression) searchArg).expectBooleanValue();

        // Unwrap: Projection(Flatten(Projection(Flatten(Field), MultiSelectList([cmp]))), Current)
        // We need the collection field and the comparator inside the multi-select.
        ContainsProjectionInfo info = extractContainsProjection(collectionArg);
        if (info == null) {
            throw new UnsupportedOperationException(
                    "contains() only supported with projection/multi-select pattern");
        }

        String collection = "result" + info.collectionGetter;

        // Resolve the item shape for the outer collection so inner lambdas get concrete types
        Shape itemShape = resolveContainsItemShape(collectionArg);
        String condition = info.comparator.accept(
                new FilterPredicateEmitter("item", model, itemShape, smithyServiceName));
        if (searchForFalse) {
            condition = "!" + condition;
        }

        // Resolve the element type of the collection for the lambda parameter
        String elementType = resolveContainsElementType(collectionArg);

        StringBuilder sb = new StringBuilder();
        sb.append("    return std::any_of(").append(collection).append(".begin(), ")
                .append(collection).append(".end(),\n");
        sb.append("        [](const ").append(elementType).append("& item) {\n");
        sb.append("            return ").append(condition).append(";\n");
        sb.append("        }) == expected.get<bool>();\n");
        return sb.toString();
    }

    /**
     * Extracts collection getter and comparator from the contains() projection pattern:
     * Projection(Flatten(Projection(Flatten(Field), MultiSelectList([cmp]))), Current)
     */
    private ContainsProjectionInfo extractContainsProjection(JmespathExpression expr) {
        // Outer: Projection(left=Flatten(...), right=Current)
        if (!(expr instanceof ProjectionExpression)) return null;
        ProjectionExpression outerProj = (ProjectionExpression) expr;

        // Unwrap outer flatten
        JmespathExpression outerLeft = outerProj.getLeft();
        if (!(outerLeft instanceof FlattenExpression)) return null;
        JmespathExpression innerExpr = ((FlattenExpression) outerLeft).getExpression();

        // Inner: Projection(left=Flatten(Field), right=MultiSelectList)
        if (!(innerExpr instanceof ProjectionExpression)) return null;
        ProjectionExpression innerProj = (ProjectionExpression) innerExpr;

        // Collection getter from inner left
        String collectionGetter = innerProj.getLeft().accept(new CollectionGetterEmitter());

        // MultiSelectList with single comparator expression
        JmespathExpression innerRight = innerProj.getRight();
        if (!(innerRight instanceof MultiSelectListExpression)) return null;
        MultiSelectListExpression multiSelect = (MultiSelectListExpression) innerRight;
        if (multiSelect.getExpressions().size() != 1) return null;

        return new ContainsProjectionInfo(collectionGetter, multiSelect.getExpressions().get(0));
    }

    /**
     * Resolves the element type for the collection in a contains() expression.
     */
    private String resolveContainsElementType(JmespathExpression collectionArg) {
        Shape itemShape = resolveContainsItemShape(collectionArg);
        if (itemShape == null || !itemShape.isStructureShape()) return "auto";
        return CollectionElementTypeResolver.shapeToTypeName(itemShape, smithyServiceName);
    }

    /**
     * Resolves the element Shape for the outer collection in a contains() expression.
     */
    private Shape resolveContainsItemShape(JmespathExpression collectionArg) {
        if (model == null || operation == null) return null;
        if (!(collectionArg instanceof ProjectionExpression)) return null;
        JmespathExpression outerLeft = ((ProjectionExpression) collectionArg).getLeft();
        if (!(outerLeft instanceof FlattenExpression)) return null;
        JmespathExpression innerExpr = ((FlattenExpression) outerLeft).getExpression();
        if (!(innerExpr instanceof ProjectionExpression)) return null;
        Shape outputShape = model.expectShape(operation.getOutputShape());
        return CollectionElementTypeResolver.resolveElementShape(
                innerExpr, outputShape, model).orElse(null);
    }

    private String emitPathCode(JmespathExpression expr) {
        int projectionLevels = expr.accept(new ProjectionCounter());
        EnumInfo enumInfo = EnumResolver.resolveEnumInfo(expr, model, operation);

        if (projectionLevels == 0) {
            String access = "result" + expr.accept(new GetterChainEmitter());
            if (enumInfo != null) {
                access = enumInfo.wrapAccess(access);
                enumIncludes.add(enumInfo.shapeName);
            }
            String expectedType = comparator == PathComparator.BOOLEAN_EQUALS ? "bool" : "Aws::String";
            return "    return " + access + " == expected.get<" + expectedType + ">();\n";
        } else {
            String algo = comparator == PathComparator.ALL_STRING_EQUALS ? "std::all_of" : "std::any_of";
            if (enumInfo != null) enumIncludes.add(enumInfo.shapeName);
            return expr.accept(new ProjectionEmitter(algo, projectionLevels, enumInfo, 0, model, operation, smithyServiceName));
        }
    }
}
