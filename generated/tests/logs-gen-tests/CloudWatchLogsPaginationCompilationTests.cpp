/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudWatchLogs pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/logs/CloudWatchLogsClientPagination.h>
#include <aws/logs/CloudWatchLogsPaginationBase.h>
#include <aws/logs/model/GetLogEventsPaginationTraits.h>
#include <aws/logs/model/ListSourcesForS3TableIntegrationPaginationTraits.h>
#include <aws/logs/model/FilterLogEventsPaginationTraits.h>
#include <aws/logs/model/ListAggregateLogGroupSummariesPaginationTraits.h>
#include <aws/logs/model/DescribeLogStreamsPaginationTraits.h>
#include <aws/logs/model/DescribeLogGroupsPaginationTraits.h>
#include <aws/logs/model/ListAnomaliesPaginationTraits.h>
#include <aws/logs/model/ListLogGroupsForQueryPaginationTraits.h>
#include <aws/logs/model/DescribeMetricFiltersPaginationTraits.h>
#include <aws/logs/model/DescribeSubscriptionFiltersPaginationTraits.h>
#include <aws/logs/model/GetScheduledQueryHistoryPaginationTraits.h>
#include <aws/logs/model/ListLogAnomalyDetectorsPaginationTraits.h>
#include <aws/logs/model/DescribeDeliveriesPaginationTraits.h>
#include <aws/logs/model/DescribeDeliverySourcesPaginationTraits.h>
#include <aws/logs/model/DescribeConfigurationTemplatesPaginationTraits.h>
#include <aws/logs/model/ListScheduledQueriesPaginationTraits.h>
#include <aws/logs/model/DescribeDestinationsPaginationTraits.h>
#include <aws/logs/model/DescribeDeliveryDestinationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudWatchLogsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudWatchLogsPaginationCompilationTest, CloudWatchLogsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
