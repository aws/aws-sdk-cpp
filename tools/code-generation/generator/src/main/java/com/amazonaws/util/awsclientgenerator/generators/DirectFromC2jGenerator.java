/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jXmlNamespace;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jXmlNamespaceDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.JsonNodeDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jInputTestSuite;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jOutputTestSuite;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j_protocol_test.C2jTestSuite;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.EndpointRuleSetModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.PartitionsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOption;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionModifier;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionJsonDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionModifierJsonDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.DefaultClientConfigs;

import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValue;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValueDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTestParamsDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTests;
import com.fasterxml.jackson.databind.JsonNode;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.reflect.TypeToken;

import java.io.ByteArrayOutputStream;
import java.lang.reflect.Type;
import java.util.List;

public class DirectFromC2jGenerator {

    private final MainGenerator mainClientGenerator;

    public DirectFromC2jGenerator(final MainGenerator mainClientGenerator) {
       this.mainClientGenerator = mainClientGenerator;
    }

    public ByteArrayOutputStream generateServiceSourceFromJson(String rawJson, String endpointRuleSet, String endpointRulesTests,
                                                               String languageBinding, String serviceName, String namespace,
                                                               String licenseText, boolean generateStandalonePackage,
                                                               boolean enableVirtualOperations, boolean useSmithyClient) throws Exception {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(EndpointTests.EndpointTestParams.class, new EndpointTestParamsDeserializer());
        gsonBuilder.registerTypeAdapter(EndpointParameterValue.class, new EndpointParameterValueDeserializer());
        gsonBuilder.registerTypeAdapter(C2jXmlNamespace.class, new C2jXmlNamespaceDeserializer());
        Gson gson = gsonBuilder.create();

        C2jServiceModel c2jServiceModel = gson.fromJson(rawJson, C2jServiceModel.class);
        c2jServiceModel.setServiceName(serviceName);
        c2jServiceModel.setEndpointRules(endpointRuleSet);
        EndpointRuleSetModel endpointRuleSetBom = parseEndpointRuleSet(endpointRuleSet);
        c2jServiceModel.setEndpointRuleSetModel(endpointRuleSetBom);
        if (endpointRulesTests != null) {
            EndpointTests endpointTestsModel = gson.fromJson(endpointRulesTests, EndpointTests.class);
            c2jServiceModel.setEndpointTests(endpointTestsModel);
        }
        return mainClientGenerator.generateSourceFromC2jModel(c2jServiceModel, serviceName, languageBinding, namespace,
                licenseText, generateStandalonePackage, enableVirtualOperations, useSmithyClient);
    }

    /**
     * A function to generate C++ source for core partitions
     *
     * @param rawJson
     * @param languageBinding
     * @param serviceName, dummy argument for interoperability with service generator
     * @param namespace
     * @param licenseText
     * @param generateStandalonePackage, dummy
     * @param enableVirtualOperations, dummy
     * @return C++ generated code
     * @throws Exception
     */
    public ByteArrayOutputStream generatePartitionsSourceFromJson(String rawJson, String languageBinding, String serviceName,
                                                                 String namespace, String licenseText,
                                                                 boolean generateStandalonePackage, boolean enableVirtualOperations) throws Exception {
        PartitionsModel partitionsBom = parsePartitions(rawJson);
        partitionsBom.setPartitionsBlob(rawJson);

        return mainClientGenerator.generatePartitionsSourceFromStrBlob(partitionsBom, languageBinding, namespace, licenseText);
    }

    /**
     * A function to generate C++ source for client config defaults
     *
     * @param rawJson
     * @param languageBinding
     * @param serviceName, dummy argument for interoperability with service generator
     * @param namespace
     * @param licenseText
     * @param generateStandalonePackage, dummy
     * @param enableVirtualOperations, dummy
     * @return C++ generated code
     * @throws Exception
     */
    public ByteArrayOutputStream generateDefaultsSourceFromJson(String rawJson, String languageBinding, String serviceName,
                                                                String namespace, String licenseText,
                                                                boolean generateStandalonePackage, boolean enableVirtualOperations) throws Exception {
        DefaultClientConfigs clientConfigBom = parseRawJson(rawJson);

        return mainClientGenerator.generateDefaultsSourceFromModel(clientConfigBom, languageBinding, namespace, licenseText);
    }

    /**
     * Helper function to parse raw json str into a structured BOM.
     *
     * @param rawJson
     * @return
     */
    public static DefaultClientConfigs parseRawJson(final String rawJson) {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(BaseOption.class, new BaseOptionJsonDeserializer());
        gsonBuilder.registerTypeAdapter(BaseOptionModifier.class, new BaseOptionModifierJsonDeserializer());
        Gson gson = gsonBuilder.create();

        // Read raw JSON into structured BOM
        /* Input raw JSON model contains (check json model for example):
            version (string, required) the version of the JSON file
            base (required) contains the actual configuration values
            modes (required), maps the mode name to the modification of configuration options.
            documentation (required) contains the documentation for modes and configuration options
         */
        DefaultClientConfigs clientConfigBom = gson.fromJson(rawJson, DefaultClientConfigs.class);
        return clientConfigBom;
    }

    /**
     * Parse rawJson into a structured Partitions object
     *
     * @param rawJson the raw json representation of the partitions object.
     * @return a parsed object of partitions.
     */
    public PartitionsModel parsePartitions(final String rawJson) {
        Gson gson = new Gson();
        return gson.fromJson(rawJson, PartitionsModel.class);
    }

    /**
     * Parse rawJson into a structured EndpointRuleSet object
     *
     * @param rawJson the raw json representation of the partitions object.
     * @return a parsed object of partitions.
     */
    public EndpointRuleSetModel parseEndpointRuleSet(final String rawJson) {
        Gson gson = new Gson();
        return gson.fromJson(rawJson, EndpointRuleSetModel.class);
    }


    /**
     * A function to generate C++ source for service client tests
     *
     * @throws Exception
     */
    public ByteArrayOutputStream generateServiceTestSourceFromModels(String rawJson, String endpointRuleSet, String endpointRulesTests,
                                                         String languageBinding, String serviceName, String namespace,
                                                         String licenseText) throws Exception {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(EndpointTests.EndpointTestParams.class, new EndpointTestParamsDeserializer());
        gsonBuilder.registerTypeAdapter(EndpointParameterValue.class, new EndpointParameterValueDeserializer());
        Gson gson = gsonBuilder.create();

        C2jServiceModel c2jServiceModel = gson.fromJson(rawJson, C2jServiceModel.class);
        c2jServiceModel.setServiceName(serviceName);
        c2jServiceModel.setEndpointRules(endpointRuleSet);
        if (endpointRulesTests != null) {
            EndpointTests endpointTestsModel = gson.fromJson(endpointRulesTests, EndpointTests.class);
            c2jServiceModel.setEndpointTests(endpointTestsModel);
        }
        return mainClientGenerator.generateTestSourceFromModel(c2jServiceModel, serviceName, languageBinding, namespace,
                licenseText);
    }

    /**
     * A function to generate C++ source for service client tests
     *
     * @throws Exception
     */
    public ByteArrayOutputStream generateProtocolTestSourceFromModels(String c2jModelJson, String protocolTestsJson,
                                                                      String protocolTestsType, String protocolTestsName,
                                                                      String serviceName) throws Exception {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(C2jXmlNamespace.class, new C2jXmlNamespaceDeserializer());
        gsonBuilder.registerTypeAdapter(JsonNode.class, new JsonNodeDeserializer());
        Gson gson = gsonBuilder.create();

        C2jServiceModel c2jServiceModel = gson.fromJson(c2jModelJson, C2jServiceModel.class);
        c2jServiceModel.setServiceName(serviceName);

        C2jTestSuite c2jProtocolTestModel = new C2jTestSuite();
        c2jProtocolTestModel.setName(protocolTestsName);
        c2jProtocolTestModel.setServiceToUse(serviceName);
        if (protocolTestsType.equalsIgnoreCase("input")) {
            c2jProtocolTestModel.setType(C2jTestSuite.TestSuiteType.INPUT);
            Type listType = new TypeToken<List<C2jInputTestSuite>>() {}.getType();
            List<C2jInputTestSuite> testSuite = gson.fromJson(protocolTestsJson, listType);
            c2jProtocolTestModel.setInputTestSuites(testSuite);
        } else if (protocolTestsType.equalsIgnoreCase("output")) {
            c2jProtocolTestModel.setType(C2jTestSuite.TestSuiteType.OUTPUT);
            Type listType = new TypeToken<List<C2jOutputTestSuite>>() {}.getType();
            List<C2jOutputTestSuite> testSuite = gson.fromJson(protocolTestsJson, listType);
            c2jProtocolTestModel.setOutputTestSuites(testSuite);
        } else {
            throw new RuntimeException("Unknown protocol test type: " + protocolTestsType);
        }
        return mainClientGenerator.generateProtocolTestSourceFromModel(c2jServiceModel, c2jProtocolTestModel);
    }
}
