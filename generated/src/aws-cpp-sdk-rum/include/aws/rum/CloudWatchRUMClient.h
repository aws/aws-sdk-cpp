/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rum/CloudWatchRUMServiceClientModel.h>

namespace Aws
{
namespace CloudWatchRUM
{
  /**
   * <p>With Amazon CloudWatch RUM, you can perform real-user monitoring to collect
   * client-side data about your web application performance from actual user
   * sessions in real time. The data collected includes page load times, client-side
   * errors, and user behavior. When you view this data, you can see it all
   * aggregated together and also see breakdowns by the browsers and devices that
   * your customers use.</p> <p>You can use the collected data to quickly identify
   * and debug client-side performance issues. CloudWatch RUM helps you visualize
   * anomalies in your application performance and find relevant debugging data such
   * as error messages, stack traces, and user sessions. You can also use RUM to
   * understand the range of end-user impact including the number of users,
   * geolocations, and browsers used.</p>
   */
  class AWS_CLOUDWATCHRUM_API CloudWatchRUMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchRUMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudWatchRUMClientConfiguration ClientConfigurationType;
      typedef CloudWatchRUMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchRUMClient(const Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration = Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration(),
                            std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchRUMClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration = Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchRUMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration = Aws::CloudWatchRUM::CloudWatchRUMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchRUMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchRUMClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchRUMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudWatchRUMClient();

        /**
         * <p>Specifies the extended metrics and custom metrics that you want a CloudWatch
         * RUM app monitor to send to a destination. Valid destinations include CloudWatch
         * and Evidently.</p> <p>By default, RUM app monitors send some metrics to
         * CloudWatch. These default metrics are listed in <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-metrics.html">CloudWatch
         * metrics that you can collect with CloudWatch RUM</a>.</p> <p>In addition to
         * these default metrics, you can choose to send extended metrics, custom metrics,
         * or both.</p> <ul> <li> <p>Extended metrics let you send metrics with additional
         * dimensions that aren't included in the default metrics. You can also send
         * extended metrics to both Evidently and CloudWatch. The valid dimension names for
         * the additional dimensions for extended metrics are <code>BrowserName</code>,
         * <code>CountryCode</code>, <code>DeviceType</code>, <code>FileType</code>,
         * <code>OSName</code>, and <code>PageId</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-vended-metrics.html">
         * Extended metrics that you can send to CloudWatch and CloudWatch
         * Evidently</a>.</p> </li> <li> <p>Custom metrics are metrics that you define. You
         * can send custom metrics to CloudWatch. CloudWatch Evidently, or both. With
         * custom metrics, you can use any metric name and namespace. To derive the
         * metrics, you can use any custom events, built-in events, custom attributes, or
         * default attributes. </p> <p>You can't send custom metrics to the
         * <code>AWS/RUM</code> namespace. You must send custom metrics to a custom
         * namespace that you define. The namespace that you use can't start with
         * <code>AWS/</code>. CloudWatch RUM prepends <code>RUM/CustomMetrics/</code> to
         * the custom namespace that you define, so the final namespace for your metrics in
         * CloudWatch is <code>RUM/CustomMetrics/<i>your-custom-namespace</i> </code>.</p>
         * </li> </ul> <p>The maximum number of metric definitions that you can specify in
         * one <code>BatchCreateRumMetricDefinitions</code> operation is 200.</p> <p>The
         * maximum number of metric definitions that one destination can contain is
         * 2000.</p> <p>Extended metrics sent to CloudWatch and RUM custom metrics are
         * charged as CloudWatch custom metrics. Each combination of additional dimension
         * name and dimension value counts as a custom metric. For more information, see <a
         * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> <p>You must have already created a destination for the metrics
         * before you send them. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
         * <p>If some metric definitions specified in a
         * <code>BatchCreateRumMetricDefinitions</code> operations are not valid, those
         * metric definitions fail and return errors, but all valid metric definitions in
         * the same operation still succeed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/BatchCreateRumMetricDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateRumMetricDefinitionsOutcome BatchCreateRumMetricDefinitions(const Model::BatchCreateRumMetricDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateRumMetricDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateRumMetricDefinitionsRequestT = Model::BatchCreateRumMetricDefinitionsRequest>
        Model::BatchCreateRumMetricDefinitionsOutcomeCallable BatchCreateRumMetricDefinitionsCallable(const BatchCreateRumMetricDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::BatchCreateRumMetricDefinitions, request);
        }

        /**
         * An Async wrapper for BatchCreateRumMetricDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateRumMetricDefinitionsRequestT = Model::BatchCreateRumMetricDefinitionsRequest>
        void BatchCreateRumMetricDefinitionsAsync(const BatchCreateRumMetricDefinitionsRequestT& request, const BatchCreateRumMetricDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::BatchCreateRumMetricDefinitions, request, handler, context);
        }

        /**
         * <p>Removes the specified metrics from being sent to an extended metrics
         * destination.</p> <p>If some metric definition IDs specified in a
         * <code>BatchDeleteRumMetricDefinitions</code> operations are not valid, those
         * metric definitions fail and return errors, but all valid metric definition IDs
         * in the same operation are still deleted.</p> <p>The maximum number of metric
         * definitions that you can specify in one
         * <code>BatchDeleteRumMetricDefinitions</code> operation is 200.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/BatchDeleteRumMetricDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteRumMetricDefinitionsOutcome BatchDeleteRumMetricDefinitions(const Model::BatchDeleteRumMetricDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteRumMetricDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteRumMetricDefinitionsRequestT = Model::BatchDeleteRumMetricDefinitionsRequest>
        Model::BatchDeleteRumMetricDefinitionsOutcomeCallable BatchDeleteRumMetricDefinitionsCallable(const BatchDeleteRumMetricDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::BatchDeleteRumMetricDefinitions, request);
        }

        /**
         * An Async wrapper for BatchDeleteRumMetricDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteRumMetricDefinitionsRequestT = Model::BatchDeleteRumMetricDefinitionsRequest>
        void BatchDeleteRumMetricDefinitionsAsync(const BatchDeleteRumMetricDefinitionsRequestT& request, const BatchDeleteRumMetricDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::BatchDeleteRumMetricDefinitions, request, handler, context);
        }

        /**
         * <p>Retrieves the list of metrics and dimensions that a RUM app monitor is
         * sending to a single destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/BatchGetRumMetricDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRumMetricDefinitionsOutcome BatchGetRumMetricDefinitions(const Model::BatchGetRumMetricDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetRumMetricDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetRumMetricDefinitionsRequestT = Model::BatchGetRumMetricDefinitionsRequest>
        Model::BatchGetRumMetricDefinitionsOutcomeCallable BatchGetRumMetricDefinitionsCallable(const BatchGetRumMetricDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::BatchGetRumMetricDefinitions, request);
        }

        /**
         * An Async wrapper for BatchGetRumMetricDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetRumMetricDefinitionsRequestT = Model::BatchGetRumMetricDefinitionsRequest>
        void BatchGetRumMetricDefinitionsAsync(const BatchGetRumMetricDefinitionsRequestT& request, const BatchGetRumMetricDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::BatchGetRumMetricDefinitions, request, handler, context);
        }

        /**
         * <p>Creates a Amazon CloudWatch RUM app monitor, which collects telemetry data
         * from your application and sends that data to RUM. The data includes performance
         * and reliability information such as page load time, client-side errors, and user
         * behavior.</p> <p>You use this operation only to create a new app monitor. To
         * update an existing app monitor, use <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_UpdateAppMonitor.html">UpdateAppMonitor</a>
         * instead.</p> <p>After you create an app monitor, sign in to the CloudWatch RUM
         * console to get the JavaScript code snippet to add to your web application. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-find-code-snippet.html">How
         * do I find a code snippet that I've already generated?</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/CreateAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppMonitorOutcome CreateAppMonitor(const Model::CreateAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppMonitorRequestT = Model::CreateAppMonitorRequest>
        Model::CreateAppMonitorOutcomeCallable CreateAppMonitorCallable(const CreateAppMonitorRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::CreateAppMonitor, request);
        }

        /**
         * An Async wrapper for CreateAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppMonitorRequestT = Model::CreateAppMonitorRequest>
        void CreateAppMonitorAsync(const CreateAppMonitorRequestT& request, const CreateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::CreateAppMonitor, request, handler, context);
        }

        /**
         * <p>Deletes an existing app monitor. This immediately stops the collection of
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/DeleteAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppMonitorOutcome DeleteAppMonitor(const Model::DeleteAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppMonitorRequestT = Model::DeleteAppMonitorRequest>
        Model::DeleteAppMonitorOutcomeCallable DeleteAppMonitorCallable(const DeleteAppMonitorRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::DeleteAppMonitor, request);
        }

        /**
         * An Async wrapper for DeleteAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppMonitorRequestT = Model::DeleteAppMonitorRequest>
        void DeleteAppMonitorAsync(const DeleteAppMonitorRequestT& request, const DeleteAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::DeleteAppMonitor, request, handler, context);
        }

        /**
         * <p>Deletes a destination for CloudWatch RUM extended metrics, so that the
         * specified app monitor stops sending extended metrics to that
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/DeleteRumMetricsDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRumMetricsDestinationOutcome DeleteRumMetricsDestination(const Model::DeleteRumMetricsDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRumMetricsDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRumMetricsDestinationRequestT = Model::DeleteRumMetricsDestinationRequest>
        Model::DeleteRumMetricsDestinationOutcomeCallable DeleteRumMetricsDestinationCallable(const DeleteRumMetricsDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::DeleteRumMetricsDestination, request);
        }

        /**
         * An Async wrapper for DeleteRumMetricsDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRumMetricsDestinationRequestT = Model::DeleteRumMetricsDestinationRequest>
        void DeleteRumMetricsDestinationAsync(const DeleteRumMetricsDestinationRequestT& request, const DeleteRumMetricsDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::DeleteRumMetricsDestination, request, handler, context);
        }

        /**
         * <p>Retrieves the complete configuration information for one app
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/GetAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppMonitorOutcome GetAppMonitor(const Model::GetAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for GetAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppMonitorRequestT = Model::GetAppMonitorRequest>
        Model::GetAppMonitorOutcomeCallable GetAppMonitorCallable(const GetAppMonitorRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::GetAppMonitor, request);
        }

        /**
         * An Async wrapper for GetAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppMonitorRequestT = Model::GetAppMonitorRequest>
        void GetAppMonitorAsync(const GetAppMonitorRequestT& request, const GetAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::GetAppMonitor, request, handler, context);
        }

        /**
         * <p>Retrieves the raw performance events that RUM has collected from your web
         * application, so that you can do your own processing or analysis of this
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/GetAppMonitorData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppMonitorDataOutcome GetAppMonitorData(const Model::GetAppMonitorDataRequest& request) const;

        /**
         * A Callable wrapper for GetAppMonitorData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppMonitorDataRequestT = Model::GetAppMonitorDataRequest>
        Model::GetAppMonitorDataOutcomeCallable GetAppMonitorDataCallable(const GetAppMonitorDataRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::GetAppMonitorData, request);
        }

        /**
         * An Async wrapper for GetAppMonitorData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppMonitorDataRequestT = Model::GetAppMonitorDataRequest>
        void GetAppMonitorDataAsync(const GetAppMonitorDataRequestT& request, const GetAppMonitorDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::GetAppMonitorData, request, handler, context);
        }

        /**
         * <p>Returns a list of the Amazon CloudWatch RUM app monitors in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/ListAppMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppMonitorsOutcome ListAppMonitors(const Model::ListAppMonitorsRequest& request) const;

        /**
         * A Callable wrapper for ListAppMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppMonitorsRequestT = Model::ListAppMonitorsRequest>
        Model::ListAppMonitorsOutcomeCallable ListAppMonitorsCallable(const ListAppMonitorsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::ListAppMonitors, request);
        }

        /**
         * An Async wrapper for ListAppMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppMonitorsRequestT = Model::ListAppMonitorsRequest>
        void ListAppMonitorsAsync(const ListAppMonitorsRequestT& request, const ListAppMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::ListAppMonitors, request, handler, context);
        }

        /**
         * <p>Returns a list of destinations that you have created to receive RUM extended
         * metrics, for the specified app monitor.</p> <p>For more information about
         * extended metrics, see <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_AddRumMetrcs.html">AddRumMetrics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/ListRumMetricsDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRumMetricsDestinationsOutcome ListRumMetricsDestinations(const Model::ListRumMetricsDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListRumMetricsDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRumMetricsDestinationsRequestT = Model::ListRumMetricsDestinationsRequest>
        Model::ListRumMetricsDestinationsOutcomeCallable ListRumMetricsDestinationsCallable(const ListRumMetricsDestinationsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::ListRumMetricsDestinations, request);
        }

        /**
         * An Async wrapper for ListRumMetricsDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRumMetricsDestinationsRequestT = Model::ListRumMetricsDestinationsRequest>
        void ListRumMetricsDestinationsAsync(const ListRumMetricsDestinationsRequestT& request, const ListRumMetricsDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::ListRumMetricsDestinations, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a CloudWatch RUM resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sends telemetry events about your application performance and user behavior
         * to CloudWatch RUM. The code snippet that RUM generates for you to add to your
         * application includes <code>PutRumEvents</code> operations to send this data to
         * RUM.</p> <p>Each <code>PutRumEvents</code> operation can send a batch of events
         * from one user session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/PutRumEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRumEventsOutcome PutRumEvents(const Model::PutRumEventsRequest& request) const;

        /**
         * A Callable wrapper for PutRumEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRumEventsRequestT = Model::PutRumEventsRequest>
        Model::PutRumEventsOutcomeCallable PutRumEventsCallable(const PutRumEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::PutRumEvents, request);
        }

        /**
         * An Async wrapper for PutRumEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRumEventsRequestT = Model::PutRumEventsRequest>
        void PutRumEventsAsync(const PutRumEventsRequestT& request, const PutRumEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::PutRumEvents, request, handler, context);
        }

        /**
         * <p>Creates or updates a destination to receive extended metrics from CloudWatch
         * RUM. You can send extended metrics to CloudWatch or to a CloudWatch Evidently
         * experiment.</p> <p>For more information about extended metrics, see <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_BatchCreateRumMetricDefinitions.html">BatchCreateRumMetricDefinitions</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/PutRumMetricsDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRumMetricsDestinationOutcome PutRumMetricsDestination(const Model::PutRumMetricsDestinationRequest& request) const;

        /**
         * A Callable wrapper for PutRumMetricsDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRumMetricsDestinationRequestT = Model::PutRumMetricsDestinationRequest>
        Model::PutRumMetricsDestinationOutcomeCallable PutRumMetricsDestinationCallable(const PutRumMetricsDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::PutRumMetricsDestination, request);
        }

        /**
         * An Async wrapper for PutRumMetricsDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRumMetricsDestinationRequestT = Model::PutRumMetricsDestinationRequest>
        void PutRumMetricsDestinationAsync(const PutRumMetricsDestinationRequestT& request, const PutRumMetricsDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::PutRumMetricsDestination, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch RUM
         * resource. Currently, the only resources that can be tagged app monitors.</p>
         * <p>Tags can help you organize and categorize your resources. You can also use
         * them to scope user permissions by granting a user permission to access or change
         * only resources with certain tag values.</p> <p>Tags don't have any semantic
         * meaning to Amazon Web Services and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the alarm. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a resource.</p> <p>For more information, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing app monitor. When you use this
         * operation, only the parts of the app monitor configuration that you specify in
         * this operation are changed. For any parameters that you omit, the existing
         * values are kept.</p> <p>You can't use this operation to change the tags of an
         * existing app monitor. To change the tags of an existing app monitor, use <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
         * <p>To create a new app monitor, use <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_CreateAppMonitor.html">CreateAppMonitor</a>.</p>
         * <p>After you update an app monitor, sign in to the CloudWatch RUM console to get
         * the updated JavaScript code snippet to add to your web application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-find-code-snippet.html">How
         * do I find a code snippet that I've already generated?</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/UpdateAppMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppMonitorOutcome UpdateAppMonitor(const Model::UpdateAppMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppMonitorRequestT = Model::UpdateAppMonitorRequest>
        Model::UpdateAppMonitorOutcomeCallable UpdateAppMonitorCallable(const UpdateAppMonitorRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::UpdateAppMonitor, request);
        }

        /**
         * An Async wrapper for UpdateAppMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppMonitorRequestT = Model::UpdateAppMonitorRequest>
        void UpdateAppMonitorAsync(const UpdateAppMonitorRequestT& request, const UpdateAppMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::UpdateAppMonitor, request, handler, context);
        }

        /**
         * <p>Modifies one existing metric definition for CloudWatch RUM extended metrics.
         * For more information about extended metrics, see <a
         * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_BatchCreateRumMetricsDefinitions.html">BatchCreateRumMetricsDefinitions</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/UpdateRumMetricDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRumMetricDefinitionOutcome UpdateRumMetricDefinition(const Model::UpdateRumMetricDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRumMetricDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRumMetricDefinitionRequestT = Model::UpdateRumMetricDefinitionRequest>
        Model::UpdateRumMetricDefinitionOutcomeCallable UpdateRumMetricDefinitionCallable(const UpdateRumMetricDefinitionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchRUMClient::UpdateRumMetricDefinition, request);
        }

        /**
         * An Async wrapper for UpdateRumMetricDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRumMetricDefinitionRequestT = Model::UpdateRumMetricDefinitionRequest>
        void UpdateRumMetricDefinitionAsync(const UpdateRumMetricDefinitionRequestT& request, const UpdateRumMetricDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchRUMClient::UpdateRumMetricDefinition, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudWatchRUMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchRUMClient>;
      void init(const CloudWatchRUMClientConfiguration& clientConfiguration);

      CloudWatchRUMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudWatchRUMEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudWatchRUM
} // namespace Aws
