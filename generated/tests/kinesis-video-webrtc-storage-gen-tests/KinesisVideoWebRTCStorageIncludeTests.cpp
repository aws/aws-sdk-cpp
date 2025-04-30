/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageClient.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointProvider.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointRules.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrorMarshaller.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrors.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageRequest.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageServiceClientModel.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorage_EXPORTS.h>
#include <aws/kinesis-video-webrtc-storage/model/JoinStorageSessionAsViewerRequest.h>
#include <aws/kinesis-video-webrtc-storage/model/JoinStorageSessionRequest.h>

using KinesisVideoWebRTCStorageIncludeTest = ::testing::Test;

TEST_F(KinesisVideoWebRTCStorageIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClient>("KinesisVideoWebRTCStorageIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
