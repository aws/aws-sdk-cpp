/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorServiceClientModel.h>

namespace Aws
{
namespace NetworkFlowMonitor
{
  /**
   * <p>Network Flow Monitor is a feature of Amazon CloudWatch Network Monitoring
   * that provides visibility into the performance of network flows for your Amazon
   * Web Services workloads, between instances in subnets, as well as to and from
   * Amazon Web Services. Lightweight agents that you install on the instances
   * capture performance metrics for your network flows, such as packet loss and
   * latency, and send them to the Network Flow Monitor backend. Then, you can view
   * and analyze metrics from the top contributors for each metric type, to help
   * troubleshoot issues.</p> <p>In addition, when you create a monitor, Network Flow
   * Monitor provides a network health indicator (NHI) that informs you whether there
   * were Amazon Web Services network issues for one or more of the network flows
   * tracked by a monitor, during a time period that you choose. By using this value,
   * you can independently determine if the Amazon Web Services network is impacting
   * your workload during a specific time frame, to help you focus troubleshooting
   * efforts.</p> <p>To learn more about Network Flow Monitor, see the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-NetworkFlowMonitor.html">Network
   * Flow Monitor User Guide</a> in the Amazon CloudWatch User Guide.</p>
   */
  class AWS_NETWORKFLOWMONITOR_API NetworkFlowMonitorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NetworkFlowMonitorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NetworkFlowMonitorClientConfiguration ClientConfigurationType;
      typedef NetworkFlowMonitorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFlowMonitorClient(const Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration = Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration(),
                                 std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFlowMonitorClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration = Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFlowMonitorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration = Aws::NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFlowMonitorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFlowMonitorClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFlowMonitorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NetworkFlowMonitorClient();

        /**
         * <p>Create a monitor for specific network flows between local and remote
         * resources, so that you can monitor network performance for one or several of
         * your workloads. For each monitor, Network Flow Monitor publishes detailed
         * end-to-end performance metrics and a network health indicator (NHI) that informs
         * you whether there were Amazon Web Services network issues for one or more of the
         * network flows tracked by a monitor, during a time period that you choose.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/CreateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitorOutcome CreateMonitor(const Model::CreateMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        Model::CreateMonitorOutcomeCallable CreateMonitorCallable(const CreateMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::CreateMonitor, request);
        }

        /**
         * An Async wrapper for CreateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        void CreateMonitorAsync(const CreateMonitorRequestT& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::CreateMonitor, request, handler, context);
        }

        /**
         * <p>In Network Flow Monitor, you specify a scope for the service to generate
         * metrics for. By using the scope, Network Flow Monitor can generate a topology of
         * all the resources to measure performance metrics for. When you create a scope,
         * you enable permissions for Network Flow Monitor.</p> <p>A scope is a
         * Region-account pair or multiple Region-account pairs. Network Flow Monitor uses
         * your scope to determine all the resources (the topology) where Network Flow
         * Monitor will gather network flow performance metrics for you. To provide
         * performance metrics, Network Flow Monitor uses the data that is sent by the
         * Network Flow Monitor agents you install on the resources.</p> <p>To define the
         * Region-account pairs for your scope, the Network Flow Monitor API uses the
         * following constucts, which allow for future flexibility in defining scopes:</p>
         * <ul> <li> <p> <i>Targets</i>, which are arrays of targetResources.</p> </li>
         * <li> <p> <i>Target resources</i>, which are Region-targetIdentifier pairs.</p>
         * </li> <li> <p> <i>Target identifiers</i>, made up of a targetID (currently
         * always an account ID) and a targetType (currently always an account). </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/CreateScope">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScopeOutcome CreateScope(const Model::CreateScopeRequest& request) const;

        /**
         * A Callable wrapper for CreateScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateScopeRequestT = Model::CreateScopeRequest>
        Model::CreateScopeOutcomeCallable CreateScopeCallable(const CreateScopeRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::CreateScope, request);
        }

        /**
         * An Async wrapper for CreateScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScopeRequestT = Model::CreateScopeRequest>
        void CreateScopeAsync(const CreateScopeRequestT& request, const CreateScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::CreateScope, request, handler, context);
        }

        /**
         * <p>Deletes a monitor in Network Flow Monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/DeleteMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitorOutcome DeleteMonitor(const Model::DeleteMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        Model::DeleteMonitorOutcomeCallable DeleteMonitorCallable(const DeleteMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::DeleteMonitor, request);
        }

        /**
         * An Async wrapper for DeleteMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        void DeleteMonitorAsync(const DeleteMonitorRequestT& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::DeleteMonitor, request, handler, context);
        }

        /**
         * <p>Deletes a scope that has been defined.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/DeleteScope">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScopeOutcome DeleteScope(const Model::DeleteScopeRequest& request) const;

        /**
         * A Callable wrapper for DeleteScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScopeRequestT = Model::DeleteScopeRequest>
        Model::DeleteScopeOutcomeCallable DeleteScopeCallable(const DeleteScopeRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::DeleteScope, request);
        }

        /**
         * An Async wrapper for DeleteScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScopeRequestT = Model::DeleteScopeRequest>
        void DeleteScopeAsync(const DeleteScopeRequestT& request, const DeleteScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::DeleteScope, request, handler, context);
        }

        /**
         * <p>Gets information about a monitor in Network Flow Monitor based on a monitor
         * name. The information returned includes the Amazon Resource Name (ARN), create
         * time, modified time, resources included in the monitor, and status
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMonitorOutcome GetMonitor(const Model::GetMonitorRequest& request) const;

        /**
         * A Callable wrapper for GetMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        Model::GetMonitorOutcomeCallable GetMonitorCallable(const GetMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetMonitor, request);
        }

        /**
         * An Async wrapper for GetMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        void GetMonitorAsync(const GetMonitorRequestT& request, const GetMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetMonitor, request, handler, context);
        }

        /**
         * <p>Return the data for a query with the Network Flow Monitor query interface.
         * You specify the query that you want to return results for by providing a query
         * ID and a monitor name. This query returns the top contributors for a specific
         * monitor.</p> <p>Create a query ID for this call by calling the corresponding API
         * call to start the query, <code>StartQueryMonitorTopContributors</code>. Use the
         * scope ID that was returned for your account by <code>CreateScope</code>.</p>
         * <p>Top contributors in Network Flow Monitor are network flows with the highest
         * values for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetQueryResultsMonitorTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsMonitorTopContributorsOutcome GetQueryResultsMonitorTopContributors(const Model::GetQueryResultsMonitorTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryResultsMonitorTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryResultsMonitorTopContributorsRequestT = Model::GetQueryResultsMonitorTopContributorsRequest>
        Model::GetQueryResultsMonitorTopContributorsOutcomeCallable GetQueryResultsMonitorTopContributorsCallable(const GetQueryResultsMonitorTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetQueryResultsMonitorTopContributors, request);
        }

        /**
         * An Async wrapper for GetQueryResultsMonitorTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryResultsMonitorTopContributorsRequestT = Model::GetQueryResultsMonitorTopContributorsRequest>
        void GetQueryResultsMonitorTopContributorsAsync(const GetQueryResultsMonitorTopContributorsRequestT& request, const GetQueryResultsMonitorTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetQueryResultsMonitorTopContributors, request, handler, context);
        }

        /**
         * <p>Return the data for a query with the Network Flow Monitor query interface.
         * You specify the query that you want to return results for by providing a query
         * ID and a monitor name.</p> <p>This query returns the top contributors for a
         * scope for workload insights. Workload insights provide a high level view of
         * network flow performance data collected by agents. To return the data for the
         * top contributors, see
         * <code>GetQueryResultsWorkloadInsightsTopContributorsData</code>.</p> <p>Create a
         * query ID for this call by calling the corresponding API call to start the query,
         * <code>StartQueryWorkloadInsightsTopContributors</code>. Use the scope ID that
         * was returned for your account by <code>CreateScope</code>.</p> <p>Top
         * contributors in Network Flow Monitor are network flows with the highest values
         * for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetQueryResultsWorkloadInsightsTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsWorkloadInsightsTopContributorsOutcome GetQueryResultsWorkloadInsightsTopContributors(const Model::GetQueryResultsWorkloadInsightsTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryResultsWorkloadInsightsTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryResultsWorkloadInsightsTopContributorsRequestT = Model::GetQueryResultsWorkloadInsightsTopContributorsRequest>
        Model::GetQueryResultsWorkloadInsightsTopContributorsOutcomeCallable GetQueryResultsWorkloadInsightsTopContributorsCallable(const GetQueryResultsWorkloadInsightsTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributors, request);
        }

        /**
         * An Async wrapper for GetQueryResultsWorkloadInsightsTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryResultsWorkloadInsightsTopContributorsRequestT = Model::GetQueryResultsWorkloadInsightsTopContributorsRequest>
        void GetQueryResultsWorkloadInsightsTopContributorsAsync(const GetQueryResultsWorkloadInsightsTopContributorsRequestT& request, const GetQueryResultsWorkloadInsightsTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributors, request, handler, context);
        }

        /**
         * <p>Return the data for a query with the Network Flow Monitor query interface.
         * Specify the query that you want to return results for by providing a query ID
         * and a scope ID.</p> <p>This query returns the data for top contributors for
         * workload insights for a specific scope. Workload insights provide a high level
         * view of network flow performance data collected by agents for a scope. To return
         * just the top contributors, see
         * <code>GetQueryResultsWorkloadInsightsTopContributors</code>.</p> <p>Create a
         * query ID for this call by calling the corresponding API call to start the query,
         * <code>StartQueryWorkloadInsightsTopContributorsData</code>. Use the scope ID
         * that was returned for your account by <code>CreateScope</code>.</p> <p>Top
         * contributors in Network Flow Monitor are network flows with the highest values
         * for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p> <p>The top
         * contributor network flows overall are for a specific metric type, for example,
         * the number of retransmissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetQueryResultsWorkloadInsightsTopContributorsData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsWorkloadInsightsTopContributorsDataOutcome GetQueryResultsWorkloadInsightsTopContributorsData(const Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest& request) const;

        /**
         * A Callable wrapper for GetQueryResultsWorkloadInsightsTopContributorsData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryResultsWorkloadInsightsTopContributorsDataRequestT = Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest>
        Model::GetQueryResultsWorkloadInsightsTopContributorsDataOutcomeCallable GetQueryResultsWorkloadInsightsTopContributorsDataCallable(const GetQueryResultsWorkloadInsightsTopContributorsDataRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributorsData, request);
        }

        /**
         * An Async wrapper for GetQueryResultsWorkloadInsightsTopContributorsData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryResultsWorkloadInsightsTopContributorsDataRequestT = Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest>
        void GetQueryResultsWorkloadInsightsTopContributorsDataAsync(const GetQueryResultsWorkloadInsightsTopContributorsDataRequestT& request, const GetQueryResultsWorkloadInsightsTopContributorsDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributorsData, request, handler, context);
        }

        /**
         * <p>Returns the current status of a query for the Network Flow Monitor query
         * interface, for a specified query ID and monitor. This call returns the query
         * status for the top contributors for a monitor.</p> <p>When you create a query,
         * use this call to check the status of the query to make sure that it has has
         * <code>SUCCEEDED</code> before you review the results. Use the same query ID that
         * you used for the corresponding API call to start (create) the query,
         * <code>StartQueryMonitorTopContributors</code>.</p> <p>When you run a query, use
         * this call to check the status of the query to make sure that the query has
         * <code>SUCCEEDED</code> before you review the results.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetQueryStatusMonitorTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryStatusMonitorTopContributorsOutcome GetQueryStatusMonitorTopContributors(const Model::GetQueryStatusMonitorTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryStatusMonitorTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryStatusMonitorTopContributorsRequestT = Model::GetQueryStatusMonitorTopContributorsRequest>
        Model::GetQueryStatusMonitorTopContributorsOutcomeCallable GetQueryStatusMonitorTopContributorsCallable(const GetQueryStatusMonitorTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetQueryStatusMonitorTopContributors, request);
        }

        /**
         * An Async wrapper for GetQueryStatusMonitorTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryStatusMonitorTopContributorsRequestT = Model::GetQueryStatusMonitorTopContributorsRequest>
        void GetQueryStatusMonitorTopContributorsAsync(const GetQueryStatusMonitorTopContributorsRequestT& request, const GetQueryStatusMonitorTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetQueryStatusMonitorTopContributors, request, handler, context);
        }

        /**
         * <p>Return the data for a query with the Network Flow Monitor query interface.
         * Specify the query that you want to return results for by providing a query ID
         * and a monitor name. This query returns the top contributors for workload
         * insights.</p> <p>When you start a query, use this call to check the status of
         * the query to make sure that it has has <code>SUCCEEDED</code> before you review
         * the results. Use the same query ID that you used for the corresponding API call
         * to start the query, <code>StartQueryWorkloadInsightsTopContributors</code>.</p>
         * <p>Top contributors in Network Flow Monitor are network flows with the highest
         * values for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetQueryStatusWorkloadInsightsTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryStatusWorkloadInsightsTopContributorsOutcome GetQueryStatusWorkloadInsightsTopContributors(const Model::GetQueryStatusWorkloadInsightsTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryStatusWorkloadInsightsTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryStatusWorkloadInsightsTopContributorsRequestT = Model::GetQueryStatusWorkloadInsightsTopContributorsRequest>
        Model::GetQueryStatusWorkloadInsightsTopContributorsOutcomeCallable GetQueryStatusWorkloadInsightsTopContributorsCallable(const GetQueryStatusWorkloadInsightsTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributors, request);
        }

        /**
         * An Async wrapper for GetQueryStatusWorkloadInsightsTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryStatusWorkloadInsightsTopContributorsRequestT = Model::GetQueryStatusWorkloadInsightsTopContributorsRequest>
        void GetQueryStatusWorkloadInsightsTopContributorsAsync(const GetQueryStatusWorkloadInsightsTopContributorsRequestT& request, const GetQueryStatusWorkloadInsightsTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributors, request, handler, context);
        }

        /**
         * <p>Returns the current status of a query for the Network Flow Monitor query
         * interface, for a specified query ID and monitor. This call returns the query
         * status for the top contributors data for workload insights.</p> <p>When you
         * start a query, use this call to check the status of the query to make sure that
         * it has has <code>SUCCEEDED</code> before you review the results. Use the same
         * query ID that you used for the corresponding API call to start the query,
         * <code>StartQueryWorkloadInsightsTopContributorsData</code>.</p> <p>Top
         * contributors in Network Flow Monitor are network flows with the highest values
         * for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p> <p>The top
         * contributor network flows overall are for a specific metric type, for example,
         * the number of retransmissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetQueryStatusWorkloadInsightsTopContributorsData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryStatusWorkloadInsightsTopContributorsDataOutcome GetQueryStatusWorkloadInsightsTopContributorsData(const Model::GetQueryStatusWorkloadInsightsTopContributorsDataRequest& request) const;

        /**
         * A Callable wrapper for GetQueryStatusWorkloadInsightsTopContributorsData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryStatusWorkloadInsightsTopContributorsDataRequestT = Model::GetQueryStatusWorkloadInsightsTopContributorsDataRequest>
        Model::GetQueryStatusWorkloadInsightsTopContributorsDataOutcomeCallable GetQueryStatusWorkloadInsightsTopContributorsDataCallable(const GetQueryStatusWorkloadInsightsTopContributorsDataRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributorsData, request);
        }

        /**
         * An Async wrapper for GetQueryStatusWorkloadInsightsTopContributorsData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryStatusWorkloadInsightsTopContributorsDataRequestT = Model::GetQueryStatusWorkloadInsightsTopContributorsDataRequest>
        void GetQueryStatusWorkloadInsightsTopContributorsDataAsync(const GetQueryStatusWorkloadInsightsTopContributorsDataRequestT& request, const GetQueryStatusWorkloadInsightsTopContributorsDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributorsData, request, handler, context);
        }

        /**
         * <p>Gets information about a scope, including the name, status, tags, and target
         * details. The scope in Network Flow Monitor is an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/GetScope">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScopeOutcome GetScope(const Model::GetScopeRequest& request) const;

        /**
         * A Callable wrapper for GetScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetScopeRequestT = Model::GetScopeRequest>
        Model::GetScopeOutcomeCallable GetScopeCallable(const GetScopeRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::GetScope, request);
        }

        /**
         * An Async wrapper for GetScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetScopeRequestT = Model::GetScopeRequest>
        void GetScopeAsync(const GetScopeRequestT& request, const GetScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::GetScope, request, handler, context);
        }

        /**
         * <p>List all monitors in an account. Optionally, you can list only monitors that
         * have a specific status, by using the <code>STATUS</code>
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/ListMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitorsOutcome ListMonitors(const Model::ListMonitorsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        Model::ListMonitorsOutcomeCallable ListMonitorsCallable(const ListMonitorsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::ListMonitors, request);
        }

        /**
         * An Async wrapper for ListMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        void ListMonitorsAsync(const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMonitorsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::ListMonitors, request, handler, context);
        }

        /**
         * <p>List all the scopes for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/ListScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScopesOutcome ListScopes(const Model::ListScopesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListScopes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListScopesRequestT = Model::ListScopesRequest>
        Model::ListScopesOutcomeCallable ListScopesCallable(const ListScopesRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::ListScopes, request);
        }

        /**
         * An Async wrapper for ListScopes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScopesRequestT = Model::ListScopesRequest>
        void ListScopesAsync(const ListScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListScopesRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::ListScopes, request, handler, context);
        }

        /**
         * <p>Returns all the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Create a query that you can use with the Network Flow Monitor query interface
         * to return the top contributors for a monitor. Specify the monitor that you want
         * to create the query for. </p> <p>The call returns a query ID that you can use
         * with <a
         * href="https://docs.aws.amazon.com/networkflowmonitor/2.0/APIReference/API_GetQueryResultsMonitorTopContributors.html">
         * GetQueryResultsMonitorTopContributors</a> to run the query and return the top
         * contributors for a specific monitor.</p> <p>Top contributors in Network Flow
         * Monitor are network flows with the highest values for a specific metric type.
         * Top contributors can be across all workload insights, for a given scope, or for
         * a specific monitor. Use the applicable APIs for the top contributors that you
         * want to be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/StartQueryMonitorTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryMonitorTopContributorsOutcome StartQueryMonitorTopContributors(const Model::StartQueryMonitorTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for StartQueryMonitorTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartQueryMonitorTopContributorsRequestT = Model::StartQueryMonitorTopContributorsRequest>
        Model::StartQueryMonitorTopContributorsOutcomeCallable StartQueryMonitorTopContributorsCallable(const StartQueryMonitorTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::StartQueryMonitorTopContributors, request);
        }

        /**
         * An Async wrapper for StartQueryMonitorTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryMonitorTopContributorsRequestT = Model::StartQueryMonitorTopContributorsRequest>
        void StartQueryMonitorTopContributorsAsync(const StartQueryMonitorTopContributorsRequestT& request, const StartQueryMonitorTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::StartQueryMonitorTopContributors, request, handler, context);
        }

        /**
         * <p>Create a query with the Network Flow Monitor query interface that you can run
         * to return workload insights top contributors. Specify the scope that you want to
         * create a query for.</p> <p>The call returns a query ID that you can use with <a
         * href="https://docs.aws.amazon.com/networkflowmonitor/2.0/APIReference/API_GetQueryResultsWorkloadInsightsTopContributors.html">
         * GetQueryResultsWorkloadInsightsTopContributors</a> to run the query and return
         * the top contributors for the workload insights for a scope.</p> <p>Top
         * contributors in Network Flow Monitor are network flows with the highest values
         * for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable APIs
         * for the top contributors that you want to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/StartQueryWorkloadInsightsTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryWorkloadInsightsTopContributorsOutcome StartQueryWorkloadInsightsTopContributors(const Model::StartQueryWorkloadInsightsTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for StartQueryWorkloadInsightsTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartQueryWorkloadInsightsTopContributorsRequestT = Model::StartQueryWorkloadInsightsTopContributorsRequest>
        Model::StartQueryWorkloadInsightsTopContributorsOutcomeCallable StartQueryWorkloadInsightsTopContributorsCallable(const StartQueryWorkloadInsightsTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributors, request);
        }

        /**
         * An Async wrapper for StartQueryWorkloadInsightsTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryWorkloadInsightsTopContributorsRequestT = Model::StartQueryWorkloadInsightsTopContributorsRequest>
        void StartQueryWorkloadInsightsTopContributorsAsync(const StartQueryWorkloadInsightsTopContributorsRequestT& request, const StartQueryWorkloadInsightsTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributors, request, handler, context);
        }

        /**
         * <p>Create a query with the Network Flow Monitor query interface that you can run
         * to return data for workload insights top contributors. Specify the scope that
         * you want to create a query for.</p> <p>The call returns a query ID that you can
         * use with <a
         * href="https://docs.aws.amazon.com/networkflowmonitor/2.0/APIReference/API_GetQueryResultsWorkloadInsightsTopContributorsData.html">
         * GetQueryResultsWorkloadInsightsTopContributorsData</a> to run the query and
         * return the data for the top contributors for the workload insights for a
         * scope.</p> <p>Top contributors in Network Flow Monitor are network flows with
         * the highest values for a specific metric type. Top contributors can be across
         * all workload insights, for a given scope, or for a specific monitor. Use the
         * applicable call for the top contributors that you want to be
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/StartQueryWorkloadInsightsTopContributorsData">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryWorkloadInsightsTopContributorsDataOutcome StartQueryWorkloadInsightsTopContributorsData(const Model::StartQueryWorkloadInsightsTopContributorsDataRequest& request) const;

        /**
         * A Callable wrapper for StartQueryWorkloadInsightsTopContributorsData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartQueryWorkloadInsightsTopContributorsDataRequestT = Model::StartQueryWorkloadInsightsTopContributorsDataRequest>
        Model::StartQueryWorkloadInsightsTopContributorsDataOutcomeCallable StartQueryWorkloadInsightsTopContributorsDataCallable(const StartQueryWorkloadInsightsTopContributorsDataRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributorsData, request);
        }

        /**
         * An Async wrapper for StartQueryWorkloadInsightsTopContributorsData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryWorkloadInsightsTopContributorsDataRequestT = Model::StartQueryWorkloadInsightsTopContributorsDataRequest>
        void StartQueryWorkloadInsightsTopContributorsDataAsync(const StartQueryWorkloadInsightsTopContributorsDataRequestT& request, const StartQueryWorkloadInsightsTopContributorsDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributorsData, request, handler, context);
        }

        /**
         * <p>Stop a top contributors query for a monitor. Specify the query that you want
         * to stop by providing a query ID and a monitor name. </p> <p>Top contributors in
         * Network Flow Monitor are network flows with the highest values for a specific
         * metric type. Top contributors can be across all workload insights, for a given
         * scope, or for a specific monitor. Use the applicable call for the top
         * contributors that you want to be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/StopQueryMonitorTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQueryMonitorTopContributorsOutcome StopQueryMonitorTopContributors(const Model::StopQueryMonitorTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for StopQueryMonitorTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopQueryMonitorTopContributorsRequestT = Model::StopQueryMonitorTopContributorsRequest>
        Model::StopQueryMonitorTopContributorsOutcomeCallable StopQueryMonitorTopContributorsCallable(const StopQueryMonitorTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::StopQueryMonitorTopContributors, request);
        }

        /**
         * An Async wrapper for StopQueryMonitorTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopQueryMonitorTopContributorsRequestT = Model::StopQueryMonitorTopContributorsRequest>
        void StopQueryMonitorTopContributorsAsync(const StopQueryMonitorTopContributorsRequestT& request, const StopQueryMonitorTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::StopQueryMonitorTopContributors, request, handler, context);
        }

        /**
         * <p>Stop a top contributors query for workload insights. Specify the query that
         * you want to stop by providing a query ID and a scope ID. </p> <p>Top
         * contributors in Network Flow Monitor are network flows with the highest values
         * for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/StopQueryWorkloadInsightsTopContributors">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQueryWorkloadInsightsTopContributorsOutcome StopQueryWorkloadInsightsTopContributors(const Model::StopQueryWorkloadInsightsTopContributorsRequest& request) const;

        /**
         * A Callable wrapper for StopQueryWorkloadInsightsTopContributors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopQueryWorkloadInsightsTopContributorsRequestT = Model::StopQueryWorkloadInsightsTopContributorsRequest>
        Model::StopQueryWorkloadInsightsTopContributorsOutcomeCallable StopQueryWorkloadInsightsTopContributorsCallable(const StopQueryWorkloadInsightsTopContributorsRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributors, request);
        }

        /**
         * An Async wrapper for StopQueryWorkloadInsightsTopContributors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopQueryWorkloadInsightsTopContributorsRequestT = Model::StopQueryWorkloadInsightsTopContributorsRequest>
        void StopQueryWorkloadInsightsTopContributorsAsync(const StopQueryWorkloadInsightsTopContributorsRequestT& request, const StopQueryWorkloadInsightsTopContributorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributors, request, handler, context);
        }

        /**
         * <p>Stop a top contributors data query for workload insights. Specify the query
         * that you want to stop by providing a query ID and a scope ID. </p> <p>Top
         * contributors in Network Flow Monitor are network flows with the highest values
         * for a specific metric type. Top contributors can be across all workload
         * insights, for a given scope, or for a specific monitor. Use the applicable call
         * for the top contributors that you want to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/StopQueryWorkloadInsightsTopContributorsData">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQueryWorkloadInsightsTopContributorsDataOutcome StopQueryWorkloadInsightsTopContributorsData(const Model::StopQueryWorkloadInsightsTopContributorsDataRequest& request) const;

        /**
         * A Callable wrapper for StopQueryWorkloadInsightsTopContributorsData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopQueryWorkloadInsightsTopContributorsDataRequestT = Model::StopQueryWorkloadInsightsTopContributorsDataRequest>
        Model::StopQueryWorkloadInsightsTopContributorsDataOutcomeCallable StopQueryWorkloadInsightsTopContributorsDataCallable(const StopQueryWorkloadInsightsTopContributorsDataRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributorsData, request);
        }

        /**
         * An Async wrapper for StopQueryWorkloadInsightsTopContributorsData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopQueryWorkloadInsightsTopContributorsDataRequestT = Model::StopQueryWorkloadInsightsTopContributorsDataRequest>
        void StopQueryWorkloadInsightsTopContributorsDataAsync(const StopQueryWorkloadInsightsTopContributorsDataRequestT& request, const StopQueryWorkloadInsightsTopContributorsDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributorsData, request, handler, context);
        }

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update a monitor to add or remove local or remote resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/UpdateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitorOutcome UpdateMonitor(const Model::UpdateMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        Model::UpdateMonitorOutcomeCallable UpdateMonitorCallable(const UpdateMonitorRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::UpdateMonitor, request);
        }

        /**
         * An Async wrapper for UpdateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        void UpdateMonitorAsync(const UpdateMonitorRequestT& request, const UpdateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::UpdateMonitor, request, handler, context);
        }

        /**
         * <p>Update a scope to add or remove resources that you want to be available for
         * Network Flow Monitor to generate metrics for, when you have active agents on
         * those resources sending metrics reports to the Network Flow Monitor
         * backend.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/UpdateScope">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScopeOutcome UpdateScope(const Model::UpdateScopeRequest& request) const;

        /**
         * A Callable wrapper for UpdateScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateScopeRequestT = Model::UpdateScopeRequest>
        Model::UpdateScopeOutcomeCallable UpdateScopeCallable(const UpdateScopeRequestT& request) const
        {
            return SubmitCallable(&NetworkFlowMonitorClient::UpdateScope, request);
        }

        /**
         * An Async wrapper for UpdateScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScopeRequestT = Model::UpdateScopeRequest>
        void UpdateScopeAsync(const UpdateScopeRequestT& request, const UpdateScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFlowMonitorClient::UpdateScope, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkFlowMonitorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkFlowMonitorClient>;
      void init(const NetworkFlowMonitorClientConfiguration& clientConfiguration);

      NetworkFlowMonitorClientConfiguration m_clientConfiguration;
      std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> m_endpointProvider;
  };

} // namespace NetworkFlowMonitor
} // namespace Aws
