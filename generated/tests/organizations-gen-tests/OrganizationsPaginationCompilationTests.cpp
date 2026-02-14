/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Organizations pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/organizations/OrganizationsClientPagination.h>
#include <aws/organizations/OrganizationsPaginationBase.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentPaginationTraits.h>
#include <aws/organizations/model/ListDelegatedServicesForAccountPaginationTraits.h>
#include <aws/organizations/model/ListTargetsForPolicyPaginationTraits.h>
#include <aws/organizations/model/ListDelegatedAdministratorsPaginationTraits.h>
#include <aws/organizations/model/ListEffectivePolicyValidationErrorsPaginationTraits.h>
#include <aws/organizations/model/ListAccountsForParentPaginationTraits.h>
#include <aws/organizations/model/ListAWSServiceAccessForOrganizationPaginationTraits.h>
#include <aws/organizations/model/ListPoliciesPaginationTraits.h>
#include <aws/organizations/model/ListTagsForResourcePaginationTraits.h>
#include <aws/organizations/model/ListParentsPaginationTraits.h>
#include <aws/organizations/model/ListAccountsWithInvalidEffectivePolicyPaginationTraits.h>
#include <aws/organizations/model/ListPoliciesForTargetPaginationTraits.h>
#include <aws/organizations/model/ListChildrenPaginationTraits.h>
#include <aws/organizations/model/ListRootsPaginationTraits.h>
#include <aws/organizations/model/ListCreateAccountStatusPaginationTraits.h>
#include <aws/organizations/model/ListHandshakesForAccountPaginationTraits.h>
#include <aws/organizations/model/ListAccountsPaginationTraits.h>
#include <aws/organizations/model/ListHandshakesForOrganizationPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OrganizationsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OrganizationsPaginationCompilationTest, OrganizationsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
