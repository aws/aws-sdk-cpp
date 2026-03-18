/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;

import java.util.Optional;

/**
 * Resolves the C++ element type for a collection referenced by a JMESPath expression.
 * Returns "auto" when the model is unavailable or the type cannot be determined.
 */
public class CollectionElementTypeResolver {

    /**
     * Resolve the element type of the outermost collection that a projection iterates over.
     * For list projections, returns "Model::ShapeName" for the list member's target.
     * Returns "auto" for map projections or when the model is unavailable.
     * This is because C++ 11 does not allow auto in lambdas
     */
    public static String resolve(JmespathExpression expr, Model model, OperationShape operation,
                                 String smithyServiceName) {
        if (model == null || operation == null) return "auto";
        Shape outputShape = model.expectShape(operation.getOutputShape());
        return resolveFromShape(expr, outputShape, model, smithyServiceName);
    }

    /**
     * Resolve element type starting from a known parent shape.
     */
    public static String resolveFromShape(JmespathExpression expr, Shape current, Model model,
                                          String smithyServiceName) {
        if (model == null || current == null) return "auto";
        return findFirstListElement(expr, current, model)
                .filter(Shape::isStructureShape)
                .map(element -> {
                    String shapeName = element.getId().getName();
                    if ("ec2".equals(smithyServiceName) && shapeName.endsWith("Result")) {
                        shapeName = shapeName.substring(0, shapeName.length() - 6) + "Response";
                    }
                    return "Model::" + shapeName;
                })
                .orElse("auto");
    }

    /**
     * Finds the element shape of the first list encountered when walking the projection's
     * collection path (the left side of the projection).
     */
    private static Optional<Shape> findFirstListElement(JmespathExpression expr, Shape current, Model model) {
        if (expr instanceof ProjectionExpression) {
            return findFirstListInPath(((ProjectionExpression) expr).getLeft(), current, model);
        } else if (expr instanceof FlattenExpression) {
            return findFirstListElement(((FlattenExpression) expr).getExpression(), current, model);
        } else if (expr instanceof Subexpression) {
            Subexpression sub = (Subexpression) expr;
            return walkFields(sub.getLeft(), current, model)
                    .flatMap(afterLeft -> findFirstListElement(sub.getRight(), afterLeft, model));
        }
        return Optional.empty();
    }

    /**
     * Walks the left side of a projection to find the first list shape and return its element.
     * Stops at the first list encountered (the collection being iterated).
     */
    private static Optional<Shape> findFirstListInPath(JmespathExpression expr, Shape current, Model model) {
        if (expr instanceof FieldExpression) {
            return resolveMemberTarget(current, ((FieldExpression) expr).getName(), model)
                    .filter(Shape::isListShape)
                    .map(target -> model.expectShape(target.asListShape().get().getMember().getTarget()));
        } else if (expr instanceof Subexpression) {
            Subexpression sub = (Subexpression) expr;
            Optional<Shape> afterLeft = walkFields(sub.getLeft(), current, model);
            if (afterLeft.filter(Shape::isListShape).isPresent()) {
                return afterLeft.map(s -> model.expectShape(s.asListShape().get().getMember().getTarget()));
            }
            return afterLeft.flatMap(s -> findFirstListInPath(sub.getRight(), s, model));
        } else if (expr instanceof FlattenExpression) {
            return findFirstListInPath(((FlattenExpression) expr).getExpression(), current, model);
        } else if (expr instanceof ProjectionExpression) {
            return findFirstListInPath(((ProjectionExpression) expr).getLeft(), current, model);
        }
        return Optional.empty();
    }

    /**
     * Walks field/subexpression nodes to resolve the shape, without unwrapping lists.
     */
    private static Optional<Shape> walkFields(JmespathExpression expr, Shape current, Model model) {
        if (expr instanceof FieldExpression) {
            return resolveMemberTarget(current, ((FieldExpression) expr).getName(), model);
        } else if (expr instanceof Subexpression) {
            return walkFields(((Subexpression) expr).getLeft(), current, model)
                    .flatMap(left -> walkFields(((Subexpression) expr).getRight(), left, model));
        }
        return Optional.of(current);
    }

    private static Optional<Shape> resolveMemberTarget(Shape structShape, String memberName, Model model) {
        if (!structShape.isStructureShape()) return Optional.empty();
        return structShape.asStructureShape().get()
                .getMember(memberName)
                .flatMap(member -> model.getShape(member.getTarget()));
    }
}
