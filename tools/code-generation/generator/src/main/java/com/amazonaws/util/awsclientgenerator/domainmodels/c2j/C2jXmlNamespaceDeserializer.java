/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;


import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.JsonPrimitive;

import java.lang.reflect.Type;

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