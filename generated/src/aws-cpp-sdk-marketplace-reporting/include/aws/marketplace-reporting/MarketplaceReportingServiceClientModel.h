/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/marketplace-reporting/MarketplaceReportingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/marketplace-reporting/MarketplaceReportingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MarketplaceReportingClient header */
#include <aws/marketplace-reporting/model/GetBuyerDashboardResult.h>
/* End of service model headers required in MarketplaceReportingClient header */

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

  namespace MarketplaceReporting
  {
    using MarketplaceReportingClientConfiguration = Aws::Client::GenericClientConfiguration;
    using MarketplaceReportingEndpointProviderBase = Aws::MarketplaceReporting::Endpoint::MarketplaceReportingEndpointProviderBase;
    using MarketplaceReportingEndpointProvider = Aws::MarketplaceReporting::Endpoint::MarketplaceReportingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MarketplaceReportingClient header */
      class GetBuyerDashboardRequest;
      /* End of service model forward declarations required in MarketplaceReportingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetBuyerDashboardResult, MarketplaceReportingError> GetBuyerDashboardOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetBuyerDashboardOutcome> GetBuyerDashboardOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MarketplaceReportingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MarketplaceReportingClient*, const Model::GetBuyerDashboardRequest&, const Model::GetBuyerDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuyerDashboardResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MarketplaceReporting
} // namespace Aws
