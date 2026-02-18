/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTDeviceAdvisor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClientPagination.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorPaginationBase.h>
#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsPaginationTraits.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTDeviceAdvisorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTDeviceAdvisorPaginationCompilationTest, IoTDeviceAdvisorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
