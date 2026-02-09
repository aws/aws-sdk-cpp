/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for InternetMonitor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/internetmonitor/InternetMonitorClientPagination.h>
#include <aws/internetmonitor/InternetMonitorPaginationBase.h>
#include <aws/internetmonitor/model/ListMonitorsPaginationTraits.h>
#include <aws/internetmonitor/model/ListInternetEventsPaginationTraits.h>
#include <aws/internetmonitor/model/ListHealthEventsPaginationTraits.h>
#include <aws/internetmonitor/model/GetQueryResultsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class InternetMonitorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(InternetMonitorPaginationCompilationTest, InternetMonitorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
