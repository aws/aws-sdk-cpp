/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53RecoveryClusterClient header */
#include <aws/route53-recovery-cluster/model/GetRoutingControlStateResult.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsResult.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateResult.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesResult.h>
/* End of service model headers required in Route53RecoveryClusterClient header */

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

  namespace Route53RecoveryCluster
  {
    using Route53RecoveryClusterClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Route53RecoveryClusterEndpointProviderBase = Aws::Route53RecoveryCluster::Endpoint::Route53RecoveryClusterEndpointProviderBase;
    using Route53RecoveryClusterEndpointProvider = Aws::Route53RecoveryCluster::Endpoint::Route53RecoveryClusterEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53RecoveryClusterClient header */
      class GetRoutingControlStateRequest;
      class ListRoutingControlsRequest;
      class UpdateRoutingControlStateRequest;
      class UpdateRoutingControlStatesRequest;
      /* End of service model forward declarations required in Route53RecoveryClusterClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetRoutingControlStateResult, Route53RecoveryClusterError> GetRoutingControlStateOutcome;
      typedef Aws::Utils::Outcome<ListRoutingControlsResult, Route53RecoveryClusterError> ListRoutingControlsOutcome;
      typedef Aws::Utils::Outcome<UpdateRoutingControlStateResult, Route53RecoveryClusterError> UpdateRoutingControlStateOutcome;
      typedef Aws::Utils::Outcome<UpdateRoutingControlStatesResult, Route53RecoveryClusterError> UpdateRoutingControlStatesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetRoutingControlStateOutcome> GetRoutingControlStateOutcomeCallable;
      typedef std::future<ListRoutingControlsOutcome> ListRoutingControlsOutcomeCallable;
      typedef std::future<UpdateRoutingControlStateOutcome> UpdateRoutingControlStateOutcomeCallable;
      typedef std::future<UpdateRoutingControlStatesOutcome> UpdateRoutingControlStatesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53RecoveryClusterClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::GetRoutingControlStateRequest&, const Model::GetRoutingControlStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoutingControlStateResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::ListRoutingControlsRequest&, const Model::ListRoutingControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingControlsResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::UpdateRoutingControlStateRequest&, const Model::UpdateRoutingControlStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlStateResponseReceivedHandler;
    typedef std::function<void(const Route53RecoveryClusterClient*, const Model::UpdateRoutingControlStatesRequest&, const Model::UpdateRoutingControlStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoutingControlStatesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Route53RecoveryCluster
} // namespace Aws
