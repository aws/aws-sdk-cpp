package com.amazonaws.util.awsclientgenerator.domainmodels.defaults;

import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonParseException;
import com.google.gson.JsonPrimitive;

import java.lang.reflect.Type;

public class BaseOptionJsonDeserializer implements JsonDeserializer<BaseOption> {

    @Override
    public BaseOption deserialize(JsonElement jsonElement, Type type,
                                  JsonDeserializationContext context) throws JsonParseException {
        if (jsonElement.isJsonPrimitive()) {
            JsonPrimitive jsonPrimitive = jsonElement.getAsJsonPrimitive();

            BaseOption baseOption = new BaseOption();

            if (jsonPrimitive.isString()) {
                baseOption.setType(BaseOption.OptionType.STRING);
                baseOption.setStrValue(jsonPrimitive.getAsString());
                return baseOption;
            } else if (jsonPrimitive.isNumber()) {
                baseOption.setType(BaseOption.OptionType.INTEGER);
                baseOption.setIntValue(jsonPrimitive.getAsInt());
                return baseOption;
            }
        }
        throw new JsonParseException("Unexpected BaseOptionModifier JSON value");
    }
}
