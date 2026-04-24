/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EKS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/eks/EKSClientPagination.h>
#include <aws/eks/EKSPaginationBase.h>
#include <aws/eks/model/ListClustersPaginationTraits.h>
#include <aws/eks/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/eks/model/ListNodegroupsPaginationTraits.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesPaginationTraits.h>
#include <aws/eks/model/ListIdentityProviderConfigsPaginationTraits.h>
#include <aws/eks/model/ListAddonsPaginationTraits.h>
#include <aws/eks/model/ListAccessEntriesPaginationTraits.h>
#include <aws/eks/model/ListEksAnywhereSubscriptionsPaginationTraits.h>
#include <aws/eks/model/ListFargateProfilesPaginationTraits.h>
#include <aws/eks/model/ListPodIdentityAssociationsPaginationTraits.h>
#include <aws/eks/model/ListCapabilitiesPaginationTraits.h>
#include <aws/eks/model/DescribeClusterVersionsPaginationTraits.h>
#include <aws/eks/model/ListInsightsPaginationTraits.h>
#include <aws/eks/model/DescribeAddonVersionsPaginationTraits.h>
#include <aws/eks/model/ListUpdatesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EKSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EKSPaginationCompilationTest, EKSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
