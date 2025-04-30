/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/chime-sdk-identity/ChimeSDKIdentityClient.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointProvider.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointRules.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrorMarshaller.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrors.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityServiceClientModel.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AllowMessages.h>
#include <aws/chime-sdk-identity/model/AppInstance.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdmin.h>
#include <aws/chime-sdk-identity/model/AppInstanceAdminSummary.h>
#include <aws/chime-sdk-identity/model/AppInstanceBot.h>
#include <aws/chime-sdk-identity/model/AppInstanceBotSummary.h>
#include <aws/chime-sdk-identity/model/AppInstanceRetentionSettings.h>
#include <aws/chime-sdk-identity/model/AppInstanceSummary.h>
#include <aws/chime-sdk-identity/model/AppInstanceUser.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpoint.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointSummary.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointType.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserSummary.h>
#include <aws/chime-sdk-identity/model/BadRequestException.h>
#include <aws/chime-sdk-identity/model/ChannelRetentionSettings.h>
#include <aws/chime-sdk-identity/model/Configuration.h>
#include <aws/chime-sdk-identity/model/ConflictException.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceAdminRequest.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceAdminResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceBotRequest.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceBotResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceAdminRequest.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceBotRequest.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/DeregisterAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceAdminRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceAdminResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceBotRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceBotResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserResult.h>
#include <aws/chime-sdk-identity/model/EndpointAttributes.h>
#include <aws/chime-sdk-identity/model/EndpointState.h>
#include <aws/chime-sdk-identity/model/EndpointStatus.h>
#include <aws/chime-sdk-identity/model/EndpointStatusReason.h>
#include <aws/chime-sdk-identity/model/ErrorCode.h>
#include <aws/chime-sdk-identity/model/ExpirationCriterion.h>
#include <aws/chime-sdk-identity/model/ExpirationSettings.h>
#include <aws/chime-sdk-identity/model/ForbiddenException.h>
#include <aws/chime-sdk-identity/model/GetAppInstanceRetentionSettingsRequest.h>
#include <aws/chime-sdk-identity/model/GetAppInstanceRetentionSettingsResult.h>
#include <aws/chime-sdk-identity/model/Identity.h>
#include <aws/chime-sdk-identity/model/InvokedBy.h>
#include <aws/chime-sdk-identity/model/LexConfiguration.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceBotsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceBotsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersResult.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesResult.h>
#include <aws/chime-sdk-identity/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-identity/model/ListTagsForResourceResult.h>
#include <aws/chime-sdk-identity/model/NotFoundException.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceRetentionSettingsRequest.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceRetentionSettingsResult.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceUserExpirationSettingsRequest.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceUserExpirationSettingsResult.h>
#include <aws/chime-sdk-identity/model/RegisterAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/RegisterAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/ResourceLimitExceededException.h>
#include <aws/chime-sdk-identity/model/RespondsTo.h>
#include <aws/chime-sdk-identity/model/ServiceFailureException.h>
#include <aws/chime-sdk-identity/model/ServiceUnavailableException.h>
#include <aws/chime-sdk-identity/model/StandardMessages.h>
#include <aws/chime-sdk-identity/model/Tag.h>
#include <aws/chime-sdk-identity/model/TagResourceRequest.h>
#include <aws/chime-sdk-identity/model/TargetedMessages.h>
#include <aws/chime-sdk-identity/model/ThrottledClientException.h>
#include <aws/chime-sdk-identity/model/UnauthorizedClientException.h>
#include <aws/chime-sdk-identity/model/UntagResourceRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceBotRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceBotResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointResult.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserResult.h>

using ChimeSDKIdentityIncludeTest = ::testing::Test;

TEST_F(ChimeSDKIdentityIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ChimeSDKIdentity::ChimeSDKIdentityClient>("ChimeSDKIdentityIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
