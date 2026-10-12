/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LambdaWeb pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lambda-web/LambdaWebClientPagination.h>
#include <aws/lambda-web/LambdaWebPaginationBase.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LambdaWebPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LambdaWebPaginationCompilationTest, LambdaWebPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
