/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/oam/OAMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/oam/OAMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OAMClient header */
#include <aws/oam/model/CreateLinkResult.h>
#include <aws/oam/model/CreateSinkResult.h>
#include <aws/oam/model/DeleteLinkResult.h>
#include <aws/oam/model/DeleteSinkResult.h>
#include <aws/oam/model/GetLinkResult.h>
#include <aws/oam/model/GetSinkResult.h>
#include <aws/oam/model/GetSinkPolicyResult.h>
#include <aws/oam/model/ListAttachedLinksResult.h>
#include <aws/oam/model/ListLinksResult.h>
#include <aws/oam/model/ListSinksResult.h>
#include <aws/oam/model/ListTagsForResourceResult.h>
#include <aws/oam/model/PutSinkPolicyResult.h>
#include <aws/oam/model/TagResourceResult.h>
#include <aws/oam/model/UntagResourceResult.h>
#include <aws/oam/model/UpdateLinkResult.h>
/* End of service model headers required in OAMClient header */

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

  namespace OAM
  {
    using OAMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OAMEndpointProviderBase = Aws::OAM::Endpoint::OAMEndpointProviderBase;
    using OAMEndpointProvider = Aws::OAM::Endpoint::OAMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OAMClient header */
      class CreateLinkRequest;
      class CreateSinkRequest;
      class DeleteLinkRequest;
      class DeleteSinkRequest;
      class GetLinkRequest;
      class GetSinkRequest;
      class GetSinkPolicyRequest;
      class ListAttachedLinksRequest;
      class ListLinksRequest;
      class ListSinksRequest;
      class ListTagsForResourceRequest;
      class PutSinkPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLinkRequest;
      /* End of service model forward declarations required in OAMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateLinkResult, OAMError> CreateLinkOutcome;
      typedef Aws::Utils::Outcome<CreateSinkResult, OAMError> CreateSinkOutcome;
      typedef Aws::Utils::Outcome<DeleteLinkResult, OAMError> DeleteLinkOutcome;
      typedef Aws::Utils::Outcome<DeleteSinkResult, OAMError> DeleteSinkOutcome;
      typedef Aws::Utils::Outcome<GetLinkResult, OAMError> GetLinkOutcome;
      typedef Aws::Utils::Outcome<GetSinkResult, OAMError> GetSinkOutcome;
      typedef Aws::Utils::Outcome<GetSinkPolicyResult, OAMError> GetSinkPolicyOutcome;
      typedef Aws::Utils::Outcome<ListAttachedLinksResult, OAMError> ListAttachedLinksOutcome;
      typedef Aws::Utils::Outcome<ListLinksResult, OAMError> ListLinksOutcome;
      typedef Aws::Utils::Outcome<ListSinksResult, OAMError> ListSinksOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OAMError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutSinkPolicyResult, OAMError> PutSinkPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OAMError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OAMError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLinkResult, OAMError> UpdateLinkOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateLinkOutcome> CreateLinkOutcomeCallable;
      typedef std::future<CreateSinkOutcome> CreateSinkOutcomeCallable;
      typedef std::future<DeleteLinkOutcome> DeleteLinkOutcomeCallable;
      typedef std::future<DeleteSinkOutcome> DeleteSinkOutcomeCallable;
      typedef std::future<GetLinkOutcome> GetLinkOutcomeCallable;
      typedef std::future<GetSinkOutcome> GetSinkOutcomeCallable;
      typedef std::future<GetSinkPolicyOutcome> GetSinkPolicyOutcomeCallable;
      typedef std::future<ListAttachedLinksOutcome> ListAttachedLinksOutcomeCallable;
      typedef std::future<ListLinksOutcome> ListLinksOutcomeCallable;
      typedef std::future<ListSinksOutcome> ListSinksOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutSinkPolicyOutcome> PutSinkPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLinkOutcome> UpdateLinkOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OAMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OAMClient*, const Model::CreateLinkRequest&, const Model::CreateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLinkResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::CreateSinkRequest&, const Model::CreateSinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSinkResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::DeleteLinkRequest&, const Model::DeleteLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLinkResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::DeleteSinkRequest&, const Model::DeleteSinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSinkResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::GetLinkRequest&, const Model::GetLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::GetSinkRequest&, const Model::GetSinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSinkResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::GetSinkPolicyRequest&, const Model::GetSinkPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSinkPolicyResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::ListAttachedLinksRequest&, const Model::ListAttachedLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedLinksResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::ListLinksRequest&, const Model::ListLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLinksResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::ListSinksRequest&, const Model::ListSinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSinksResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::PutSinkPolicyRequest&, const Model::PutSinkPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSinkPolicyResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OAMClient*, const Model::UpdateLinkRequest&, const Model::UpdateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLinkResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace OAM
} // namespace Aws
