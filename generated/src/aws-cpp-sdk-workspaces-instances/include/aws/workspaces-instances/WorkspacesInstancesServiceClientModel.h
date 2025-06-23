/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workspaces-instances/WorkspacesInstancesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workspaces-instances/WorkspacesInstancesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkspacesInstancesClient header */
#include <aws/workspaces-instances/model/AssociateVolumeResult.h>
#include <aws/workspaces-instances/model/CreateVolumeResult.h>
#include <aws/workspaces-instances/model/CreateWorkspaceInstanceResult.h>
#include <aws/workspaces-instances/model/DeleteVolumeResult.h>
#include <aws/workspaces-instances/model/DeleteWorkspaceInstanceResult.h>
#include <aws/workspaces-instances/model/DisassociateVolumeResult.h>
#include <aws/workspaces-instances/model/GetWorkspaceInstanceResult.h>
#include <aws/workspaces-instances/model/ListInstanceTypesResult.h>
#include <aws/workspaces-instances/model/ListRegionsResult.h>
#include <aws/workspaces-instances/model/ListTagsForResourceResult.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesResult.h>
#include <aws/workspaces-instances/model/TagResourceResult.h>
#include <aws/workspaces-instances/model/UntagResourceResult.h>
#include <aws/workspaces-instances/model/ListInstanceTypesRequest.h>
#include <aws/workspaces-instances/model/ListRegionsRequest.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesRequest.h>
/* End of service model headers required in WorkspacesInstancesClient header */

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

  namespace WorkspacesInstances
  {
    using WorkspacesInstancesClientConfiguration = Aws::Client::GenericClientConfiguration;
    using WorkspacesInstancesEndpointProviderBase = Aws::WorkspacesInstances::Endpoint::WorkspacesInstancesEndpointProviderBase;
    using WorkspacesInstancesEndpointProvider = Aws::WorkspacesInstances::Endpoint::WorkspacesInstancesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkspacesInstancesClient header */
      class AssociateVolumeRequest;
      class CreateVolumeRequest;
      class CreateWorkspaceInstanceRequest;
      class DeleteVolumeRequest;
      class DeleteWorkspaceInstanceRequest;
      class DisassociateVolumeRequest;
      class GetWorkspaceInstanceRequest;
      class ListInstanceTypesRequest;
      class ListRegionsRequest;
      class ListTagsForResourceRequest;
      class ListWorkspaceInstancesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in WorkspacesInstancesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateVolumeResult, WorkspacesInstancesError> AssociateVolumeOutcome;
      typedef Aws::Utils::Outcome<CreateVolumeResult, WorkspacesInstancesError> CreateVolumeOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceInstanceResult, WorkspacesInstancesError> CreateWorkspaceInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteVolumeResult, WorkspacesInstancesError> DeleteVolumeOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkspaceInstanceResult, WorkspacesInstancesError> DeleteWorkspaceInstanceOutcome;
      typedef Aws::Utils::Outcome<DisassociateVolumeResult, WorkspacesInstancesError> DisassociateVolumeOutcome;
      typedef Aws::Utils::Outcome<GetWorkspaceInstanceResult, WorkspacesInstancesError> GetWorkspaceInstanceOutcome;
      typedef Aws::Utils::Outcome<ListInstanceTypesResult, WorkspacesInstancesError> ListInstanceTypesOutcome;
      typedef Aws::Utils::Outcome<ListRegionsResult, WorkspacesInstancesError> ListRegionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WorkspacesInstancesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkspaceInstancesResult, WorkspacesInstancesError> ListWorkspaceInstancesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WorkspacesInstancesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WorkspacesInstancesError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateVolumeOutcome> AssociateVolumeOutcomeCallable;
      typedef std::future<CreateVolumeOutcome> CreateVolumeOutcomeCallable;
      typedef std::future<CreateWorkspaceInstanceOutcome> CreateWorkspaceInstanceOutcomeCallable;
      typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
      typedef std::future<DeleteWorkspaceInstanceOutcome> DeleteWorkspaceInstanceOutcomeCallable;
      typedef std::future<DisassociateVolumeOutcome> DisassociateVolumeOutcomeCallable;
      typedef std::future<GetWorkspaceInstanceOutcome> GetWorkspaceInstanceOutcomeCallable;
      typedef std::future<ListInstanceTypesOutcome> ListInstanceTypesOutcomeCallable;
      typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkspaceInstancesOutcome> ListWorkspaceInstancesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkspacesInstancesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::AssociateVolumeRequest&, const Model::AssociateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVolumeResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::CreateVolumeRequest&, const Model::CreateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVolumeResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::CreateWorkspaceInstanceRequest&, const Model::CreateWorkspaceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceInstanceResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::DeleteVolumeRequest&, const Model::DeleteVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVolumeResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::DeleteWorkspaceInstanceRequest&, const Model::DeleteWorkspaceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceInstanceResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::DisassociateVolumeRequest&, const Model::DisassociateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateVolumeResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::GetWorkspaceInstanceRequest&, const Model::GetWorkspaceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkspaceInstanceResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::ListInstanceTypesRequest&, const Model::ListInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::ListRegionsRequest&, const Model::ListRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegionsResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::ListWorkspaceInstancesRequest&, const Model::ListWorkspaceInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspaceInstancesResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkspacesInstancesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkspacesInstances
} // namespace Aws
