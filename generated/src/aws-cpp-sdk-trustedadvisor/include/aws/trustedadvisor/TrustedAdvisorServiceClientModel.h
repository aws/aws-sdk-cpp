/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/trustedadvisor/TrustedAdvisorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/trustedadvisor/TrustedAdvisorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TrustedAdvisorClient header */
#include <aws/trustedadvisor/model/GetOrganizationRecommendationResult.h>
#include <aws/trustedadvisor/model/GetRecommendationResult.h>
#include <aws/trustedadvisor/model/ListChecksResult.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsResult.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesResult.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsResult.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesResult.h>
#include <aws/trustedadvisor/model/ListRecommendationsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TrustedAdvisorClient header */

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

  namespace TrustedAdvisor
  {
    using TrustedAdvisorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TrustedAdvisorEndpointProviderBase = Aws::TrustedAdvisor::Endpoint::TrustedAdvisorEndpointProviderBase;
    using TrustedAdvisorEndpointProvider = Aws::TrustedAdvisor::Endpoint::TrustedAdvisorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TrustedAdvisorClient header */
      class GetOrganizationRecommendationRequest;
      class GetRecommendationRequest;
      class ListChecksRequest;
      class ListOrganizationRecommendationAccountsRequest;
      class ListOrganizationRecommendationResourcesRequest;
      class ListOrganizationRecommendationsRequest;
      class ListRecommendationResourcesRequest;
      class ListRecommendationsRequest;
      class UpdateOrganizationRecommendationLifecycleRequest;
      class UpdateRecommendationLifecycleRequest;
      /* End of service model forward declarations required in TrustedAdvisorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetOrganizationRecommendationResult, TrustedAdvisorError> GetOrganizationRecommendationOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationResult, TrustedAdvisorError> GetRecommendationOutcome;
      typedef Aws::Utils::Outcome<ListChecksResult, TrustedAdvisorError> ListChecksOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationRecommendationAccountsResult, TrustedAdvisorError> ListOrganizationRecommendationAccountsOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationRecommendationResourcesResult, TrustedAdvisorError> ListOrganizationRecommendationResourcesOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationRecommendationsResult, TrustedAdvisorError> ListOrganizationRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationResourcesResult, TrustedAdvisorError> ListRecommendationResourcesOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationsResult, TrustedAdvisorError> ListRecommendationsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TrustedAdvisorError> UpdateOrganizationRecommendationLifecycleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TrustedAdvisorError> UpdateRecommendationLifecycleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetOrganizationRecommendationOutcome> GetOrganizationRecommendationOutcomeCallable;
      typedef std::future<GetRecommendationOutcome> GetRecommendationOutcomeCallable;
      typedef std::future<ListChecksOutcome> ListChecksOutcomeCallable;
      typedef std::future<ListOrganizationRecommendationAccountsOutcome> ListOrganizationRecommendationAccountsOutcomeCallable;
      typedef std::future<ListOrganizationRecommendationResourcesOutcome> ListOrganizationRecommendationResourcesOutcomeCallable;
      typedef std::future<ListOrganizationRecommendationsOutcome> ListOrganizationRecommendationsOutcomeCallable;
      typedef std::future<ListRecommendationResourcesOutcome> ListRecommendationResourcesOutcomeCallable;
      typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
      typedef std::future<UpdateOrganizationRecommendationLifecycleOutcome> UpdateOrganizationRecommendationLifecycleOutcomeCallable;
      typedef std::future<UpdateRecommendationLifecycleOutcome> UpdateRecommendationLifecycleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TrustedAdvisorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TrustedAdvisorClient*, const Model::GetOrganizationRecommendationRequest&, const Model::GetOrganizationRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationRecommendationResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::GetRecommendationRequest&, const Model::GetRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::ListChecksRequest&, const Model::ListChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChecksResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::ListOrganizationRecommendationAccountsRequest&, const Model::ListOrganizationRecommendationAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationRecommendationAccountsResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::ListOrganizationRecommendationResourcesRequest&, const Model::ListOrganizationRecommendationResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationRecommendationResourcesResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::ListOrganizationRecommendationsRequest&, const Model::ListOrganizationRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationRecommendationsResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::ListRecommendationResourcesRequest&, const Model::ListRecommendationResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationResourcesResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::UpdateOrganizationRecommendationLifecycleRequest&, const Model::UpdateOrganizationRecommendationLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationRecommendationLifecycleResponseReceivedHandler;
    typedef std::function<void(const TrustedAdvisorClient*, const Model::UpdateRecommendationLifecycleRequest&, const Model::UpdateRecommendationLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecommendationLifecycleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TrustedAdvisor
} // namespace Aws
