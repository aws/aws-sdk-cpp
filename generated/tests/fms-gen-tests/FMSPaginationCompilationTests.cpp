/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for FMS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/fms/FMSClientPagination.h>
#include <aws/fms/FMSPaginationBase.h>
#include <aws/fms/model/ListAppsListsPaginationTraits.h>
#include <aws/fms/model/ListComplianceStatusPaginationTraits.h>
#include <aws/fms/model/ListMemberAccountsPaginationTraits.h>
#include <aws/fms/model/ListProtocolsListsPaginationTraits.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesPaginationTraits.h>
#include <aws/fms/model/ListPoliciesPaginationTraits.h>
#include <aws/fms/model/ListAdminsManagingAccountPaginationTraits.h>
#include <aws/fms/model/ListAdminAccountsForOrganizationPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class FMSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(FMSPaginationCompilationTest, FMSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
