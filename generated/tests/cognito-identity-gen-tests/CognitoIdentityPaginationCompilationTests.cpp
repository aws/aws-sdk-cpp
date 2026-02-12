/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CognitoIdentity pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cognito-identity/CognitoIdentityClientPagination.h>
#include <aws/cognito-identity/CognitoIdentityPaginationBase.h>
#include <aws/cognito-identity/model/ListIdentityPoolsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CognitoIdentityPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CognitoIdentityPaginationCompilationTest, CognitoIdentityPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
