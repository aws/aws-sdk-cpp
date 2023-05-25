/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/savingsplans/SavingsPlansErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/savingsplans/SavingsPlansEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SavingsPlansClient header */
#include <aws/savingsplans/model/CreateSavingsPlanResult.h>
#include <aws/savingsplans/model/DeleteQueuedSavingsPlanResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlanRatesResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingRatesResult.h>
#include <aws/savingsplans/model/DescribeSavingsPlansOfferingsResult.h>
#include <aws/savingsplans/model/ListTagsForResourceResult.h>
#include <aws/savingsplans/model/TagResourceResult.h>
#include <aws/savingsplans/model/UntagResourceResult.h>
/* End of service model headers required in SavingsPlansClient header */

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

  namespace SavingsPlans
  {
    using SavingsPlansClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SavingsPlansEndpointProviderBase = Aws::SavingsPlans::Endpoint::SavingsPlansEndpointProviderBase;
    using SavingsPlansEndpointProvider = Aws::SavingsPlans::Endpoint::SavingsPlansEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SavingsPlansClient header */
      class CreateSavingsPlanRequest;
      class DeleteQueuedSavingsPlanRequest;
      class DescribeSavingsPlanRatesRequest;
      class DescribeSavingsPlansRequest;
      class DescribeSavingsPlansOfferingRatesRequest;
      class DescribeSavingsPlansOfferingsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in SavingsPlansClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateSavingsPlanResult, SavingsPlansError> CreateSavingsPlanOutcome;
      typedef Aws::Utils::Outcome<DeleteQueuedSavingsPlanResult, SavingsPlansError> DeleteQueuedSavingsPlanOutcome;
      typedef Aws::Utils::Outcome<DescribeSavingsPlanRatesResult, SavingsPlansError> DescribeSavingsPlanRatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSavingsPlansResult, SavingsPlansError> DescribeSavingsPlansOutcome;
      typedef Aws::Utils::Outcome<DescribeSavingsPlansOfferingRatesResult, SavingsPlansError> DescribeSavingsPlansOfferingRatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSavingsPlansOfferingsResult, SavingsPlansError> DescribeSavingsPlansOfferingsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SavingsPlansError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SavingsPlansError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SavingsPlansError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateSavingsPlanOutcome> CreateSavingsPlanOutcomeCallable;
      typedef std::future<DeleteQueuedSavingsPlanOutcome> DeleteQueuedSavingsPlanOutcomeCallable;
      typedef std::future<DescribeSavingsPlanRatesOutcome> DescribeSavingsPlanRatesOutcomeCallable;
      typedef std::future<DescribeSavingsPlansOutcome> DescribeSavingsPlansOutcomeCallable;
      typedef std::future<DescribeSavingsPlansOfferingRatesOutcome> DescribeSavingsPlansOfferingRatesOutcomeCallable;
      typedef std::future<DescribeSavingsPlansOfferingsOutcome> DescribeSavingsPlansOfferingsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SavingsPlansClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SavingsPlansClient*, const Model::CreateSavingsPlanRequest&, const Model::CreateSavingsPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSavingsPlanResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DeleteQueuedSavingsPlanRequest&, const Model::DeleteQueuedSavingsPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueuedSavingsPlanResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlanRatesRequest&, const Model::DescribeSavingsPlanRatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlanRatesResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlansRequest&, const Model::DescribeSavingsPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlansResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlansOfferingRatesRequest&, const Model::DescribeSavingsPlansOfferingRatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlansOfferingRatesResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::DescribeSavingsPlansOfferingsRequest&, const Model::DescribeSavingsPlansOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSavingsPlansOfferingsResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SavingsPlansClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SavingsPlans
} // namespace Aws
