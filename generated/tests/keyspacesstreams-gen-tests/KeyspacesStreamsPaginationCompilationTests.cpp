/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for KeyspacesStreams pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/keyspacesstreams/KeyspacesStreamsClientPagination.h>
#include <aws/keyspacesstreams/KeyspacesStreamsPaginationBase.h>
#include <aws/keyspacesstreams/model/GetStreamPaginationTraits.h>
#include <aws/keyspacesstreams/model/ListStreamsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class KeyspacesStreamsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(KeyspacesStreamsPaginationCompilationTest, KeyspacesStreamsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
