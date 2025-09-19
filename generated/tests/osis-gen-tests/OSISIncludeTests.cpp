/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/osis/OSISClient.h>
#include <aws/osis/OSISEndpointProvider.h>
#include <aws/osis/OSISEndpointRules.h>
#include <aws/osis/OSISErrorMarshaller.h>
#include <aws/osis/OSISErrors.h>
#include <aws/osis/OSISRequest.h>
#include <aws/osis/OSISServiceClientModel.h>
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/BufferOptions.h>
#include <aws/osis/model/ChangeProgressStage.h>
#include <aws/osis/model/ChangeProgressStageStatuses.h>
#include <aws/osis/model/ChangeProgressStatus.h>
#include <aws/osis/model/ChangeProgressStatuses.h>
#include <aws/osis/model/CloudWatchLogDestination.h>
#include <aws/osis/model/CreatePipelineEndpointRequest.h>
#include <aws/osis/model/CreatePipelineEndpointResult.h>
#include <aws/osis/model/CreatePipelineRequest.h>
#include <aws/osis/model/CreatePipelineResult.h>
#include <aws/osis/model/DeletePipelineEndpointRequest.h>
#include <aws/osis/model/DeletePipelineEndpointResult.h>
#include <aws/osis/model/DeletePipelineRequest.h>
#include <aws/osis/model/DeletePipelineResult.h>
#include <aws/osis/model/DeleteResourcePolicyRequest.h>
#include <aws/osis/model/DeleteResourcePolicyResult.h>
#include <aws/osis/model/EncryptionAtRestOptions.h>
#include <aws/osis/model/GetPipelineBlueprintRequest.h>
#include <aws/osis/model/GetPipelineBlueprintResult.h>
#include <aws/osis/model/GetPipelineChangeProgressRequest.h>
#include <aws/osis/model/GetPipelineChangeProgressResult.h>
#include <aws/osis/model/GetPipelineRequest.h>
#include <aws/osis/model/GetPipelineResult.h>
#include <aws/osis/model/GetResourcePolicyRequest.h>
#include <aws/osis/model/GetResourcePolicyResult.h>
#include <aws/osis/model/ListPipelineBlueprintsRequest.h>
#include <aws/osis/model/ListPipelineBlueprintsResult.h>
#include <aws/osis/model/ListPipelineEndpointConnectionsRequest.h>
#include <aws/osis/model/ListPipelineEndpointConnectionsResult.h>
#include <aws/osis/model/ListPipelineEndpointsRequest.h>
#include <aws/osis/model/ListPipelineEndpointsResult.h>
#include <aws/osis/model/ListPipelinesRequest.h>
#include <aws/osis/model/ListPipelinesResult.h>
#include <aws/osis/model/ListTagsForResourceRequest.h>
#include <aws/osis/model/ListTagsForResourceResult.h>
#include <aws/osis/model/LogPublishingOptions.h>
#include <aws/osis/model/Pipeline.h>
#include <aws/osis/model/PipelineBlueprint.h>
#include <aws/osis/model/PipelineBlueprintSummary.h>
#include <aws/osis/model/PipelineDestination.h>
#include <aws/osis/model/PipelineEndpoint.h>
#include <aws/osis/model/PipelineEndpointConnection.h>
#include <aws/osis/model/PipelineEndpointStatus.h>
#include <aws/osis/model/PipelineEndpointVpcOptions.h>
#include <aws/osis/model/PipelineStatus.h>
#include <aws/osis/model/PipelineStatusReason.h>
#include <aws/osis/model/PipelineSummary.h>
#include <aws/osis/model/PutResourcePolicyRequest.h>
#include <aws/osis/model/PutResourcePolicyResult.h>
#include <aws/osis/model/RevokePipelineEndpointConnectionsRequest.h>
#include <aws/osis/model/RevokePipelineEndpointConnectionsResult.h>
#include <aws/osis/model/ServiceVpcEndpoint.h>
#include <aws/osis/model/StartPipelineRequest.h>
#include <aws/osis/model/StartPipelineResult.h>
#include <aws/osis/model/StopPipelineRequest.h>
#include <aws/osis/model/StopPipelineResult.h>
#include <aws/osis/model/Tag.h>
#include <aws/osis/model/TagResourceRequest.h>
#include <aws/osis/model/TagResourceResult.h>
#include <aws/osis/model/UntagResourceRequest.h>
#include <aws/osis/model/UntagResourceResult.h>
#include <aws/osis/model/UpdatePipelineRequest.h>
#include <aws/osis/model/UpdatePipelineResult.h>
#include <aws/osis/model/ValidatePipelineRequest.h>
#include <aws/osis/model/ValidatePipelineResult.h>
#include <aws/osis/model/ValidationMessage.h>
#include <aws/osis/model/VpcAttachmentOptions.h>
#include <aws/osis/model/VpcEndpoint.h>
#include <aws/osis/model/VpcEndpointManagement.h>
#include <aws/osis/model/VpcEndpointServiceName.h>
#include <aws/osis/model/VpcOptions.h>

using OSISIncludeTest = ::testing::Test;

TEST_F(OSISIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::OSIS::OSISClient>("OSISIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
