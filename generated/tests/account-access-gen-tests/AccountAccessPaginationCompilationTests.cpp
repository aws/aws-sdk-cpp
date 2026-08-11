/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AccountAccess pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/account-access/AccountAccessClientPagination.h>
#include <aws/account-access/AccountAccessPaginationBase.h>
#include <aws/account-access/model/ListApplicationsPaginationTraits.h>
#include <aws/account-access/model/ListEntitlementsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AccountAccessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AccountAccessPaginationCompilationTest, AccountAccessPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
