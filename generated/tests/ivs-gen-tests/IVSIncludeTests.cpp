/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ivs/IVSClient.h>
#include <aws/ivs/IVSEndpointProvider.h>
#include <aws/ivs/IVSEndpointRules.h>
#include <aws/ivs/IVSErrorMarshaller.h>
#include <aws/ivs/IVSErrors.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/IVSServiceClientModel.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/AccessDeniedException.h>
#include <aws/ivs/model/AudioConfiguration.h>
#include <aws/ivs/model/BatchError.h>
#include <aws/ivs/model/BatchGetChannelRequest.h>
#include <aws/ivs/model/BatchGetChannelResult.h>
#include <aws/ivs/model/BatchGetStreamKeyRequest.h>
#include <aws/ivs/model/BatchGetStreamKeyResult.h>
#include <aws/ivs/model/BatchStartViewerSessionRevocationError.h>
#include <aws/ivs/model/BatchStartViewerSessionRevocationRequest.h>
#include <aws/ivs/model/BatchStartViewerSessionRevocationResult.h>
#include <aws/ivs/model/BatchStartViewerSessionRevocationViewerSession.h>
#include <aws/ivs/model/Channel.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/ChannelNotBroadcasting.h>
#include <aws/ivs/model/ChannelSummary.h>
#include <aws/ivs/model/ChannelType.h>
#include <aws/ivs/model/ConflictException.h>
#include <aws/ivs/model/ContainerFormat.h>
#include <aws/ivs/model/CreateChannelRequest.h>
#include <aws/ivs/model/CreateChannelResult.h>
#include <aws/ivs/model/CreatePlaybackRestrictionPolicyRequest.h>
#include <aws/ivs/model/CreatePlaybackRestrictionPolicyResult.h>
#include <aws/ivs/model/CreateRecordingConfigurationRequest.h>
#include <aws/ivs/model/CreateRecordingConfigurationResult.h>
#include <aws/ivs/model/CreateStreamKeyRequest.h>
#include <aws/ivs/model/CreateStreamKeyResult.h>
#include <aws/ivs/model/DeleteChannelRequest.h>
#include <aws/ivs/model/DeletePlaybackKeyPairRequest.h>
#include <aws/ivs/model/DeletePlaybackKeyPairResult.h>
#include <aws/ivs/model/DeletePlaybackRestrictionPolicyRequest.h>
#include <aws/ivs/model/DeleteRecordingConfigurationRequest.h>
#include <aws/ivs/model/DeleteStreamKeyRequest.h>
#include <aws/ivs/model/DestinationConfiguration.h>
#include <aws/ivs/model/GetChannelRequest.h>
#include <aws/ivs/model/GetChannelResult.h>
#include <aws/ivs/model/GetPlaybackKeyPairRequest.h>
#include <aws/ivs/model/GetPlaybackKeyPairResult.h>
#include <aws/ivs/model/GetPlaybackRestrictionPolicyRequest.h>
#include <aws/ivs/model/GetPlaybackRestrictionPolicyResult.h>
#include <aws/ivs/model/GetRecordingConfigurationRequest.h>
#include <aws/ivs/model/GetRecordingConfigurationResult.h>
#include <aws/ivs/model/GetStreamKeyRequest.h>
#include <aws/ivs/model/GetStreamKeyResult.h>
#include <aws/ivs/model/GetStreamRequest.h>
#include <aws/ivs/model/GetStreamResult.h>
#include <aws/ivs/model/GetStreamSessionRequest.h>
#include <aws/ivs/model/GetStreamSessionResult.h>
#include <aws/ivs/model/ImportPlaybackKeyPairRequest.h>
#include <aws/ivs/model/ImportPlaybackKeyPairResult.h>
#include <aws/ivs/model/IngestConfiguration.h>
#include <aws/ivs/model/IngestConfigurations.h>
#include <aws/ivs/model/InternalServerException.h>
#include <aws/ivs/model/ListChannelsRequest.h>
#include <aws/ivs/model/ListChannelsResult.h>
#include <aws/ivs/model/ListPlaybackKeyPairsRequest.h>
#include <aws/ivs/model/ListPlaybackKeyPairsResult.h>
#include <aws/ivs/model/ListPlaybackRestrictionPoliciesRequest.h>
#include <aws/ivs/model/ListPlaybackRestrictionPoliciesResult.h>
#include <aws/ivs/model/ListRecordingConfigurationsRequest.h>
#include <aws/ivs/model/ListRecordingConfigurationsResult.h>
#include <aws/ivs/model/ListStreamKeysRequest.h>
#include <aws/ivs/model/ListStreamKeysResult.h>
#include <aws/ivs/model/ListStreamSessionsRequest.h>
#include <aws/ivs/model/ListStreamSessionsResult.h>
#include <aws/ivs/model/ListStreamsRequest.h>
#include <aws/ivs/model/ListStreamsResult.h>
#include <aws/ivs/model/ListTagsForResourceRequest.h>
#include <aws/ivs/model/ListTagsForResourceResult.h>
#include <aws/ivs/model/MultitrackInputConfiguration.h>
#include <aws/ivs/model/MultitrackMaximumResolution.h>
#include <aws/ivs/model/MultitrackPolicy.h>
#include <aws/ivs/model/PendingVerification.h>
#include <aws/ivs/model/PlaybackKeyPair.h>
#include <aws/ivs/model/PlaybackKeyPairSummary.h>
#include <aws/ivs/model/PlaybackRestrictionPolicy.h>
#include <aws/ivs/model/PlaybackRestrictionPolicySummary.h>
#include <aws/ivs/model/PutMetadataRequest.h>
#include <aws/ivs/model/RecordingConfiguration.h>
#include <aws/ivs/model/RecordingConfigurationState.h>
#include <aws/ivs/model/RecordingConfigurationSummary.h>
#include <aws/ivs/model/RecordingMode.h>
#include <aws/ivs/model/RenditionConfiguration.h>
#include <aws/ivs/model/RenditionConfigurationRendition.h>
#include <aws/ivs/model/RenditionConfigurationRenditionSelection.h>
#include <aws/ivs/model/ResourceNotFoundException.h>
#include <aws/ivs/model/S3DestinationConfiguration.h>
#include <aws/ivs/model/ServiceQuotaExceededException.h>
#include <aws/ivs/model/Srt.h>
#include <aws/ivs/model/StartViewerSessionRevocationRequest.h>
#include <aws/ivs/model/StartViewerSessionRevocationResult.h>
#include <aws/ivs/model/StopStreamRequest.h>
#include <aws/ivs/model/StopStreamResult.h>
#include <aws/ivs/model/Stream.h>
#include <aws/ivs/model/StreamEvent.h>
#include <aws/ivs/model/StreamFilters.h>
#include <aws/ivs/model/StreamHealth.h>
#include <aws/ivs/model/StreamKey.h>
#include <aws/ivs/model/StreamKeySummary.h>
#include <aws/ivs/model/StreamSession.h>
#include <aws/ivs/model/StreamSessionSummary.h>
#include <aws/ivs/model/StreamState.h>
#include <aws/ivs/model/StreamSummary.h>
#include <aws/ivs/model/StreamUnavailable.h>
#include <aws/ivs/model/TagResourceRequest.h>
#include <aws/ivs/model/TagResourceResult.h>
#include <aws/ivs/model/ThrottlingException.h>
#include <aws/ivs/model/ThumbnailConfiguration.h>
#include <aws/ivs/model/ThumbnailConfigurationResolution.h>
#include <aws/ivs/model/ThumbnailConfigurationStorage.h>
#include <aws/ivs/model/TranscodePreset.h>
#include <aws/ivs/model/UntagResourceRequest.h>
#include <aws/ivs/model/UntagResourceResult.h>
#include <aws/ivs/model/UpdateChannelRequest.h>
#include <aws/ivs/model/UpdateChannelResult.h>
#include <aws/ivs/model/UpdatePlaybackRestrictionPolicyRequest.h>
#include <aws/ivs/model/UpdatePlaybackRestrictionPolicyResult.h>
#include <aws/ivs/model/ValidationException.h>
#include <aws/ivs/model/VideoConfiguration.h>

using IVSIncludeTest = ::testing::Test;

TEST_F(IVSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IVS::IVSClient>("IVSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
