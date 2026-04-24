/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import software.amazon.smithy.jmespath.ast.CurrentExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.ObjectProjectionExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.OperationShape;

/**
 * Visits the right side of a projection. If it encounters another projection
 * (via flatten), it creates a new ProjectionEmitter at the next depth.
 * Otherwise it emits the leaf comparison.
 */
class ProjectionRightEmitter extends UnsupportedExpressionVisitor<String> {
    private final String algo;
    private final int totalLevels;
    private final EnumInfo enumInfo;
    private final int parentDepth;
    private final Model model;
    private final OperationShape operation;
    private final String smithyServiceName;

    ProjectionRightEmitter(String algo, int totalLevels, EnumInfo enumInfo, int parentDepth,
                           Model model, OperationShape operation, String smithyServiceName) {
        this.algo = algo;
        this.totalLevels = totalLevels;
        this.enumInfo = enumInfo;
        this.parentDepth = parentDepth;
        this.model = model;
        this.operation = operation;
        this.smithyServiceName = smithyServiceName;
    }

    ProjectionRightEmitter(String algo, int totalLevels, EnumInfo enumInfo, int parentDepth) {
        this(algo, totalLevels, enumInfo, parentDepth, null, null, null);
    }

    private String itemVar() { return totalLevels == 1 ? "item" : "item" + parentDepth; }

    @Override
    public String visitField(FieldExpression e) {
        return emitLeafComparison(".Get" + ServiceNameUtil.capitalize(e.getName()) + "()");
    }

    @Override
    public String visitSubexpression(Subexpression e) {
        int innerProjections = e.accept(new ProjectionCounter());
        if (innerProjections > 0) {
            return e.accept(new ProjectionEmitter(algo, totalLevels, enumInfo, parentDepth + 1, model, operation, smithyServiceName));
        }
        String getters = e.accept(new GetterChainEmitter());
        return emitLeafComparison(getters);
    }

    @Override
    public String visitFlatten(FlattenExpression e) {
        return e.getExpression().accept(
                new ProjectionEmitter(algo, totalLevels, enumInfo, parentDepth + 1, model, operation, smithyServiceName));
    }

    @Override
    public String visitProjection(ProjectionExpression e) {
        return e.accept(new ProjectionEmitter(algo, totalLevels, enumInfo, parentDepth + 1, model, operation, smithyServiceName));
    }

    @Override
    public String visitObjectProjection(ObjectProjectionExpression e) {
        return e.accept(new ProjectionEmitter(algo, totalLevels, enumInfo, parentDepth + 1, model, operation, smithyServiceName));
    }

    @Override
    public String visitCurrentNode(CurrentExpression e) { return ""; }

    private String emitLeafComparison(String getterChain) {
        String indent = "    ".repeat(parentDepth + 2);
        String access = itemVar() + getterChain;
        if (enumInfo != null) {
            access = enumInfo.wrapAccess(access);
        }
        return indent + "return " + access + " == expected.get<Aws::String>();\n";
    }
}
