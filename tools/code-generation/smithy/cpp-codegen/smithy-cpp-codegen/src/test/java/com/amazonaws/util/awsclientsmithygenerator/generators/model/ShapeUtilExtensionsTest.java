/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import org.junit.jupiter.api.Test;

import java.util.Optional;

import static org.junit.jupiter.api.Assertions.*;

class ShapeUtilExtensionsTest {

    @Test
    void hardcodedCollisionResolution_s3CopyObjectResult() {
        assertEquals(Optional.of("CopyObjectResultDetails"),
            ShapeUtil.getHardcodedResolution("s3", "CopyObjectResult"));
    }

    @Test
    void hardcodedCollisionResolution_accessAnalyzer() {
        assertEquals(Optional.of("GeneratedPolicyResults"),
            ShapeUtil.getHardcodedResolution("accessanalyzer", "GeneratedPolicyResult"));
    }

    @Test
    void hardcodedCollisionResolution_cloudSearchDomain() {
        assertEquals(Optional.of("SearchResultDetails"),
            ShapeUtil.getHardcodedResolution("cloudsearchdomain", "SearchResult"));
    }

    @Test
    void hardcodedCollisionResolution_noMatch_returnsEmpty() {
        assertTrue(ShapeUtil.getHardcodedResolution("kinesis", "SomeShape").isEmpty());
    }

    @Test
    void hardcodedCollisionResolution_medialive_noEntry() {
        assertTrue(ShapeUtil.getHardcodedResolution("medialive", "BatchUpdateScheduleResult").isEmpty());
    }

    @Test
    void shapeCppName_numericPrefix() {
        assertEquals("The1stShape", ShapeUtil.getShapeCppName("1stShape", "someservice"));
    }

    @Test
    void shapeCppName_normalName_unchanged() {
        assertEquals("MyShape", ShapeUtil.getShapeCppName("MyShape", "someservice"));
    }

    @Test
    void shapeCppName_medialive_noOverride_returnsUnchanged() {
        assertEquals("BatchUpdateScheduleResult",
            ShapeUtil.getShapeCppName("BatchUpdateScheduleResult", "medialive"));
    }

    @Test
    void shapeCppName_withHardcodedResolution_s3CopyObjectResult() {
        assertEquals("CopyObjectResultDetails",
            ShapeUtil.getShapeCppName("CopyObjectResult", "s3"));
    }
}
