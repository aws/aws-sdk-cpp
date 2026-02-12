/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BedrockAgentCore pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock-agentcore/BedrockAgentCoreClientPagination.h>
#include <aws/bedrock-agentcore/BedrockAgentCorePaginationBase.h>
#include <aws/bedrock-agentcore/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListActorsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListEventsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryExtractionJobsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockAgentCorePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockAgentCorePaginationCompilationTest, BedrockAgentCorePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
