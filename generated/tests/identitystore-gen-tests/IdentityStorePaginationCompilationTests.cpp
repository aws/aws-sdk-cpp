/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IdentityStore pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/identitystore/IdentityStoreClientPagination.h>
#include <aws/identitystore/IdentityStorePaginationBase.h>
#include <aws/identitystore/model/ListUsersPaginationTraits.h>
#include <aws/identitystore/model/ListGroupMembershipsPaginationTraits.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberPaginationTraits.h>
#include <aws/identitystore/model/ListGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IdentityStorePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IdentityStorePaginationCompilationTest, IdentityStorePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
