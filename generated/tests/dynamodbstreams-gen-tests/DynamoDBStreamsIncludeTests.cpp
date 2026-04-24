/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/dynamodbstreams/DynamoDBStreamsClient.h>
#include <aws/dynamodbstreams/DynamoDBStreamsEndpointProvider.h>
#include <aws/dynamodbstreams/DynamoDBStreamsEndpointRules.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrorMarshaller.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrors.h>
#include <aws/dynamodbstreams/DynamoDBStreamsRequest.h>
#include <aws/dynamodbstreams/DynamoDBStreamsServiceClientModel.h>
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/model/AttributeValue.h>
#include <aws/dynamodbstreams/model/DescribeStreamRequest.h>
#include <aws/dynamodbstreams/model/DescribeStreamResult.h>
#include <aws/dynamodbstreams/model/GetRecordsRequest.h>
#include <aws/dynamodbstreams/model/GetRecordsResult.h>
#include <aws/dynamodbstreams/model/GetShardIteratorRequest.h>
#include <aws/dynamodbstreams/model/GetShardIteratorResult.h>
#include <aws/dynamodbstreams/model/Identity.h>
#include <aws/dynamodbstreams/model/KeySchemaElement.h>
#include <aws/dynamodbstreams/model/KeyType.h>
#include <aws/dynamodbstreams/model/ListStreamsRequest.h>
#include <aws/dynamodbstreams/model/ListStreamsResult.h>
#include <aws/dynamodbstreams/model/OperationType.h>
#include <aws/dynamodbstreams/model/Record.h>
#include <aws/dynamodbstreams/model/SequenceNumberRange.h>
#include <aws/dynamodbstreams/model/Shard.h>
#include <aws/dynamodbstreams/model/ShardFilter.h>
#include <aws/dynamodbstreams/model/ShardFilterType.h>
#include <aws/dynamodbstreams/model/ShardIteratorType.h>
#include <aws/dynamodbstreams/model/Stream.h>
#include <aws/dynamodbstreams/model/StreamDescription.h>
#include <aws/dynamodbstreams/model/StreamRecord.h>
#include <aws/dynamodbstreams/model/StreamStatus.h>
#include <aws/dynamodbstreams/model/StreamViewType.h>

using DynamoDBStreamsIncludeTest = ::testing::Test;

TEST_F(DynamoDBStreamsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DynamoDBStreams::DynamoDBStreamsClient>("DynamoDBStreamsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
