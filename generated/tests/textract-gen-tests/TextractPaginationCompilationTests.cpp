/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Textract pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/textract/TextractClientPagination.h>
#include <aws/textract/TextractPaginationBase.h>
#include <aws/textract/model/ListAdaptersPaginationTraits.h>
#include <aws/textract/model/ListAdapterVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TextractPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TextractPaginationCompilationTest, TextractPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
