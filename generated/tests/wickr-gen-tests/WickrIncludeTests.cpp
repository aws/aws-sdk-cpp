/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/wickr/WickrClient.h>
#include <aws/wickr/WickrEndpointProvider.h>
#include <aws/wickr/WickrEndpointRules.h>
#include <aws/wickr/WickrErrorMarshaller.h>
#include <aws/wickr/WickrErrors.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/WickrServiceClientModel.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/AccessLevel.h>
#include <aws/wickr/model/BasicDeviceObject.h>
#include <aws/wickr/model/BatchCreateUserRequest.h>
#include <aws/wickr/model/BatchCreateUserRequestItem.h>
#include <aws/wickr/model/BatchCreateUserResult.h>
#include <aws/wickr/model/BatchDeleteUserRequest.h>
#include <aws/wickr/model/BatchDeleteUserResult.h>
#include <aws/wickr/model/BatchDeviceErrorResponseItem.h>
#include <aws/wickr/model/BatchDeviceSuccessResponseItem.h>
#include <aws/wickr/model/BatchLookupUserUnameRequest.h>
#include <aws/wickr/model/BatchLookupUserUnameResult.h>
#include <aws/wickr/model/BatchReinviteUserRequest.h>
#include <aws/wickr/model/BatchReinviteUserResult.h>
#include <aws/wickr/model/BatchResetDevicesForUserRequest.h>
#include <aws/wickr/model/BatchResetDevicesForUserResult.h>
#include <aws/wickr/model/BatchToggleUserSuspendStatusRequest.h>
#include <aws/wickr/model/BatchToggleUserSuspendStatusResult.h>
#include <aws/wickr/model/BatchUnameErrorResponseItem.h>
#include <aws/wickr/model/BatchUnameSuccessResponseItem.h>
#include <aws/wickr/model/BatchUserErrorResponseItem.h>
#include <aws/wickr/model/BatchUserSuccessResponseItem.h>
#include <aws/wickr/model/BlockedGuestUser.h>
#include <aws/wickr/model/Bot.h>
#include <aws/wickr/model/CallingSettings.h>
#include <aws/wickr/model/CreateBotRequest.h>
#include <aws/wickr/model/CreateBotResult.h>
#include <aws/wickr/model/CreateDataRetentionBotChallengeRequest.h>
#include <aws/wickr/model/CreateDataRetentionBotChallengeResult.h>
#include <aws/wickr/model/CreateDataRetentionBotRequest.h>
#include <aws/wickr/model/CreateDataRetentionBotResult.h>
#include <aws/wickr/model/CreateNetworkRequest.h>
#include <aws/wickr/model/CreateNetworkResult.h>
#include <aws/wickr/model/CreateSecurityGroupRequest.h>
#include <aws/wickr/model/CreateSecurityGroupResult.h>
#include <aws/wickr/model/DataRetentionActionType.h>
#include <aws/wickr/model/DeleteBotRequest.h>
#include <aws/wickr/model/DeleteBotResult.h>
#include <aws/wickr/model/DeleteDataRetentionBotRequest.h>
#include <aws/wickr/model/DeleteDataRetentionBotResult.h>
#include <aws/wickr/model/DeleteNetworkRequest.h>
#include <aws/wickr/model/DeleteNetworkResult.h>
#include <aws/wickr/model/DeleteSecurityGroupRequest.h>
#include <aws/wickr/model/DeleteSecurityGroupResult.h>
#include <aws/wickr/model/ErrorDetail.h>
#include <aws/wickr/model/GetBotRequest.h>
#include <aws/wickr/model/GetBotResult.h>
#include <aws/wickr/model/GetBotsCountRequest.h>
#include <aws/wickr/model/GetBotsCountResult.h>
#include <aws/wickr/model/GetDataRetentionBotRequest.h>
#include <aws/wickr/model/GetDataRetentionBotResult.h>
#include <aws/wickr/model/GetGuestUserHistoryCountRequest.h>
#include <aws/wickr/model/GetGuestUserHistoryCountResult.h>
#include <aws/wickr/model/GetNetworkRequest.h>
#include <aws/wickr/model/GetNetworkResult.h>
#include <aws/wickr/model/GetNetworkSettingsRequest.h>
#include <aws/wickr/model/GetNetworkSettingsResult.h>
#include <aws/wickr/model/GetOidcInfoRequest.h>
#include <aws/wickr/model/GetOidcInfoResult.h>
#include <aws/wickr/model/GetSecurityGroupRequest.h>
#include <aws/wickr/model/GetSecurityGroupResult.h>
#include <aws/wickr/model/GetUserRequest.h>
#include <aws/wickr/model/GetUserResult.h>
#include <aws/wickr/model/GetUsersCountRequest.h>
#include <aws/wickr/model/GetUsersCountResult.h>
#include <aws/wickr/model/GuestUser.h>
#include <aws/wickr/model/GuestUserHistoryCount.h>
#include <aws/wickr/model/ListBlockedGuestUsersRequest.h>
#include <aws/wickr/model/ListBlockedGuestUsersResult.h>
#include <aws/wickr/model/ListBotsRequest.h>
#include <aws/wickr/model/ListBotsResult.h>
#include <aws/wickr/model/ListDevicesForUserRequest.h>
#include <aws/wickr/model/ListDevicesForUserResult.h>
#include <aws/wickr/model/ListGuestUsersRequest.h>
#include <aws/wickr/model/ListGuestUsersResult.h>
#include <aws/wickr/model/ListNetworksRequest.h>
#include <aws/wickr/model/ListNetworksResult.h>
#include <aws/wickr/model/ListSecurityGroupUsersRequest.h>
#include <aws/wickr/model/ListSecurityGroupUsersResult.h>
#include <aws/wickr/model/ListSecurityGroupsRequest.h>
#include <aws/wickr/model/ListSecurityGroupsResult.h>
#include <aws/wickr/model/ListUsersRequest.h>
#include <aws/wickr/model/ListUsersResult.h>
#include <aws/wickr/model/Network.h>
#include <aws/wickr/model/NetworkSettings.h>
#include <aws/wickr/model/OidcConfigInfo.h>
#include <aws/wickr/model/OidcTokenInfo.h>
#include <aws/wickr/model/PasswordRequirements.h>
#include <aws/wickr/model/PermittedWickrEnterpriseNetwork.h>
#include <aws/wickr/model/ReadReceiptConfig.h>
#include <aws/wickr/model/RegisterOidcConfigRequest.h>
#include <aws/wickr/model/RegisterOidcConfigResult.h>
#include <aws/wickr/model/RegisterOidcConfigTestRequest.h>
#include <aws/wickr/model/RegisterOidcConfigTestResult.h>
#include <aws/wickr/model/SecurityGroup.h>
#include <aws/wickr/model/SecurityGroupSettings.h>
#include <aws/wickr/model/SecurityGroupSettingsRequest.h>
#include <aws/wickr/model/Setting.h>
#include <aws/wickr/model/ShredderSettings.h>
#include <aws/wickr/model/SortDirection.h>
#include <aws/wickr/model/Status.h>
#include <aws/wickr/model/UpdateBotRequest.h>
#include <aws/wickr/model/UpdateBotResult.h>
#include <aws/wickr/model/UpdateDataRetentionRequest.h>
#include <aws/wickr/model/UpdateDataRetentionResult.h>
#include <aws/wickr/model/UpdateGuestUserRequest.h>
#include <aws/wickr/model/UpdateGuestUserResult.h>
#include <aws/wickr/model/UpdateNetworkRequest.h>
#include <aws/wickr/model/UpdateNetworkResult.h>
#include <aws/wickr/model/UpdateNetworkSettingsRequest.h>
#include <aws/wickr/model/UpdateNetworkSettingsResult.h>
#include <aws/wickr/model/UpdateSecurityGroupRequest.h>
#include <aws/wickr/model/UpdateSecurityGroupResult.h>
#include <aws/wickr/model/UpdateUserDetails.h>
#include <aws/wickr/model/UpdateUserRequest.h>
#include <aws/wickr/model/UpdateUserResult.h>
#include <aws/wickr/model/User.h>
#include <aws/wickr/model/ValidationError.h>
#include <aws/wickr/model/WickrAwsNetworks.h>

using WickrIncludeTest = ::testing::Test;

TEST_F(WickrIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Wickr::WickrClient>("WickrIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
