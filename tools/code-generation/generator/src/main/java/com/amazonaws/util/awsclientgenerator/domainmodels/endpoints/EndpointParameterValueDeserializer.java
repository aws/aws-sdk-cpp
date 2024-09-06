package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;

import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.JsonPrimitive;

import java.lang.reflect.Type;
import java.util.Map;
import java.util.List;
import java.util.stream.Collectors;
import com.google.common.collect.Streams;
public class EndpointParameterValueDeserializer implements JsonDeserializer<EndpointParameterValue> {

    @Override
    public EndpointParameterValue deserialize(JsonElement jsonElement, Type type,
                                                        JsonDeserializationContext context) throws JsonParseException {
        EndpointParameterValue retValue = new EndpointParameterValue();
        if (jsonElement.isJsonPrimitive()) 
        {
            JsonPrimitive primitive = jsonElement.getAsJsonPrimitive();
            if (primitive.isBoolean()) {
                retValue.setType(EndpointParameterValue.ParameterType.BOOLEAN);
                retValue.setBoolValue(primitive.getAsBoolean());
            } else if (primitive.isString()) {
                retValue.setType(EndpointParameterValue.ParameterType.STRING);
                retValue.setStrValue(primitive.getAsString());
            } else if (primitive.isNumber()) {
                retValue.setType(EndpointParameterValue.ParameterType.INTEGER);
                retValue.setIntValue(primitive.getAsInt());
            }
            else{
                throw new JsonParseException("Unexpected EndpointParameterValue value, primitive expected");
            }
        }
        else if(jsonElement.isJsonArray())
        {
            List<String> jsonStringList = Streams.stream(jsonElement.getAsJsonArray().iterator())
                .filter(element -> !element.isJsonPrimitive())
                .filter(element -> !element.getAsJsonPrimitive().isString())
                .map(element -> element.getAsJsonPrimitive().getAsString())
                .collect(Collectors.toList());
            retValue.setType(EndpointParameterValue.ParameterType.STRING_ARRAY);
            retValue.setStrArrayValue(jsonStringList);
        }
        else
        {
            throw new JsonParseException("Unexpected params JSON value type, primitive or string array expected!");
        }

        return retValue;

    }
}