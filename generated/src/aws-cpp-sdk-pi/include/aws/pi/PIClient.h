/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pi/PIServiceClientModel.h>

namespace Aws
{
namespace PI
{
  /**
   * <fullname>Amazon RDS Performance Insights</fullname> <p>Amazon RDS Performance
   * Insights enables you to monitor and explore different dimensions of database
   * load based on data captured from a running DB instance. The guide provides
   * detailed information about Performance Insights data types, parameters and
   * errors.</p> <p>When Performance Insights is enabled, the Amazon RDS Performance
   * Insights API provides visibility into the performance of your DB instance.
   * Amazon CloudWatch provides the authoritative source for Amazon Web Services
   * service-vended monitoring metrics. Performance Insights offers a domain-specific
   * view of DB load.</p> <p>DB load is measured as average active sessions.
   * Performance Insights provides the data to API consumers as a two-dimensional
   * time-series dataset. The time dimension provides DB load data for each time
   * point in the queried time range. Each time point decomposes overall load in
   * relation to the requested dimensions, measured at that time point. Examples
   * include SQL, Wait event, User, and Host.</p> <ul> <li> <p>To learn more about
   * Performance Insights and Amazon Aurora DB instances, go to the <i> <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">
   * Amazon Aurora User Guide</a> </i>. </p> </li> <li> <p>To learn more about
   * Performance Insights and Amazon RDS DB instances, go to the <i> <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
   * Amazon RDS User Guide</a> </i>. </p> </li> <li> <p>To learn more about
   * Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
   * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html">
   * Amazon DocumentDB Developer Guide</a> </i>.</p> </li> </ul>
   */
  class AWS_PI_API PIClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PIClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PIClientConfiguration ClientConfigurationType;
      typedef PIEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PIClient(const Aws::PI::PIClientConfiguration& clientConfiguration = Aws::PI::PIClientConfiguration(),
                 std::shared_ptr<PIEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PIClient(const Aws::Auth::AWSCredentials& credentials,
                 std::shared_ptr<PIEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::PI::PIClientConfiguration& clientConfiguration = Aws::PI::PIClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<PIEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::PI::PIClientConfiguration& clientConfiguration = Aws::PI::PIClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PIClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PIClient(const Aws::Auth::AWSCredentials& credentials,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PIClient();

        /**
         * <p>Creates a new performance analysis report for a specific time period for the
         * DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/CreatePerformanceAnalysisReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePerformanceAnalysisReportOutcome CreatePerformanceAnalysisReport(const Model::CreatePerformanceAnalysisReportRequest& request) const;

        /**
         * A Callable wrapper for CreatePerformanceAnalysisReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePerformanceAnalysisReportRequestT = Model::CreatePerformanceAnalysisReportRequest>
        Model::CreatePerformanceAnalysisReportOutcomeCallable CreatePerformanceAnalysisReportCallable(const CreatePerformanceAnalysisReportRequestT& request) const
        {
            return SubmitCallable(&PIClient::CreatePerformanceAnalysisReport, request);
        }

        /**
         * An Async wrapper for CreatePerformanceAnalysisReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePerformanceAnalysisReportRequestT = Model::CreatePerformanceAnalysisReportRequest>
        void CreatePerformanceAnalysisReportAsync(const CreatePerformanceAnalysisReportRequestT& request, const CreatePerformanceAnalysisReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::CreatePerformanceAnalysisReport, request, handler, context);
        }

        /**
         * <p>Deletes a performance analysis report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DeletePerformanceAnalysisReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePerformanceAnalysisReportOutcome DeletePerformanceAnalysisReport(const Model::DeletePerformanceAnalysisReportRequest& request) const;

        /**
         * A Callable wrapper for DeletePerformanceAnalysisReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePerformanceAnalysisReportRequestT = Model::DeletePerformanceAnalysisReportRequest>
        Model::DeletePerformanceAnalysisReportOutcomeCallable DeletePerformanceAnalysisReportCallable(const DeletePerformanceAnalysisReportRequestT& request) const
        {
            return SubmitCallable(&PIClient::DeletePerformanceAnalysisReport, request);
        }

        /**
         * An Async wrapper for DeletePerformanceAnalysisReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePerformanceAnalysisReportRequestT = Model::DeletePerformanceAnalysisReportRequest>
        void DeletePerformanceAnalysisReportAsync(const DeletePerformanceAnalysisReportRequestT& request, const DeletePerformanceAnalysisReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::DeletePerformanceAnalysisReport, request, handler, context);
        }

        /**
         * <p>For a specific time period, retrieve the top <code>N</code> dimension keys
         * for a metric. </p>  <p>Each response element returns a maximum of 500
         * bytes. For larger elements, such as SQL statements, only the first 500 bytes are
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DescribeDimensionKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDimensionKeysOutcome DescribeDimensionKeys(const Model::DescribeDimensionKeysRequest& request) const;

        /**
         * A Callable wrapper for DescribeDimensionKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDimensionKeysRequestT = Model::DescribeDimensionKeysRequest>
        Model::DescribeDimensionKeysOutcomeCallable DescribeDimensionKeysCallable(const DescribeDimensionKeysRequestT& request) const
        {
            return SubmitCallable(&PIClient::DescribeDimensionKeys, request);
        }

        /**
         * An Async wrapper for DescribeDimensionKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDimensionKeysRequestT = Model::DescribeDimensionKeysRequest>
        void DescribeDimensionKeysAsync(const DescribeDimensionKeysRequestT& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::DescribeDimensionKeys, request, handler, context);
        }

        /**
         * <p>Get the attributes of the specified dimension group for a DB instance or data
         * source. For example, if you specify a SQL ID,
         * <code>GetDimensionKeyDetails</code> retrieves the full text of the dimension
         * <code>db.sql.statement</code> associated with this ID. This operation is useful
         * because <code>GetResourceMetrics</code> and <code>DescribeDimensionKeys</code>
         * don't support retrieval of large SQL statement text.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetDimensionKeyDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDimensionKeyDetailsOutcome GetDimensionKeyDetails(const Model::GetDimensionKeyDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetDimensionKeyDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDimensionKeyDetailsRequestT = Model::GetDimensionKeyDetailsRequest>
        Model::GetDimensionKeyDetailsOutcomeCallable GetDimensionKeyDetailsCallable(const GetDimensionKeyDetailsRequestT& request) const
        {
            return SubmitCallable(&PIClient::GetDimensionKeyDetails, request);
        }

        /**
         * An Async wrapper for GetDimensionKeyDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDimensionKeyDetailsRequestT = Model::GetDimensionKeyDetailsRequest>
        void GetDimensionKeyDetailsAsync(const GetDimensionKeyDetailsRequestT& request, const GetDimensionKeyDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::GetDimensionKeyDetails, request, handler, context);
        }

        /**
         * <p>Retrieves the report including the report ID, status, time details, and the
         * insights with recommendations. The report status can be <code>RUNNING</code>,
         * <code>SUCCEEDED</code>, or <code>FAILED</code>. The insights include the
         * <code>description</code> and <code>recommendation</code> fields. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetPerformanceAnalysisReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPerformanceAnalysisReportOutcome GetPerformanceAnalysisReport(const Model::GetPerformanceAnalysisReportRequest& request) const;

        /**
         * A Callable wrapper for GetPerformanceAnalysisReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPerformanceAnalysisReportRequestT = Model::GetPerformanceAnalysisReportRequest>
        Model::GetPerformanceAnalysisReportOutcomeCallable GetPerformanceAnalysisReportCallable(const GetPerformanceAnalysisReportRequestT& request) const
        {
            return SubmitCallable(&PIClient::GetPerformanceAnalysisReport, request);
        }

        /**
         * An Async wrapper for GetPerformanceAnalysisReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPerformanceAnalysisReportRequestT = Model::GetPerformanceAnalysisReportRequest>
        void GetPerformanceAnalysisReportAsync(const GetPerformanceAnalysisReportRequestT& request, const GetPerformanceAnalysisReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::GetPerformanceAnalysisReport, request, handler, context);
        }

        /**
         * <p>Retrieve the metadata for different features. For example, the metadata might
         * indicate that a feature is turned on or off on a specific DB instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceMetadataOutcome GetResourceMetadata(const Model::GetResourceMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetResourceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceMetadataRequestT = Model::GetResourceMetadataRequest>
        Model::GetResourceMetadataOutcomeCallable GetResourceMetadataCallable(const GetResourceMetadataRequestT& request) const
        {
            return SubmitCallable(&PIClient::GetResourceMetadata, request);
        }

        /**
         * An Async wrapper for GetResourceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceMetadataRequestT = Model::GetResourceMetadataRequest>
        void GetResourceMetadataAsync(const GetResourceMetadataRequestT& request, const GetResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::GetResourceMetadata, request, handler, context);
        }

        /**
         * <p>Retrieve Performance Insights metrics for a set of data sources over a time
         * period. You can provide specific dimension groups and dimensions, and provide
         * aggregation and filtering criteria for each group.</p>  <p>Each response
         * element returns a maximum of 500 bytes. For larger elements, such as SQL
         * statements, only the first 500 bytes are returned.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/GetResourceMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceMetricsOutcome GetResourceMetrics(const Model::GetResourceMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceMetricsRequestT = Model::GetResourceMetricsRequest>
        Model::GetResourceMetricsOutcomeCallable GetResourceMetricsCallable(const GetResourceMetricsRequestT& request) const
        {
            return SubmitCallable(&PIClient::GetResourceMetrics, request);
        }

        /**
         * An Async wrapper for GetResourceMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceMetricsRequestT = Model::GetResourceMetricsRequest>
        void GetResourceMetricsAsync(const GetResourceMetricsRequestT& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::GetResourceMetrics, request, handler, context);
        }

        /**
         * <p>Retrieve the dimensions that can be queried for each specified metric type on
         * a specified DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ListAvailableResourceDimensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableResourceDimensionsOutcome ListAvailableResourceDimensions(const Model::ListAvailableResourceDimensionsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableResourceDimensions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableResourceDimensionsRequestT = Model::ListAvailableResourceDimensionsRequest>
        Model::ListAvailableResourceDimensionsOutcomeCallable ListAvailableResourceDimensionsCallable(const ListAvailableResourceDimensionsRequestT& request) const
        {
            return SubmitCallable(&PIClient::ListAvailableResourceDimensions, request);
        }

        /**
         * An Async wrapper for ListAvailableResourceDimensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableResourceDimensionsRequestT = Model::ListAvailableResourceDimensionsRequest>
        void ListAvailableResourceDimensionsAsync(const ListAvailableResourceDimensionsRequestT& request, const ListAvailableResourceDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::ListAvailableResourceDimensions, request, handler, context);
        }

        /**
         * <p>Retrieve metrics of the specified types that can be queried for a specified
         * DB instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ListAvailableResourceMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableResourceMetricsOutcome ListAvailableResourceMetrics(const Model::ListAvailableResourceMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableResourceMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableResourceMetricsRequestT = Model::ListAvailableResourceMetricsRequest>
        Model::ListAvailableResourceMetricsOutcomeCallable ListAvailableResourceMetricsCallable(const ListAvailableResourceMetricsRequestT& request) const
        {
            return SubmitCallable(&PIClient::ListAvailableResourceMetrics, request);
        }

        /**
         * An Async wrapper for ListAvailableResourceMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableResourceMetricsRequestT = Model::ListAvailableResourceMetricsRequest>
        void ListAvailableResourceMetricsAsync(const ListAvailableResourceMetricsRequestT& request, const ListAvailableResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::ListAvailableResourceMetrics, request, handler, context);
        }

        /**
         * <p>Lists all the analysis reports created for the DB instance. The reports are
         * sorted based on the start time of each report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ListPerformanceAnalysisReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPerformanceAnalysisReportsOutcome ListPerformanceAnalysisReports(const Model::ListPerformanceAnalysisReportsRequest& request) const;

        /**
         * A Callable wrapper for ListPerformanceAnalysisReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPerformanceAnalysisReportsRequestT = Model::ListPerformanceAnalysisReportsRequest>
        Model::ListPerformanceAnalysisReportsOutcomeCallable ListPerformanceAnalysisReportsCallable(const ListPerformanceAnalysisReportsRequestT& request) const
        {
            return SubmitCallable(&PIClient::ListPerformanceAnalysisReports, request);
        }

        /**
         * An Async wrapper for ListPerformanceAnalysisReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPerformanceAnalysisReportsRequestT = Model::ListPerformanceAnalysisReportsRequest>
        void ListPerformanceAnalysisReportsAsync(const ListPerformanceAnalysisReportsRequestT& request, const ListPerformanceAnalysisReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::ListPerformanceAnalysisReports, request, handler, context);
        }

        /**
         * <p>Retrieves all the metadata tags associated with Amazon RDS Performance
         * Insights resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PIClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to the Amazon RDS Performance Insights
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PIClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes the metadata tags from the Amazon RDS Performance Insights
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PIClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PIClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PIEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PIClient>;
      void init(const PIClientConfiguration& clientConfiguration);

      PIClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PIEndpointProviderBase> m_endpointProvider;
  };

} // namespace PI
} // namespace Aws
