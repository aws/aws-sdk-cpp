/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/KinesisEndpointProvider.h>
#include <aws/kinesis/KinesisEndpointRules.h>
#include <aws/kinesis/KinesisErrorMarshaller.h>
#include <aws/kinesis/KinesisErrors.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/KinesisServiceClientModel.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/AddTagsToStreamRequest.h>
#include <aws/kinesis/model/ChildShard.h>
#include <aws/kinesis/model/Consumer.h>
#include <aws/kinesis/model/ConsumerDescription.h>
#include <aws/kinesis/model/ConsumerStatus.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DecreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/DeleteResourcePolicyRequest.h>
#include <aws/kinesis/model/DeleteStreamRequest.h>
#include <aws/kinesis/model/DeregisterStreamConsumerRequest.h>
#include <aws/kinesis/model/DescribeLimitsRequest.h>
#include <aws/kinesis/model/DescribeLimitsResult.h>
#include <aws/kinesis/model/DescribeStreamConsumerRequest.h>
#include <aws/kinesis/model/DescribeStreamConsumerResult.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamResult.h>
#include <aws/kinesis/model/DescribeStreamSummaryRequest.h>
#include <aws/kinesis/model/DescribeStreamSummaryResult.h>
#include <aws/kinesis/model/DisableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/DisableEnhancedMonitoringResult.h>
#include <aws/kinesis/model/EnableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/EnableEnhancedMonitoringResult.h>
#include <aws/kinesis/model/EncryptionType.h>
#include <aws/kinesis/model/EnhancedMetrics.h>
#include <aws/kinesis/model/GetRecordsRequest.h>
#include <aws/kinesis/model/GetRecordsResult.h>
#include <aws/kinesis/model/GetResourcePolicyRequest.h>
#include <aws/kinesis/model/GetResourcePolicyResult.h>
#include <aws/kinesis/model/GetShardIteratorRequest.h>
#include <aws/kinesis/model/GetShardIteratorResult.h>
#include <aws/kinesis/model/HashKeyRange.h>
#include <aws/kinesis/model/IncreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/ListShardsRequest.h>
#include <aws/kinesis/model/ListShardsResult.h>
#include <aws/kinesis/model/ListStreamConsumersRequest.h>
#include <aws/kinesis/model/ListStreamConsumersResult.h>
#include <aws/kinesis/model/ListStreamsRequest.h>
#include <aws/kinesis/model/ListStreamsResult.h>
#include <aws/kinesis/model/ListTagsForResourceRequest.h>
#include <aws/kinesis/model/ListTagsForResourceResult.h>
#include <aws/kinesis/model/ListTagsForStreamRequest.h>
#include <aws/kinesis/model/ListTagsForStreamResult.h>
#include <aws/kinesis/model/MergeShardsRequest.h>
#include <aws/kinesis/model/MetricsName.h>
#include <aws/kinesis/model/PutRecordRequest.h>
#include <aws/kinesis/model/PutRecordResult.h>
#include <aws/kinesis/model/PutRecordsRequest.h>
#include <aws/kinesis/model/PutRecordsRequestEntry.h>
#include <aws/kinesis/model/PutRecordsResult.h>
#include <aws/kinesis/model/PutRecordsResultEntry.h>
#include <aws/kinesis/model/PutResourcePolicyRequest.h>
#include <aws/kinesis/model/Record.h>
#include <aws/kinesis/model/RegisterStreamConsumerRequest.h>
#include <aws/kinesis/model/RegisterStreamConsumerResult.h>
#include <aws/kinesis/model/RemoveTagsFromStreamRequest.h>
#include <aws/kinesis/model/ScalingType.h>
#include <aws/kinesis/model/SequenceNumberRange.h>
#include <aws/kinesis/model/Shard.h>
#include <aws/kinesis/model/ShardFilter.h>
#include <aws/kinesis/model/ShardFilterType.h>
#include <aws/kinesis/model/ShardIteratorType.h>
#include <aws/kinesis/model/SplitShardRequest.h>
#include <aws/kinesis/model/StartStreamEncryptionRequest.h>
#include <aws/kinesis/model/StartingPosition.h>
#include <aws/kinesis/model/StopStreamEncryptionRequest.h>
#include <aws/kinesis/model/StreamDescription.h>
#include <aws/kinesis/model/StreamDescriptionSummary.h>
#include <aws/kinesis/model/StreamMode.h>
#include <aws/kinesis/model/StreamModeDetails.h>
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/kinesis/model/StreamSummary.h>
#include <aws/kinesis/model/SubscribeToShardEvent.h>
#include <aws/kinesis/model/SubscribeToShardEventStream.h>
#include <aws/kinesis/model/SubscribeToShardHandler.h>
#include <aws/kinesis/model/SubscribeToShardInitialResponse.h>
#include <aws/kinesis/model/SubscribeToShardRequest.h>
#include <aws/kinesis/model/Tag.h>
#include <aws/kinesis/model/TagResourceRequest.h>
#include <aws/kinesis/model/UntagResourceRequest.h>
#include <aws/kinesis/model/UpdateShardCountRequest.h>
#include <aws/kinesis/model/UpdateShardCountResult.h>
#include <aws/kinesis/model/UpdateStreamModeRequest.h>

using KinesisIncludeTest = ::testing::Test;

TEST_F(KinesisIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Kinesis::KinesisClient>("KinesisIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
