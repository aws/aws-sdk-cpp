/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BedrockDataAutomation pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock-data-automation/BedrockDataAutomationClientPagination.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationPaginationBase.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsPaginationTraits.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockDataAutomationPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockDataAutomationPaginationCompilationTest, BedrockDataAutomationPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
