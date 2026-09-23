/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NetworkSecurityManager pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/network-security-manager/NetworkSecurityManagerClientPagination.h>
#include <aws/network-security-manager/NetworkSecurityManagerPaginationBase.h>
#include <aws/network-security-manager/model/ListTemplatesPaginationTraits.h>
#include <aws/network-security-manager/model/ListPoliciesPaginationTraits.h>
#include <aws/network-security-manager/model/ListResourceAssociationsPaginationTraits.h>
#include <aws/network-security-manager/model/ListRuleSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListResourceSynchronizationStatusesPaginationTraits.h>
#include <aws/network-security-manager/model/ListScopeSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListAdminAccountsPaginationTraits.h>
#include <aws/network-security-manager/model/ListDeploymentsPaginationTraits.h>
#include <aws/network-security-manager/model/ListPolicySnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesPaginationTraits.h>
#include <aws/network-security-manager/model/ListTemplateSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListRulesPaginationTraits.h>
#include <aws/network-security-manager/model/ListScopesPaginationTraits.h>
#include <aws/network-security-manager/model/ListDeploymentSnapshotsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NetworkSecurityManagerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NetworkSecurityManagerPaginationCompilationTest, NetworkSecurityManagerPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
