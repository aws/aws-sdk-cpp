/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mediapackagev2/Mediapackagev2Client.h>
#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <aws/mediapackagev2/Mediapackagev2EndpointRules.h>
#include <aws/mediapackagev2/Mediapackagev2ErrorMarshaller.h>
#include <aws/mediapackagev2/Mediapackagev2Errors.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/mediapackagev2/Mediapackagev2ServiceClientModel.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/AdMarkerDash.h>
#include <aws/mediapackagev2/model/AdMarkerHls.h>
#include <aws/mediapackagev2/model/CancelHarvestJobRequest.h>
#include <aws/mediapackagev2/model/CancelHarvestJobResult.h>
#include <aws/mediapackagev2/model/ChannelGroupListConfiguration.h>
#include <aws/mediapackagev2/model/ChannelListConfiguration.h>
#include <aws/mediapackagev2/model/CmafEncryptionMethod.h>
#include <aws/mediapackagev2/model/ConflictException.h>
#include <aws/mediapackagev2/model/ConflictExceptionType.h>
#include <aws/mediapackagev2/model/ContainerType.h>
#include <aws/mediapackagev2/model/CreateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/CreateChannelGroupResult.h>
#include <aws/mediapackagev2/model/CreateChannelRequest.h>
#include <aws/mediapackagev2/model/CreateChannelResult.h>
#include <aws/mediapackagev2/model/CreateDashManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateHarvestJobRequest.h>
#include <aws/mediapackagev2/model/CreateHarvestJobResult.h>
#include <aws/mediapackagev2/model/CreateHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/CreateOriginEndpointResult.h>
#include <aws/mediapackagev2/model/DashDrmSignaling.h>
#include <aws/mediapackagev2/model/DashPeriodTrigger.h>
#include <aws/mediapackagev2/model/DashSegmentTemplateFormat.h>
#include <aws/mediapackagev2/model/DashUtcTiming.h>
#include <aws/mediapackagev2/model/DashUtcTimingMode.h>
#include <aws/mediapackagev2/model/DeleteChannelGroupRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelGroupResult.h>
#include <aws/mediapackagev2/model/DeleteChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelPolicyResult.h>
#include <aws/mediapackagev2/model/DeleteChannelRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelResult.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointPolicyResult.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointResult.h>
#include <aws/mediapackagev2/model/Destination.h>
#include <aws/mediapackagev2/model/DrmSystem.h>
#include <aws/mediapackagev2/model/Encryption.h>
#include <aws/mediapackagev2/model/EncryptionContractConfiguration.h>
#include <aws/mediapackagev2/model/EncryptionMethod.h>
#include <aws/mediapackagev2/model/EndpointErrorCondition.h>
#include <aws/mediapackagev2/model/FilterConfiguration.h>
#include <aws/mediapackagev2/model/ForceEndpointErrorConfiguration.h>
#include <aws/mediapackagev2/model/GetChannelGroupRequest.h>
#include <aws/mediapackagev2/model/GetChannelGroupResult.h>
#include <aws/mediapackagev2/model/GetChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/GetChannelPolicyResult.h>
#include <aws/mediapackagev2/model/GetChannelRequest.h>
#include <aws/mediapackagev2/model/GetChannelResult.h>
#include <aws/mediapackagev2/model/GetDashManifestConfiguration.h>
#include <aws/mediapackagev2/model/GetHarvestJobRequest.h>
#include <aws/mediapackagev2/model/GetHarvestJobResult.h>
#include <aws/mediapackagev2/model/GetHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/GetLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/GetOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointPolicyResult.h>
#include <aws/mediapackagev2/model/GetOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointResult.h>
#include <aws/mediapackagev2/model/HarvestJob.h>
#include <aws/mediapackagev2/model/HarvestJobStatus.h>
#include <aws/mediapackagev2/model/HarvestedDashManifest.h>
#include <aws/mediapackagev2/model/HarvestedHlsManifest.h>
#include <aws/mediapackagev2/model/HarvestedLowLatencyHlsManifest.h>
#include <aws/mediapackagev2/model/HarvestedManifests.h>
#include <aws/mediapackagev2/model/HarvesterScheduleConfiguration.h>
#include <aws/mediapackagev2/model/IngestEndpoint.h>
#include <aws/mediapackagev2/model/InputSwitchConfiguration.h>
#include <aws/mediapackagev2/model/InputType.h>
#include <aws/mediapackagev2/model/ListChannelGroupsRequest.h>
#include <aws/mediapackagev2/model/ListChannelGroupsResult.h>
#include <aws/mediapackagev2/model/ListChannelsRequest.h>
#include <aws/mediapackagev2/model/ListChannelsResult.h>
#include <aws/mediapackagev2/model/ListDashManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListHarvestJobsRequest.h>
#include <aws/mediapackagev2/model/ListHarvestJobsResult.h>
#include <aws/mediapackagev2/model/ListHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsResult.h>
#include <aws/mediapackagev2/model/ListTagsForResourceRequest.h>
#include <aws/mediapackagev2/model/ListTagsForResourceResult.h>
#include <aws/mediapackagev2/model/OriginEndpointListConfiguration.h>
#include <aws/mediapackagev2/model/OutputHeaderConfiguration.h>
#include <aws/mediapackagev2/model/PresetSpeke20Audio.h>
#include <aws/mediapackagev2/model/PresetSpeke20Video.h>
#include <aws/mediapackagev2/model/PutChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/PutChannelPolicyResult.h>
#include <aws/mediapackagev2/model/PutOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/PutOriginEndpointPolicyResult.h>
#include <aws/mediapackagev2/model/ResetChannelStateRequest.h>
#include <aws/mediapackagev2/model/ResetChannelStateResult.h>
#include <aws/mediapackagev2/model/ResetOriginEndpointStateRequest.h>
#include <aws/mediapackagev2/model/ResetOriginEndpointStateResult.h>
#include <aws/mediapackagev2/model/ResourceNotFoundException.h>
#include <aws/mediapackagev2/model/ResourceTypeNotFound.h>
#include <aws/mediapackagev2/model/S3DestinationConfig.h>
#include <aws/mediapackagev2/model/Scte.h>
#include <aws/mediapackagev2/model/ScteDash.h>
#include <aws/mediapackagev2/model/ScteFilter.h>
#include <aws/mediapackagev2/model/ScteHls.h>
#include <aws/mediapackagev2/model/Segment.h>
#include <aws/mediapackagev2/model/SpekeKeyProvider.h>
#include <aws/mediapackagev2/model/StartTag.h>
#include <aws/mediapackagev2/model/TagResourceRequest.h>
#include <aws/mediapackagev2/model/TsEncryptionMethod.h>
#include <aws/mediapackagev2/model/UntagResourceRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelGroupResult.h>
#include <aws/mediapackagev2/model/UpdateChannelRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelResult.h>
#include <aws/mediapackagev2/model/UpdateOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/UpdateOriginEndpointResult.h>
#include <aws/mediapackagev2/model/ValidationException.h>
#include <aws/mediapackagev2/model/ValidationExceptionType.h>

using Mediapackagev2IncludeTest = ::testing::Test;

TEST_F(Mediapackagev2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::mediapackagev2::Mediapackagev2Client>("Mediapackagev2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
