package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;

import lombok.Data;

@Data
public class EndpointParameterValue {
    enum ParameterType {
        BOOLEAN,
        INTEGER,
        STRING
    }
    ParameterType type;
    Boolean boolValue;
    Integer intValue;
    String strValue;

    public String getValue() throws Exception {
        if (ParameterType.BOOLEAN == this.type) {
            return boolValue ? "true" : "false";
        } else if (ParameterType.INTEGER == this.type) {
            return intValue.toString();
        } else if (ParameterType.STRING == this.type) {
            String strValueEscaped = (strValue.contains("\"") || strValue.contains("\\")) ? "R\"(" + strValue + ")\"" : "\"" + strValue + "\"";
            return strValueEscaped;
        }
        throw new Exception("EndpointParameterValue not set!");
    }
}
