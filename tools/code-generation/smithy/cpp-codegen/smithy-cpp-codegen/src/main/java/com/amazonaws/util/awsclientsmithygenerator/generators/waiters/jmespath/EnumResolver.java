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
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;

/**
 * Walks the Smithy model along the JmesPath field path to determine if the leaf
 * targets an enum shape. Returns null if not an enum or model is unavailable.
 *
 * This is a read-only pass — it does not produce code.
 */
public class EnumResolver {
    /**
     * Walk the model from the output shape along the expression's field path.
     * Returns EnumInfo if the leaf is an enum, null otherwise.
     */
    public static EnumInfo resolveEnumInfo(JmespathExpression expr, Model model, OperationShape operation) {
        if (model == null || operation == null) return null;
        Shape current = model.expectShape(operation.getOutputShape());
        current = walkExpression(expr, current, model);
        if (current != null && current.isEnumShape()) {
            return new EnumInfo(current.getId().getName());
        }
        return null;
    }

    private static Shape walkExpression(JmespathExpression expr, Shape current, Model model) {
        if (current == null) return null;
        if (expr instanceof FieldExpression) {
            return resolveMemberTarget(current, ((FieldExpression) expr).getName(), model);
        } else if (expr instanceof Subexpression) {
            Shape left = walkExpression(((Subexpression) expr).getLeft(), current, model);
            return walkExpression(((Subexpression) expr).getRight(), left, model);
        } else if (expr instanceof ObjectProjectionExpression) {
            ObjectProjectionExpression objProj = (ObjectProjectionExpression) expr;
            Shape afterLeft = walkExpression(objProj.getLeft(), current, model);
            if (afterLeft != null && afterLeft.isMapShape()) {
                afterLeft = model.expectShape(afterLeft.asMapShape().get().getValue().getTarget());
            }
            if (objProj.getRight() != null && !(objProj.getRight() instanceof CurrentExpression)) {
                return walkExpression(objProj.getRight(), afterLeft, model);
            }
            return afterLeft;
        } else if (expr instanceof ProjectionExpression) {
            ProjectionExpression proj = (ProjectionExpression) expr;
            Shape afterLeft = walkProjectionLeft(proj.getLeft(), current, model);
            if (afterLeft != null && afterLeft.isListShape()) {
                afterLeft = model.expectShape(afterLeft.asListShape().get().getMember().getTarget());
            }
            if (proj.getRight() != null && !(proj.getRight() instanceof CurrentExpression)) {
                return walkExpression(proj.getRight(), afterLeft, model);
            }
            return afterLeft;
        } else if (expr instanceof FlattenExpression) {
            return walkExpression(((FlattenExpression) expr).getExpression(), current, model);
        }
        return current;
    }

    private static Shape walkProjectionLeft(JmespathExpression expr, Shape current, Model model) {
        if (current == null) return null;
        if (expr instanceof FieldExpression) {
            return resolveMemberTarget(current, ((FieldExpression) expr).getName(), model);
        } else if (expr instanceof FlattenExpression) {
            JmespathExpression inner = ((FlattenExpression) expr).getExpression();
            if (inner instanceof ProjectionExpression) {
                ProjectionExpression innerProj = (ProjectionExpression) inner;
                Shape afterLeft = walkProjectionLeft(innerProj.getLeft(), current, model);
                if (afterLeft != null && afterLeft.isListShape()) {
                    afterLeft = model.expectShape(afterLeft.asListShape().get().getMember().getTarget());
                }
                if (innerProj.getRight() != null && !(innerProj.getRight() instanceof CurrentExpression)) {
                    return walkExpression(innerProj.getRight(), afterLeft, model);
                }
                return afterLeft;
            }
            return walkProjectionLeft(inner, current, model);
        }
        return current;
    }

    private static Shape resolveMemberTarget(Shape structShape, String memberName, Model model) {
        if (!structShape.isStructureShape()) return null;
        return structShape.asStructureShape().get()
                .getMember(memberName)
                .flatMap(member -> model.getShape(member.getTarget()))
                .orElse(null);
    }
}
