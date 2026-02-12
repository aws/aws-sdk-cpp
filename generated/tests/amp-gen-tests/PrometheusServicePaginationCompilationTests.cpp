/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PrometheusService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/amp/PrometheusServiceClientPagination.h>
#include <aws/amp/PrometheusServicePaginationBase.h>
#include <aws/amp/model/ListRuleGroupsNamespacesPaginationTraits.h>
#include <aws/amp/model/ListWorkspacesPaginationTraits.h>
#include <aws/amp/model/ListAnomalyDetectorsPaginationTraits.h>
#include <aws/amp/model/ListScrapersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PrometheusServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PrometheusServicePaginationCompilationTest, PrometheusServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
