package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOption;
import lombok.Data;

import java.util.LinkedList;
import java.util.TreeMap;

@Data
public class DefaultsModel {

    public static class ConfigurationValues extends TreeMap<String, BaseOption> {
    }

    @Data
    public static class DefaultsMode {
        public DefaultsMode() {
            this.configurationValues = new ConfigurationValues();
        }
        private String name;
        private String documentation;
        private ConfigurationValues configurationValues;
    }

    public DefaultsModel() {
        this.defaultsModes = new LinkedList<>();
    }

    String version;
    String service;
    LinkedList<DefaultsMode> defaultsModes;
}
