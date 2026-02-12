/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Account pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/account/AccountClientPagination.h>
#include <aws/account/AccountPaginationBase.h>
#include <aws/account/model/ListRegionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AccountPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AccountPaginationCompilationTest, AccountPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
