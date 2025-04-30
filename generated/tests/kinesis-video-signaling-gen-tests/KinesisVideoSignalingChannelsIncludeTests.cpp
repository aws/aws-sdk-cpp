/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsClient.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointProvider.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointRules.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrorMarshaller.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrors.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsRequest.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsServiceClientModel.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/kinesis-video-signaling/model/GetIceServerConfigRequest.h>
#include <aws/kinesis-video-signaling/model/GetIceServerConfigResult.h>
#include <aws/kinesis-video-signaling/model/IceServer.h>
#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterRequest.h>
#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterResult.h>
#include <aws/kinesis-video-signaling/model/Service.h>

using KinesisVideoSignalingChannelsIncludeTest = ::testing::Test;

TEST_F(KinesisVideoSignalingChannelsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClient>("KinesisVideoSignalingChannelsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
