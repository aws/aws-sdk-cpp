/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NetworkMonitor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/networkmonitor/NetworkMonitorClientPagination.h>
#include <aws/networkmonitor/NetworkMonitorPaginationBase.h>
#include <aws/networkmonitor/model/ListMonitorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NetworkMonitorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NetworkMonitorPaginationCompilationTest, NetworkMonitorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
