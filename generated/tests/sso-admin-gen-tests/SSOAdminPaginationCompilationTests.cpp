/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SSOAdmin pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sso-admin/SSOAdminClientPagination.h>
#include <aws/sso-admin/SSOAdminPaginationBase.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationsPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusPaginationTraits.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentsPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationGrantsPaginationTraits.h>
#include <aws/sso-admin/model/ListInstancesPaginationTraits.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusPaginationTraits.h>
#include <aws/sso-admin/model/ListPermissionSetsPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAccessScopesPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentsForPrincipalPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationProvidersPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsForPrincipalPaginationTraits.h>
#include <aws/sso-admin/model/ListTagsForResourcePaginationTraits.h>
#include <aws/sso-admin/model/ListTrustedTokenIssuersPaginationTraits.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusPaginationTraits.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetPaginationTraits.h>
#include <aws/sso-admin/model/ListRegionsPaginationTraits.h>
#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SSOAdminPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SSOAdminPaginationCompilationTest, SSOAdminPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
