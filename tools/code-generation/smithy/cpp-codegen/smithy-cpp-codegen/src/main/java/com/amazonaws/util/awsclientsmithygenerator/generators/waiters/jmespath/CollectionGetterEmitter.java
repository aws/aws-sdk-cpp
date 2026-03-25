/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.ObjectProjectionExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.CurrentExpression;

/**
 * Extracts a collection getter chain from JmesPath AST nodes, stripping projections.
 */
public class CollectionGetterEmitter extends UnsupportedExpressionVisitor<String> {
    @Override public String visitField(FieldExpression e) {
        return ".Get" + ServiceNameUtil.capitalize(e.getName()) + "()";
    }
    @Override public String visitSubexpression(Subexpression e) {
        return e.getLeft().accept(this) + e.getRight().accept(this);
    }
    @Override public String visitProjection(ProjectionExpression e) {
        return e.getLeft().accept(this);
    }
    @Override public String visitObjectProjection(ObjectProjectionExpression e) {
        return e.getLeft().accept(this);
    }
    @Override public String visitFlatten(FlattenExpression e) {
        return e.getExpression().accept(this);
    }
    @Override public String visitCurrentNode(CurrentExpression e) { return ""; }
}
