/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeClient.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointProvider.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointRules.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrorMarshaller.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrors.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeRequest.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeServiceClientModel.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/AssetProcessingConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/AutomationJobStatus.h>
#include <aws/bedrock-data-automation-runtime/model/Blueprint.h>
#include <aws/bedrock-data-automation-runtime/model/BlueprintStage.h>
#include <aws/bedrock-data-automation-runtime/model/DataAutomationConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/DataAutomationStage.h>
#include <aws/bedrock-data-automation-runtime/model/EncryptionConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/EventBridgeConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusRequest.h>
#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusResult.h>
#include <aws/bedrock-data-automation-runtime/model/InputConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationAsyncRequest.h>
#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationAsyncResult.h>
#include <aws/bedrock-data-automation-runtime/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-data-automation-runtime/model/ListTagsForResourceResult.h>
#include <aws/bedrock-data-automation-runtime/model/NotificationConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/OutputConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/Tag.h>
#include <aws/bedrock-data-automation-runtime/model/TagResourceRequest.h>
#include <aws/bedrock-data-automation-runtime/model/TagResourceResult.h>
#include <aws/bedrock-data-automation-runtime/model/TimestampSegment.h>
#include <aws/bedrock-data-automation-runtime/model/UntagResourceRequest.h>
#include <aws/bedrock-data-automation-runtime/model/UntagResourceResult.h>
#include <aws/bedrock-data-automation-runtime/model/VideoAssetProcessingConfiguration.h>
#include <aws/bedrock-data-automation-runtime/model/VideoSegmentConfiguration.h>

using BedrockDataAutomationRuntimeIncludeTest = ::testing::Test;

TEST_F(BedrockDataAutomationRuntimeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClient>("BedrockDataAutomationRuntimeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
