/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/directory-service-data/DirectoryServiceDataClient.h>
#include <aws/directory-service-data/DirectoryServiceDataEndpointProvider.h>
#include <aws/directory-service-data/DirectoryServiceDataEndpointRules.h>
#include <aws/directory-service-data/DirectoryServiceDataErrorMarshaller.h>
#include <aws/directory-service-data/DirectoryServiceDataErrors.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/directory-service-data/DirectoryServiceDataServiceClientModel.h>
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/AccessDeniedException.h>
#include <aws/directory-service-data/model/AccessDeniedReason.h>
#include <aws/directory-service-data/model/AddGroupMemberRequest.h>
#include <aws/directory-service-data/model/AddGroupMemberResult.h>
#include <aws/directory-service-data/model/AttributeValue.h>
#include <aws/directory-service-data/model/CreateGroupRequest.h>
#include <aws/directory-service-data/model/CreateGroupResult.h>
#include <aws/directory-service-data/model/CreateUserRequest.h>
#include <aws/directory-service-data/model/CreateUserResult.h>
#include <aws/directory-service-data/model/DeleteGroupRequest.h>
#include <aws/directory-service-data/model/DeleteGroupResult.h>
#include <aws/directory-service-data/model/DeleteUserRequest.h>
#include <aws/directory-service-data/model/DeleteUserResult.h>
#include <aws/directory-service-data/model/DescribeGroupRequest.h>
#include <aws/directory-service-data/model/DescribeGroupResult.h>
#include <aws/directory-service-data/model/DescribeUserRequest.h>
#include <aws/directory-service-data/model/DescribeUserResult.h>
#include <aws/directory-service-data/model/DirectoryUnavailableException.h>
#include <aws/directory-service-data/model/DirectoryUnavailableReason.h>
#include <aws/directory-service-data/model/DisableUserRequest.h>
#include <aws/directory-service-data/model/DisableUserResult.h>
#include <aws/directory-service-data/model/Group.h>
#include <aws/directory-service-data/model/GroupScope.h>
#include <aws/directory-service-data/model/GroupSummary.h>
#include <aws/directory-service-data/model/GroupType.h>
#include <aws/directory-service-data/model/ListGroupMembersRequest.h>
#include <aws/directory-service-data/model/ListGroupMembersResult.h>
#include <aws/directory-service-data/model/ListGroupsForMemberRequest.h>
#include <aws/directory-service-data/model/ListGroupsForMemberResult.h>
#include <aws/directory-service-data/model/ListGroupsRequest.h>
#include <aws/directory-service-data/model/ListGroupsResult.h>
#include <aws/directory-service-data/model/ListUsersRequest.h>
#include <aws/directory-service-data/model/ListUsersResult.h>
#include <aws/directory-service-data/model/Member.h>
#include <aws/directory-service-data/model/MemberType.h>
#include <aws/directory-service-data/model/RemoveGroupMemberRequest.h>
#include <aws/directory-service-data/model/RemoveGroupMemberResult.h>
#include <aws/directory-service-data/model/SearchGroupsRequest.h>
#include <aws/directory-service-data/model/SearchGroupsResult.h>
#include <aws/directory-service-data/model/SearchUsersRequest.h>
#include <aws/directory-service-data/model/SearchUsersResult.h>
#include <aws/directory-service-data/model/ThrottlingException.h>
#include <aws/directory-service-data/model/UpdateGroupRequest.h>
#include <aws/directory-service-data/model/UpdateGroupResult.h>
#include <aws/directory-service-data/model/UpdateType.h>
#include <aws/directory-service-data/model/UpdateUserRequest.h>
#include <aws/directory-service-data/model/UpdateUserResult.h>
#include <aws/directory-service-data/model/User.h>
#include <aws/directory-service-data/model/UserSummary.h>
#include <aws/directory-service-data/model/ValidationException.h>
#include <aws/directory-service-data/model/ValidationExceptionReason.h>

using DirectoryServiceDataIncludeTest = ::testing::Test;

TEST_F(DirectoryServiceDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DirectoryServiceData::DirectoryServiceDataClient>("DirectoryServiceDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
