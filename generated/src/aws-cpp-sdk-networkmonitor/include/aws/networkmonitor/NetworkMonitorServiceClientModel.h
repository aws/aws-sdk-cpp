/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/networkmonitor/NetworkMonitorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/networkmonitor/NetworkMonitorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NetworkMonitorClient header */
#include <aws/networkmonitor/model/CreateMonitorResult.h>
#include <aws/networkmonitor/model/CreateProbeResult.h>
#include <aws/networkmonitor/model/DeleteMonitorResult.h>
#include <aws/networkmonitor/model/DeleteProbeResult.h>
#include <aws/networkmonitor/model/GetMonitorResult.h>
#include <aws/networkmonitor/model/GetProbeResult.h>
#include <aws/networkmonitor/model/ListMonitorsResult.h>
#include <aws/networkmonitor/model/ListTagsForResourceResult.h>
#include <aws/networkmonitor/model/TagResourceResult.h>
#include <aws/networkmonitor/model/UntagResourceResult.h>
#include <aws/networkmonitor/model/UpdateMonitorResult.h>
#include <aws/networkmonitor/model/UpdateProbeResult.h>
/* End of service model headers required in NetworkMonitorClient header */

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

  namespace NetworkMonitor
  {
    using NetworkMonitorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using NetworkMonitorEndpointProviderBase = Aws::NetworkMonitor::Endpoint::NetworkMonitorEndpointProviderBase;
    using NetworkMonitorEndpointProvider = Aws::NetworkMonitor::Endpoint::NetworkMonitorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NetworkMonitorClient header */
      class CreateMonitorRequest;
      class CreateProbeRequest;
      class DeleteMonitorRequest;
      class DeleteProbeRequest;
      class GetMonitorRequest;
      class GetProbeRequest;
      class ListMonitorsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateMonitorRequest;
      class UpdateProbeRequest;
      /* End of service model forward declarations required in NetworkMonitorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateMonitorResult, NetworkMonitorError> CreateMonitorOutcome;
      typedef Aws::Utils::Outcome<CreateProbeResult, NetworkMonitorError> CreateProbeOutcome;
      typedef Aws::Utils::Outcome<DeleteMonitorResult, NetworkMonitorError> DeleteMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteProbeResult, NetworkMonitorError> DeleteProbeOutcome;
      typedef Aws::Utils::Outcome<GetMonitorResult, NetworkMonitorError> GetMonitorOutcome;
      typedef Aws::Utils::Outcome<GetProbeResult, NetworkMonitorError> GetProbeOutcome;
      typedef Aws::Utils::Outcome<ListMonitorsResult, NetworkMonitorError> ListMonitorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkMonitorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NetworkMonitorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NetworkMonitorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateMonitorResult, NetworkMonitorError> UpdateMonitorOutcome;
      typedef Aws::Utils::Outcome<UpdateProbeResult, NetworkMonitorError> UpdateProbeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateMonitorOutcome> CreateMonitorOutcomeCallable;
      typedef std::future<CreateProbeOutcome> CreateProbeOutcomeCallable;
      typedef std::future<DeleteMonitorOutcome> DeleteMonitorOutcomeCallable;
      typedef std::future<DeleteProbeOutcome> DeleteProbeOutcomeCallable;
      typedef std::future<GetMonitorOutcome> GetMonitorOutcomeCallable;
      typedef std::future<GetProbeOutcome> GetProbeOutcomeCallable;
      typedef std::future<ListMonitorsOutcome> ListMonitorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateMonitorOutcome> UpdateMonitorOutcomeCallable;
      typedef std::future<UpdateProbeOutcome> UpdateProbeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NetworkMonitorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NetworkMonitorClient*, const Model::CreateMonitorRequest&, const Model::CreateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::CreateProbeRequest&, const Model::CreateProbeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProbeResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::DeleteMonitorRequest&, const Model::DeleteMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::DeleteProbeRequest&, const Model::DeleteProbeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProbeResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::GetMonitorRequest&, const Model::GetMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::GetProbeRequest&, const Model::GetProbeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProbeResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::ListMonitorsRequest&, const Model::ListMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitorsResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::UpdateMonitorRequest&, const Model::UpdateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitorResponseReceivedHandler;
    typedef std::function<void(const NetworkMonitorClient*, const Model::UpdateProbeRequest&, const Model::UpdateProbeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProbeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NetworkMonitor
} // namespace Aws
