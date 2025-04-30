/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ivschat/IvschatClient.h>
#include <aws/ivschat/IvschatEndpointProvider.h>
#include <aws/ivschat/IvschatEndpointRules.h>
#include <aws/ivschat/IvschatErrorMarshaller.h>
#include <aws/ivschat/IvschatErrors.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/ivschat/IvschatServiceClientModel.h>
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/model/ChatTokenCapability.h>
#include <aws/ivschat/model/CloudWatchLogsDestinationConfiguration.h>
#include <aws/ivschat/model/ConflictException.h>
#include <aws/ivschat/model/CreateChatTokenRequest.h>
#include <aws/ivschat/model/CreateChatTokenResult.h>
#include <aws/ivschat/model/CreateLoggingConfigurationRequest.h>
#include <aws/ivschat/model/CreateLoggingConfigurationResult.h>
#include <aws/ivschat/model/CreateLoggingConfigurationState.h>
#include <aws/ivschat/model/CreateRoomRequest.h>
#include <aws/ivschat/model/CreateRoomResult.h>
#include <aws/ivschat/model/DeleteLoggingConfigurationRequest.h>
#include <aws/ivschat/model/DeleteMessageRequest.h>
#include <aws/ivschat/model/DeleteMessageResult.h>
#include <aws/ivschat/model/DeleteRoomRequest.h>
#include <aws/ivschat/model/DestinationConfiguration.h>
#include <aws/ivschat/model/DisconnectUserRequest.h>
#include <aws/ivschat/model/DisconnectUserResult.h>
#include <aws/ivschat/model/FallbackResult.h>
#include <aws/ivschat/model/FirehoseDestinationConfiguration.h>
#include <aws/ivschat/model/GetLoggingConfigurationRequest.h>
#include <aws/ivschat/model/GetLoggingConfigurationResult.h>
#include <aws/ivschat/model/GetRoomRequest.h>
#include <aws/ivschat/model/GetRoomResult.h>
#include <aws/ivschat/model/ListLoggingConfigurationsRequest.h>
#include <aws/ivschat/model/ListLoggingConfigurationsResult.h>
#include <aws/ivschat/model/ListRoomsRequest.h>
#include <aws/ivschat/model/ListRoomsResult.h>
#include <aws/ivschat/model/ListTagsForResourceRequest.h>
#include <aws/ivschat/model/ListTagsForResourceResult.h>
#include <aws/ivschat/model/LoggingConfigurationState.h>
#include <aws/ivschat/model/LoggingConfigurationSummary.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/ivschat/model/ResourceNotFoundException.h>
#include <aws/ivschat/model/ResourceType.h>
#include <aws/ivschat/model/RoomSummary.h>
#include <aws/ivschat/model/S3DestinationConfiguration.h>
#include <aws/ivschat/model/SendEventRequest.h>
#include <aws/ivschat/model/SendEventResult.h>
#include <aws/ivschat/model/ServiceQuotaExceededException.h>
#include <aws/ivschat/model/TagResourceRequest.h>
#include <aws/ivschat/model/TagResourceResult.h>
#include <aws/ivschat/model/ThrottlingException.h>
#include <aws/ivschat/model/UntagResourceRequest.h>
#include <aws/ivschat/model/UntagResourceResult.h>
#include <aws/ivschat/model/UpdateLoggingConfigurationRequest.h>
#include <aws/ivschat/model/UpdateLoggingConfigurationResult.h>
#include <aws/ivschat/model/UpdateLoggingConfigurationState.h>
#include <aws/ivschat/model/UpdateRoomRequest.h>
#include <aws/ivschat/model/UpdateRoomResult.h>
#include <aws/ivschat/model/ValidationException.h>
#include <aws/ivschat/model/ValidationExceptionField.h>
#include <aws/ivschat/model/ValidationExceptionReason.h>

using IvschatIncludeTest = ::testing::Test;

TEST_F(IvschatIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ivschat::IvschatClient>("IvschatIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
