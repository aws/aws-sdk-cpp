/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/personalize-runtime/PersonalizeRuntimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/personalize-runtime/PersonalizeRuntimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PersonalizeRuntimeClient header */
#include <aws/personalize-runtime/model/GetPersonalizedRankingResult.h>
#include <aws/personalize-runtime/model/GetRecommendationsResult.h>
/* End of service model headers required in PersonalizeRuntimeClient header */

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

  namespace PersonalizeRuntime
  {
    using PersonalizeRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PersonalizeRuntimeEndpointProviderBase = Aws::PersonalizeRuntime::Endpoint::PersonalizeRuntimeEndpointProviderBase;
    using PersonalizeRuntimeEndpointProvider = Aws::PersonalizeRuntime::Endpoint::PersonalizeRuntimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PersonalizeRuntimeClient header */
      class GetPersonalizedRankingRequest;
      class GetRecommendationsRequest;
      /* End of service model forward declarations required in PersonalizeRuntimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetPersonalizedRankingResult, PersonalizeRuntimeError> GetPersonalizedRankingOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationsResult, PersonalizeRuntimeError> GetRecommendationsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetPersonalizedRankingOutcome> GetPersonalizedRankingOutcomeCallable;
      typedef std::future<GetRecommendationsOutcome> GetRecommendationsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PersonalizeRuntimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PersonalizeRuntimeClient*, const Model::GetPersonalizedRankingRequest&, const Model::GetPersonalizedRankingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPersonalizedRankingResponseReceivedHandler;
    typedef std::function<void(const PersonalizeRuntimeClient*, const Model::GetRecommendationsRequest&, const Model::GetRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PersonalizeRuntime
} // namespace Aws
