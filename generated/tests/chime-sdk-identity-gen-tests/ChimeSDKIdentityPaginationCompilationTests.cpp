/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ChimeSDKIdentity pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chime-sdk-identity/ChimeSDKIdentityClientPagination.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityPaginationBase.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceBotsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ChimeSDKIdentityPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ChimeSDKIdentityPaginationCompilationTest, ChimeSDKIdentityPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
