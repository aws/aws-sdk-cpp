/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediapackagev2/Mediapackagev2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Mediapackagev2Client header */
#include <aws/mediapackagev2/model/CreateChannelResult.h>
#include <aws/mediapackagev2/model/CreateChannelGroupResult.h>
#include <aws/mediapackagev2/model/CreateOriginEndpointResult.h>
#include <aws/mediapackagev2/model/DeleteChannelResult.h>
#include <aws/mediapackagev2/model/DeleteChannelGroupResult.h>
#include <aws/mediapackagev2/model/DeleteChannelPolicyResult.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointResult.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointPolicyResult.h>
#include <aws/mediapackagev2/model/GetChannelResult.h>
#include <aws/mediapackagev2/model/GetChannelGroupResult.h>
#include <aws/mediapackagev2/model/GetChannelPolicyResult.h>
#include <aws/mediapackagev2/model/GetOriginEndpointResult.h>
#include <aws/mediapackagev2/model/GetOriginEndpointPolicyResult.h>
#include <aws/mediapackagev2/model/ListChannelGroupsResult.h>
#include <aws/mediapackagev2/model/ListChannelsResult.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsResult.h>
#include <aws/mediapackagev2/model/ListTagsForResourceResult.h>
#include <aws/mediapackagev2/model/PutChannelPolicyResult.h>
#include <aws/mediapackagev2/model/PutOriginEndpointPolicyResult.h>
#include <aws/mediapackagev2/model/UpdateChannelResult.h>
#include <aws/mediapackagev2/model/UpdateChannelGroupResult.h>
#include <aws/mediapackagev2/model/UpdateOriginEndpointResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in Mediapackagev2Client header */

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

  namespace mediapackagev2
  {
    using Mediapackagev2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Mediapackagev2EndpointProviderBase = Aws::mediapackagev2::Endpoint::Mediapackagev2EndpointProviderBase;
    using Mediapackagev2EndpointProvider = Aws::mediapackagev2::Endpoint::Mediapackagev2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Mediapackagev2Client header */
      class CreateChannelRequest;
      class CreateChannelGroupRequest;
      class CreateOriginEndpointRequest;
      class DeleteChannelRequest;
      class DeleteChannelGroupRequest;
      class DeleteChannelPolicyRequest;
      class DeleteOriginEndpointRequest;
      class DeleteOriginEndpointPolicyRequest;
      class GetChannelRequest;
      class GetChannelGroupRequest;
      class GetChannelPolicyRequest;
      class GetOriginEndpointRequest;
      class GetOriginEndpointPolicyRequest;
      class ListChannelGroupsRequest;
      class ListChannelsRequest;
      class ListOriginEndpointsRequest;
      class ListTagsForResourceRequest;
      class PutChannelPolicyRequest;
      class PutOriginEndpointPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateChannelRequest;
      class UpdateChannelGroupRequest;
      class UpdateOriginEndpointRequest;
      /* End of service model forward declarations required in Mediapackagev2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateChannelResult, Mediapackagev2Error> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateChannelGroupResult, Mediapackagev2Error> CreateChannelGroupOutcome;
      typedef Aws::Utils::Outcome<CreateOriginEndpointResult, Mediapackagev2Error> CreateOriginEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelResult, Mediapackagev2Error> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelGroupResult, Mediapackagev2Error> DeleteChannelGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelPolicyResult, Mediapackagev2Error> DeleteChannelPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteOriginEndpointResult, Mediapackagev2Error> DeleteOriginEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteOriginEndpointPolicyResult, Mediapackagev2Error> DeleteOriginEndpointPolicyOutcome;
      typedef Aws::Utils::Outcome<GetChannelResult, Mediapackagev2Error> GetChannelOutcome;
      typedef Aws::Utils::Outcome<GetChannelGroupResult, Mediapackagev2Error> GetChannelGroupOutcome;
      typedef Aws::Utils::Outcome<GetChannelPolicyResult, Mediapackagev2Error> GetChannelPolicyOutcome;
      typedef Aws::Utils::Outcome<GetOriginEndpointResult, Mediapackagev2Error> GetOriginEndpointOutcome;
      typedef Aws::Utils::Outcome<GetOriginEndpointPolicyResult, Mediapackagev2Error> GetOriginEndpointPolicyOutcome;
      typedef Aws::Utils::Outcome<ListChannelGroupsResult, Mediapackagev2Error> ListChannelGroupsOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, Mediapackagev2Error> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListOriginEndpointsResult, Mediapackagev2Error> ListOriginEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Mediapackagev2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutChannelPolicyResult, Mediapackagev2Error> PutChannelPolicyOutcome;
      typedef Aws::Utils::Outcome<PutOriginEndpointPolicyResult, Mediapackagev2Error> PutOriginEndpointPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Mediapackagev2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Mediapackagev2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, Mediapackagev2Error> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelGroupResult, Mediapackagev2Error> UpdateChannelGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateOriginEndpointResult, Mediapackagev2Error> UpdateOriginEndpointOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateChannelGroupOutcome> CreateChannelGroupOutcomeCallable;
      typedef std::future<CreateOriginEndpointOutcome> CreateOriginEndpointOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeleteChannelGroupOutcome> DeleteChannelGroupOutcomeCallable;
      typedef std::future<DeleteChannelPolicyOutcome> DeleteChannelPolicyOutcomeCallable;
      typedef std::future<DeleteOriginEndpointOutcome> DeleteOriginEndpointOutcomeCallable;
      typedef std::future<DeleteOriginEndpointPolicyOutcome> DeleteOriginEndpointPolicyOutcomeCallable;
      typedef std::future<GetChannelOutcome> GetChannelOutcomeCallable;
      typedef std::future<GetChannelGroupOutcome> GetChannelGroupOutcomeCallable;
      typedef std::future<GetChannelPolicyOutcome> GetChannelPolicyOutcomeCallable;
      typedef std::future<GetOriginEndpointOutcome> GetOriginEndpointOutcomeCallable;
      typedef std::future<GetOriginEndpointPolicyOutcome> GetOriginEndpointPolicyOutcomeCallable;
      typedef std::future<ListChannelGroupsOutcome> ListChannelGroupsOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListOriginEndpointsOutcome> ListOriginEndpointsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutChannelPolicyOutcome> PutChannelPolicyOutcomeCallable;
      typedef std::future<PutOriginEndpointPolicyOutcome> PutOriginEndpointPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateChannelGroupOutcome> UpdateChannelGroupOutcomeCallable;
      typedef std::future<UpdateOriginEndpointOutcome> UpdateOriginEndpointOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Mediapackagev2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const Mediapackagev2Client*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::CreateChannelGroupRequest&, const Model::CreateChannelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelGroupResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::CreateOriginEndpointRequest&, const Model::CreateOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::DeleteChannelGroupRequest&, const Model::DeleteChannelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelGroupResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::DeleteChannelPolicyRequest&, const Model::DeleteChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::DeleteOriginEndpointRequest&, const Model::DeleteOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::DeleteOriginEndpointPolicyRequest&, const Model::DeleteOriginEndpointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginEndpointPolicyResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::GetChannelRequest&, const Model::GetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::GetChannelGroupRequest&, const Model::GetChannelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelGroupResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::GetChannelPolicyRequest&, const Model::GetChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::GetOriginEndpointRequest&, const Model::GetOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::GetOriginEndpointPolicyRequest&, const Model::GetOriginEndpointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginEndpointPolicyResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::ListChannelGroupsRequest&, const Model::ListChannelGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelGroupsResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::ListOriginEndpointsRequest&, const Model::ListOriginEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginEndpointsResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::PutChannelPolicyRequest&, const Model::PutChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::PutOriginEndpointPolicyRequest&, const Model::PutOriginEndpointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOriginEndpointPolicyResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::UpdateChannelGroupRequest&, const Model::UpdateChannelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelGroupResponseReceivedHandler;
    typedef std::function<void(const Mediapackagev2Client*, const Model::UpdateOriginEndpointRequest&, const Model::UpdateOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOriginEndpointResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace mediapackagev2
} // namespace Aws
