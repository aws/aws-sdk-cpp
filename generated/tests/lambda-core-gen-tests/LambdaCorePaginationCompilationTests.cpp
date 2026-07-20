/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LambdaCore pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lambda-core/LambdaCoreClientPagination.h>
#include <aws/lambda-core/LambdaCorePaginationBase.h>
#include <aws/lambda-core/model/ListNetworkConnectorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LambdaCorePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LambdaCorePaginationCompilationTest, LambdaCorePaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
