/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SnowDeviceManagement pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/snow-device-management/SnowDeviceManagementClientPagination.h>
#include <aws/snow-device-management/SnowDeviceManagementPaginationBase.h>
#include <aws/snow-device-management/model/ListTasksPaginationTraits.h>
#include <aws/snow-device-management/model/ListDeviceResourcesPaginationTraits.h>
#include <aws/snow-device-management/model/ListExecutionsPaginationTraits.h>
#include <aws/snow-device-management/model/ListDevicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SnowDeviceManagementPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SnowDeviceManagementPaginationCompilationTest, SnowDeviceManagementPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
