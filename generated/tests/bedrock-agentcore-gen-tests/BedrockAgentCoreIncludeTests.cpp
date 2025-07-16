/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/bedrock-agentcore/BedrockAgentCoreClient.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointProvider.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointRules.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrorMarshaller.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreServiceClientModel.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ActorSummary.h>
#include <aws/bedrock-agentcore/model/AutomationStream.h>
#include <aws/bedrock-agentcore/model/AutomationStreamStatus.h>
#include <aws/bedrock-agentcore/model/AutomationStreamUpdate.h>
#include <aws/bedrock-agentcore/model/Branch.h>
#include <aws/bedrock-agentcore/model/BranchFilter.h>
#include <aws/bedrock-agentcore/model/BrowserSessionStatus.h>
#include <aws/bedrock-agentcore/model/BrowserSessionStream.h>
#include <aws/bedrock-agentcore/model/BrowserSessionSummary.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterResult.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterSessionStatus.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterSessionSummary.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterStreamOutput.h>
#include <aws/bedrock-agentcore/model/Content.h>
#include <aws/bedrock-agentcore/model/ContentBlock.h>
#include <aws/bedrock-agentcore/model/ContentBlockType.h>
#include <aws/bedrock-agentcore/model/Conversational.h>
#include <aws/bedrock-agentcore/model/CreateEventRequest.h>
#include <aws/bedrock-agentcore/model/CreateEventResult.h>
#include <aws/bedrock-agentcore/model/DeleteEventRequest.h>
#include <aws/bedrock-agentcore/model/DeleteEventResult.h>
#include <aws/bedrock-agentcore/model/DeleteMemoryRecordRequest.h>
#include <aws/bedrock-agentcore/model/DeleteMemoryRecordResult.h>
#include <aws/bedrock-agentcore/model/Event.h>
#include <aws/bedrock-agentcore/model/FilterInput.h>
#include <aws/bedrock-agentcore/model/GetBrowserSessionRequest.h>
#include <aws/bedrock-agentcore/model/GetBrowserSessionResult.h>
#include <aws/bedrock-agentcore/model/GetCodeInterpreterSessionRequest.h>
#include <aws/bedrock-agentcore/model/GetCodeInterpreterSessionResult.h>
#include <aws/bedrock-agentcore/model/GetEventRequest.h>
#include <aws/bedrock-agentcore/model/GetEventResult.h>
#include <aws/bedrock-agentcore/model/GetMemoryRecordRequest.h>
#include <aws/bedrock-agentcore/model/GetMemoryRecordResult.h>
#include <aws/bedrock-agentcore/model/GetResourceApiKeyRequest.h>
#include <aws/bedrock-agentcore/model/GetResourceApiKeyResult.h>
#include <aws/bedrock-agentcore/model/GetResourceOauth2TokenRequest.h>
#include <aws/bedrock-agentcore/model/GetResourceOauth2TokenResult.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForJWTRequest.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForJWTResult.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForUserIdRequest.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForUserIdResult.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenRequest.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenResult.h>
#include <aws/bedrock-agentcore/model/InputContentBlock.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeResult.h>
#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterHandler.h>
#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterInitialResponse.h>
#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore/model/ListActorsRequest.h>
#include <aws/bedrock-agentcore/model/ListActorsResult.h>
#include <aws/bedrock-agentcore/model/ListBrowserSessionsRequest.h>
#include <aws/bedrock-agentcore/model/ListBrowserSessionsResult.h>
#include <aws/bedrock-agentcore/model/ListCodeInterpreterSessionsRequest.h>
#include <aws/bedrock-agentcore/model/ListCodeInterpreterSessionsResult.h>
#include <aws/bedrock-agentcore/model/ListEventsRequest.h>
#include <aws/bedrock-agentcore/model/ListEventsResult.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/ListSessionsRequest.h>
#include <aws/bedrock-agentcore/model/ListSessionsResult.h>
#include <aws/bedrock-agentcore/model/LiveViewStream.h>
#include <aws/bedrock-agentcore/model/MemoryContent.h>
#include <aws/bedrock-agentcore/model/MemoryRecord.h>
#include <aws/bedrock-agentcore/model/MemoryRecordSummary.h>
#include <aws/bedrock-agentcore/model/Oauth2FlowType.h>
#include <aws/bedrock-agentcore/model/PayloadType.h>
#include <aws/bedrock-agentcore/model/ProgrammingLanguage.h>
#include <aws/bedrock-agentcore/model/ResourceContent.h>
#include <aws/bedrock-agentcore/model/ResourceContentType.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/Role.h>
#include <aws/bedrock-agentcore/model/SearchCriteria.h>
#include <aws/bedrock-agentcore/model/SessionSummary.h>
#include <aws/bedrock-agentcore/model/StartBrowserSessionRequest.h>
#include <aws/bedrock-agentcore/model/StartBrowserSessionResult.h>
#include <aws/bedrock-agentcore/model/StartCodeInterpreterSessionRequest.h>
#include <aws/bedrock-agentcore/model/StartCodeInterpreterSessionResult.h>
#include <aws/bedrock-agentcore/model/StopBrowserSessionRequest.h>
#include <aws/bedrock-agentcore/model/StopBrowserSessionResult.h>
#include <aws/bedrock-agentcore/model/StopCodeInterpreterSessionRequest.h>
#include <aws/bedrock-agentcore/model/StopCodeInterpreterSessionResult.h>
#include <aws/bedrock-agentcore/model/StreamUpdate.h>
#include <aws/bedrock-agentcore/model/TaskStatus.h>
#include <aws/bedrock-agentcore/model/ToolArguments.h>
#include <aws/bedrock-agentcore/model/ToolName.h>
#include <aws/bedrock-agentcore/model/ToolResultStructuredContent.h>
#include <aws/bedrock-agentcore/model/UpdateBrowserStreamRequest.h>
#include <aws/bedrock-agentcore/model/UpdateBrowserStreamResult.h>
#include <aws/bedrock-agentcore/model/ValidationException.h>
#include <aws/bedrock-agentcore/model/ValidationExceptionField.h>
#include <aws/bedrock-agentcore/model/ValidationExceptionReason.h>
#include <aws/bedrock-agentcore/model/ViewPort.h>

using BedrockAgentCoreIncludeTest = ::testing::Test;

TEST_F(BedrockAgentCoreIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BedrockAgentCore::BedrockAgentCoreClient>("BedrockAgentCoreIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
