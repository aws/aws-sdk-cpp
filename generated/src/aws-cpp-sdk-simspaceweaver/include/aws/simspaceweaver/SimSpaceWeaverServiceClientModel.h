/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/simspaceweaver/SimSpaceWeaverErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/simspaceweaver/SimSpaceWeaverEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SimSpaceWeaverClient header */
#include <aws/simspaceweaver/model/DeleteAppResult.h>
#include <aws/simspaceweaver/model/DeleteSimulationResult.h>
#include <aws/simspaceweaver/model/DescribeAppResult.h>
#include <aws/simspaceweaver/model/DescribeSimulationResult.h>
#include <aws/simspaceweaver/model/ListAppsResult.h>
#include <aws/simspaceweaver/model/ListSimulationsResult.h>
#include <aws/simspaceweaver/model/ListTagsForResourceResult.h>
#include <aws/simspaceweaver/model/StartAppResult.h>
#include <aws/simspaceweaver/model/StartClockResult.h>
#include <aws/simspaceweaver/model/StartSimulationResult.h>
#include <aws/simspaceweaver/model/StopAppResult.h>
#include <aws/simspaceweaver/model/StopClockResult.h>
#include <aws/simspaceweaver/model/StopSimulationResult.h>
#include <aws/simspaceweaver/model/TagResourceResult.h>
#include <aws/simspaceweaver/model/UntagResourceResult.h>
/* End of service model headers required in SimSpaceWeaverClient header */

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

  namespace SimSpaceWeaver
  {
    using SimSpaceWeaverClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SimSpaceWeaverEndpointProviderBase = Aws::SimSpaceWeaver::Endpoint::SimSpaceWeaverEndpointProviderBase;
    using SimSpaceWeaverEndpointProvider = Aws::SimSpaceWeaver::Endpoint::SimSpaceWeaverEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SimSpaceWeaverClient header */
      class DeleteAppRequest;
      class DeleteSimulationRequest;
      class DescribeAppRequest;
      class DescribeSimulationRequest;
      class ListAppsRequest;
      class ListSimulationsRequest;
      class ListTagsForResourceRequest;
      class StartAppRequest;
      class StartClockRequest;
      class StartSimulationRequest;
      class StopAppRequest;
      class StopClockRequest;
      class StopSimulationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in SimSpaceWeaverClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteAppResult, SimSpaceWeaverError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<DeleteSimulationResult, SimSpaceWeaverError> DeleteSimulationOutcome;
      typedef Aws::Utils::Outcome<DescribeAppResult, SimSpaceWeaverError> DescribeAppOutcome;
      typedef Aws::Utils::Outcome<DescribeSimulationResult, SimSpaceWeaverError> DescribeSimulationOutcome;
      typedef Aws::Utils::Outcome<ListAppsResult, SimSpaceWeaverError> ListAppsOutcome;
      typedef Aws::Utils::Outcome<ListSimulationsResult, SimSpaceWeaverError> ListSimulationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SimSpaceWeaverError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartAppResult, SimSpaceWeaverError> StartAppOutcome;
      typedef Aws::Utils::Outcome<StartClockResult, SimSpaceWeaverError> StartClockOutcome;
      typedef Aws::Utils::Outcome<StartSimulationResult, SimSpaceWeaverError> StartSimulationOutcome;
      typedef Aws::Utils::Outcome<StopAppResult, SimSpaceWeaverError> StopAppOutcome;
      typedef Aws::Utils::Outcome<StopClockResult, SimSpaceWeaverError> StopClockOutcome;
      typedef Aws::Utils::Outcome<StopSimulationResult, SimSpaceWeaverError> StopSimulationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SimSpaceWeaverError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SimSpaceWeaverError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteSimulationOutcome> DeleteSimulationOutcomeCallable;
      typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
      typedef std::future<DescribeSimulationOutcome> DescribeSimulationOutcomeCallable;
      typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
      typedef std::future<ListSimulationsOutcome> ListSimulationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartAppOutcome> StartAppOutcomeCallable;
      typedef std::future<StartClockOutcome> StartClockOutcomeCallable;
      typedef std::future<StartSimulationOutcome> StartSimulationOutcomeCallable;
      typedef std::future<StopAppOutcome> StopAppOutcomeCallable;
      typedef std::future<StopClockOutcome> StopClockOutcomeCallable;
      typedef std::future<StopSimulationOutcome> StopSimulationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SimSpaceWeaverClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::DeleteSimulationRequest&, const Model::DeleteSimulationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSimulationResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::DescribeAppRequest&, const Model::DescribeAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::DescribeSimulationRequest&, const Model::DescribeSimulationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::ListSimulationsRequest&, const Model::ListSimulationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationsResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::StartAppRequest&, const Model::StartAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAppResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::StartClockRequest&, const Model::StartClockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartClockResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::StartSimulationRequest&, const Model::StartSimulationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSimulationResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::StopAppRequest&, const Model::StopAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAppResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::StopClockRequest&, const Model::StopClockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopClockResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::StopSimulationRequest&, const Model::StopSimulationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSimulationResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SimSpaceWeaverClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SimSpaceWeaver
} // namespace Aws
