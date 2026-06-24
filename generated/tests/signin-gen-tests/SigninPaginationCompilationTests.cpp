/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Signin pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/signin/SigninClientPagination.h>
#include <aws/signin/SigninPaginationBase.h>
#include <aws/signin/model/ListResourcePermissionStatementsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SigninPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SigninPaginationCompilationTest, SigninPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
