/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators;

import java.lang.reflect.Type;
import java.util.Map;
import java.util.HashMap;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;

public class SmithyC2JNamespaceMap {
    private static SmithyC2JNamespaceMap instance = null;
    private Map<String, String> SMITHY_C2J_SERVICE_NAME_MAP;
    private static boolean isInitialized = false;

    private SmithyC2JNamespaceMap(String jsonString){

        if(jsonString.isEmpty())
        {
            this.SMITHY_C2J_SERVICE_NAME_MAP = new HashMap<>();
        }
        else {
            Type mapType = new TypeToken<Map<String, String>>() {
            }.getType();
            Gson gson = new Gson();
            this.SMITHY_C2J_SERVICE_NAME_MAP = gson.fromJson(jsonString, mapType);
        }
    }

    //This method must be called once to construct an internal mapping of smithy to c2j namespace
    public static SmithyC2JNamespaceMap getInstance(String jsonString)
    {
        //double check locking
        if(instance == null)
        {
            synchronized (SmithyC2JNamespaceMap.class) {
                if (instance == null) {
                    instance = new SmithyC2JNamespaceMap(jsonString);
                    isInitialized = true;
                }
            }
        }
        return instance;
    }
    
    public static SmithyC2JNamespaceMap getInstance()
    {
        if (!isInitialized) {
            // If accessed without prior initialization, throw an exception
            throw new IllegalStateException("Singleton not initialized. Call getInstance(json string) first.");
        }
        return instance;
    }

    public String getC2JServiceName(String smithyServiceName)
    {
        if(SMITHY_C2J_SERVICE_NAME_MAP.containsKey(smithyServiceName))
        {
            return SMITHY_C2J_SERVICE_NAME_MAP.get(smithyServiceName);
        }
        return smithyServiceName;
    }
}
