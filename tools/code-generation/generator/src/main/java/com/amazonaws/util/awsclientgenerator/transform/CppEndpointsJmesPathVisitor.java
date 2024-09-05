package com.amazonaws.util.awsclientgenerator.transform;

import software.amazon.smithy.utils.Pair;
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
import software.amazon.smithy.build.SmithyBuildException;
import software.amazon.smithy.jmespath.ast.ProjectionExpression;
import software.amazon.smithy.jmespath.ast.SliceExpression;
import software.amazon.smithy.jmespath.ast.Subexpression;

import software.amazon.smithy.jmespath.ExpressionVisitor;
import java.text.MessageFormat;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;

import java.util.*;

class CppEndpointsJmesPathVisitor implements ExpressionVisitor<Pair<String, Shape>> {
    final OperationContextCppCodeGenerator context;
    final Shape input;

    CppEndpointsJmesPathVisitor(OperationContextCppCodeGenerator context, Shape input) {
        this.context = context;
        this.input = input;
    }

    @Override
    public Pair<String, Shape> visitObjectProjection(ObjectProjectionExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitProjection(ProjectionExpression expression) {
        Pair<String, Shape> left = expression.getLeft().accept(this);
        ShapeMember shapeMember = null;
        String varName = left.left + "Elem";
        if (left.right.isList()) {
            shapeMember = left.right.getListMember();
        }

        if (shapeMember != null) {
            context.rangeBasedForLoop(varName);
            context.openVariableScope(varName);
            Pair<String, Shape> right = expression.getRight().accept(
                    new CppEndpointsJmesPathVisitor(context, shapeMember.getShape()));
            context.closeVariableScope();
            return Pair.of(
                    left.left,
                    right.right);

        } else {
            throw new SmithyBuildException("Projection can only be applied to List Shapes.");
        }
    }

    @Override
    public Pair<String, Shape> visitFunction(FunctionExpression expression) {
        if (expression.getName().equals("keys")) {

            Pair<String, Shape> left = expression.getArguments().get(0).accept(this);
            if (!left.right.isMap()) {
                throw new SmithyBuildException("keys function not associated with Map type");
            }
            ShapeMember shapeMember = left.right.getMapKey();
            if (!shapeMember.getShape().isString()) {
                throw new SmithyBuildException("map key of type other than string is not supported");
            }
            String varName = expression.getName() + "Elem";
            context.rangeBasedForLoop(varName);
            context.openVariableScope(varName);
            context.addInScopeVariableToResult(Optional.of("first"));
            context.closeVariableScope();
            return Pair.of(
                    expression.getName(),
                    null);
        } else {
            throw new SmithyBuildException("Unsupported JMESPath expression");
        }
    }

    @Override
    public Pair<String, Shape> visitField(FieldExpression expression) {
        // if shape is list, then fetch list member else struct
        // currently assume this is always for a struct
        ShapeMember member = null;
        if (this.input.isStructure()) {
            member = this.input.getMembers().get(expression.getName());
        }
        if (member == null) {
            throw new SmithyBuildException("Failed to get field from expression");
        }

        // at the start of each code block
        String varName = expression.getName() + "Elem";
        // if a new scope started, declare variable accessed
        if (context.isStartOfNewScope() ||
                context.getVarName().isEmpty()) {
            context.addVariableInScope(varName);
        }
        // chain accessors
        context.getCppCode()
                .append(MessageFormat.format(".Get{0}()", CppViewHelper.convertToUpperCamel(expression.getName())));
        if (!member.getShape().isStructure()) {
            context.getCppCode().append(";\n");
            // if leaf element, push to result
            if (member.getShape().isString()) {
                context.addInScopeVariableToResult(Optional.empty());
            }
        }
        return Pair.of(
                expression.getName(),
                member.getShape());
    }

    @Override
    public Pair<String, Shape> visitSubexpression(Subexpression expression) {
        Pair<String, Shape> left = expression.getLeft().accept(this);
        Pair<String, Shape> right = expression.getRight().accept(new CppEndpointsJmesPathVisitor(context, left.right));

        return Pair.of(
                left.left + right.left,
                right.right);
    }

    @Override
    public Pair<String, Shape> visitExpressionType(ExpressionTypeExpression expression) {
        return expression.getExpression().accept(this);
    }

    @Override
    public Pair<String, Shape> visitComparator(ComparatorExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitCurrentNode(CurrentExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitFlatten(FlattenExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitIndex(IndexExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitLiteral(LiteralExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitMultiSelectList(MultiSelectListExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitMultiSelectHash(MultiSelectHashExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitAnd(AndExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitOr(OrExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitNot(NotExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitFilterProjection(FilterProjectionExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }

    @Override
    public Pair<String, Shape> visitSlice(SliceExpression expression) {
        throw new SmithyBuildException("Unsupported JMESPath expression");
    }
}