/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DevOpsGuru pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/devops-guru/DevOpsGuruClientPagination.h>
#include <aws/devops-guru/DevOpsGuruPaginationBase.h>
#include <aws/devops-guru/model/ListMonitoredResourcesPaginationTraits.h>
#include <aws/devops-guru/model/ListRecommendationsPaginationTraits.h>
#include <aws/devops-guru/model/ListEventsPaginationTraits.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthPaginationTraits.h>
#include <aws/devops-guru/model/GetCostEstimationPaginationTraits.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightPaginationTraits.h>
#include <aws/devops-guru/model/ListInsightsPaginationTraits.h>
#include <aws/devops-guru/model/ListNotificationChannelsPaginationTraits.h>
#include <aws/devops-guru/model/ListOrganizationInsightsPaginationTraits.h>
#include <aws/devops-guru/model/SearchOrganizationInsightsPaginationTraits.h>
#include <aws/devops-guru/model/ListAnomalousLogGroupsPaginationTraits.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthPaginationTraits.h>
#include <aws/devops-guru/model/GetResourceCollectionPaginationTraits.h>
#include <aws/devops-guru/model/SearchInsightsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DevOpsGuruPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DevOpsGuruPaginationCompilationTest, DevOpsGuruPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
