package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import com.google.gson.*;

import java.lang.reflect.Type;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;
import java.util.List;

public class C2jXmlNamespaceDeserializer implements JsonDeserializer<C2jXmlNamespace> {

    @Override
    public C2jXmlNamespace deserialize(JsonElement jsonElement, Type type,
                                       JsonDeserializationContext context) throws JsonParseException {
        C2jXmlNamespace retValue = new C2jXmlNamespace();

        if (jsonElement.isJsonObject()) {
            JsonObject jsonObject = jsonElement.getAsJsonObject();
            if (jsonObject.has("uri")) {
                JsonPrimitive uriPrimitive = jsonObject.getAsJsonPrimitive("uri");
                if (!uriPrimitive.isString()) {
                    throw new JsonParseException("Unexpected C2jXmlNamespace.uri type, expected a String!");
                }
                retValue.setUri(uriPrimitive.getAsString());
            }
            if (jsonObject.has("prefix")) {
                JsonPrimitive prefixPrimitive = jsonObject.getAsJsonPrimitive("prefix");
                if (!prefixPrimitive.isString()) {
                    throw new JsonParseException("Unexpected C2jXmlNamespace.prefix type, expected a String!");
                }
                retValue.setPrefix(prefixPrimitive.getAsString());
            }
        } else if (jsonElement.isJsonPrimitive() && jsonElement.getAsJsonPrimitive().isString()) {
            retValue.setUri(jsonElement.getAsJsonPrimitive().getAsString());
        } else {
            throw new JsonParseException("Unexpected C2jXmlNamespace value, expected primitive Object or Primitive!");
        }

        return retValue;
    }
}