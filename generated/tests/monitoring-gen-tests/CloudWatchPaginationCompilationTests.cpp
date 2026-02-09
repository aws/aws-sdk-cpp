/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudWatch pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/monitoring/CloudWatchClientPagination.h>
#include <aws/monitoring/CloudWatchPaginationBase.h>
#include <aws/monitoring/model/DescribeAlarmHistoryPaginationTraits.h>
#include <aws/monitoring/model/ListManagedInsightRulesPaginationTraits.h>
#include <aws/monitoring/model/ListMetricsPaginationTraits.h>
#include <aws/monitoring/model/ListMetricStreamsPaginationTraits.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsPaginationTraits.h>
#include <aws/monitoring/model/GetMetricDataPaginationTraits.h>
#include <aws/monitoring/model/DescribeAlarmsPaginationTraits.h>
#include <aws/monitoring/model/DescribeInsightRulesPaginationTraits.h>
#include <aws/monitoring/model/ListDashboardsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudWatchPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudWatchPaginationCompilationTest, CloudWatchPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
