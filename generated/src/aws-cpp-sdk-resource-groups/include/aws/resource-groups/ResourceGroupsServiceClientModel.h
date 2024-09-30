/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/resource-groups/ResourceGroupsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/resource-groups/ResourceGroupsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ResourceGroupsClient header */
#include <aws/resource-groups/model/CreateGroupResult.h>
#include <aws/resource-groups/model/DeleteGroupResult.h>
#include <aws/resource-groups/model/GetAccountSettingsResult.h>
#include <aws/resource-groups/model/GetGroupResult.h>
#include <aws/resource-groups/model/GetGroupConfigurationResult.h>
#include <aws/resource-groups/model/GetGroupQueryResult.h>
#include <aws/resource-groups/model/GetTagSyncTaskResult.h>
#include <aws/resource-groups/model/GetTagsResult.h>
#include <aws/resource-groups/model/GroupResourcesResult.h>
#include <aws/resource-groups/model/ListGroupResourcesResult.h>
#include <aws/resource-groups/model/ListGroupingStatusesResult.h>
#include <aws/resource-groups/model/ListGroupsResult.h>
#include <aws/resource-groups/model/ListTagSyncTasksResult.h>
#include <aws/resource-groups/model/PutGroupConfigurationResult.h>
#include <aws/resource-groups/model/SearchResourcesResult.h>
#include <aws/resource-groups/model/StartTagSyncTaskResult.h>
#include <aws/resource-groups/model/TagResult.h>
#include <aws/resource-groups/model/UngroupResourcesResult.h>
#include <aws/resource-groups/model/UntagResult.h>
#include <aws/resource-groups/model/UpdateAccountSettingsResult.h>
#include <aws/resource-groups/model/UpdateGroupResult.h>
#include <aws/resource-groups/model/UpdateGroupQueryResult.h>
#include <aws/resource-groups/model/GetGroupRequest.h>
#include <aws/resource-groups/model/ListGroupResourcesRequest.h>
#include <aws/resource-groups/model/PutGroupConfigurationRequest.h>
#include <aws/resource-groups/model/GetGroupQueryRequest.h>
#include <aws/resource-groups/model/ListTagSyncTasksRequest.h>
#include <aws/resource-groups/model/UpdateAccountSettingsRequest.h>
#include <aws/resource-groups/model/GetAccountSettingsRequest.h>
#include <aws/resource-groups/model/ListGroupsRequest.h>
#include <aws/resource-groups/model/GetGroupConfigurationRequest.h>
#include <aws/resource-groups/model/DeleteGroupRequest.h>
#include <aws/resource-groups/model/UpdateGroupRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ResourceGroupsClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace ResourceGroups
  {
    using ResourceGroupsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ResourceGroupsEndpointProviderBase = Aws::ResourceGroups::Endpoint::ResourceGroupsEndpointProviderBase;
    using ResourceGroupsEndpointProvider = Aws::ResourceGroups::Endpoint::ResourceGroupsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ResourceGroupsClient header */
      class CancelTagSyncTaskRequest;
      class CreateGroupRequest;
      class DeleteGroupRequest;
      class GetAccountSettingsRequest;
      class GetGroupRequest;
      class GetGroupConfigurationRequest;
      class GetGroupQueryRequest;
      class GetTagSyncTaskRequest;
      class GetTagsRequest;
      class GroupResourcesRequest;
      class ListGroupResourcesRequest;
      class ListGroupingStatusesRequest;
      class ListGroupsRequest;
      class ListTagSyncTasksRequest;
      class PutGroupConfigurationRequest;
      class SearchResourcesRequest;
      class StartTagSyncTaskRequest;
      class TagRequest;
      class UngroupResourcesRequest;
      class UntagRequest;
      class UpdateAccountSettingsRequest;
      class UpdateGroupRequest;
      class UpdateGroupQueryRequest;
      /* End of service model forward declarations required in ResourceGroupsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, ResourceGroupsError> CancelTagSyncTaskOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, ResourceGroupsError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, ResourceGroupsError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<GetAccountSettingsResult, ResourceGroupsError> GetAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<GetGroupResult, ResourceGroupsError> GetGroupOutcome;
      typedef Aws::Utils::Outcome<GetGroupConfigurationResult, ResourceGroupsError> GetGroupConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetGroupQueryResult, ResourceGroupsError> GetGroupQueryOutcome;
      typedef Aws::Utils::Outcome<GetTagSyncTaskResult, ResourceGroupsError> GetTagSyncTaskOutcome;
      typedef Aws::Utils::Outcome<GetTagsResult, ResourceGroupsError> GetTagsOutcome;
      typedef Aws::Utils::Outcome<GroupResourcesResult, ResourceGroupsError> GroupResourcesOutcome;
      typedef Aws::Utils::Outcome<ListGroupResourcesResult, ResourceGroupsError> ListGroupResourcesOutcome;
      typedef Aws::Utils::Outcome<ListGroupingStatusesResult, ResourceGroupsError> ListGroupingStatusesOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, ResourceGroupsError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagSyncTasksResult, ResourceGroupsError> ListTagSyncTasksOutcome;
      typedef Aws::Utils::Outcome<PutGroupConfigurationResult, ResourceGroupsError> PutGroupConfigurationOutcome;
      typedef Aws::Utils::Outcome<SearchResourcesResult, ResourceGroupsError> SearchResourcesOutcome;
      typedef Aws::Utils::Outcome<StartTagSyncTaskResult, ResourceGroupsError> StartTagSyncTaskOutcome;
      typedef Aws::Utils::Outcome<TagResult, ResourceGroupsError> TagOutcome;
      typedef Aws::Utils::Outcome<UngroupResourcesResult, ResourceGroupsError> UngroupResourcesOutcome;
      typedef Aws::Utils::Outcome<UntagResult, ResourceGroupsError> UntagOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, ResourceGroupsError> UpdateAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, ResourceGroupsError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupQueryResult, ResourceGroupsError> UpdateGroupQueryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelTagSyncTaskOutcome> CancelTagSyncTaskOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
      typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
      typedef std::future<GetGroupConfigurationOutcome> GetGroupConfigurationOutcomeCallable;
      typedef std::future<GetGroupQueryOutcome> GetGroupQueryOutcomeCallable;
      typedef std::future<GetTagSyncTaskOutcome> GetTagSyncTaskOutcomeCallable;
      typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
      typedef std::future<GroupResourcesOutcome> GroupResourcesOutcomeCallable;
      typedef std::future<ListGroupResourcesOutcome> ListGroupResourcesOutcomeCallable;
      typedef std::future<ListGroupingStatusesOutcome> ListGroupingStatusesOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListTagSyncTasksOutcome> ListTagSyncTasksOutcomeCallable;
      typedef std::future<PutGroupConfigurationOutcome> PutGroupConfigurationOutcomeCallable;
      typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
      typedef std::future<StartTagSyncTaskOutcome> StartTagSyncTaskOutcomeCallable;
      typedef std::future<TagOutcome> TagOutcomeCallable;
      typedef std::future<UngroupResourcesOutcome> UngroupResourcesOutcomeCallable;
      typedef std::future<UntagOutcome> UntagOutcomeCallable;
      typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
      typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
      typedef std::future<UpdateGroupQueryOutcome> UpdateGroupQueryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ResourceGroupsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ResourceGroupsClient*, const Model::CancelTagSyncTaskRequest&, const Model::CancelTagSyncTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTagSyncTaskResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupConfigurationRequest&, const Model::GetGroupConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupConfigurationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupQueryRequest&, const Model::GetGroupQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupQueryResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetTagSyncTaskRequest&, const Model::GetTagSyncTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagSyncTaskResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GroupResourcesRequest&, const Model::GroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GroupResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupResourcesRequest&, const Model::ListGroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupingStatusesRequest&, const Model::ListGroupingStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupingStatusesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListTagSyncTasksRequest&, const Model::ListTagSyncTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagSyncTasksResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::PutGroupConfigurationRequest&, const Model::PutGroupConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGroupConfigurationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::SearchResourcesRequest&, const Model::SearchResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::StartTagSyncTaskRequest&, const Model::StartTagSyncTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTagSyncTaskResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::TagRequest&, const Model::TagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UngroupResourcesRequest&, const Model::UngroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UngroupResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UntagRequest&, const Model::UntagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UpdateGroupQueryRequest&, const Model::UpdateGroupQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupQueryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ResourceGroups
} // namespace Aws
