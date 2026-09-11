/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.endpointcontext;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.CppNames;
import com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath.UnsupportedExpressionVisitor;
import software.amazon.smithy.build.SmithyBuildException;
import software.amazon.smithy.jmespath.ast.ExpressionTypeExpression;
import software.amazon.smithy.jmespath.ast.FieldExpression;
import software.amazon.smithy.jmespath.ast.FlattenExpression;
import software.amazon.smithy.jmespath.ast.FunctionExpression;
import software.amazon.smithy.jmespath.ast.MultiSelectListExpression;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ListShape;
import software.amazon.smithy.model.shapes.MapShape;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.StructureShape;

/**
 * Translates the JMESPath expression from {@code smithy.rules#operationContextParams} into C++ that
 * walks the request struct and pushes leaf values into a {@code result} {@code Aws::Vector<Aws::String>}.
 * Immutable and value-returning: each visit returns an {@link Emit}, parents compose children's
 * results. Produces the same C++ as legacy C2J (identifiers/statements), modulo whitespace.
 */
public final class SmithyEndpointsJmesPathVisitor extends UnsupportedExpressionVisitor<Emit> {

    private final Model model;
    private final Shape input;
    private final String baseExpr;
    private final String chainRoot; // null => the next field starts a new chain and names the alias

    /** Entry point: {@code baseExpr} is typically {@code "(*this)"}; the chain is not yet started. */
    public SmithyEndpointsJmesPathVisitor(Model model, Shape input, String baseExpr) {
        this(model, input, baseExpr, null);
    }

    private SmithyEndpointsJmesPathVisitor(Model model, Shape input, String baseExpr, String chainRoot) {
        this.model = model;
        this.input = input;
        this.baseExpr = baseExpr;
        this.chainRoot = chainRoot;
    }

    @Override
    public Emit visitField(FieldExpression expression) {
        if (!(input instanceof StructureShape)) {
            throw new SmithyBuildException("Failed to get field from expression");
        }
        MemberShape member = ((StructureShape) input).getMember(expression.getName()).orElse(null);
        if (member == null) {
            throw new SmithyBuildException("Failed to get field from expression");
        }
        String root = (chainRoot != null) ? chainRoot : expression.getName();
        String expr = baseExpr + ".Get" + CppNames.capitalize(expression.getName()) + "()";
        Shape target = model.expectShape(member.getTarget());
        if (target instanceof StructureShape) {
            // Non-leaf: continue the accessor chain, emit nothing yet.
            return new Emit("", expr, target, root);
        }
        String alias = root + "Elems";
        if (target.isStringShape()) {
            String stmt = "auto& " + alias + " = " + expr + ";\n"
                        + "result.emplace_back(" + alias + ");\n";
            return new Emit(stmt, expr, target, root);
        }
        // List/map terminal of a chain consumed by an enclosing projection/keys: bind the alias only.
        return new Emit("auto& " + alias + " = " + expr + ";\n", expr, target, root);
    }

    @Override
    public Emit visitSubexpression(Subexpression expression) {
        Emit left = expression.getLeft().accept(this);
        Emit right = expression.getRight().accept(
            new SmithyEndpointsJmesPathVisitor(model, left.shape(), left.valueExpr(), left.rootName()));
        return new Emit(left.statements() + right.statements(),
                        right.valueExpr(), right.shape(), right.rootName());
    }

    @Override
    public Emit visitProjection(ProjectionExpression expression) {
        Emit left = expression.getLeft().accept(this);
        if (!(left.shape() instanceof ListShape)) {
            // No list to iterate here (e.g. the trailing flatten-projection of a multi-select, whose
            // left subtree already emitted every statement); propagate them rather than discarding.
            return left;
        }
        String alias = left.rootName() + "Elems";
        String loopVar = left.rootName() + "Elem";
        Shape listMember = model.expectShape(((ListShape) left.shape()).getMember().getTarget());
        Emit body = expression.getRight().accept(
            new SmithyEndpointsJmesPathVisitor(model, listMember, loopVar, null));
        String loop = "for (auto& " + loopVar + " : " + alias + ")\n{\n" + body.statements() + "}\n";
        return new Emit(left.statements() + loop, loopVar, listMember, null);
    }

    @Override
    public Emit visitFlatten(FlattenExpression expression) {
        if (expression.getExpression() instanceof ProjectionExpression) {
            return visitProjection((ProjectionExpression) expression.getExpression());
        }
        return expression.getExpression().accept(this);
    }

    @Override
    public Emit visitFunction(FunctionExpression expression) {
        if (!expression.getName().equals("keys")) {
            throw new SmithyBuildException("Unsupported JMESPath expression");
        }
        Emit arg = expression.getArguments().get(0).accept(this);
        if (!(arg.shape() instanceof MapShape)) {
            throw new SmithyBuildException("keys function not associated with Map type");
        }
        MemberShape keyMember = ((MapShape) arg.shape()).getKey();
        if (!model.expectShape(keyMember.getTarget()).isStringShape()) {
            throw new SmithyBuildException("map key of type other than string is not supported");
        }
        String alias = arg.rootName() + "Elems";
        String loopVar = expression.getName() + "Elem"; // "keysElem"
        String loop = "for (auto& " + loopVar + " : " + alias + ")\n{\n"
                    + "result.emplace_back(" + loopVar + ".first);\n}\n";
        return new Emit(arg.statements() + loop, loopVar, null, null);
    }

    @Override
    public Emit visitMultiSelectList(MultiSelectListExpression expression) {
        StringBuilder sb = new StringBuilder();
        for (var e : expression.getExpressions()) {
            sb.append(e.accept(this).statements());
        }
        return new Emit(sb.toString(), baseExpr, input, null);
    }

    @Override
    public Emit visitExpressionType(ExpressionTypeExpression expression) {
        return expression.getExpression().accept(this);
    }
}
