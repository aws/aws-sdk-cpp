/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BedrockAgent pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock-agent/BedrockAgentClientPagination.h>
#include <aws/bedrock-agent/BedrockAgentPaginationBase.h>
#include <aws/bedrock-agent/model/ListAgentActionGroupsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentCollaboratorsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentVersionsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListDataSourcesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListKnowledgeBaseDocumentsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListKnowledgeBasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListFlowAliasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListFlowsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListIngestionJobsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListFlowVersionsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentAliasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListPromptsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockAgentPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockAgentPaginationCompilationTest, BedrockAgentPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
