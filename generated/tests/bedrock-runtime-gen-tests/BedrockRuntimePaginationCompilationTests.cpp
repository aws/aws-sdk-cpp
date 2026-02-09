/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BedrockRuntime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock-runtime/BedrockRuntimeClientPagination.h>
#include <aws/bedrock-runtime/BedrockRuntimePaginationBase.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockRuntimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockRuntimePaginationCompilationTest, BedrockRuntimePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
