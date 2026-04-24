/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeStarconnections pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codestar-connections/CodeStarconnectionsClientPagination.h>
#include <aws/codestar-connections/CodeStarconnectionsPaginationBase.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsPaginationTraits.h>
#include <aws/codestar-connections/model/ListConnectionsPaginationTraits.h>
#include <aws/codestar-connections/model/ListRepositoryLinksPaginationTraits.h>
#include <aws/codestar-connections/model/ListHostsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeStarconnectionsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeStarconnectionsPaginationCompilationTest, CodeStarconnectionsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
