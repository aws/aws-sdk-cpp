/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IAMToolbox pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iam-toolbox/IAMToolboxClientPagination.h>
#include <aws/iam-toolbox/IAMToolboxPaginationBase.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IAMToolboxPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IAMToolboxPaginationCompilationTest, IAMToolboxPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
