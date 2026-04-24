/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/keyspacesstreams/KeyspacesStreamsClient.h>
#include <aws/keyspacesstreams/KeyspacesStreamsEndpointProvider.h>
#include <aws/keyspacesstreams/KeyspacesStreamsEndpointRules.h>
#include <aws/keyspacesstreams/KeyspacesStreamsErrorMarshaller.h>
#include <aws/keyspacesstreams/KeyspacesStreamsErrors.h>
#include <aws/keyspacesstreams/KeyspacesStreamsRequest.h>
#include <aws/keyspacesstreams/KeyspacesStreamsServiceClientModel.h>
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/model/GetRecordsRequest.h>
#include <aws/keyspacesstreams/model/GetRecordsResult.h>
#include <aws/keyspacesstreams/model/GetShardIteratorRequest.h>
#include <aws/keyspacesstreams/model/GetShardIteratorResult.h>
#include <aws/keyspacesstreams/model/GetStreamRequest.h>
#include <aws/keyspacesstreams/model/GetStreamResult.h>
#include <aws/keyspacesstreams/model/KeyspacesCell.h>
#include <aws/keyspacesstreams/model/KeyspacesCellMapDefinition.h>
#include <aws/keyspacesstreams/model/KeyspacesCellValue.h>
#include <aws/keyspacesstreams/model/KeyspacesMetadata.h>
#include <aws/keyspacesstreams/model/KeyspacesRow.h>
#include <aws/keyspacesstreams/model/ListStreamsRequest.h>
#include <aws/keyspacesstreams/model/ListStreamsResult.h>
#include <aws/keyspacesstreams/model/OriginType.h>
#include <aws/keyspacesstreams/model/Record.h>
#include <aws/keyspacesstreams/model/SequenceNumberRange.h>
#include <aws/keyspacesstreams/model/Shard.h>
#include <aws/keyspacesstreams/model/ShardFilter.h>
#include <aws/keyspacesstreams/model/ShardFilterType.h>
#include <aws/keyspacesstreams/model/ShardIteratorType.h>
#include <aws/keyspacesstreams/model/Stream.h>
#include <aws/keyspacesstreams/model/StreamStatus.h>
#include <aws/keyspacesstreams/model/StreamViewType.h>
#include <aws/keyspacesstreams/model/ValidationException.h>
#include <aws/keyspacesstreams/model/ValidationExceptionType.h>

using KeyspacesStreamsIncludeTest = ::testing::Test;

TEST_F(KeyspacesStreamsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KeyspacesStreams::KeyspacesStreamsClient>("KeyspacesStreamsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
