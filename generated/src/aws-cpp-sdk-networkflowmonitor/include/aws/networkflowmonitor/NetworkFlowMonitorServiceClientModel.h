/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/networkflowmonitor/NetworkFlowMonitorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NetworkFlowMonitorClient header */
#include <aws/networkflowmonitor/model/CreateMonitorResult.h>
#include <aws/networkflowmonitor/model/CreateScopeResult.h>
#include <aws/networkflowmonitor/model/DeleteMonitorResult.h>
#include <aws/networkflowmonitor/model/DeleteScopeResult.h>
#include <aws/networkflowmonitor/model/GetMonitorResult.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/GetQueryStatusMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/GetScopeResult.h>
#include <aws/networkflowmonitor/model/ListMonitorsResult.h>
#include <aws/networkflowmonitor/model/ListScopesResult.h>
#include <aws/networkflowmonitor/model/ListTagsForResourceResult.h>
#include <aws/networkflowmonitor/model/StartQueryMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/StopQueryMonitorTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsResult.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsDataResult.h>
#include <aws/networkflowmonitor/model/TagResourceResult.h>
#include <aws/networkflowmonitor/model/UntagResourceResult.h>
#include <aws/networkflowmonitor/model/UpdateMonitorResult.h>
#include <aws/networkflowmonitor/model/UpdateScopeResult.h>
#include <aws/networkflowmonitor/model/ListMonitorsRequest.h>
#include <aws/networkflowmonitor/model/ListScopesRequest.h>
/* End of service model headers required in NetworkFlowMonitorClient header */

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

  namespace NetworkFlowMonitor
  {
    using NetworkFlowMonitorClientConfiguration = Aws::Client::GenericClientConfiguration;
    using NetworkFlowMonitorEndpointProviderBase = Aws::NetworkFlowMonitor::Endpoint::NetworkFlowMonitorEndpointProviderBase;
    using NetworkFlowMonitorEndpointProvider = Aws::NetworkFlowMonitor::Endpoint::NetworkFlowMonitorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NetworkFlowMonitorClient header */
      class CreateMonitorRequest;
      class CreateScopeRequest;
      class DeleteMonitorRequest;
      class DeleteScopeRequest;
      class GetMonitorRequest;
      class GetQueryResultsMonitorTopContributorsRequest;
      class GetQueryResultsWorkloadInsightsTopContributorsRequest;
      class GetQueryResultsWorkloadInsightsTopContributorsDataRequest;
      class GetQueryStatusMonitorTopContributorsRequest;
      class GetQueryStatusWorkloadInsightsTopContributorsRequest;
      class GetQueryStatusWorkloadInsightsTopContributorsDataRequest;
      class GetScopeRequest;
      class ListMonitorsRequest;
      class ListScopesRequest;
      class ListTagsForResourceRequest;
      class StartQueryMonitorTopContributorsRequest;
      class StartQueryWorkloadInsightsTopContributorsRequest;
      class StartQueryWorkloadInsightsTopContributorsDataRequest;
      class StopQueryMonitorTopContributorsRequest;
      class StopQueryWorkloadInsightsTopContributorsRequest;
      class StopQueryWorkloadInsightsTopContributorsDataRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateMonitorRequest;
      class UpdateScopeRequest;
      /* End of service model forward declarations required in NetworkFlowMonitorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateMonitorResult, NetworkFlowMonitorError> CreateMonitorOutcome;
      typedef Aws::Utils::Outcome<CreateScopeResult, NetworkFlowMonitorError> CreateScopeOutcome;
      typedef Aws::Utils::Outcome<DeleteMonitorResult, NetworkFlowMonitorError> DeleteMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteScopeResult, NetworkFlowMonitorError> DeleteScopeOutcome;
      typedef Aws::Utils::Outcome<GetMonitorResult, NetworkFlowMonitorError> GetMonitorOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsMonitorTopContributorsResult, NetworkFlowMonitorError> GetQueryResultsMonitorTopContributorsOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsWorkloadInsightsTopContributorsResult, NetworkFlowMonitorError> GetQueryResultsWorkloadInsightsTopContributorsOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsWorkloadInsightsTopContributorsDataResult, NetworkFlowMonitorError> GetQueryResultsWorkloadInsightsTopContributorsDataOutcome;
      typedef Aws::Utils::Outcome<GetQueryStatusMonitorTopContributorsResult, NetworkFlowMonitorError> GetQueryStatusMonitorTopContributorsOutcome;
      typedef Aws::Utils::Outcome<GetQueryStatusWorkloadInsightsTopContributorsResult, NetworkFlowMonitorError> GetQueryStatusWorkloadInsightsTopContributorsOutcome;
      typedef Aws::Utils::Outcome<GetQueryStatusWorkloadInsightsTopContributorsDataResult, NetworkFlowMonitorError> GetQueryStatusWorkloadInsightsTopContributorsDataOutcome;
      typedef Aws::Utils::Outcome<GetScopeResult, NetworkFlowMonitorError> GetScopeOutcome;
      typedef Aws::Utils::Outcome<ListMonitorsResult, NetworkFlowMonitorError> ListMonitorsOutcome;
      typedef Aws::Utils::Outcome<ListScopesResult, NetworkFlowMonitorError> ListScopesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkFlowMonitorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartQueryMonitorTopContributorsResult, NetworkFlowMonitorError> StartQueryMonitorTopContributorsOutcome;
      typedef Aws::Utils::Outcome<StartQueryWorkloadInsightsTopContributorsResult, NetworkFlowMonitorError> StartQueryWorkloadInsightsTopContributorsOutcome;
      typedef Aws::Utils::Outcome<StartQueryWorkloadInsightsTopContributorsDataResult, NetworkFlowMonitorError> StartQueryWorkloadInsightsTopContributorsDataOutcome;
      typedef Aws::Utils::Outcome<StopQueryMonitorTopContributorsResult, NetworkFlowMonitorError> StopQueryMonitorTopContributorsOutcome;
      typedef Aws::Utils::Outcome<StopQueryWorkloadInsightsTopContributorsResult, NetworkFlowMonitorError> StopQueryWorkloadInsightsTopContributorsOutcome;
      typedef Aws::Utils::Outcome<StopQueryWorkloadInsightsTopContributorsDataResult, NetworkFlowMonitorError> StopQueryWorkloadInsightsTopContributorsDataOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NetworkFlowMonitorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NetworkFlowMonitorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateMonitorResult, NetworkFlowMonitorError> UpdateMonitorOutcome;
      typedef Aws::Utils::Outcome<UpdateScopeResult, NetworkFlowMonitorError> UpdateScopeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateMonitorOutcome> CreateMonitorOutcomeCallable;
      typedef std::future<CreateScopeOutcome> CreateScopeOutcomeCallable;
      typedef std::future<DeleteMonitorOutcome> DeleteMonitorOutcomeCallable;
      typedef std::future<DeleteScopeOutcome> DeleteScopeOutcomeCallable;
      typedef std::future<GetMonitorOutcome> GetMonitorOutcomeCallable;
      typedef std::future<GetQueryResultsMonitorTopContributorsOutcome> GetQueryResultsMonitorTopContributorsOutcomeCallable;
      typedef std::future<GetQueryResultsWorkloadInsightsTopContributorsOutcome> GetQueryResultsWorkloadInsightsTopContributorsOutcomeCallable;
      typedef std::future<GetQueryResultsWorkloadInsightsTopContributorsDataOutcome> GetQueryResultsWorkloadInsightsTopContributorsDataOutcomeCallable;
      typedef std::future<GetQueryStatusMonitorTopContributorsOutcome> GetQueryStatusMonitorTopContributorsOutcomeCallable;
      typedef std::future<GetQueryStatusWorkloadInsightsTopContributorsOutcome> GetQueryStatusWorkloadInsightsTopContributorsOutcomeCallable;
      typedef std::future<GetQueryStatusWorkloadInsightsTopContributorsDataOutcome> GetQueryStatusWorkloadInsightsTopContributorsDataOutcomeCallable;
      typedef std::future<GetScopeOutcome> GetScopeOutcomeCallable;
      typedef std::future<ListMonitorsOutcome> ListMonitorsOutcomeCallable;
      typedef std::future<ListScopesOutcome> ListScopesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartQueryMonitorTopContributorsOutcome> StartQueryMonitorTopContributorsOutcomeCallable;
      typedef std::future<StartQueryWorkloadInsightsTopContributorsOutcome> StartQueryWorkloadInsightsTopContributorsOutcomeCallable;
      typedef std::future<StartQueryWorkloadInsightsTopContributorsDataOutcome> StartQueryWorkloadInsightsTopContributorsDataOutcomeCallable;
      typedef std::future<StopQueryMonitorTopContributorsOutcome> StopQueryMonitorTopContributorsOutcomeCallable;
      typedef std::future<StopQueryWorkloadInsightsTopContributorsOutcome> StopQueryWorkloadInsightsTopContributorsOutcomeCallable;
      typedef std::future<StopQueryWorkloadInsightsTopContributorsDataOutcome> StopQueryWorkloadInsightsTopContributorsDataOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateMonitorOutcome> UpdateMonitorOutcomeCallable;
      typedef std::future<UpdateScopeOutcome> UpdateScopeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NetworkFlowMonitorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::CreateMonitorRequest&, const Model::CreateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::CreateScopeRequest&, const Model::CreateScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScopeResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::DeleteMonitorRequest&, const Model::DeleteMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::DeleteScopeRequest&, const Model::DeleteScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScopeResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetMonitorRequest&, const Model::GetMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetQueryResultsMonitorTopContributorsRequest&, const Model::GetQueryResultsMonitorTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsMonitorTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetQueryResultsWorkloadInsightsTopContributorsRequest&, const Model::GetQueryResultsWorkloadInsightsTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsWorkloadInsightsTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest&, const Model::GetQueryResultsWorkloadInsightsTopContributorsDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsWorkloadInsightsTopContributorsDataResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetQueryStatusMonitorTopContributorsRequest&, const Model::GetQueryStatusMonitorTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryStatusMonitorTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetQueryStatusWorkloadInsightsTopContributorsRequest&, const Model::GetQueryStatusWorkloadInsightsTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryStatusWorkloadInsightsTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetQueryStatusWorkloadInsightsTopContributorsDataRequest&, const Model::GetQueryStatusWorkloadInsightsTopContributorsDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryStatusWorkloadInsightsTopContributorsDataResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::GetScopeRequest&, const Model::GetScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScopeResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::ListMonitorsRequest&, const Model::ListMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::ListScopesRequest&, const Model::ListScopesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScopesResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::StartQueryMonitorTopContributorsRequest&, const Model::StartQueryMonitorTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryMonitorTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::StartQueryWorkloadInsightsTopContributorsRequest&, const Model::StartQueryWorkloadInsightsTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryWorkloadInsightsTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::StartQueryWorkloadInsightsTopContributorsDataRequest&, const Model::StartQueryWorkloadInsightsTopContributorsDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryWorkloadInsightsTopContributorsDataResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::StopQueryMonitorTopContributorsRequest&, const Model::StopQueryMonitorTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryMonitorTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::StopQueryWorkloadInsightsTopContributorsRequest&, const Model::StopQueryWorkloadInsightsTopContributorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryWorkloadInsightsTopContributorsResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::StopQueryWorkloadInsightsTopContributorsDataRequest&, const Model::StopQueryWorkloadInsightsTopContributorsDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryWorkloadInsightsTopContributorsDataResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::UpdateMonitorRequest&, const Model::UpdateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkFlowMonitorClient*, const Model::UpdateScopeRequest&, const Model::UpdateScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScopeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NetworkFlowMonitor
} // namespace Aws
