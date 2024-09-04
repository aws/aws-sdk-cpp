package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;
import java.util.ArrayList;
import lombok.Data;

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
    ArrayList<String> strArrayValue;

    public String getValue() throws Exception {
        if (ParameterType.BOOLEAN == this.type) {
            return boolValue ? "true" : "false";
        } else if (ParameterType.INTEGER == this.type) {
            return intValue.toString();
        } else if (ParameterType.STRING == this.type) {
            String strValueEscaped = (strValue.contains("\"") || strValue.contains("\\")) ? "R\"(" + strValue + ")\"" : "\"" + strValue + "\"";
            return strValueEscaped;
        } else if (ParameterType.STRING_ARRAY == this.type){
            StringBuilder sb = new StringBuilder();
            sb.append("Aws::Vector<Aws::String>{");
            //add in list form, escaped string
            for (int i = 0; i < strArrayValue.size(); i++) {
                String elem = strArrayValue.get(i);
                // Escape the string as needed
                String strValueEscaped = (elem.contains("\"") || elem.contains("\\"))
                    ? "R\"(" + elem + ")\""
                    : "\"" + elem + "\"";
                if (i > 0) {
                    sb.append(", ");
                }
                sb.append(strValueEscaped);
            }
            sb.append("}");
            return sb.toString();
        }
        throw new Exception("EndpointParameterValue not set!");
    }
}
