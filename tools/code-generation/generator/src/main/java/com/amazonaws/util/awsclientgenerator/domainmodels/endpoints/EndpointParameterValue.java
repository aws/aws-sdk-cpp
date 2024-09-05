package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;
import java.util.List;
import lombok.Data;
import java.util.stream.Collectors;
@Data
public class EndpointParameterValue {
    enum ParameterType {
        BOOLEAN,
        INTEGER,
        STRING,
        STRING_ARRAY
    }
    ParameterType type;
    Boolean boolValue;
    Integer intValue;
    String strValue;
    List<String> strArrayValue;

    public String getValue() throws Exception {
        if (ParameterType.BOOLEAN == this.type) {
            return boolValue ? "true" : "false";
        } else if (ParameterType.INTEGER == this.type) {
            return intValue.toString();
        } else if (ParameterType.STRING == this.type) {
            String strValueEscaped = (strValue.contains("\"") || strValue.contains("\\")) ? "R\"(" + strValue + ")\"" : "\"" + strValue + "\"";
            return strValueEscaped;
        } else if (ParameterType.STRING_ARRAY == this.type){
            String AWS_VECTOR_FORMAT = "Aws::Vector<Aws::String>{%s}";
            final String values = strArrayValue.stream().map(elem -> 
            (elem.contains("\"") || elem.contains("\\"))
                    ? "R\"(" + elem + ")\""
                    : "\"" + elem + "\""
            ).collect(Collectors.joining(","));
            return String.format(AWS_VECTOR_FORMAT, values);
        }
        throw new Exception("EndpointParameterValue not set!");
    }
}
