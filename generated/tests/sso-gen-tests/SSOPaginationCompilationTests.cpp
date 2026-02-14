/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SSO pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sso/SSOClientPagination.h>
#include <aws/sso/SSOPaginationBase.h>
#include <aws/sso/model/ListAccountRolesPaginationTraits.h>
#include <aws/sso/model/ListAccountsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SSOPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SSOPaginationCompilationTest, SSOPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
