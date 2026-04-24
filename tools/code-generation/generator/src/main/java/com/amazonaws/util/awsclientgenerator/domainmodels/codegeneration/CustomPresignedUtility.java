package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Builder;
import lombok.Data;

import java.util.List;
import java.util.Set;

@Data
@Builder
public class CustomPresignedUtility {
    static public String STRING_QUERY_PARAM_TYPE = "const Aws::String&";

    @Data
    @Builder
    public static class QueryParam {
        private String type;
        private String variableName;
        private String paramterName;
        private String hardcodedValue;
    }

    private String functionName;
    private String hostNameVarName;
    private String regionVarName;
    private List<QueryParam> queryParams;
    private Set<String> possibleActions;
}
