package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;

import com.google.gson.*;

import java.lang.reflect.Type;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;
import java.util.List;

public class EndpointTestParamsDeserializer implements JsonDeserializer<EndpointTests.EndpointTestParams> {

    @Override
    public EndpointTests.EndpointTestParams deserialize(JsonElement jsonElement, Type type,
                                                        JsonDeserializationContext context) throws JsonParseException {
        EndpointTests.EndpointTestParams retValue = new EndpointTests.EndpointTestParams();

        if (!jsonElement.isJsonObject()) {
            throw new JsonParseException("Unexpected params JSON value type, object expected!");
        }

        JsonObject object = jsonElement.getAsJsonObject();

        for(Map.Entry<String, JsonElement> entry : object.entrySet()) {
            String parameterName = entry.getKey();
            JsonElement subJsonElement = entry.getValue();

            EndpointTests.EndpointTestParameter parameter = deserializeParameter(parameterName, subJsonElement);
            retValue.put(parameterName, parameter);
        }
        
        return retValue;
    }

    public static EndpointTests.EndpointTestParameter deserializeParameter(String parameterName, JsonElement element) {
        EndpointTests.EndpointTestParameter parameter = new EndpointTests.EndpointTestParameter();
        parameter.setName(parameterName);

        boolean isStringArray = element.isJsonArray() && StreamSupport.stream(element.getAsJsonArray().spliterator(), false)
            .allMatch(arrElem -> arrElem.isJsonPrimitive() && arrElem.getAsJsonPrimitive().isString());

        if (element.isJsonPrimitive()) {
            JsonPrimitive jsonPrimitive = element.getAsJsonPrimitive();

            if (jsonPrimitive.isBoolean()) {
                parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.BOOLEAN);
                parameter.setBoolValue(jsonPrimitive.getAsBoolean());
            } else if (jsonPrimitive.isNumber()) {
                parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.INTEGER);
                parameter.setIntValue(jsonPrimitive.getAsInt());
            } else if (jsonPrimitive.isString()) {
                parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.STRING);
                parameter.setStrValue(jsonPrimitive.getAsString());
            } else {
                throw new JsonParseException("Unexpected EndpointTestParameter JSON value");
            }
            
        }
        else if (parameterName.equals("signingRegionSet") &&
                element.getAsJsonArray().size() == 1 &&
                element.getAsString().equals("*")) {
                // The set of signing regions to use for this endpoint. Currently,
                // this will always be ["*"], however this should not be relied upon.
                parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.STRING);
                parameter.setStrValue("*");
        }
        else if(isStringArray)
        {
            JsonArray jsonArray = element.getAsJsonArray();
            parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.STRING_ARRAY);
            List<String> stringArray = StreamSupport.stream(jsonArray.spliterator(), false)
                    .map(arrElem -> {
                        if (arrElem.isJsonPrimitive() && arrElem.getAsJsonPrimitive().isString()) {
                            return arrElem.getAsJsonPrimitive().getAsString();
                        } else {
                            throw new JsonParseException("Unsupported type in array");
                        }
                    })
                    .collect(Collectors.toList());
            parameter.setStrArrayValue(stringArray);
        }
        else {
            // TODO: follow-up once per-operation tests are enabled
            // throw new JsonParseException("Unexpected EndpointTestParameter JSON value/type, primitive expected.");
            // tracing Warning to Error because STDOUT is already occupied for binary forwarding
            parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.STRING);
            parameter.setStrValue(element.toString());

            System.err.println("Warning: Unexpected json element while parsing test EndpointParameters: " + parameterName);
        }

        return parameter;
    }
}