/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CognitoIdentityProvider pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cognito-idp/CognitoIdentityProviderClientPagination.h>
#include <aws/cognito-idp/CognitoIdentityProviderPaginationBase.h>
#include <aws/cognito-idp/model/AdminListUserAuthEventsPaginationTraits.h>
#include <aws/cognito-idp/model/ListUserPoolsPaginationTraits.h>
#include <aws/cognito-idp/model/AdminListGroupsForUserPaginationTraits.h>
#include <aws/cognito-idp/model/ListUsersInGroupPaginationTraits.h>
#include <aws/cognito-idp/model/ListUserPoolClientsPaginationTraits.h>
#include <aws/cognito-idp/model/ListResourceServersPaginationTraits.h>
#include <aws/cognito-idp/model/ListIdentityProvidersPaginationTraits.h>
#include <aws/cognito-idp/model/ListGroupsPaginationTraits.h>
#include <aws/cognito-idp/model/ListUsersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CognitoIdentityProviderPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CognitoIdentityProviderPaginationCompilationTest, CognitoIdentityProviderPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
