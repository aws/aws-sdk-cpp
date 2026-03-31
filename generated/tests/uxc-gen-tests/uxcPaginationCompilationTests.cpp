/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for uxc pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/uxc/UxcClientPagination.h>
#include <aws/uxc/UxcPaginationBase.h>
#include <aws/uxc/model/ListServicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class uxcPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(uxcPaginationCompilationTest, uxcPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
