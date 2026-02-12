/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NetworkFlowMonitor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/networkflowmonitor/NetworkFlowMonitorClientPagination.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorPaginationBase.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListMonitorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListScopesPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NetworkFlowMonitorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NetworkFlowMonitorPaginationCompilationTest, NetworkFlowMonitorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
