/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pcs/PCSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pcs/PCSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PCSClient header */
#include <aws/pcs/model/CreateClusterResult.h>
#include <aws/pcs/model/CreateComputeNodeGroupResult.h>
#include <aws/pcs/model/CreateQueueResult.h>
#include <aws/pcs/model/DeleteClusterResult.h>
#include <aws/pcs/model/DeleteComputeNodeGroupResult.h>
#include <aws/pcs/model/DeleteQueueResult.h>
#include <aws/pcs/model/GetClusterResult.h>
#include <aws/pcs/model/GetComputeNodeGroupResult.h>
#include <aws/pcs/model/GetQueueResult.h>
#include <aws/pcs/model/ListClustersResult.h>
#include <aws/pcs/model/ListComputeNodeGroupsResult.h>
#include <aws/pcs/model/ListQueuesResult.h>
#include <aws/pcs/model/ListTagsForResourceResult.h>
#include <aws/pcs/model/RegisterComputeNodeGroupInstanceResult.h>
#include <aws/pcs/model/UpdateComputeNodeGroupResult.h>
#include <aws/pcs/model/UpdateQueueResult.h>
#include <aws/pcs/model/ListClustersRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PCSClient header */

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

  namespace PCS
  {
    using PCSClientConfiguration = Aws::Client::GenericClientConfiguration;
    using PCSEndpointProviderBase = Aws::PCS::Endpoint::PCSEndpointProviderBase;
    using PCSEndpointProvider = Aws::PCS::Endpoint::PCSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PCSClient header */
      class CreateClusterRequest;
      class CreateComputeNodeGroupRequest;
      class CreateQueueRequest;
      class DeleteClusterRequest;
      class DeleteComputeNodeGroupRequest;
      class DeleteQueueRequest;
      class GetClusterRequest;
      class GetComputeNodeGroupRequest;
      class GetQueueRequest;
      class ListClustersRequest;
      class ListComputeNodeGroupsRequest;
      class ListQueuesRequest;
      class ListTagsForResourceRequest;
      class RegisterComputeNodeGroupInstanceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateComputeNodeGroupRequest;
      class UpdateQueueRequest;
      /* End of service model forward declarations required in PCSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateClusterResult, PCSError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateComputeNodeGroupResult, PCSError> CreateComputeNodeGroupOutcome;
      typedef Aws::Utils::Outcome<CreateQueueResult, PCSError> CreateQueueOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, PCSError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteComputeNodeGroupResult, PCSError> DeleteComputeNodeGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteQueueResult, PCSError> DeleteQueueOutcome;
      typedef Aws::Utils::Outcome<GetClusterResult, PCSError> GetClusterOutcome;
      typedef Aws::Utils::Outcome<GetComputeNodeGroupResult, PCSError> GetComputeNodeGroupOutcome;
      typedef Aws::Utils::Outcome<GetQueueResult, PCSError> GetQueueOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, PCSError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListComputeNodeGroupsResult, PCSError> ListComputeNodeGroupsOutcome;
      typedef Aws::Utils::Outcome<ListQueuesResult, PCSError> ListQueuesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PCSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterComputeNodeGroupInstanceResult, PCSError> RegisterComputeNodeGroupInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PCSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PCSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateComputeNodeGroupResult, PCSError> UpdateComputeNodeGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateQueueResult, PCSError> UpdateQueueOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateComputeNodeGroupOutcome> CreateComputeNodeGroupOutcomeCallable;
      typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteComputeNodeGroupOutcome> DeleteComputeNodeGroupOutcomeCallable;
      typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
      typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
      typedef std::future<GetComputeNodeGroupOutcome> GetComputeNodeGroupOutcomeCallable;
      typedef std::future<GetQueueOutcome> GetQueueOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListComputeNodeGroupsOutcome> ListComputeNodeGroupsOutcomeCallable;
      typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterComputeNodeGroupInstanceOutcome> RegisterComputeNodeGroupInstanceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateComputeNodeGroupOutcome> UpdateComputeNodeGroupOutcomeCallable;
      typedef std::future<UpdateQueueOutcome> UpdateQueueOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PCSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PCSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::CreateComputeNodeGroupRequest&, const Model::CreateComputeNodeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputeNodeGroupResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::DeleteComputeNodeGroupRequest&, const Model::DeleteComputeNodeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComputeNodeGroupResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::GetClusterRequest&, const Model::GetClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClusterResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::GetComputeNodeGroupRequest&, const Model::GetComputeNodeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComputeNodeGroupResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::GetQueueRequest&, const Model::GetQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::ListComputeNodeGroupsRequest&, const Model::ListComputeNodeGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComputeNodeGroupsResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::RegisterComputeNodeGroupInstanceRequest&, const Model::RegisterComputeNodeGroupInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterComputeNodeGroupInstanceResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::UpdateComputeNodeGroupRequest&, const Model::UpdateComputeNodeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComputeNodeGroupResponseReceivedHandler;
    typedef std::function<void(const PCSClient*, const Model::UpdateQueueRequest&, const Model::UpdateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PCS
} // namespace Aws
