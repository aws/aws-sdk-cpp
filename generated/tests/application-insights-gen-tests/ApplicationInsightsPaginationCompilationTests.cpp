/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ApplicationInsights pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/application-insights/ApplicationInsightsClientPagination.h>
#include <aws/application-insights/ApplicationInsightsPaginationBase.h>
#include <aws/application-insights/model/ListConfigurationHistoryPaginationTraits.h>
#include <aws/application-insights/model/ListLogPatternSetsPaginationTraits.h>
#include <aws/application-insights/model/ListWorkloadsPaginationTraits.h>
#include <aws/application-insights/model/ListProblemsPaginationTraits.h>
#include <aws/application-insights/model/ListApplicationsPaginationTraits.h>
#include <aws/application-insights/model/ListLogPatternsPaginationTraits.h>
#include <aws/application-insights/model/ListComponentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ApplicationInsightsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ApplicationInsightsPaginationCompilationTest, ApplicationInsightsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
