/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/resource-groups/ResourceGroupsClient.h>
#include <aws/resource-groups/ResourceGroupsEndpointProvider.h>
#include <aws/resource-groups/ResourceGroupsEndpointRules.h>
#include <aws/resource-groups/ResourceGroupsErrorMarshaller.h>
#include <aws/resource-groups/ResourceGroupsErrors.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/AccountSettings.h>
#include <aws/resource-groups/model/CancelTagSyncTaskRequest.h>
#include <aws/resource-groups/model/CreateGroupRequest.h>
#include <aws/resource-groups/model/CreateGroupResult.h>
#include <aws/resource-groups/model/DeleteGroupRequest.h>
#include <aws/resource-groups/model/DeleteGroupResult.h>
#include <aws/resource-groups/model/FailedResource.h>
#include <aws/resource-groups/model/GetAccountSettingsRequest.h>
#include <aws/resource-groups/model/GetAccountSettingsResult.h>
#include <aws/resource-groups/model/GetGroupConfigurationRequest.h>
#include <aws/resource-groups/model/GetGroupConfigurationResult.h>
#include <aws/resource-groups/model/GetGroupQueryRequest.h>
#include <aws/resource-groups/model/GetGroupQueryResult.h>
#include <aws/resource-groups/model/GetGroupRequest.h>
#include <aws/resource-groups/model/GetGroupResult.h>
#include <aws/resource-groups/model/GetTagSyncTaskRequest.h>
#include <aws/resource-groups/model/GetTagSyncTaskResult.h>
#include <aws/resource-groups/model/GetTagsRequest.h>
#include <aws/resource-groups/model/GetTagsResult.h>
#include <aws/resource-groups/model/Group.h>
#include <aws/resource-groups/model/GroupConfiguration.h>
#include <aws/resource-groups/model/GroupConfigurationItem.h>
#include <aws/resource-groups/model/GroupConfigurationParameter.h>
#include <aws/resource-groups/model/GroupConfigurationStatus.h>
#include <aws/resource-groups/model/GroupFilter.h>
#include <aws/resource-groups/model/GroupFilterName.h>
#include <aws/resource-groups/model/GroupIdentifier.h>
#include <aws/resource-groups/model/GroupLifecycleEventsDesiredStatus.h>
#include <aws/resource-groups/model/GroupLifecycleEventsStatus.h>
#include <aws/resource-groups/model/GroupQuery.h>
#include <aws/resource-groups/model/GroupResourcesRequest.h>
#include <aws/resource-groups/model/GroupResourcesResult.h>
#include <aws/resource-groups/model/GroupingStatus.h>
#include <aws/resource-groups/model/GroupingStatusesItem.h>
#include <aws/resource-groups/model/GroupingType.h>
#include <aws/resource-groups/model/ListGroupResourcesItem.h>
#include <aws/resource-groups/model/ListGroupResourcesRequest.h>
#include <aws/resource-groups/model/ListGroupResourcesResult.h>
#include <aws/resource-groups/model/ListGroupingStatusesFilter.h>
#include <aws/resource-groups/model/ListGroupingStatusesFilterName.h>
#include <aws/resource-groups/model/ListGroupingStatusesRequest.h>
#include <aws/resource-groups/model/ListGroupingStatusesResult.h>
#include <aws/resource-groups/model/ListGroupsRequest.h>
#include <aws/resource-groups/model/ListGroupsResult.h>
#include <aws/resource-groups/model/ListTagSyncTasksFilter.h>
#include <aws/resource-groups/model/ListTagSyncTasksRequest.h>
#include <aws/resource-groups/model/ListTagSyncTasksResult.h>
#include <aws/resource-groups/model/PendingResource.h>
#include <aws/resource-groups/model/PutGroupConfigurationRequest.h>
#include <aws/resource-groups/model/PutGroupConfigurationResult.h>
#include <aws/resource-groups/model/QueryError.h>
#include <aws/resource-groups/model/QueryErrorCode.h>
#include <aws/resource-groups/model/QueryType.h>
#include <aws/resource-groups/model/ResourceFilter.h>
#include <aws/resource-groups/model/ResourceFilterName.h>
#include <aws/resource-groups/model/ResourceIdentifier.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/resource-groups/model/ResourceStatus.h>
#include <aws/resource-groups/model/ResourceStatusValue.h>
#include <aws/resource-groups/model/SearchResourcesRequest.h>
#include <aws/resource-groups/model/SearchResourcesResult.h>
#include <aws/resource-groups/model/StartTagSyncTaskRequest.h>
#include <aws/resource-groups/model/StartTagSyncTaskResult.h>
#include <aws/resource-groups/model/TagRequest.h>
#include <aws/resource-groups/model/TagResult.h>
#include <aws/resource-groups/model/TagSyncTaskItem.h>
#include <aws/resource-groups/model/TagSyncTaskStatus.h>
#include <aws/resource-groups/model/UngroupResourcesRequest.h>
#include <aws/resource-groups/model/UngroupResourcesResult.h>
#include <aws/resource-groups/model/UntagRequest.h>
#include <aws/resource-groups/model/UntagResult.h>
#include <aws/resource-groups/model/UpdateAccountSettingsRequest.h>
#include <aws/resource-groups/model/UpdateAccountSettingsResult.h>
#include <aws/resource-groups/model/UpdateGroupQueryRequest.h>
#include <aws/resource-groups/model/UpdateGroupQueryResult.h>
#include <aws/resource-groups/model/UpdateGroupRequest.h>
#include <aws/resource-groups/model/UpdateGroupResult.h>

using ResourceGroupsIncludeTest = ::testing::Test;

TEST_F(ResourceGroupsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ResourceGroups::ResourceGroupsClient>("ResourceGroupsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
