/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.ShapeUtil;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class ShapeUtilExtensionsTest {

    @Test
    void hardcodedCollisionResolution_s3CopyObjectResult() {
        assertEquals("CopyObjectResultDetails",
            ShapeUtil.getHardcodedResolution("s3", "CopyObjectResult"));
    }

    @Test
    void hardcodedCollisionResolution_accessAnalyzer() {
        assertEquals("GeneratedPolicyResults",
            ShapeUtil.getHardcodedResolution("accessanalyzer", "GeneratedPolicyResult"));
    }

    @Test
    void hardcodedCollisionResolution_cloudSearchDomain() {
        assertEquals("SearchResultDetails",
            ShapeUtil.getHardcodedResolution("cloudsearchdomain", "SearchResult"));
    }

    @Test
    void hardcodedCollisionResolution_noMatch_returnsNull() {
        assertNull(ShapeUtil.getHardcodedResolution("kinesis", "SomeShape"));
    }

    @Test
    void hardcodedCollisionResolution_medialiveBatchUpdateScheduleResult_emptyString() {
        assertEquals("",
            ShapeUtil.getHardcodedResolution("medialive", "BatchUpdateScheduleResult"));
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
    void shapeCppName_medialiveBatchUpdateScheduleResult_removedShape_returnsEmpty() {
        assertEquals("",
            ShapeUtil.getShapeCppName("BatchUpdateScheduleResult", "medialive"));
    }

    @Test
    void shapeCppName_withHardcodedResolution_s3CopyObjectResult() {
        assertEquals("CopyObjectResultDetails",
            ShapeUtil.getShapeCppName("CopyObjectResult", "s3"));
    }
}
