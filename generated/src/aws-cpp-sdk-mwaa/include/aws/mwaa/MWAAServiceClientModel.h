/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mwaa/MWAAErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mwaa/MWAAEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MWAAClient header */
#include <aws/mwaa/model/CreateCliTokenResult.h>
#include <aws/mwaa/model/CreateEnvironmentResult.h>
#include <aws/mwaa/model/CreateWebLoginTokenResult.h>
#include <aws/mwaa/model/DeleteEnvironmentResult.h>
#include <aws/mwaa/model/GetEnvironmentResult.h>
#include <aws/mwaa/model/ListEnvironmentsResult.h>
#include <aws/mwaa/model/ListTagsForResourceResult.h>
#include <aws/mwaa/model/PublishMetricsResult.h>
#include <aws/mwaa/model/TagResourceResult.h>
#include <aws/mwaa/model/UntagResourceResult.h>
#include <aws/mwaa/model/UpdateEnvironmentResult.h>
/* End of service model headers required in MWAAClient header */

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

  namespace MWAA
  {
    using MWAAClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MWAAEndpointProviderBase = Aws::MWAA::Endpoint::MWAAEndpointProviderBase;
    using MWAAEndpointProvider = Aws::MWAA::Endpoint::MWAAEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MWAAClient header */
      class CreateCliTokenRequest;
      class CreateEnvironmentRequest;
      class CreateWebLoginTokenRequest;
      class DeleteEnvironmentRequest;
      class GetEnvironmentRequest;
      class ListEnvironmentsRequest;
      class ListTagsForResourceRequest;
      class PublishMetricsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEnvironmentRequest;
      /* End of service model forward declarations required in MWAAClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCliTokenResult, MWAAError> CreateCliTokenOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, MWAAError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateWebLoginTokenResult, MWAAError> CreateWebLoginTokenOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, MWAAError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, MWAAError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, MWAAError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MWAAError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PublishMetricsResult, MWAAError> PublishMetricsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MWAAError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MWAAError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, MWAAError> UpdateEnvironmentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCliTokenOutcome> CreateCliTokenOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateWebLoginTokenOutcome> CreateWebLoginTokenOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PublishMetricsOutcome> PublishMetricsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MWAAClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MWAAClient*, const Model::CreateCliTokenRequest&, const Model::CreateCliTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCliTokenResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::CreateWebLoginTokenRequest&, const Model::CreateWebLoginTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebLoginTokenResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::PublishMetricsRequest&, const Model::PublishMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishMetricsResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MWAAClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MWAA
} // namespace Aws
