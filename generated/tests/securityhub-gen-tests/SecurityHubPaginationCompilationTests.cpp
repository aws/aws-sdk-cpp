/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SecurityHub pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/securityhub/SecurityHubClientPagination.h>
#include <aws/securityhub/SecurityHubPaginationBase.h>
#include <aws/securityhub/model/ListConfigurationPoliciesPaginationTraits.h>
#include <aws/securityhub/model/ListEnabledProductsForImportPaginationTraits.h>
#include <aws/securityhub/model/ListConfigurationPolicyAssociationsPaginationTraits.h>
#include <aws/securityhub/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/securityhub/model/GetInsightsPaginationTraits.h>
#include <aws/securityhub/model/ListStandardsControlAssociationsPaginationTraits.h>
#include <aws/securityhub/model/ListSecurityControlDefinitionsPaginationTraits.h>
#include <aws/securityhub/model/ListInvitationsPaginationTraits.h>
#include <aws/securityhub/model/DescribeActionTargetsPaginationTraits.h>
#include <aws/securityhub/model/GetResourcesV2PaginationTraits.h>
#include <aws/securityhub/model/GetFindingsPaginationTraits.h>
#include <aws/securityhub/model/GetFindingHistoryPaginationTraits.h>
#include <aws/securityhub/model/GetFindingsV2PaginationTraits.h>
#include <aws/securityhub/model/ListMembersPaginationTraits.h>
#include <aws/securityhub/model/DescribeProductsV2PaginationTraits.h>
#include <aws/securityhub/model/DescribeStandardsControlsPaginationTraits.h>
#include <aws/securityhub/model/GetEnabledStandardsPaginationTraits.h>
#include <aws/securityhub/model/DescribeStandardsPaginationTraits.h>
#include <aws/securityhub/model/ListFindingAggregatorsPaginationTraits.h>
#include <aws/securityhub/model/DescribeProductsPaginationTraits.h>
#include <aws/securityhub/model/ListAggregatorsV2PaginationTraits.h>
#include <aws/securityhub/model/GetFindingsTrendsV2PaginationTraits.h>
#include <aws/securityhub/model/GetResourcesTrendsV2PaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SecurityHubPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SecurityHubPaginationCompilationTest, SecurityHubPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
