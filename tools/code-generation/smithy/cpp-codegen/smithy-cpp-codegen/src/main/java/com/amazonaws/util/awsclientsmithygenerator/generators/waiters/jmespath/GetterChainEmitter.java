/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;

import java.util.Optional;

/**
 * Emits a getter chain for non-projection field access (e.g. ".GetCluster().GetStatus()").
 */
public class GetterChainEmitter extends UnsupportedExpressionVisitor<String> {
    private final Optional<String> resultClassName;

    public GetterChainEmitter() {
        this(Optional.empty());
    }

    public GetterChainEmitter(Optional<String> resultClassName) {
        this.resultClassName = resultClassName;
    }

    @Override public String visitField(FieldExpression e) {
        String getter = "Get" + ServiceNameUtil.capitalize(e.getName());
        return "." + resultClassName.filter(getter::equals).map(name -> "Get" + name).orElse(getter) + "()";
    }
    @Override public String visitSubexpression(Subexpression e) {
        return e.getLeft().accept(this) + e.getRight().accept(new GetterChainEmitter());
    }
    @Override public String visitFlatten(FlattenExpression e) {
        return e.getExpression().accept(this);
    }
}
