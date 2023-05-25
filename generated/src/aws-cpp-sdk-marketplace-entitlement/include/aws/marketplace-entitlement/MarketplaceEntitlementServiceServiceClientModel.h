/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MarketplaceEntitlementServiceClient header */
#include <aws/marketplace-entitlement/model/GetEntitlementsResult.h>
/* End of service model headers required in MarketplaceEntitlementServiceClient header */

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

  namespace MarketplaceEntitlementService
  {
    using MarketplaceEntitlementServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MarketplaceEntitlementServiceEndpointProviderBase = Aws::MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceEndpointProviderBase;
    using MarketplaceEntitlementServiceEndpointProvider = Aws::MarketplaceEntitlementService::Endpoint::MarketplaceEntitlementServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MarketplaceEntitlementServiceClient header */
      class GetEntitlementsRequest;
      /* End of service model forward declarations required in MarketplaceEntitlementServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetEntitlementsResult, MarketplaceEntitlementServiceError> GetEntitlementsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetEntitlementsOutcome> GetEntitlementsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MarketplaceEntitlementServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MarketplaceEntitlementServiceClient*, const Model::GetEntitlementsRequest&, const Model::GetEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEntitlementsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MarketplaceEntitlementService
} // namespace Aws
