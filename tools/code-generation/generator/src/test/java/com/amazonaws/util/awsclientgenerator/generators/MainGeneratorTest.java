/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.DefaultsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.DefaultClientConfigs;
import org.junit.Test;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;

public class MainGeneratorTest {

    private static String TEST_JSON =
                    "{\n" +
                    "    \"version\": 1,\n" +
                    "    \"base\": {\n" +
                    "        \"retryMode\": \"standard\",\n" +
                    "        \"stsRegionalEndpoints\": \"regional\",\n" +
                    "        \"s3UsEast1RegionalEndpoints\": \"regional\",\n" +
                    "        \"connectTimeoutInMillis\": 1000,\n" +
                    "        \"tlsNegotiationTimeoutInMillis\": 1000\n" +
                    "    },\n" +
                    "    \"modes\": {\n" +
                    "        \"standard\": {\n" +
                    "            \"connectTimeoutInMillis\": {\n" +
                    "                \"multiply\":2\n" +
                    "            },\n" +
                    "            \"tlsNegotiationTimeoutInMillis\": {\n" +
                    "                \"multiply\":2\n" +
                    "            }\n" +
                    "        },\n" +
                    "        \"in-region\": {\n" +
                    "            \"connectTimeoutInMillis\": {\n" +
                    "                \"multiply\": 1\n" +
                    "            },\n" +
                    "            \"tlsNegotiationTimeoutInMillis\": {\n" +
                    "                \"multiply\": 1\n" +
                    "            }\n" +
                    "        },\n" +
                    "        \"cross-region\": {\n" +
                    "            \"connectTimeoutInMillis\": {\n" +
                    "                \"multiply\": 2.8\n" +
                    "            },\n" +
                    "            \"tlsNegotiationTimeoutInMillis\": {\n" +
                    "                \"multiply\": 2.8\n" +
                    "            }\n" +
                    "        },\n" +
                    "        \"mobile\": {\n" +
                    "            \"connectTimeoutInMillis\": {\n" +
                    "                \"override\": 10000\n" +
                    "            },\n" +
                    "            \"tlsNegotiationTimeoutInMillis\": {\n" +
                    "                \"add\": 10000\n" +
                    "            },\n" +
                    "            \"retryMode\": {\n" +
                    "               \"override\": \"adaptive\"\n" +
                    "            }\n" +
                    "        }\n" +
                    "    },\n" +
                    "    \"documentation\": {\n" +
                    "      \"modes\": {\n" +
                    "          \"standard\": \"PLACEHOLDER\",\n" +
                    "          \"in-region\": \"PLACEHOLDER\",\n" +
                    "          \"cross-region\": \"PLACEHOLDER\",\n" +
                    "          \"mobile\": \"PLACEHOLDER\",\n" +
                    "          \"auto\": \"PLACEHOLDER\",\n" +
                    "          \"legacy\": \"PLACEHOLDER\"\n" +
                    "      },\n" +
                    "      \"configuration\": {\n" +
                    "          \"retryMode\": \"PLACEHOLDER\",\n" +
                    "          \"stsRegionalEndpoints\": \"PLACEHOLDER\",\n" +
                    "          \"s3UsEast1RegionalEndpoints\": \"PLACEHOLDER\",\n" +
                    "          \"connectTimeoutInMillis\": \"PLACEHOLDER\",\n" +
                    "          \"tlsNegotiationTimeoutInMillis\": \"PLACEHOLDER\"\n" +
                    "      }\n" +
                    "  }\n" +
                    "}";

    public static class ExpectedProcessedValues {
        public ExpectedProcessedValues(String inDefaultsModeName,
                                       Integer inTimeout,
                                       Integer inTlsNegotiationTimeout,
                                       String inStsRegionalEndpoints,
                                       String inS3UsEast1RegionalEndpoints,
                                       String inRetryMode) {
            this.defaultsModeName = inDefaultsModeName;
            this.timeout = inTimeout;
            this.tlsNegotiationTimeout = inTlsNegotiationTimeout;
            this.stsRegionalEndpoints = inStsRegionalEndpoints;
            this.s3UsEast1RegionalEndpoints = inS3UsEast1RegionalEndpoints;
            this.retryMode = inRetryMode;
        }

        public String defaultsModeName;
        public Integer timeout;
        public Integer tlsNegotiationTimeout;
        public String stsRegionalEndpoints;
        public String s3UsEast1RegionalEndpoints;
        public String retryMode;
    }

    static final List<ExpectedProcessedValues> EXPECTED_PROCESSED_VALUES = new ArrayList<ExpectedProcessedValues>() {{
        add(new ExpectedProcessedValues("standard", 2000, 2000, "regional", "regional", "standard"));
        add(new ExpectedProcessedValues("in-region", 1000, 1000, "regional", "regional", "standard"));
        add(new ExpectedProcessedValues("cross-region", 2800, 2800, "regional", "regional", "standard"));
        add(new ExpectedProcessedValues("mobile", 10000, 11000, "regional", "regional", "adaptive"));
        /*add(new ExpectedProcessedValues( **SDK existing default** ));*/
    }};

    @Test
    public void defaultsResolutionTest() throws Exception {
        DefaultClientConfigs clientConfigBom = DirectFromC2jGenerator.parseRawJson(TEST_JSON);
        DefaultsModel processedModel = MainGenerator.processDefaultsInputModel(clientConfigBom);

        LinkedList<DefaultsModel.DefaultsMode> processedModes = processedModel.getDefaultsModes();

        for (final ExpectedProcessedValues expected : EXPECTED_PROCESSED_VALUES) {
            DefaultsModel.DefaultsMode testedMode = processedModes.stream()
                    .filter(mode -> expected.defaultsModeName.equals(mode.getName()))
                    .findAny()
                    .orElse(null);

            assertNotNull("Tested mode " + expected.defaultsModeName + " must be present in a built model!", testedMode);

            assertEquals(expected.defaultsModeName + " timeout",
                    expected.timeout, testedMode.getConfigurationValues().get("connectTimeoutInMillis").getIntValue());

            assertEquals(expected.defaultsModeName + " tlsNegotiationTimeout",
                    expected.tlsNegotiationTimeout, testedMode.getConfigurationValues().get("tlsNegotiationTimeoutInMillis").getIntValue());

            assertEquals(expected.defaultsModeName + " stsRegionalEndpoints",
                    expected.stsRegionalEndpoints, testedMode.getConfigurationValues().get("stsRegionalEndpoints").getStrValue());

            assertEquals(expected.defaultsModeName + " s3UsEast1RegionalEndpoints",
                    expected.s3UsEast1RegionalEndpoints, testedMode.getConfigurationValues().get("s3UsEast1RegionalEndpoints").getStrValue());

            assertEquals(expected.defaultsModeName + " retryMode",
                    expected.retryMode, testedMode.getConfigurationValues().get("retryMode").getStrValue());
        }
    }
}
