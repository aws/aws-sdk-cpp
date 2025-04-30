/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/identitystore/IdentityStoreClient.h>
#include <aws/identitystore/IdentityStoreEndpointProvider.h>
#include <aws/identitystore/IdentityStoreEndpointRules.h>
#include <aws/identitystore/IdentityStoreErrorMarshaller.h>
#include <aws/identitystore/IdentityStoreErrors.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/identitystore/IdentityStoreServiceClientModel.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/AccessDeniedException.h>
#include <aws/identitystore/model/Address.h>
#include <aws/identitystore/model/AlternateIdentifier.h>
#include <aws/identitystore/model/AttributeOperation.h>
#include <aws/identitystore/model/ConflictException.h>
#include <aws/identitystore/model/ConflictExceptionReason.h>
#include <aws/identitystore/model/CreateGroupMembershipRequest.h>
#include <aws/identitystore/model/CreateGroupMembershipResult.h>
#include <aws/identitystore/model/CreateGroupRequest.h>
#include <aws/identitystore/model/CreateGroupResult.h>
#include <aws/identitystore/model/CreateUserRequest.h>
#include <aws/identitystore/model/CreateUserResult.h>
#include <aws/identitystore/model/DeleteGroupMembershipRequest.h>
#include <aws/identitystore/model/DeleteGroupMembershipResult.h>
#include <aws/identitystore/model/DeleteGroupRequest.h>
#include <aws/identitystore/model/DeleteGroupResult.h>
#include <aws/identitystore/model/DeleteUserRequest.h>
#include <aws/identitystore/model/DeleteUserResult.h>
#include <aws/identitystore/model/DescribeGroupMembershipRequest.h>
#include <aws/identitystore/model/DescribeGroupMembershipResult.h>
#include <aws/identitystore/model/DescribeGroupRequest.h>
#include <aws/identitystore/model/DescribeGroupResult.h>
#include <aws/identitystore/model/DescribeUserRequest.h>
#include <aws/identitystore/model/DescribeUserResult.h>
#include <aws/identitystore/model/Email.h>
#include <aws/identitystore/model/ExternalId.h>
#include <aws/identitystore/model/Filter.h>
#include <aws/identitystore/model/GetGroupIdRequest.h>
#include <aws/identitystore/model/GetGroupIdResult.h>
#include <aws/identitystore/model/GetGroupMembershipIdRequest.h>
#include <aws/identitystore/model/GetGroupMembershipIdResult.h>
#include <aws/identitystore/model/GetUserIdRequest.h>
#include <aws/identitystore/model/GetUserIdResult.h>
#include <aws/identitystore/model/Group.h>
#include <aws/identitystore/model/GroupMembership.h>
#include <aws/identitystore/model/GroupMembershipExistenceResult.h>
#include <aws/identitystore/model/InternalServerException.h>
#include <aws/identitystore/model/IsMemberInGroupsRequest.h>
#include <aws/identitystore/model/IsMemberInGroupsResult.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberResult.h>
#include <aws/identitystore/model/ListGroupMembershipsRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsResult.h>
#include <aws/identitystore/model/ListGroupsRequest.h>
#include <aws/identitystore/model/ListGroupsResult.h>
#include <aws/identitystore/model/ListUsersRequest.h>
#include <aws/identitystore/model/ListUsersResult.h>
#include <aws/identitystore/model/MemberId.h>
#include <aws/identitystore/model/Name.h>
#include <aws/identitystore/model/PhoneNumber.h>
#include <aws/identitystore/model/ResourceNotFoundException.h>
#include <aws/identitystore/model/ResourceType.h>
#include <aws/identitystore/model/ServiceQuotaExceededException.h>
#include <aws/identitystore/model/ThrottlingException.h>
#include <aws/identitystore/model/UniqueAttribute.h>
#include <aws/identitystore/model/UpdateGroupRequest.h>
#include <aws/identitystore/model/UpdateGroupResult.h>
#include <aws/identitystore/model/UpdateUserRequest.h>
#include <aws/identitystore/model/UpdateUserResult.h>
#include <aws/identitystore/model/User.h>
#include <aws/identitystore/model/ValidationException.h>

using IdentityStoreIncludeTest = ::testing::Test;

TEST_F(IdentityStoreIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IdentityStore::IdentityStoreClient>("IdentityStoreIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
