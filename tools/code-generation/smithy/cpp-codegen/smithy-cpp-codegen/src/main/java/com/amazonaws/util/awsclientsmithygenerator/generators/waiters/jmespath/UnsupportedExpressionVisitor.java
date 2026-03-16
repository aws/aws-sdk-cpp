/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import software.amazon.smithy.jmespath.ExpressionVisitor;
import software.amazon.smithy.jmespath.JmespathExpression;
import software.amazon.smithy.jmespath.ast.AndExpression;
import software.amazon.smithy.jmespath.ast.ComparatorExpression;
import software.amazon.smithy.jmespath.ast.CurrentExpression;
import software.amazon.smithy.jmespath.ast.ExpressionTypeExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FilterProjectionExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.FunctionExpression;
import software.amazon.smithy.jmespath.ast.IndexExpression;
import software.amazon.smithy.jmespath.ast.LiteralExpression;
import software.amazon.smithy.jmespath.ast.MultiSelectHashExpression;
import software.amazon.smithy.jmespath.ast.MultiSelectListExpression;
import software.amazon.smithy.jmespath.ast.NotExpression;
import software.amazon.smithy.jmespath.ast.ObjectProjectionExpression;
import software.amazon.smithy.jmespath.ast.OrExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.SliceExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;

/**
 * Base visitor that throws {@link UnsupportedOperationException} for every node type.
 * Concrete visitors override only the methods they handle.
 */
public abstract class UnsupportedExpressionVisitor<T> implements ExpressionVisitor<T> {
    private T fail(JmespathExpression e) {
        throw new UnsupportedOperationException("Unsupported expression: " + e.getClass().getSimpleName());
    }
    @Override public T visitComparator(ComparatorExpression e) { return fail(e); }
    @Override public T visitCurrentNode(CurrentExpression e) { return fail(e); }
    @Override public T visitExpressionType(ExpressionTypeExpression e) { return fail(e); }
    @Override public T visitField(FieldExpression e) { return fail(e); }
    @Override public T visitFilterProjection(FilterProjectionExpression e) { return fail(e); }
    @Override public T visitFlatten(FlattenExpression e) { return fail(e); }
    @Override public T visitFunction(FunctionExpression e) { return fail(e); }
    @Override public T visitIndex(IndexExpression e) { return fail(e); }
    @Override public T visitLiteral(LiteralExpression e) { return fail(e); }
    @Override public T visitMultiSelectHash(MultiSelectHashExpression e) { return fail(e); }
    @Override public T visitMultiSelectList(MultiSelectListExpression e) { return fail(e); }
    @Override public T visitAnd(AndExpression e) { return fail(e); }
    @Override public T visitOr(OrExpression e) { return fail(e); }
    @Override public T visitNot(NotExpression e) { return fail(e); }
    @Override public T visitObjectProjection(ObjectProjectionExpression e) { return fail(e); }
    @Override public T visitProjection(ProjectionExpression e) { return fail(e); }
    @Override public T visitSlice(SliceExpression e) { return fail(e); }
    @Override public T visitSubexpression(Subexpression e) { return fail(e); }
}
