/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MarketplaceCommerceAnalyticsClient header */
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetResult.h>
#include <aws/marketplacecommerceanalytics/model/StartSupportDataExportResult.h>
/* End of service model headers required in MarketplaceCommerceAnalyticsClient header */

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

  namespace MarketplaceCommerceAnalytics
  {
    using MarketplaceCommerceAnalyticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MarketplaceCommerceAnalyticsEndpointProviderBase = Aws::MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsEndpointProviderBase;
    using MarketplaceCommerceAnalyticsEndpointProvider = Aws::MarketplaceCommerceAnalytics::Endpoint::MarketplaceCommerceAnalyticsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MarketplaceCommerceAnalyticsClient header */
      class GenerateDataSetRequest;
      class StartSupportDataExportRequest;
      /* End of service model forward declarations required in MarketplaceCommerceAnalyticsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GenerateDataSetResult, MarketplaceCommerceAnalyticsError> GenerateDataSetOutcome;
      typedef Aws::Utils::Outcome<StartSupportDataExportResult, MarketplaceCommerceAnalyticsError> StartSupportDataExportOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GenerateDataSetOutcome> GenerateDataSetOutcomeCallable;
      typedef std::future<StartSupportDataExportOutcome> StartSupportDataExportOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MarketplaceCommerceAnalyticsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MarketplaceCommerceAnalyticsClient*, const Model::GenerateDataSetRequest&, const Model::GenerateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataSetResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCommerceAnalyticsClient*, const Model::StartSupportDataExportRequest&, const Model::StartSupportDataExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSupportDataExportResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MarketplaceCommerceAnalytics
} // namespace Aws
