package com.amazonaws.util.awsclientsmithygenerator.generators.waiters.jmespath;

public class MapTypeInfo {
    final String keyType;
    final String valueType;
    MapTypeInfo(String keyType, String valueType) {
        this.keyType = keyType;
        this.valueType = valueType;
    }
}
