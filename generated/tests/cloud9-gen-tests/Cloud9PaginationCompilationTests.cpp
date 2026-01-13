/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Cloud9 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloud9/Cloud9ClientPagination.h>
#include <aws/cloud9/Cloud9PaginationBase.h>
#include <aws/cloud9/model/ListEnvironmentsPaginationTraits.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Cloud9PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Cloud9PaginationCompilationTest, Cloud9PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
