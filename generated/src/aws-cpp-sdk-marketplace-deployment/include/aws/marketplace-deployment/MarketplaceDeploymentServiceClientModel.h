/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/marketplace-deployment/MarketplaceDeploymentErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MarketplaceDeploymentClient header */
#include <aws/marketplace-deployment/model/ListTagsForResourceResult.h>
#include <aws/marketplace-deployment/model/PutDeploymentParameterResult.h>
#include <aws/marketplace-deployment/model/TagResourceResult.h>
#include <aws/marketplace-deployment/model/UntagResourceResult.h>
/* End of service model headers required in MarketplaceDeploymentClient header */

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

  namespace MarketplaceDeployment
  {
    using MarketplaceDeploymentClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MarketplaceDeploymentEndpointProviderBase = Aws::MarketplaceDeployment::Endpoint::MarketplaceDeploymentEndpointProviderBase;
    using MarketplaceDeploymentEndpointProvider = Aws::MarketplaceDeployment::Endpoint::MarketplaceDeploymentEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MarketplaceDeploymentClient header */
      class ListTagsForResourceRequest;
      class PutDeploymentParameterRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in MarketplaceDeploymentClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MarketplaceDeploymentError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutDeploymentParameterResult, MarketplaceDeploymentError> PutDeploymentParameterOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MarketplaceDeploymentError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MarketplaceDeploymentError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutDeploymentParameterOutcome> PutDeploymentParameterOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MarketplaceDeploymentClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MarketplaceDeploymentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MarketplaceDeploymentClient*, const Model::PutDeploymentParameterRequest&, const Model::PutDeploymentParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeploymentParameterResponseReceivedHandler;
    typedef std::function<void(const MarketplaceDeploymentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MarketplaceDeploymentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MarketplaceDeployment
} // namespace Aws
