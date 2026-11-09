/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AccountAccessRuntime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/account-access-runtime/AccountAccessRuntimeClientPagination.h>
#include <aws/account-access-runtime/AccountAccessRuntimePaginationBase.h>
#include <aws/account-access-runtime/model/ListRolesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AccountAccessRuntimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AccountAccessRuntimePaginationCompilationTest, AccountAccessRuntimePaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
