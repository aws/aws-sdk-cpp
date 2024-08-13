/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class EndpointRuleSetModel {
    @Data
    public static class Parameter {
        @Data
        public static class Deprecated {
            private String message;
            private String since;

        }

        private String type; // required in schema
        private String builtIn;
        private boolean required;
        private String documentation;
        private Deprecated deprecated;

    }

    private String version;
    private String serviceId;
    private Map<String, Parameter> parameters;
    // private List<Rule> rules; // ignored by this SDK code gen at the moment
}