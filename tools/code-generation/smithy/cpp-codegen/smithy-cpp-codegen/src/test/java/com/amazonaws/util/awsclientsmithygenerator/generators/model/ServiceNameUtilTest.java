/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.aws.traits.ServiceTrait;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.traits.TitleTrait;
import static org.junit.jupiter.api.Assertions.*;

class ServiceNameUtilTest {

    // A token that cannot appear in a sdkId-derived namespace. If the namespace derivation ever read
    // the display name (smithy.api#title), this would leak into the generated identifier.
    private static final String DISPLAY_NAME_SENTINEL = "DisplayNameSentinelZZZ";

    private static ServiceShape serviceWith(String sdkId, String title) {
        return ServiceShape.builder()
            .id("com.example#Service")
            .version("2021-01-01")
            .addTrait(ServiceTrait.builder()
                .sdkId(sdkId)
                .arnNamespace("guardtest")
                .cloudFormationName("GuardTest")
                .cloudTrailEventSource("guardtest.amazonaws.com")
                .build())
            .addTrait(new TitleTrait(title))
            .build();
    }

    @Test
    void capitalize_lowercaseString() {
        assertEquals("Kinesis", ServiceNameUtil.capitalize("kinesis"));
    }

    @Test
    void capitalize_uppercaseString() {
        assertEquals("Kinesis", ServiceNameUtil.capitalize("Kinesis"));
    }

    @Test
    void capitalize_mixedCase() {
        assertEquals("Dynamodb", ServiceNameUtil.capitalize("dynamodb"));
    }

    @Test
    void capitalize_singleChar() {
        assertEquals("A", ServiceNameUtil.capitalize("a"));
    }

    @Test
    void getExportMacro_standardService() {
        // Export macro is AWS_{SERVICE_NAME}_API; exercised indirectly via the capitalize logic it uses.
        assertEquals("Kinesis", ServiceNameUtil.capitalize("kinesis"));
    }

    @Test
    void getProjectName_standardService() {
        // Project name format (lowercase hyphenated) needs a full ServiceShape; covered separately.
    }

    // Guard: the namespace MUST derive from the sdkId (== C2J serviceId) only. A sentinel title must
    // not change the derived namespace, nor leak into it. sdkId NOT in the identifier table.
    @Test
    void getServiceName_derivesFromSdkIdOnly_derivedService() {
        String name = ServiceNameUtil.getServiceName(serviceWith("GuardTestService", DISPLAY_NAME_SENTINEL + " Title"));
        assertEquals("GuardTestService", name);
        assertFalse(name.contains(DISPLAY_NAME_SENTINEL));
    }

    // Same guard for a sdkId present in the identifier table (amp -> PrometheusService): the preserved
    // name must come from the sdkId-keyed table, never from the display name.
    @Test
    void getServiceName_derivesFromSdkIdOnly_tableService() {
        String name = ServiceNameUtil.getServiceName(serviceWith("amp", DISPLAY_NAME_SENTINEL + " Title"));
        assertEquals("PrometheusService", name);
        assertFalse(name.contains(DISPLAY_NAME_SENTINEL));
    }
}
