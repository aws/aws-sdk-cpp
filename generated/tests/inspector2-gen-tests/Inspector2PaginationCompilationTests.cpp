/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Inspector2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/inspector2/Inspector2ClientPagination.h>
#include <aws/inspector2/Inspector2PaginationBase.h>
#include <aws/inspector2/model/ListCoveragePaginationTraits.h>
#include <aws/inspector2/model/ListCisScansPaginationTraits.h>
#include <aws/inspector2/model/ListUsageTotalsPaginationTraits.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsPaginationTraits.h>
#include <aws/inspector2/model/ListFiltersPaginationTraits.h>
#include <aws/inspector2/model/SearchVulnerabilitiesPaginationTraits.h>
#include <aws/inspector2/model/GetClustersForImagePaginationTraits.h>
#include <aws/inspector2/model/ListMembersPaginationTraits.h>
#include <aws/inspector2/model/ListCoverageStatisticsPaginationTraits.h>
#include <aws/inspector2/model/ListFindingAggregationsPaginationTraits.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByTargetResourcePaginationTraits.h>
#include <aws/inspector2/model/ListCisScanConfigurationsPaginationTraits.h>
#include <aws/inspector2/model/GetCisScanResultDetailsPaginationTraits.h>
#include <aws/inspector2/model/ListAccountPermissionsPaginationTraits.h>
#include <aws/inspector2/model/ListFindingsPaginationTraits.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Inspector2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Inspector2PaginationCompilationTest, Inspector2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
