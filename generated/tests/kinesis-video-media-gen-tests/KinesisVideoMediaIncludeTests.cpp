/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesis-video-media/KinesisVideoMediaClient.h>
#include <aws/kinesis-video-media/KinesisVideoMediaEndpointProvider.h>
#include <aws/kinesis-video-media/KinesisVideoMediaEndpointRules.h>
#include <aws/kinesis-video-media/KinesisVideoMediaErrorMarshaller.h>
#include <aws/kinesis-video-media/KinesisVideoMediaErrors.h>
#include <aws/kinesis-video-media/KinesisVideoMediaRequest.h>
#include <aws/kinesis-video-media/KinesisVideoMediaServiceClientModel.h>
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/kinesis-video-media/model/GetMediaRequest.h>
#include <aws/kinesis-video-media/model/GetMediaResult.h>
#include <aws/kinesis-video-media/model/StartSelector.h>
#include <aws/kinesis-video-media/model/StartSelectorType.h>

using KinesisVideoMediaIncludeTest = ::testing::Test;

TEST_F(KinesisVideoMediaIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KinesisVideoMedia::KinesisVideoMediaClient>("KinesisVideoMediaIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
