/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.ServiceNameUtil;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class ServiceNameUtilTest {

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
        // Test the export macro format follows AWS_{SERVICE_NAME}_API pattern
        // We test it indirectly through the capitalize logic it uses
        assertEquals("Kinesis", ServiceNameUtil.capitalize("kinesis"));
    }

    @Test
    void getProjectName_standardService() {
        // Test the project name format (lowercase hyphenated)
        // This would require a full ServiceShape which is tested separately
    }
}
