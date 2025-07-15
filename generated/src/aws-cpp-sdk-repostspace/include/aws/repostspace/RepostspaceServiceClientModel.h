/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/repostspace/RepostspaceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/repostspace/RepostspaceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RepostspaceClient header */
#include <aws/repostspace/model/BatchAddChannelRoleToAccessorsResult.h>
#include <aws/repostspace/model/BatchAddRoleResult.h>
#include <aws/repostspace/model/BatchRemoveChannelRoleFromAccessorsResult.h>
#include <aws/repostspace/model/BatchRemoveRoleResult.h>
#include <aws/repostspace/model/CreateChannelResult.h>
#include <aws/repostspace/model/CreateSpaceResult.h>
#include <aws/repostspace/model/GetChannelResult.h>
#include <aws/repostspace/model/GetSpaceResult.h>
#include <aws/repostspace/model/ListChannelsResult.h>
#include <aws/repostspace/model/ListSpacesResult.h>
#include <aws/repostspace/model/ListTagsForResourceResult.h>
#include <aws/repostspace/model/TagResourceResult.h>
#include <aws/repostspace/model/UntagResourceResult.h>
#include <aws/repostspace/model/UpdateChannelResult.h>
#include <aws/repostspace/model/ListSpacesRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in RepostspaceClient header */

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

  namespace repostspace
  {
    using RepostspaceClientConfiguration = Aws::Client::GenericClientConfiguration;
    using RepostspaceEndpointProviderBase = Aws::repostspace::Endpoint::RepostspaceEndpointProviderBase;
    using RepostspaceEndpointProvider = Aws::repostspace::Endpoint::RepostspaceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RepostspaceClient header */
      class BatchAddChannelRoleToAccessorsRequest;
      class BatchAddRoleRequest;
      class BatchRemoveChannelRoleFromAccessorsRequest;
      class BatchRemoveRoleRequest;
      class CreateChannelRequest;
      class CreateSpaceRequest;
      class DeleteSpaceRequest;
      class DeregisterAdminRequest;
      class GetChannelRequest;
      class GetSpaceRequest;
      class ListChannelsRequest;
      class ListSpacesRequest;
      class ListTagsForResourceRequest;
      class RegisterAdminRequest;
      class SendInvitesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateChannelRequest;
      class UpdateSpaceRequest;
      /* End of service model forward declarations required in RepostspaceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchAddChannelRoleToAccessorsResult, RepostspaceError> BatchAddChannelRoleToAccessorsOutcome;
      typedef Aws::Utils::Outcome<BatchAddRoleResult, RepostspaceError> BatchAddRoleOutcome;
      typedef Aws::Utils::Outcome<BatchRemoveChannelRoleFromAccessorsResult, RepostspaceError> BatchRemoveChannelRoleFromAccessorsOutcome;
      typedef Aws::Utils::Outcome<BatchRemoveRoleResult, RepostspaceError> BatchRemoveRoleOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, RepostspaceError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateSpaceResult, RepostspaceError> CreateSpaceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RepostspaceError> DeleteSpaceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RepostspaceError> DeregisterAdminOutcome;
      typedef Aws::Utils::Outcome<GetChannelResult, RepostspaceError> GetChannelOutcome;
      typedef Aws::Utils::Outcome<GetSpaceResult, RepostspaceError> GetSpaceOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, RepostspaceError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListSpacesResult, RepostspaceError> ListSpacesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RepostspaceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RepostspaceError> RegisterAdminOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RepostspaceError> SendInvitesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RepostspaceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RepostspaceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, RepostspaceError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, RepostspaceError> UpdateSpaceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchAddChannelRoleToAccessorsOutcome> BatchAddChannelRoleToAccessorsOutcomeCallable;
      typedef std::future<BatchAddRoleOutcome> BatchAddRoleOutcomeCallable;
      typedef std::future<BatchRemoveChannelRoleFromAccessorsOutcome> BatchRemoveChannelRoleFromAccessorsOutcomeCallable;
      typedef std::future<BatchRemoveRoleOutcome> BatchRemoveRoleOutcomeCallable;
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateSpaceOutcome> CreateSpaceOutcomeCallable;
      typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
      typedef std::future<DeregisterAdminOutcome> DeregisterAdminOutcomeCallable;
      typedef std::future<GetChannelOutcome> GetChannelOutcomeCallable;
      typedef std::future<GetSpaceOutcome> GetSpaceOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListSpacesOutcome> ListSpacesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterAdminOutcome> RegisterAdminOutcomeCallable;
      typedef std::future<SendInvitesOutcome> SendInvitesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateSpaceOutcome> UpdateSpaceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RepostspaceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RepostspaceClient*, const Model::BatchAddChannelRoleToAccessorsRequest&, const Model::BatchAddChannelRoleToAccessorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAddChannelRoleToAccessorsResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::BatchAddRoleRequest&, const Model::BatchAddRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAddRoleResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::BatchRemoveChannelRoleFromAccessorsRequest&, const Model::BatchRemoveChannelRoleFromAccessorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchRemoveChannelRoleFromAccessorsResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::BatchRemoveRoleRequest&, const Model::BatchRemoveRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchRemoveRoleResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::CreateSpaceRequest&, const Model::CreateSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSpaceResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::DeleteSpaceRequest&, const Model::DeleteSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpaceResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::DeregisterAdminRequest&, const Model::DeregisterAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterAdminResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::GetChannelRequest&, const Model::GetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::GetSpaceRequest&, const Model::GetSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpaceResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::ListSpacesRequest&, const Model::ListSpacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpacesResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::RegisterAdminRequest&, const Model::RegisterAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterAdminResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::SendInvitesRequest&, const Model::SendInvitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendInvitesResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const RepostspaceClient*, const Model::UpdateSpaceRequest&, const Model::UpdateSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSpaceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace repostspace
} // namespace Aws
