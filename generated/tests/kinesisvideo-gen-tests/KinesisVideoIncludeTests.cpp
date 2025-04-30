/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesisvideo/KinesisVideoClient.h>
#include <aws/kinesisvideo/KinesisVideoEndpointProvider.h>
#include <aws/kinesisvideo/KinesisVideoEndpointRules.h>
#include <aws/kinesisvideo/KinesisVideoErrorMarshaller.h>
#include <aws/kinesisvideo/KinesisVideoErrors.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/kinesisvideo/KinesisVideoServiceClientModel.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/APIName.h>
#include <aws/kinesisvideo/model/ChannelInfo.h>
#include <aws/kinesisvideo/model/ChannelNameCondition.h>
#include <aws/kinesisvideo/model/ChannelProtocol.h>
#include <aws/kinesisvideo/model/ChannelRole.h>
#include <aws/kinesisvideo/model/ChannelType.h>
#include <aws/kinesisvideo/model/ComparisonOperator.h>
#include <aws/kinesisvideo/model/ConfigurationStatus.h>
#include <aws/kinesisvideo/model/CreateSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/CreateSignalingChannelResult.h>
#include <aws/kinesisvideo/model/CreateStreamRequest.h>
#include <aws/kinesisvideo/model/CreateStreamResult.h>
#include <aws/kinesisvideo/model/DeleteEdgeConfigurationRequest.h>
#include <aws/kinesisvideo/model/DeleteEdgeConfigurationResult.h>
#include <aws/kinesisvideo/model/DeleteSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/DeleteSignalingChannelResult.h>
#include <aws/kinesisvideo/model/DeleteStreamRequest.h>
#include <aws/kinesisvideo/model/DeleteStreamResult.h>
#include <aws/kinesisvideo/model/DeletionConfig.h>
#include <aws/kinesisvideo/model/DescribeEdgeConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeEdgeConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeImageGenerationConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeImageGenerationConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeMediaStorageConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeMediaStorageConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeNotificationConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeNotificationConfigurationResult.h>
#include <aws/kinesisvideo/model/DescribeSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/DescribeSignalingChannelResult.h>
#include <aws/kinesisvideo/model/DescribeStreamRequest.h>
#include <aws/kinesisvideo/model/DescribeStreamResult.h>
#include <aws/kinesisvideo/model/EdgeAgentStatus.h>
#include <aws/kinesisvideo/model/EdgeConfig.h>
#include <aws/kinesisvideo/model/Format.h>
#include <aws/kinesisvideo/model/FormatConfigKey.h>
#include <aws/kinesisvideo/model/GetDataEndpointRequest.h>
#include <aws/kinesisvideo/model/GetDataEndpointResult.h>
#include <aws/kinesisvideo/model/GetSignalingChannelEndpointRequest.h>
#include <aws/kinesisvideo/model/GetSignalingChannelEndpointResult.h>
#include <aws/kinesisvideo/model/ImageGenerationConfiguration.h>
#include <aws/kinesisvideo/model/ImageGenerationDestinationConfig.h>
#include <aws/kinesisvideo/model/ImageSelectorType.h>
#include <aws/kinesisvideo/model/LastRecorderStatus.h>
#include <aws/kinesisvideo/model/LastUploaderStatus.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsEdgeConfig.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsRequest.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsResult.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsRequest.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsResult.h>
#include <aws/kinesisvideo/model/ListStreamsRequest.h>
#include <aws/kinesisvideo/model/ListStreamsResult.h>
#include <aws/kinesisvideo/model/ListTagsForResourceRequest.h>
#include <aws/kinesisvideo/model/ListTagsForResourceResult.h>
#include <aws/kinesisvideo/model/ListTagsForStreamRequest.h>
#include <aws/kinesisvideo/model/ListTagsForStreamResult.h>
#include <aws/kinesisvideo/model/LocalSizeConfig.h>
#include <aws/kinesisvideo/model/MappedResourceConfigurationListItem.h>
#include <aws/kinesisvideo/model/MediaSourceConfig.h>
#include <aws/kinesisvideo/model/MediaStorageConfiguration.h>
#include <aws/kinesisvideo/model/MediaStorageConfigurationStatus.h>
#include <aws/kinesisvideo/model/MediaUriType.h>
#include <aws/kinesisvideo/model/NotificationConfiguration.h>
#include <aws/kinesisvideo/model/NotificationDestinationConfig.h>
#include <aws/kinesisvideo/model/RecorderConfig.h>
#include <aws/kinesisvideo/model/RecorderStatus.h>
#include <aws/kinesisvideo/model/ResourceEndpointListItem.h>
#include <aws/kinesisvideo/model/ScheduleConfig.h>
#include <aws/kinesisvideo/model/SingleMasterChannelEndpointConfiguration.h>
#include <aws/kinesisvideo/model/SingleMasterConfiguration.h>
#include <aws/kinesisvideo/model/StartEdgeConfigurationUpdateRequest.h>
#include <aws/kinesisvideo/model/StartEdgeConfigurationUpdateResult.h>
#include <aws/kinesisvideo/model/Status.h>
#include <aws/kinesisvideo/model/StrategyOnFullSize.h>
#include <aws/kinesisvideo/model/StreamInfo.h>
#include <aws/kinesisvideo/model/StreamNameCondition.h>
#include <aws/kinesisvideo/model/SyncStatus.h>
#include <aws/kinesisvideo/model/Tag.h>
#include <aws/kinesisvideo/model/TagResourceRequest.h>
#include <aws/kinesisvideo/model/TagResourceResult.h>
#include <aws/kinesisvideo/model/TagStreamRequest.h>
#include <aws/kinesisvideo/model/TagStreamResult.h>
#include <aws/kinesisvideo/model/UntagResourceRequest.h>
#include <aws/kinesisvideo/model/UntagResourceResult.h>
#include <aws/kinesisvideo/model/UntagStreamRequest.h>
#include <aws/kinesisvideo/model/UntagStreamResult.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionOperation.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionRequest.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionResult.h>
#include <aws/kinesisvideo/model/UpdateImageGenerationConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateImageGenerationConfigurationResult.h>
#include <aws/kinesisvideo/model/UpdateMediaStorageConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateMediaStorageConfigurationResult.h>
#include <aws/kinesisvideo/model/UpdateNotificationConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateNotificationConfigurationResult.h>
#include <aws/kinesisvideo/model/UpdateSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/UpdateSignalingChannelResult.h>
#include <aws/kinesisvideo/model/UpdateStreamRequest.h>
#include <aws/kinesisvideo/model/UpdateStreamResult.h>
#include <aws/kinesisvideo/model/UploaderConfig.h>
#include <aws/kinesisvideo/model/UploaderStatus.h>

using KinesisVideoIncludeTest = ::testing::Test;

TEST_F(KinesisVideoIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KinesisVideo::KinesisVideoClient>("KinesisVideoIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
