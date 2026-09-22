/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudWatchOmni pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudwatchomni/CloudWatchOmniClientPagination.h>
#include <aws/cloudwatchomni/CloudWatchOmniPaginationBase.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListOmniDashboardsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListDomainsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListViewsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListAlertsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListAccessProfilesPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListSpacesForOrganizationPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListTelemetryFieldsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListTelemetryQuerySessionsPaginationTraits.h>
#include <aws/cloudwatchomni/model/SearchPrincipalsPaginationTraits.h>
#include <aws/cloudwatchomni/model/GetContextGraphPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListSpacesPaginationTraits.h>
#include <aws/cloudwatchomni/model/GetTelemetryQueryResultsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListIntegrationsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListAccessGrantsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudWatchOmniPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudWatchOmniPaginationCompilationTest, CloudWatchOmniPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
