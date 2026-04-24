/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClient.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointProvider.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointRules.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrorMarshaller.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrors.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaServiceClientModel.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/ClipFragmentSelector.h>
#include <aws/kinesis-video-archived-media/model/ClipFragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/ClipTimestampRange.h>
#include <aws/kinesis-video-archived-media/model/ContainerFormat.h>
#include <aws/kinesis-video-archived-media/model/DASHDisplayFragmentNumber.h>
#include <aws/kinesis-video-archived-media/model/DASHDisplayFragmentTimestamp.h>
#include <aws/kinesis-video-archived-media/model/DASHFragmentSelector.h>
#include <aws/kinesis-video-archived-media/model/DASHFragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/DASHPlaybackMode.h>
#include <aws/kinesis-video-archived-media/model/DASHTimestampRange.h>
#include <aws/kinesis-video-archived-media/model/Format.h>
#include <aws/kinesis-video-archived-media/model/FormatConfigKey.h>
#include <aws/kinesis-video-archived-media/model/Fragment.h>
#include <aws/kinesis-video-archived-media/model/FragmentSelector.h>
#include <aws/kinesis-video-archived-media/model/FragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/GetClipRequest.h>
#include <aws/kinesis-video-archived-media/model/GetClipResult.h>
#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLRequest.h>
#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLResult.h>
#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLRequest.h>
#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLResult.h>
#include <aws/kinesis-video-archived-media/model/GetImagesRequest.h>
#include <aws/kinesis-video-archived-media/model/GetImagesResult.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListRequest.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListResult.h>
#include <aws/kinesis-video-archived-media/model/HLSDiscontinuityMode.h>
#include <aws/kinesis-video-archived-media/model/HLSDisplayFragmentTimestamp.h>
#include <aws/kinesis-video-archived-media/model/HLSFragmentSelector.h>
#include <aws/kinesis-video-archived-media/model/HLSFragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/HLSPlaybackMode.h>
#include <aws/kinesis-video-archived-media/model/HLSTimestampRange.h>
#include <aws/kinesis-video-archived-media/model/Image.h>
#include <aws/kinesis-video-archived-media/model/ImageError.h>
#include <aws/kinesis-video-archived-media/model/ImageSelectorType.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsRequest.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsResult.h>
#include <aws/kinesis-video-archived-media/model/TimestampRange.h>

using KinesisVideoArchivedMediaIncludeTest = ::testing::Test;

TEST_F(KinesisVideoArchivedMediaIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClient>("KinesisVideoArchivedMediaIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
