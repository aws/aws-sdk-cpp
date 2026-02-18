/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Keyspaces pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/keyspaces/KeyspacesClientPagination.h>
#include <aws/keyspaces/KeyspacesPaginationBase.h>
#include <aws/keyspaces/model/ListTypesPaginationTraits.h>
#include <aws/keyspaces/model/ListKeyspacesPaginationTraits.h>
#include <aws/keyspaces/model/ListTablesPaginationTraits.h>
#include <aws/keyspaces/model/ListTagsForResourcePaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KeyspacesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KeyspacesPaginationCompilationTest, KeyspacesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
