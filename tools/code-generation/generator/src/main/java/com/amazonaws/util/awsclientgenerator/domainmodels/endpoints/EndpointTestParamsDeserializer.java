package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;

import com.google.gson.*;

import java.lang.reflect.Type;
import java.util.Map;

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
            
        } else {
            if (parameterName.equals("signingRegionSet") &&
                element.getAsJsonArray().size() == 1 &&
                element.getAsString().equals("*")) {
                // The set of signing regions to use for this endpoint. Currently,
                // this will always be ["*"], however this should not be relied upon.
                parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.STRING);
                parameter.setStrValue("*");
            } else {
                // TODO: follow-up once per-operation tests are enabled
                // throw new JsonParseException("Unexpected EndpointTestParameter JSON value/type, primitive expected.");
                // tracing Warning to Error because STDOUT is already occupied for binary forwarding
                parameter.setType(EndpointTests.EndpointTestParameter.ParameterType.STRING);
                parameter.setStrValue(element.toString());

                System.err.println("Warning: Unexpected json element while parsing test EndpointParameters: " + parameterName);
            }
        }

        return parameter;
    }
}