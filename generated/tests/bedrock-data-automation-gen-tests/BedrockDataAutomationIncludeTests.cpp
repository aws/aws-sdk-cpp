/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/bedrock-data-automation/BedrockDataAutomationClient.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointProvider.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointRules.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrorMarshaller.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrors.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/AudioExtractionCategory.h>
#include <aws/bedrock-data-automation/model/AudioExtractionCategoryType.h>
#include <aws/bedrock-data-automation/model/AudioOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/AudioStandardExtraction.h>
#include <aws/bedrock-data-automation/model/AudioStandardGenerativeField.h>
#include <aws/bedrock-data-automation/model/AudioStandardGenerativeFieldType.h>
#include <aws/bedrock-data-automation/model/AudioStandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/Blueprint.h>
#include <aws/bedrock-data-automation/model/BlueprintFilter.h>
#include <aws/bedrock-data-automation/model/BlueprintItem.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
#include <aws/bedrock-data-automation/model/BlueprintStageFilter.h>
#include <aws/bedrock-data-automation/model/BlueprintSummary.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintResult.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintVersionRequest.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintVersionResult.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/CustomOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/DataAutomationProject.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectFilter.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStageFilter.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStatus.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectSummary.h>
#include <aws/bedrock-data-automation/model/DeleteBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/DeleteBlueprintResult.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/DesiredModality.h>
#include <aws/bedrock-data-automation/model/DocumentBoundingBox.h>
#include <aws/bedrock-data-automation/model/DocumentExtractionGranularity.h>
#include <aws/bedrock-data-automation/model/DocumentExtractionGranularityType.h>
#include <aws/bedrock-data-automation/model/DocumentOutputAdditionalFileFormat.h>
#include <aws/bedrock-data-automation/model/DocumentOutputFormat.h>
#include <aws/bedrock-data-automation/model/DocumentOutputTextFormat.h>
#include <aws/bedrock-data-automation/model/DocumentOutputTextFormatType.h>
#include <aws/bedrock-data-automation/model/DocumentOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/DocumentStandardExtraction.h>
#include <aws/bedrock-data-automation/model/DocumentStandardGenerativeField.h>
#include <aws/bedrock-data-automation/model/DocumentStandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/EncryptionConfiguration.h>
#include <aws/bedrock-data-automation/model/GetBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/GetBlueprintResult.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/ImageBoundingBox.h>
#include <aws/bedrock-data-automation/model/ImageExtractionCategory.h>
#include <aws/bedrock-data-automation/model/ImageExtractionCategoryType.h>
#include <aws/bedrock-data-automation/model/ImageOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/ImageStandardExtraction.h>
#include <aws/bedrock-data-automation/model/ImageStandardGenerativeField.h>
#include <aws/bedrock-data-automation/model/ImageStandardGenerativeFieldType.h>
#include <aws/bedrock-data-automation/model/ImageStandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsResult.h>
#include <aws/bedrock-data-automation/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-data-automation/model/ListTagsForResourceResult.h>
#include <aws/bedrock-data-automation/model/ModalityProcessingConfiguration.h>
#include <aws/bedrock-data-automation/model/ModalityRoutingConfiguration.h>
#include <aws/bedrock-data-automation/model/OverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/ResourceOwner.h>
#include <aws/bedrock-data-automation/model/SplitterConfiguration.h>
#include <aws/bedrock-data-automation/model/StandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/State.h>
#include <aws/bedrock-data-automation/model/Tag.h>
#include <aws/bedrock-data-automation/model/TagResourceRequest.h>
#include <aws/bedrock-data-automation/model/TagResourceResult.h>
#include <aws/bedrock-data-automation/model/Type.h>
#include <aws/bedrock-data-automation/model/UntagResourceRequest.h>
#include <aws/bedrock-data-automation/model/UntagResourceResult.h>
#include <aws/bedrock-data-automation/model/UpdateBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/UpdateBlueprintResult.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/ValidationException.h>
#include <aws/bedrock-data-automation/model/ValidationExceptionField.h>
#include <aws/bedrock-data-automation/model/VideoBoundingBox.h>
#include <aws/bedrock-data-automation/model/VideoExtractionCategory.h>
#include <aws/bedrock-data-automation/model/VideoExtractionCategoryType.h>
#include <aws/bedrock-data-automation/model/VideoOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/VideoStandardExtraction.h>
#include <aws/bedrock-data-automation/model/VideoStandardGenerativeField.h>
#include <aws/bedrock-data-automation/model/VideoStandardGenerativeFieldType.h>
#include <aws/bedrock-data-automation/model/VideoStandardOutputConfiguration.h>

using BedrockDataAutomationIncludeTest = ::testing::Test;

TEST_F(BedrockDataAutomationIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BedrockDataAutomation::BedrockDataAutomationClient>("BedrockDataAutomationIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
