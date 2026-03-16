/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.ObjectProjectionExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.CurrentExpression;

/**
 * Counts projection levels in an expression.
 * Determines whether to use "item" (1 level) or "item0"/"item1" (multi-level).
 */
public class ProjectionCounter extends UnsupportedExpressionVisitor<Integer> {
    @Override public Integer visitProjection(ProjectionExpression e) {
        return 1 + e.getLeft().accept(this) +
                (e.getRight() != null ? e.getRight().accept(this) : 0);
    }
    @Override public Integer visitObjectProjection(ObjectProjectionExpression e) {
        return visitProjection(e);
    }
    @Override public Integer visitFlatten(FlattenExpression e) { return e.getExpression().accept(this); }
    @Override public Integer visitSubexpression(Subexpression e) {
        return e.getLeft().accept(this) + e.getRight().accept(this);
    }
    @Override public Integer visitField(FieldExpression e) { return 0; }
    @Override public Integer visitCurrentNode(CurrentExpression e) { return 0; }
}
