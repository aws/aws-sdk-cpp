/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/connectcampaigns/ConnectCampaignsClient.h>
#include <aws/connectcampaigns/ConnectCampaignsEndpointProvider.h>
#include <aws/connectcampaigns/ConnectCampaignsEndpointRules.h>
#include <aws/connectcampaigns/ConnectCampaignsErrorMarshaller.h>
#include <aws/connectcampaigns/ConnectCampaignsErrors.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/connectcampaigns/ConnectCampaignsServiceClientModel.h>
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/AccessDeniedException.h>
#include <aws/connectcampaigns/model/AgentlessDialerConfig.h>
#include <aws/connectcampaigns/model/AnswerMachineDetectionConfig.h>
#include <aws/connectcampaigns/model/Campaign.h>
#include <aws/connectcampaigns/model/CampaignFilters.h>
#include <aws/connectcampaigns/model/CampaignState.h>
#include <aws/connectcampaigns/model/CampaignSummary.h>
#include <aws/connectcampaigns/model/ConflictException.h>
#include <aws/connectcampaigns/model/CreateCampaignRequest.h>
#include <aws/connectcampaigns/model/CreateCampaignResult.h>
#include <aws/connectcampaigns/model/DeleteCampaignRequest.h>
#include <aws/connectcampaigns/model/DeleteConnectInstanceConfigRequest.h>
#include <aws/connectcampaigns/model/DeleteInstanceOnboardingJobRequest.h>
#include <aws/connectcampaigns/model/DescribeCampaignRequest.h>
#include <aws/connectcampaigns/model/DescribeCampaignResult.h>
#include <aws/connectcampaigns/model/DialRequest.h>
#include <aws/connectcampaigns/model/DialerConfig.h>
#include <aws/connectcampaigns/model/EncryptionConfig.h>
#include <aws/connectcampaigns/model/EncryptionType.h>
#include <aws/connectcampaigns/model/FailedCampaignStateResponse.h>
#include <aws/connectcampaigns/model/FailedRequest.h>
#include <aws/connectcampaigns/model/FailureCode.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchFailureCode.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchRequest.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchResult.h>
#include <aws/connectcampaigns/model/GetCampaignStateRequest.h>
#include <aws/connectcampaigns/model/GetCampaignStateResult.h>
#include <aws/connectcampaigns/model/GetConnectInstanceConfigRequest.h>
#include <aws/connectcampaigns/model/GetConnectInstanceConfigResult.h>
#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusRequest.h>
#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusResult.h>
#include <aws/connectcampaigns/model/InstanceConfig.h>
#include <aws/connectcampaigns/model/InstanceIdFilter.h>
#include <aws/connectcampaigns/model/InstanceIdFilterOperator.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobFailureCode.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobStatus.h>
#include <aws/connectcampaigns/model/InstanceOnboardingJobStatusCode.h>
#include <aws/connectcampaigns/model/InternalServerException.h>
#include <aws/connectcampaigns/model/InvalidCampaignStateException.h>
#include <aws/connectcampaigns/model/InvalidStateException.h>
#include <aws/connectcampaigns/model/ListCampaignsRequest.h>
#include <aws/connectcampaigns/model/ListCampaignsResult.h>
#include <aws/connectcampaigns/model/ListTagsForResourceRequest.h>
#include <aws/connectcampaigns/model/ListTagsForResourceResult.h>
#include <aws/connectcampaigns/model/OutboundCallConfig.h>
#include <aws/connectcampaigns/model/PauseCampaignRequest.h>
#include <aws/connectcampaigns/model/PredictiveDialerConfig.h>
#include <aws/connectcampaigns/model/ProgressiveDialerConfig.h>
#include <aws/connectcampaigns/model/PutDialRequestBatchRequest.h>
#include <aws/connectcampaigns/model/PutDialRequestBatchResult.h>
#include <aws/connectcampaigns/model/ResourceNotFoundException.h>
#include <aws/connectcampaigns/model/ResumeCampaignRequest.h>
#include <aws/connectcampaigns/model/ServiceQuotaExceededException.h>
#include <aws/connectcampaigns/model/StartCampaignRequest.h>
#include <aws/connectcampaigns/model/StartInstanceOnboardingJobRequest.h>
#include <aws/connectcampaigns/model/StartInstanceOnboardingJobResult.h>
#include <aws/connectcampaigns/model/StopCampaignRequest.h>
#include <aws/connectcampaigns/model/SuccessfulCampaignStateResponse.h>
#include <aws/connectcampaigns/model/SuccessfulRequest.h>
#include <aws/connectcampaigns/model/TagResourceRequest.h>
#include <aws/connectcampaigns/model/ThrottlingException.h>
#include <aws/connectcampaigns/model/UntagResourceRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignDialerConfigRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignNameRequest.h>
#include <aws/connectcampaigns/model/UpdateCampaignOutboundCallConfigRequest.h>
#include <aws/connectcampaigns/model/ValidationException.h>

using ConnectCampaignsIncludeTest = ::testing::Test;

TEST_F(ConnectCampaignsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ConnectCampaigns::ConnectCampaignsClient>("ConnectCampaignsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
