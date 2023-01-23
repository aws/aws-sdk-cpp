/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pipes/PipesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pipes/PipesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PipesClient header */
#include <aws/pipes/model/CreatePipeResult.h>
#include <aws/pipes/model/DeletePipeResult.h>
#include <aws/pipes/model/DescribePipeResult.h>
#include <aws/pipes/model/ListPipesResult.h>
#include <aws/pipes/model/ListTagsForResourceResult.h>
#include <aws/pipes/model/StartPipeResult.h>
#include <aws/pipes/model/StopPipeResult.h>
#include <aws/pipes/model/TagResourceResult.h>
#include <aws/pipes/model/UntagResourceResult.h>
#include <aws/pipes/model/UpdatePipeResult.h>
/* End of service model headers required in PipesClient header */

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

  namespace Pipes
  {
    using PipesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PipesEndpointProviderBase = Aws::Pipes::Endpoint::PipesEndpointProviderBase;
    using PipesEndpointProvider = Aws::Pipes::Endpoint::PipesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PipesClient header */
      class CreatePipeRequest;
      class DeletePipeRequest;
      class DescribePipeRequest;
      class ListPipesRequest;
      class ListTagsForResourceRequest;
      class StartPipeRequest;
      class StopPipeRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePipeRequest;
      /* End of service model forward declarations required in PipesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreatePipeResult, PipesError> CreatePipeOutcome;
      typedef Aws::Utils::Outcome<DeletePipeResult, PipesError> DeletePipeOutcome;
      typedef Aws::Utils::Outcome<DescribePipeResult, PipesError> DescribePipeOutcome;
      typedef Aws::Utils::Outcome<ListPipesResult, PipesError> ListPipesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PipesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartPipeResult, PipesError> StartPipeOutcome;
      typedef Aws::Utils::Outcome<StopPipeResult, PipesError> StopPipeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PipesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PipesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePipeResult, PipesError> UpdatePipeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreatePipeOutcome> CreatePipeOutcomeCallable;
      typedef std::future<DeletePipeOutcome> DeletePipeOutcomeCallable;
      typedef std::future<DescribePipeOutcome> DescribePipeOutcomeCallable;
      typedef std::future<ListPipesOutcome> ListPipesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartPipeOutcome> StartPipeOutcomeCallable;
      typedef std::future<StopPipeOutcome> StopPipeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePipeOutcome> UpdatePipeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PipesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PipesClient*, const Model::CreatePipeRequest&, const Model::CreatePipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipeResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::DeletePipeRequest&, const Model::DeletePipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipeResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::DescribePipeRequest&, const Model::DescribePipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePipeResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::ListPipesRequest&, const Model::ListPipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipesResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::StartPipeRequest&, const Model::StartPipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipeResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::StopPipeRequest&, const Model::StopPipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPipeResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PipesClient*, const Model::UpdatePipeRequest&, const Model::UpdatePipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Pipes
} // namespace Aws
