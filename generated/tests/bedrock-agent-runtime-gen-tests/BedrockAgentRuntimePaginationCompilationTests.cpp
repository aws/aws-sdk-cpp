/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BedrockAgentRuntime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClientPagination.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimePaginationBase.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationStepsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/RetrievePaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/GetAgentMemoryPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/RerankPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockAgentRuntimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockAgentRuntimePaginationCompilationTest, BedrockAgentRuntimePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
