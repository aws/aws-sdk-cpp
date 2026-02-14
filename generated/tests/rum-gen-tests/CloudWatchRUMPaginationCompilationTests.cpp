/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudWatchRUM pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/rum/CloudWatchRUMClientPagination.h>
#include <aws/rum/CloudWatchRUMPaginationBase.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsPaginationTraits.h>
#include <aws/rum/model/GetAppMonitorDataPaginationTraits.h>
#include <aws/rum/model/ListRumMetricsDestinationsPaginationTraits.h>
#include <aws/rum/model/ListAppMonitorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudWatchRUMPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudWatchRUMPaginationCompilationTest, CloudWatchRUMPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
