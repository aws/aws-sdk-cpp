package com.amazonaws.util.awsclientsmithygenerator.generators;
import software.amazon.smithy.model.node.Node;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.Shape;
import software.amazon.smithy.model.shapes.ShapeType;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.ShapeId;
import software.amazon.smithy.model.Model;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.stream.Collectors;

public class SmithyCodegenAdapter implements GenericCodegenAdapter<Shape, Node>{

    protected Model model;

    protected Map<String, OperationShape> operationShapeMap;

    public SmithyCodegenAdapter(Model model) {
        this.model = model;

        operationShapeMap = new HashMap<>();

        operationShapeMap = model.getOperationShapes().stream().collect(Collectors.toMap(
            operationShape -> operationShape.getId().getName(),
            operationShape -> operationShape,
            (existing, replacement) -> existing // Keep the first occurrence
        ));
    }

    @Override
    public Map<String, Shape> getMemberShapes(Shape shape)
    {
        Map<String, MemberShape> members = shape.getAllMembers();

        // Convert MemberShape to Shape and populate the result map
        Map<String, Shape> result  = members.entrySet().stream()
                .collect(Collectors.toMap(
                        Map.Entry::getKey, // Use the original key
                        entry -> {
                            ShapeId targetShapeId = entry.getValue().getTarget();
                            return model.getShape(targetShapeId).orElse(null);
                        }
                ));
        // Optionally filter out entries with null shapes
        result = result.entrySet().stream()
                .filter(entry -> entry.getValue() != null)
                .collect(Collectors.toMap(
                        Map.Entry::getKey,
                        Map.Entry::getValue
                ));

        return result;
    }

    @Override
    public Shape getShapeFromOperation(String OperationName)
    {
        OperationShape operationShape = operationShapeMap.get(OperationName);

        if(operationShape != null) {
            return model.getShape(operationShape.getInput().get()).orElse(null);
        }
        return null;
    }

    @Override
    public boolean isFloat(Node d)
    {
        return d.isNumberNode() && d.asNumberNode().get().isFloatingPointNumber();
    }

    @Override
    public boolean isBoolean(Node d)
    {
        return d.isBooleanNode();
    }

    @Override
    public boolean isInteger(Node d)
    {
        return d.isNumberNode() && !d.asNumberNode().get().isFloatingPointNumber();
    }

    @Override
    public boolean isString(Node d)
    {
        return d.isStringNode();
    }

    @Override
    public boolean isMap(Node d)
    {
        return d.isObjectNode();
    }

    @Override
    public boolean isList(Node d)
    {
        return d.isArrayNode();
    }

    @Override
    public boolean isFloatShape( Shape s)
    {
        return s.getType() == ShapeType.FLOAT;
    }

    @Override
    public boolean isBooleanShape(Shape s)
    {
        return s.getType() == ShapeType.BOOLEAN;
    }

    @Override
    public boolean isIntegerShape( Shape s)
    {
        return s.getType() == ShapeType.INTEGER;
    }

    @Override
    public boolean isStringShape(Shape s)
    {
        return s.getType() == ShapeType.STRING;
    }

    @Override
    public boolean isMapShape(Shape s)
    {
        return s.getType() == ShapeType.MAP || s.getType() == ShapeType.STRUCTURE  || s.getType() == ShapeType.UNION;
    }

    @Override
    public boolean isListShape( Shape s)
    {
        return s.getType() == ShapeType.LIST;
    }

    @Override
    public boolean isEnumShape( Shape s)
    {
        return s.getType() == ShapeType.ENUM;
    }

    @Override
    public List<Node> getList(Node d)
    {
        return d.asArrayNode().get().getElements();
    }

    @Override
    public Map<String, Node> getMap(Node d)
    {
        return  d.asObjectNode().get().getStringMap();
    }

    @Override
    public String getString(Node d)
    {
        return d.asStringNode().get().getValue();
    }

    @Override
    public Boolean getBoolean(Node d)
    {
        return d.asBooleanNode().get().getValue();
    }

    @Override
    public Float getFloat(Node d)
    {
        return d.asNumberNode().get().asBigDecimal().get().floatValue();
    }

    @Override
    public Integer getInteger(Node d)
    {
        return d.asNumberNode().get().getValue().intValue();
    }

    @Override
    public String getShapeName(Shape s)
    {
        String input = String.valueOf(s.getId());
        // Find the index of the '#' character
        int index = input.indexOf('#');

        if (index != -1) {
            // If '#' is found, return the substring after it
            return input.substring(index + 1);
        } else {
            // If no '#' is found, return the entire string
            return input;
        }
    }

    @Override
    public Shape getListMemberShape(Shape list) {
        MemberShape listShapeId = list.asListShape().get().getMember();
        Optional<Shape> listMemberShape = model.getShape(listShapeId.getTarget());
        return listMemberShape.get();
    }
}
