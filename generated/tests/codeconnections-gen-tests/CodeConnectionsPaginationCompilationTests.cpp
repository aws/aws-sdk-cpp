/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeConnections pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codeconnections/CodeConnectionsClientPagination.h>
#include <aws/codeconnections/CodeConnectionsPaginationBase.h>
#include <aws/codeconnections/model/ListSyncConfigurationsPaginationTraits.h>
#include <aws/codeconnections/model/ListHostsPaginationTraits.h>
#include <aws/codeconnections/model/ListConnectionsPaginationTraits.h>
#include <aws/codeconnections/model/ListRepositoryLinksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeConnectionsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeConnectionsPaginationCompilationTest, CodeConnectionsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
