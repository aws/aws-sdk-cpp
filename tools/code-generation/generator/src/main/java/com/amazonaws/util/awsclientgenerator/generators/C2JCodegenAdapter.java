package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;


import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.stream.Collectors;

public class C2JCodegenAdapter implements GenericCodegenAdapter<Shape, Object>{

    protected ServiceModel model;
    protected final Map<String, Shape> shapeMap;
    protected final Map<String, Operation> operationsMap;

    public C2JCodegenAdapter(ServiceModel model) {
        this.model = model;
        this.shapeMap = model.getShapes();
        this.operationsMap = model.getOperations();
    }

    @Override
    public Map<String, Shape> getMemberShapes(Shape shape)
    {
        Map<String, Shape> result = new HashMap<>();

        if(shape.isMap())
        {
            result.put(shape.getMapKey().getShape().getName(),
                    shape.getMapValue().getShape()
            );
        }
        else if(shape.isStructure())
        {
            result = shape.getMembers().entrySet().stream().collect(Collectors.toMap (
                    Map.Entry::getKey,
                    entry -> entry.getValue().getShape()
                ));

        }

        return result;
    }

    @Override
    public Shape getShapeFromOperation(String OperationName)
    {
        return shapeMap.get(OperationName);
    }

    @Override
    public boolean isFloat(Object d) {return (d instanceof Float);}

    @Override
    public boolean isBoolean(Object d)
    {
        return (d instanceof Boolean);
    }

    @Override
    public boolean isInteger(Object d)
    {
        return (d instanceof Integer);
    }

    @Override
    public boolean isString(Object d)
    {
        return (d instanceof String);
    }

    @Override
    public boolean isMap(Object d) {return (d instanceof Map);}

    @Override
    public boolean isList(Object d){ return (d instanceof List);}

    @Override
    public boolean isFloatShape( Shape s)
    {
        return s.isPrimitive();
    }

    @Override
    public boolean isBooleanShape(Shape s)
    {
        return s.isBoolean();
    }

    @Override
    public boolean isIntegerShape( Shape s)
    {
        return s.isPrimitive();
    }

    @Override
    public boolean isStringShape(Shape s)
    {
        //@todo:enum needs to be handled
        return s.getType().equals("string");
    }

    @Override
    public boolean isMapShape(Shape s)
    {
        return s.isMap() || s.isStructure();
    }

    @Override
    public boolean isListShape( Shape s)
    {
        return s.isList();
    }

    @Override
    public List<Object> getList(Object d)
    {
        return  (List<Object>) d;
    }

    @Override
    public Map<String, Object> getMap(Object d)
    {
        return (Map<String, Object>) d;
    }

    @Override
    public String getString(Object d)
    {
        return (String) d;
    }

    @Override
    public Boolean getBoolean(Object d)
    {
        return (Boolean) d;
    }

    @Override
    public Float getFloat(Object d)
    {
        return (Float) d;
    }

    @Override
    public Integer getInteger(Object d)
    {
        return (Integer) d;
    }

    @Override
    public String getShapeName(Shape s)
    {
        if (s.isList())
        {
            return getListMemberShape(s).getName();
        }
        return s.getName();
    }

    @Override
    public Shape getListMemberShape(Shape list) {
        return list.getListMember().getShape();
    }
}
