/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IAM pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iam/IAMClientPagination.h>
#include <aws/iam/IAMPaginationBase.h>
#include <aws/iam/model/ListEntitiesForPolicyPaginationTraits.h>
#include <aws/iam/model/ListRoleTagsPaginationTraits.h>
#include <aws/iam/model/ListUserPoliciesPaginationTraits.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsPaginationTraits.h>
#include <aws/iam/model/ListMFADeviceTagsPaginationTraits.h>
#include <aws/iam/model/ListInstanceProfilesForRolePaginationTraits.h>
#include <aws/iam/model/ListUserTagsPaginationTraits.h>
#include <aws/iam/model/ListGroupsForUserPaginationTraits.h>
#include <aws/iam/model/ListSigningCertificatesPaginationTraits.h>
#include <aws/iam/model/ListMFADevicesPaginationTraits.h>
#include <aws/iam/model/ListVirtualMFADevicesPaginationTraits.h>
#include <aws/iam/model/ListAttachedGroupPoliciesPaginationTraits.h>
#include <aws/iam/model/ListInstanceProfilesPaginationTraits.h>
#include <aws/iam/model/ListServerCertificatesPaginationTraits.h>
#include <aws/iam/model/SimulatePrincipalPolicyPaginationTraits.h>
#include <aws/iam/model/ListPolicyTagsPaginationTraits.h>
#include <aws/iam/model/ListSSHPublicKeysPaginationTraits.h>
#include <aws/iam/model/ListGroupsPaginationTraits.h>
#include <aws/iam/model/ListRolesPaginationTraits.h>
#include <aws/iam/model/ListUsersPaginationTraits.h>
#include <aws/iam/model/ListPolicyVersionsPaginationTraits.h>
#include <aws/iam/model/ListInstanceProfileTagsPaginationTraits.h>
#include <aws/iam/model/ListAttachedUserPoliciesPaginationTraits.h>
#include <aws/iam/model/ListSAMLProviderTagsPaginationTraits.h>
#include <aws/iam/model/ListServerCertificateTagsPaginationTraits.h>
#include <aws/iam/model/SimulateCustomPolicyPaginationTraits.h>
#include <aws/iam/model/ListAttachedRolePoliciesPaginationTraits.h>
#include <aws/iam/model/GetGroupPaginationTraits.h>
#include <aws/iam/model/ListGroupPoliciesPaginationTraits.h>
#include <aws/iam/model/ListAccountAliasesPaginationTraits.h>
#include <aws/iam/model/ListPoliciesPaginationTraits.h>
#include <aws/iam/model/ListAccessKeysPaginationTraits.h>
#include <aws/iam/model/ListRolePoliciesPaginationTraits.h>
#include <aws/iam/model/ListOpenIDConnectProviderTagsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IAMPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IAMPaginationCompilationTest, IAMPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
