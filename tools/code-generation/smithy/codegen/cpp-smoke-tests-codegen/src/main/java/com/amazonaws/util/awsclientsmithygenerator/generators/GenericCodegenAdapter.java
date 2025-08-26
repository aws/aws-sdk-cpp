/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import java.util.List;
import java.util.Map;

import com.google.common.base.CaseFormat;

public interface GenericCodegenAdapter<SHAPE, DATA> {

    public Map<String, SHAPE> getMemberShapes(SHAPE shape);

    public SHAPE getShapeFromOperation(String OperationName);

    public boolean isFloat(DATA d);

    public boolean isBoolean(DATA d);

    public boolean isInteger(DATA d);

    public boolean isString(DATA d);

    public boolean isMap(DATA d);

    public boolean isList(DATA d);

    public boolean isDouble(DATA d);

    public boolean isFloatShape( SHAPE s);

    public boolean isBooleanShape(SHAPE s);

    public boolean isIntegerShape( SHAPE s);

    public boolean isStringShape(SHAPE s);

    public boolean isMapShape(SHAPE s);

    public boolean isListShape( SHAPE s);

    public boolean isEnumShape( SHAPE s);

    public boolean isTimestampShape(SHAPE s);

    public boolean isDoubleShape( SHAPE s);

    public boolean isDocumentShape(SHAPE s);

    public List<DATA> getList(DATA d);

    public Map<String, DATA> getMap(DATA d);

    public SHAPE getListMemberShape(SHAPE list);

    public String getString(DATA d);

    public Boolean getBoolean(DATA d);

    public Float getFloat(DATA d);

    public Integer getInteger(DATA d);

    public Double getDouble(DATA d);

    public String getShapeName(SHAPE s);

    public void recordContainerForImport(SHAPE s);

    public static String capitalizeFirstLetter(String input) {
        StringBuilder result = new StringBuilder();
        result.append(input.substring(0, 1).toUpperCase())
                    .append(input.substring(1));

        return result.toString();
    }

    default public String GenerateCppSetters(
            String key,
            DATA value,
            SHAPE shape, //useful for C++ return type object
            int level, //useful for depth
            int count, //useful for array elements at same depth
            Map<String, String> functionMap,
            List<String> functionOrder
    ) throws RuntimeException
    {
        if(shape == null)
        {
            throw new RuntimeException("Invalid shape found");
        }
        //if object is a structure, then return will be a function call and the function definition will be in
        // functionMap
        //if object is a simple type, then return will just be the value.
        String functionName = new String();
        String varName =  CaseFormat.UPPER_CAMEL.to(CaseFormat.LOWER_UNDERSCORE, key);//key.toLowerCase();
        String functionNameSuffix = CaseFormat.LOWER_UNDERSCORE.to(CaseFormat.LOWER_CAMEL, varName + "_lvl" + level + "_idx" + count );

        recordContainerForImport(shape);

        //for simple types, use initializer list for narrow types
        if ( (isFloat(value) && isFloatShape(shape)) ||
                (isInteger(value) && isIntegerShape(shape) ) ||
                (isBoolean(value) && isBooleanShape(shape))
        )
        {
            functionName = String.format("%s",value);
        }
        else if (isString(value) && isStringShape(shape))
        {
            functionName = String.format("\"%s\"",value);
        }
        else if (isMap(value) && isMapShape(shape))
        {
            functionName = String.format("Get%s", functionNameSuffix);
            String shapeName = getShapeName(shape);
            //get all immediate map member shapes
            Map<String, SHAPE> fieldShapeMap = getMemberShapes(shape);
            //define function body and declare variable
            CppBlockWriter blockWriter = new CppBlockWriter( 
                                                CppBlockWriter.GetLambdaBlock(shapeName,functionName)
                                                , 0)
            .addCode(String.format("%s %s ;\n",shapeName,varName));
            
            //iterate over map keys
            Map<String, DATA> map =  getMap(value);
            for (Map.Entry<String, DATA> entry : map.entrySet()) {

                String mapKey = entry.getKey();
                DATA mapValue = entry.getValue();
                SHAPE fieldShape = fieldShapeMap.get(mapKey);
                //set elements of the variable
                blockWriter.addCode(String.format("%s.Set%s( %s );\n", varName, capitalizeFirstLetter(mapKey),
                        GenerateCppSetters(mapKey,
                                mapValue,
                                fieldShape,
                                level + 1,
                                0,
                                functionMap,
                                functionOrder
                        )
                ));
            }

            //prepare function code and save it for the variable name
            //return only the function name
            blockWriter.addCode(String.format("return %s;\n",varName)).closeCodeBlock();
            functionMap.put(functionName, blockWriter.getCode() );
            functionOrder.add(functionName);
            functionName = functionName.concat("()");
        }
        else if (isList(value) && isListShape(shape))
        {
            functionName = String.format("Get%s",functionNameSuffix);

            //assume objects will be same type
            List<DATA> list = getList(value);

            //list is assumed to have homogenous type,
            SHAPE listMemberShape = getListMemberShape(shape);

            String listType = getShapeName(listMemberShape);

            String returnType = "Aws::Vector<"+listType+">";
            //open function body and use vector setter
            CppBlockWriter blockWriter = new CppBlockWriter(CppBlockWriter.GetLambdaBlock(returnType, functionName), 0)
                        .addCode(String.format("Aws::Vector<%s> %s = ",listType, varName))
                        .openCodeBlock("");

            for (int i = 0; i < list.size(); i++)
            {
                DATA element = list.get(i);

                blockWriter.addCode(
                        String.format("%s",
                                GenerateCppSetters(key,
                                        element,
                                        listMemberShape,
                                        level + 1,
                                        i,
                                        functionMap,
                                        functionOrder
                                )
                        )
                );
                if(i != list.size()-1)
                {
                    blockWriter.addCode(",\n");
                }
            }
            blockWriter.closeCodeBlock().addCode(String.format("return %s;\n",varName)).closeCodeBlock();

            functionMap.put(functionName, blockWriter.getCode());
            functionOrder.add(functionName);
            functionName = functionName.concat("()");
        }
        else if (isString(value) && isEnumShape(shape))
        {
            String shapeName = getShapeName(shape);
            String enumValue = getString(value).replace("-", "_");
            functionName = String.format("%s::%s",shapeName,enumValue);
        }
        else if(isTimestampShape(shape))
        {
            if(isString(value))
            {
                functionName = String.format("\"%s\"",value);
            }
            else if(isDouble(value))
            {
                functionName = String.format("{(double)%s}",value);
            }
            else
            {
                throw new RuntimeException("unsupported timestamp shape format");
            }
        } else if (isDocumentShape(shape)) {
            functionName = String.format("Aws::Utils::Document{R\"({\"%s\", \"%s\"})\"}", key, value);
        } else
        {
            throw new RuntimeException(String.format("shape not supported:%s",shape));
        }

        return functionName;
    }
}
