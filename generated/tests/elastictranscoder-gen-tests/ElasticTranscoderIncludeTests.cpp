/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/elastictranscoder/ElasticTranscoderClient.h>
#include <aws/elastictranscoder/ElasticTranscoderEndpointProvider.h>
#include <aws/elastictranscoder/ElasticTranscoderEndpointRules.h>
#include <aws/elastictranscoder/ElasticTranscoderErrorMarshaller.h>
#include <aws/elastictranscoder/ElasticTranscoderErrors.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/elastictranscoder/ElasticTranscoderServiceClientModel.h>
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Artwork.h>
#include <aws/elastictranscoder/model/AudioCodecOptions.h>
#include <aws/elastictranscoder/model/AudioParameters.h>
#include <aws/elastictranscoder/model/CancelJobRequest.h>
#include <aws/elastictranscoder/model/CancelJobResult.h>
#include <aws/elastictranscoder/model/CaptionFormat.h>
#include <aws/elastictranscoder/model/CaptionSource.h>
#include <aws/elastictranscoder/model/Captions.h>
#include <aws/elastictranscoder/model/Clip.h>
#include <aws/elastictranscoder/model/CreateJobOutput.h>
#include <aws/elastictranscoder/model/CreateJobPlaylist.h>
#include <aws/elastictranscoder/model/CreateJobRequest.h>
#include <aws/elastictranscoder/model/CreateJobResult.h>
#include <aws/elastictranscoder/model/CreatePipelineRequest.h>
#include <aws/elastictranscoder/model/CreatePipelineResult.h>
#include <aws/elastictranscoder/model/CreatePresetRequest.h>
#include <aws/elastictranscoder/model/CreatePresetResult.h>
#include <aws/elastictranscoder/model/DeletePipelineRequest.h>
#include <aws/elastictranscoder/model/DeletePipelineResult.h>
#include <aws/elastictranscoder/model/DeletePresetRequest.h>
#include <aws/elastictranscoder/model/DeletePresetResult.h>
#include <aws/elastictranscoder/model/DetectedProperties.h>
#include <aws/elastictranscoder/model/Encryption.h>
#include <aws/elastictranscoder/model/HlsContentProtection.h>
#include <aws/elastictranscoder/model/InputCaptions.h>
#include <aws/elastictranscoder/model/Job.h>
#include <aws/elastictranscoder/model/JobAlbumArt.h>
#include <aws/elastictranscoder/model/JobInput.h>
#include <aws/elastictranscoder/model/JobOutput.h>
#include <aws/elastictranscoder/model/JobWatermark.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineRequest.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineResult.h>
#include <aws/elastictranscoder/model/ListJobsByStatusRequest.h>
#include <aws/elastictranscoder/model/ListJobsByStatusResult.h>
#include <aws/elastictranscoder/model/ListPipelinesRequest.h>
#include <aws/elastictranscoder/model/ListPipelinesResult.h>
#include <aws/elastictranscoder/model/ListPresetsRequest.h>
#include <aws/elastictranscoder/model/ListPresetsResult.h>
#include <aws/elastictranscoder/model/Notifications.h>
#include <aws/elastictranscoder/model/Permission.h>
#include <aws/elastictranscoder/model/Pipeline.h>
#include <aws/elastictranscoder/model/PipelineOutputConfig.h>
#include <aws/elastictranscoder/model/PlayReadyDrm.h>
#include <aws/elastictranscoder/model/Playlist.h>
#include <aws/elastictranscoder/model/Preset.h>
#include <aws/elastictranscoder/model/PresetWatermark.h>
#include <aws/elastictranscoder/model/ReadJobRequest.h>
#include <aws/elastictranscoder/model/ReadJobResult.h>
#include <aws/elastictranscoder/model/ReadPipelineRequest.h>
#include <aws/elastictranscoder/model/ReadPipelineResult.h>
#include <aws/elastictranscoder/model/ReadPresetRequest.h>
#include <aws/elastictranscoder/model/ReadPresetResult.h>
#include <aws/elastictranscoder/model/Thumbnails.h>
#include <aws/elastictranscoder/model/TimeSpan.h>
#include <aws/elastictranscoder/model/Timing.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusResult.h>
#include <aws/elastictranscoder/model/VideoParameters.h>
#include <aws/elastictranscoder/model/Warning.h>

using ElasticTranscoderIncludeTest = ::testing::Test;

TEST_F(ElasticTranscoderIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ElasticTranscoder::ElasticTranscoderClient>("ElasticTranscoderIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
