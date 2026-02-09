/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTDataPlane pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iot-data/IoTDataPlaneClientPagination.h>
#include <aws/iot-data/IoTDataPlanePaginationBase.h>
#include <aws/iot-data/model/ListRetainedMessagesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTDataPlanePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTDataPlanePaginationCompilationTest, IoTDataPlanePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
