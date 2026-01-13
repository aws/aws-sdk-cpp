/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for BedrockAgentCoreControl pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClientPagination.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlPaginationBase.h>
#include <aws/bedrock-agentcore-control/model/ListPoliciesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationAssetsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeEndpointsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListBrowsersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeVersionsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayTargetsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListBrowserProfilesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockAgentCoreControlPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockAgentCoreControlPaginationCompilationTest, BedrockAgentCoreControlPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
