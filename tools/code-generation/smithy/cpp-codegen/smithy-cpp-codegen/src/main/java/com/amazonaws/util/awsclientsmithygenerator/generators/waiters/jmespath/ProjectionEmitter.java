/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.jmespath.ast.CurrentExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.ObjectProjectionExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;

/**
 * Emits std::all_of/any_of blocks for projection expressions.
 *
 * Each projection level creates a new ProjectionEmitter with an incremented depth,
 * avoiding mutable shared state.
 *
 * For ObjectProjectionExpression (map wildcard), iterates map entries and accesses
 * .second to get the value from each std::pair.
 */
public class ProjectionEmitter extends UnsupportedExpressionVisitor<String> {
    private final String algo;
    private final int totalLevels;
    private final EnumInfo enumInfo;
    private final int depth;
    private final Model model;
    private final OperationShape operation;
    private final String smithyServiceName;

    ProjectionEmitter(String algo, int totalLevels, EnumInfo enumInfo, int depth,
                      Model model, OperationShape operation, String smithyServiceName) {
        this.algo = algo;
        this.totalLevels = totalLevels;
        this.enumInfo = enumInfo;
        this.depth = depth;
        this.model = model;
        this.operation = operation;
        this.smithyServiceName = smithyServiceName;
    }

    ProjectionEmitter(String algo, int totalLevels, EnumInfo enumInfo, int depth) {
        this(algo, totalLevels, enumInfo, depth, null, null, null);
    }

    private String itemVar(int d) { return totalLevels == 1 ? "item" : "item" + d; }

    @Override
    public String visitProjection(ProjectionExpression expression) {
        NestedProjectionInfo nested = extractNestedProjection(expression.getLeft());
        if (nested != null) {
            return emitProjectionLevel(
                    nested.outerCollectionGetter,
                    expression,
                    nested);
        }
        String collectionGetter = expression.getLeft().accept(new CollectionGetterEmitter());
        String elementType = CollectionElementTypeResolver.resolve(expression, model, operation, smithyServiceName);
        return emitSimpleProjection(collectionGetter, expression.getRight(), elementType);
    }

    String emitSimpleProjection(String collectionGetter, JmespathExpression right, String elementType) {
        String collectionPrefix = depth == 0
                ? "result" + collectionGetter
                : itemVar(depth - 1) + collectionGetter;

        String indent = "    ".repeat(depth + 1);
        String itemName = itemVar(depth);

        StringBuilder sb = new StringBuilder();
        sb.append(indent).append("return ").append(algo).append("(")
                .append(collectionPrefix).append(".begin(), ")
                .append(collectionPrefix).append(".end(),\n");
        sb.append(indent).append("    [&](const ").append(elementType).append("& ").append(itemName).append(") {\n");

        if (right != null && !(right instanceof CurrentExpression)) {
            sb.append(right.accept(new ProjectionRightEmitter(algo, totalLevels, enumInfo, depth, model, operation, smithyServiceName)));
        }

        sb.append(indent).append("    });\n");
        return sb.toString();
    }

    private String emitProjectionLevel(String outerGetter,
                                       ProjectionExpression outerExpr,
                                       NestedProjectionInfo nested) {
        String collectionPrefix = depth == 0
                ? "result" + outerGetter
                : itemVar(depth - 1) + outerGetter;

        String indent = "    ".repeat(depth + 1);
        String itemName = itemVar(depth);
        String outerElementType = CollectionElementTypeResolver.resolve(outerExpr, model, operation, smithyServiceName);

        StringBuilder sb = new StringBuilder();
        sb.append(indent).append("return ").append(algo).append("(")
                .append(collectionPrefix).append(".begin(), ")
                .append(collectionPrefix).append(".end(),\n");
        sb.append(indent).append("    [&](const ").append(outerElementType).append("& ").append(itemName).append(") {\n");

        // Resolve inner element type: walk from the outer element shape through the inner collection getter
        String innerElementType = resolveInnerElementType(outerExpr);

        ProjectionEmitter innerEmitter = new ProjectionEmitter(algo, totalLevels, enumInfo, depth + 1, model, operation, smithyServiceName);
        sb.append(innerEmitter.emitSimpleProjection(nested.innerCollectionGetter, outerExpr.getRight(), innerElementType));

        sb.append(indent).append("    });\n");
        return sb.toString();
    }

    /**
     * For nested projections like Outer[].Inner[].Field, resolves the inner collection's element type.
     * First resolves the outer element shape, then resolves the inner collection's element from it.
     */
    private String resolveInnerElementType(ProjectionExpression outerExpr) {
        if (model == null || operation == null) return "auto";
        JmespathExpression left = outerExpr.getLeft();
        if (!(left instanceof FlattenExpression)) return "auto";
        JmespathExpression inner = ((FlattenExpression) left).getExpression();
        if (!(inner instanceof ProjectionExpression)) return "auto";
        ProjectionExpression innerProj = (ProjectionExpression) inner;

        // Resolve the outer element shape (e.g. Reservation)
        Shape outputShape = model.expectShape(operation.getOutputShape());
        String outerType = CollectionElementTypeResolver.resolveFromShape(innerProj, outputShape, model, smithyServiceName);
        if ("auto".equals(outerType)) return "auto";

        // Find the outer element shape in the model by name
        String outerShapeName = outerType.replace("Model::", "");
        Shape outerElementShape = model.shapes()
                .filter(s -> s.getId().getName().equals(outerShapeName) && s.isStructureShape())
                .findFirst().orElse(null);
        if (outerElementShape == null) return "auto";

        // The inner collection is accessed via innerProj.getRight() (e.g. Field("Instances"))
        // Wrap it as a projection to resolve its element type from the outer element shape
        JmespathExpression innerRight = innerProj.getRight();
        if (innerRight == null) return "auto";
        JmespathExpression syntheticProj = new ProjectionExpression(
                new FlattenExpression(innerRight), new CurrentExpression());
        return CollectionElementTypeResolver.resolveFromShape(syntheticProj, outerElementShape, model, smithyServiceName);
    }

    @Override
    public String visitObjectProjection(ObjectProjectionExpression expression) {
        String mapGetter = expression.getLeft().accept(new CollectionGetterEmitter());
        MapTypeInfo mapTypeInfo = resolveMapTypes(expression.getLeft());
        return emitMapProjection(mapGetter, expression.getRight(), mapTypeInfo);
    }

    String emitMapProjection(String mapGetter, JmespathExpression right, MapTypeInfo mapTypeInfo) {
        String mapPrefix = depth == 0
                ? "result" + mapGetter
                : itemVar(depth - 1) + mapGetter;

        String indent = "    ".repeat(depth + 1);
        String pairName = "pair" + depth;
        String itemName = itemVar(depth);

        StringBuilder sb = new StringBuilder();
        sb.append(indent).append("return ").append(algo).append("(")
                .append(mapPrefix).append(".begin(), ")
                .append(mapPrefix).append(".end(),\n");
        sb.append(indent).append("    [&](const std::pair<const ").append(mapTypeInfo.keyType)
                .append(", ").append(mapTypeInfo.valueType).append(">& ").append(pairName).append(") {\n");
        sb.append(indent).append("    const ").append(mapTypeInfo.valueType).append("& ").append(itemName)
                .append(" = ").append(pairName).append(".second;\n");

        if (right != null && !(right instanceof CurrentExpression)) {
            sb.append(right.accept(new ProjectionRightEmitter(algo, totalLevels, enumInfo, depth, model, operation, smithyServiceName)));
        }

        sb.append(indent).append("    });\n");
        return sb.toString();
    }

    private MapTypeInfo resolveMapTypes(JmespathExpression mapExpr) {
        if (model == null || operation == null) {
            return new MapTypeInfo("Aws::String", "auto");
        }
        Shape current = model.expectShape(operation.getOutputShape());
        Shape mapShape = walkToMapShape(mapExpr, current);
        if (mapShape == null || !mapShape.isMapShape()) {
            return new MapTypeInfo("Aws::String", "auto");
        }
        MapShape map = mapShape.asMapShape().get();
        String keyType = model.getShape(map.getKey().getTarget())
                .map(this::resolveKeyType).orElse("Aws::String");
        String valueType = model.getShape(map.getValue().getTarget())
                .filter(Shape::isStructureShape)
                .map(s -> CollectionElementTypeResolver.shapeToTypeName(s, smithyServiceName))
                .orElse("auto");
        return new MapTypeInfo(keyType, valueType);
    }

    private Shape walkToMapShape(JmespathExpression expr, Shape current) {
        if (expr instanceof FieldExpression) {
            String fieldName = ((FieldExpression) expr).getName();
            return current.asStructureShape()
                    .flatMap(s -> s.getMember(fieldName))
                    .flatMap(m -> model.getShape(m.getTarget()))
                    .orElse(null);
        } else if (expr instanceof Subexpression) {
            Subexpression sub = (Subexpression) expr;
            Shape afterLeft = walkToMapShape(sub.getLeft(), current);
            return afterLeft != null ? walkToMapShape(sub.getRight(), afterLeft) : null;
        }
        return null;
    }

    private String resolveKeyType(Shape keyShape) {
        return keyShape.isStringShape() ? "Aws::String" : "auto";
    }

    private NestedProjectionInfo extractNestedProjection(JmespathExpression left) {
        if (!(left instanceof FlattenExpression)) return null;
        JmespathExpression inner = ((FlattenExpression) left).getExpression();
        if (!(inner instanceof ProjectionExpression)) return null;
        ProjectionExpression innerProj = (ProjectionExpression) inner;
        String outerGetter = innerProj.getLeft().accept(new CollectionGetterEmitter());
        String innerGetter = innerProj.getRight() != null
                ? innerProj.getRight().accept(new CollectionGetterEmitter())
                : "";
        return new NestedProjectionInfo(outerGetter, innerGetter);
    }

    @Override
    public String visitFlatten(FlattenExpression expression) {
        return expression.getExpression().accept(this);
    }

    @Override
    public String visitSubexpression(Subexpression expression) {
        return expression.getLeft().accept(this);
    }

    Model getModel() { return model; }
    OperationShape getOperation() { return operation; }
    String getSmithyServiceName() { return smithyServiceName; }
}
