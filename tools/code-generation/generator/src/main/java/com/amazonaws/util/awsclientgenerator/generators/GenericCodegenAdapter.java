package com.amazonaws.util.awsclientgenerator.generators;

import java.util.List;
import java.util.Map;

//Common Interface for Code generator adapter
//Currently it builds setter functions from test input
public interface GenericCodegenAdapter<SHAPE, DATA> {

    public Map<String, SHAPE> getMemberShapes(SHAPE shape);

    public SHAPE getShapeFromOperation(String OperationName);

    public boolean isFloat(DATA d);

    public boolean isBoolean(DATA d);

    public boolean isInteger(DATA d);

    public boolean isString(DATA d);

    public boolean isMap(DATA d);

    public boolean isList(DATA d);

    public boolean isFloatShape( SHAPE s);

    public boolean isBooleanShape(SHAPE s);

    public boolean isIntegerShape( SHAPE s);

    public boolean isStringShape(SHAPE s);

    public boolean isMapShape(SHAPE s);

    public boolean isListShape( SHAPE s);

    public List<DATA> getList(DATA d);

    public Map<String, DATA> getMap(DATA d);

    public SHAPE getListMemberShape(SHAPE list);

    public String getString(DATA d);

    public Boolean getBoolean(DATA d);

    public Float getFloat(DATA d);

    public Integer getInteger(DATA d);

    public String getShapeName(SHAPE s);

    public static String convertSnakeToPascal(String snakeCase) {
        StringBuilder result = new StringBuilder();
        String[] words = snakeCase.split("_");

        // Capitalize the first word
        result.append(words[0].substring(0, 1).toUpperCase())
                .append(words[0].substring(1).toLowerCase());

        // Capitalize the first letter of each remaining word and append
        for (int i = 1; i < words.length; i++) {
            result.append(words[i].substring(0, 1).toUpperCase())
                    .append(words[i].substring(1).toLowerCase());
        }

        return result.toString();
    }

    //at each level use shape object from model resolution to use the code generated appropriate type
    //use shapes map from  model representation to navigate and define appropriate type
    //use key to find appropriate
    default public String GenerateCppSetters(
            String key,
            DATA value,
            SHAPE shape, //useful for C++ return type object
            int level, //useful for depth
            int count, //useful for array elements at same depth
            Map<String, String> functionMap
    ) throws Exception
    {
        if(shape == null)
        {
            throw new Exception("Invalid shape found");
        }
        //if object is a structure, then return will be a function call and the function definition will be in
        // functionMap
        //if object is a simple type, then return will just be the value.
        String functionName = new String();
        String indentPrefix = "\t";
        String varName = key.toLowerCase();
        String functionNameSuffix = convertSnakeToPascal(varName + "_lvl" + level + "_idx" + count);

        //for simple types, use initializer list for narrow types
        if ( (isFloat(value) && isFloatShape(shape)) ||
                (isInteger(value) && isIntegerShape(shape) ) ||
                (isBoolean(value) && isBooleanShape(shape))
        )
        {
            functionName = String.format("{%s}",value);
        }
        else if (isString(value) && isStringShape(shape))
        {
            functionName = String.format("{\"%s\"}",value);
        }
        else if (isMap(value) && isMapShape(shape))
        {
            StringBuilder sb = new StringBuilder();
            functionName = String.format("Get%s()", functionNameSuffix);
            String shapeName = getShapeName(shape);
            //get all immediate map member shapes
            Map<String, SHAPE> fieldShapeMap = getMemberShapes(shape);
            //define function body
            sb.append(String.format("%s %s\n{\n", shapeName, functionName));

            //declare variable
            sb.append(String.format("%s%s %s ;\n",indentPrefix,shapeName,varName));
            //iterate over map keys
            Map<String, DATA> map =  getMap(value);
            for (Map.Entry<String, DATA> entry : map.entrySet()) {

                String mapKey = entry.getKey();
                DATA mapValue = entry.getValue();
                SHAPE fieldShape = fieldShapeMap.get(mapKey);

                //set elements of the variable
                sb.append(String.format("%s%s.Set%s( %s );\n", indentPrefix, varName, mapKey,
                        GenerateCppSetters(mapKey,
                                mapValue,
                                fieldShape,
                                level + 1,
                                0,
                                functionMap
                        )
                ));
            }

            //prepare function code and save it for the variable name
            //return only the function name
            sb.append(String.format("%sreturn %s;\n}\n", indentPrefix,varName));

            functionMap.put(functionName, sb.toString());
        }
        else if (isList(value) && isListShape(shape))
        {
            StringBuilder sb = new StringBuilder();
            functionName = String.format("Get%s()",functionNameSuffix);

            //assume objects will be same type
            List<DATA> list = getList(value);

            String listType = getShapeName(shape);

            //open function body
            sb.append(String.format("Aws::Vector<%s> %s\n{\n",listType, functionName));

            //vector setter
            sb.append(String.format("%sAws::Vector<%s> %s = {",indentPrefix,listType, varName));

            //list is assumed to have homogenous type,
            SHAPE listMemberShape = getListMemberShape(shape);

            for (int i = 0; i < list.size(); i++)
            {
                DATA element = list.get(i);

                sb.append(
                        String.format("%s",
                                GenerateCppSetters(key,
                                        element,
                                        listMemberShape,
                                        level + 1,
                                        i,
                                        functionMap
                                )
                        )
                );
                if(i != list.size()-1)
                {
                    sb.append(",\n");
                }
            }
            sb.append(String.format("%s};\n",indentPrefix));

            //close function body
            sb.append(String.format("%sreturn %s;\n}\n", indentPrefix,varName));
            functionMap.put(functionName, sb.toString());
        }

        return functionName;
    }
}
