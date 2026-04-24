/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SimpleDBv2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/simpledbv2/SimpleDBv2ClientPagination.h>
#include <aws/simpledbv2/SimpleDBv2PaginationBase.h>
#include <aws/simpledbv2/model/ListExportsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SimpleDBv2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SimpleDBv2PaginationCompilationTest, SimpleDBv2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
