/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sqs/SQSClient.h>
#include <aws/sqs/SQSEndpointProvider.h>
#include <aws/sqs/SQSEndpointRules.h>
#include <aws/sqs/SQSErrorMarshaller.h>
#include <aws/sqs/SQSErrors.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/sqs/SQSServiceClientModel.h>
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/model/AddPermissionRequest.h>
#include <aws/sqs/model/BatchResultErrorEntry.h>
#include <aws/sqs/model/CancelMessageMoveTaskRequest.h>
#include <aws/sqs/model/CancelMessageMoveTaskResult.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequest.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequestEntry.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchResult.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchResultEntry.h>
#include <aws/sqs/model/ChangeMessageVisibilityRequest.h>
#include <aws/sqs/model/CreateQueueRequest.h>
#include <aws/sqs/model/CreateQueueResult.h>
#include <aws/sqs/model/DeleteMessageBatchRequest.h>
#include <aws/sqs/model/DeleteMessageBatchRequestEntry.h>
#include <aws/sqs/model/DeleteMessageBatchResult.h>
#include <aws/sqs/model/DeleteMessageBatchResultEntry.h>
#include <aws/sqs/model/DeleteMessageRequest.h>
#include <aws/sqs/model/DeleteQueueRequest.h>
#include <aws/sqs/model/GetQueueAttributesRequest.h>
#include <aws/sqs/model/GetQueueAttributesResult.h>
#include <aws/sqs/model/GetQueueUrlRequest.h>
#include <aws/sqs/model/GetQueueUrlResult.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesRequest.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesResult.h>
#include <aws/sqs/model/ListMessageMoveTasksRequest.h>
#include <aws/sqs/model/ListMessageMoveTasksResult.h>
#include <aws/sqs/model/ListMessageMoveTasksResultEntry.h>
#include <aws/sqs/model/ListQueueTagsRequest.h>
#include <aws/sqs/model/ListQueueTagsResult.h>
#include <aws/sqs/model/ListQueuesRequest.h>
#include <aws/sqs/model/ListQueuesResult.h>
#include <aws/sqs/model/Message.h>
#include <aws/sqs/model/MessageAttributeValue.h>
#include <aws/sqs/model/MessageSystemAttributeName.h>
#include <aws/sqs/model/MessageSystemAttributeNameForSends.h>
#include <aws/sqs/model/MessageSystemAttributeValue.h>
#include <aws/sqs/model/PurgeQueueRequest.h>
#include <aws/sqs/model/QueueAttributeName.h>
#include <aws/sqs/model/ReceiveMessageRequest.h>
#include <aws/sqs/model/ReceiveMessageResult.h>
#include <aws/sqs/model/RemovePermissionRequest.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/SendMessageBatchRequest.h>
#include <aws/sqs/model/SendMessageBatchRequestEntry.h>
#include <aws/sqs/model/SendMessageBatchResult.h>
#include <aws/sqs/model/SendMessageBatchResultEntry.h>
#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/sqs/model/SendMessageResult.h>
#include <aws/sqs/model/SetQueueAttributesRequest.h>
#include <aws/sqs/model/StartMessageMoveTaskRequest.h>
#include <aws/sqs/model/StartMessageMoveTaskResult.h>
#include <aws/sqs/model/TagQueueRequest.h>
#include <aws/sqs/model/UntagQueueRequest.h>

using SQSIncludeTest = ::testing::Test;

TEST_F(SQSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SQS::SQSClient>("SQSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
