/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/monitoring/CloudWatchServiceClientModel.h>

namespace Aws
{
namespace CloudWatch
{
  /**
   * <p>Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services)
   * resources and the applications you run on Amazon Web Services in real time. You
   * can use CloudWatch to collect and track metrics, which are the variables you
   * want to measure for your resources and applications.</p> <p>CloudWatch alarms
   * send notifications or automatically change the resources you are monitoring
   * based on rules that you define. For example, you can monitor the CPU usage and
   * disk reads and writes of your Amazon EC2 instances. Then, use this data to
   * determine whether you should launch additional instances to handle increased
   * load. You can also use this data to stop under-used instances to save money.</p>
   * <p>In addition to monitoring the built-in metrics that come with Amazon Web
   * Services, you can monitor your own custom metrics. With CloudWatch, you gain
   * system-wide visibility into resource utilization, application performance, and
   * operational health.</p>
   */
  class AWS_CLOUDWATCH_API CloudWatchClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudWatchClientConfiguration ClientConfigurationType;
      typedef CloudWatchEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Aws::CloudWatch::CloudWatchClientConfiguration& clientConfiguration = Aws::CloudWatch::CloudWatchClientConfiguration(),
                         std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudWatch::CloudWatchClientConfiguration& clientConfiguration = Aws::CloudWatch::CloudWatchClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudWatch::CloudWatchClientConfiguration& clientConfiguration = Aws::CloudWatch::CloudWatchClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudWatchClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Deletes the specified alarms. You can delete up to 100 alarms in one
         * operation. However, this total can include no more than one composite alarm. For
         * example, you could delete 99 metric alarms and one composite alarms with one
         * operation, but you can't delete two composite alarms with one operation.</p> <p>
         * If you specify an incorrect alarm name or make any other error in the operation,
         * no alarms are deleted. To confirm that alarms were deleted successfully, you can
         * use the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeAlarms.html">DescribeAlarms</a>
         * operation after using <code>DeleteAlarms</code>.</p>  <p>It is possible to
         * create a loop or cycle of composite alarms, where composite alarm A depends on
         * composite alarm B, and composite alarm B also depends on composite alarm A. In
         * this scenario, you can't delete any composite alarm that is part of the cycle
         * because there is always still a composite alarm that depends on that alarm that
         * you want to delete.</p> <p>To get out of such a situation, you must break the
         * cycle by changing the rule of one of the composite alarms in the cycle to remove
         * a dependency that creates the cycle. The simplest change to make to break a
         * cycle is to change the <code>AlarmRule</code> of one of the alarms to
         * <code>false</code>. </p> <p>Additionally, the evaluation of composite alarms
         * stops if CloudWatch detects a cycle in the evaluation path. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmsOutcome DeleteAlarms(const Model::DeleteAlarmsRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlarms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlarmsRequestT = Model::DeleteAlarmsRequest>
        Model::DeleteAlarmsOutcomeCallable DeleteAlarmsCallable(const DeleteAlarmsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DeleteAlarms, request);
        }

        /**
         * An Async wrapper for DeleteAlarms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlarmsRequestT = Model::DeleteAlarmsRequest>
        void DeleteAlarmsAsync(const DeleteAlarmsRequestT& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DeleteAlarms, request, handler, context);
        }

        /**
         * <p> Deletes the specified anomaly detection model from your account. For more
         * information about how to delete an anomaly detection model, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Create_Anomaly_Detection_Alarm.html#Delete_Anomaly_Detection_Model">Deleting
         * an anomaly detection model</a> in the <i>CloudWatch User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnomalyDetectorOutcome DeleteAnomalyDetector(const Model::DeleteAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnomalyDetectorRequestT = Model::DeleteAnomalyDetectorRequest>
        Model::DeleteAnomalyDetectorOutcomeCallable DeleteAnomalyDetectorCallable(const DeleteAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DeleteAnomalyDetector, request);
        }

        /**
         * An Async wrapper for DeleteAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnomalyDetectorRequestT = Model::DeleteAnomalyDetectorRequest>
        void DeleteAnomalyDetectorAsync(const DeleteAnomalyDetectorRequestT& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DeleteAnomalyDetector, request, handler, context);
        }

        /**
         * <p>Deletes all dashboards that you specify. You can specify up to 100 dashboards
         * to delete. If there is an error during this call, no dashboards are
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDashboardsOutcome DeleteDashboards(const Model::DeleteDashboardsRequest& request) const;

        /**
         * A Callable wrapper for DeleteDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDashboardsRequestT = Model::DeleteDashboardsRequest>
        Model::DeleteDashboardsOutcomeCallable DeleteDashboardsCallable(const DeleteDashboardsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DeleteDashboards, request);
        }

        /**
         * An Async wrapper for DeleteDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDashboardsRequestT = Model::DeleteDashboardsRequest>
        void DeleteDashboardsAsync(const DeleteDashboardsRequestT& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DeleteDashboards, request, handler, context);
        }

        /**
         * <p>Permanently deletes the specified Contributor Insights rules.</p> <p>If you
         * create a rule, delete it, and then re-create it with the same name, historical
         * data from the first time the rule was created might not be
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightRulesOutcome DeleteInsightRules(const Model::DeleteInsightRulesRequest& request) const;

        /**
         * A Callable wrapper for DeleteInsightRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInsightRulesRequestT = Model::DeleteInsightRulesRequest>
        Model::DeleteInsightRulesOutcomeCallable DeleteInsightRulesCallable(const DeleteInsightRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DeleteInsightRules, request);
        }

        /**
         * An Async wrapper for DeleteInsightRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInsightRulesRequestT = Model::DeleteInsightRulesRequest>
        void DeleteInsightRulesAsync(const DeleteInsightRulesRequestT& request, const DeleteInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DeleteInsightRules, request, handler, context);
        }

        /**
         * <p>Permanently deletes the metric stream that you specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DeleteMetricStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMetricStreamOutcome DeleteMetricStream(const Model::DeleteMetricStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteMetricStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMetricStreamRequestT = Model::DeleteMetricStreamRequest>
        Model::DeleteMetricStreamOutcomeCallable DeleteMetricStreamCallable(const DeleteMetricStreamRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DeleteMetricStream, request);
        }

        /**
         * An Async wrapper for DeleteMetricStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMetricStreamRequestT = Model::DeleteMetricStreamRequest>
        void DeleteMetricStreamAsync(const DeleteMetricStreamRequestT& request, const DeleteMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DeleteMetricStream, request, handler, context);
        }

        /**
         * <p>Retrieves the history for the specified alarm. You can filter the results by
         * date range or item type. If an alarm name is not specified, the histories for
         * either all metric alarms or all composite alarms are returned.</p> <p>CloudWatch
         * retains the history of an alarm even if you delete the alarm.</p> <p>To use this
         * operation and return information about a composite alarm, you must be signed on
         * with the <code>cloudwatch:DescribeAlarmHistory</code> permission that is scoped
         * to <code>*</code>. You can't return information about composite alarms if your
         * <code>cloudwatch:DescribeAlarmHistory</code> permission has a narrower
         * scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmHistoryOutcome DescribeAlarmHistory(const Model::DescribeAlarmHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlarmHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlarmHistoryRequestT = Model::DescribeAlarmHistoryRequest>
        Model::DescribeAlarmHistoryOutcomeCallable DescribeAlarmHistoryCallable(const DescribeAlarmHistoryRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DescribeAlarmHistory, request);
        }

        /**
         * An Async wrapper for DescribeAlarmHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlarmHistoryRequestT = Model::DescribeAlarmHistoryRequest>
        void DescribeAlarmHistoryAsync(const DescribeAlarmHistoryRequestT& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DescribeAlarmHistory, request, handler, context);
        }

        /**
         * <p>Retrieves the specified alarms. You can filter the results by specifying a
         * prefix for the alarm name, the alarm state, or a prefix for any action.</p>
         * <p>To use this operation and return information about composite alarms, you must
         * be signed on with the <code>cloudwatch:DescribeAlarms</code> permission that is
         * scoped to <code>*</code>. You can't return information about composite alarms if
         * your <code>cloudwatch:DescribeAlarms</code> permission has a narrower
         * scope.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlarms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlarmsRequestT = Model::DescribeAlarmsRequest>
        Model::DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const DescribeAlarmsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DescribeAlarms, request);
        }

        /**
         * An Async wrapper for DescribeAlarms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlarmsRequestT = Model::DescribeAlarmsRequest>
        void DescribeAlarmsAsync(const DescribeAlarmsRequestT& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DescribeAlarms, request, handler, context);
        }

        /**
         * <p>Retrieves the alarms for the specified metric. To filter the results, specify
         * a statistic, period, or unit.</p> <p>This operation retrieves only standard
         * alarms that are based on the specified metric. It does not return alarms based
         * on math expressions that use the specified metric, or composite alarms that use
         * the specified metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAlarmsForMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlarmsForMetricOutcome DescribeAlarmsForMetric(const Model::DescribeAlarmsForMetricRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlarmsForMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlarmsForMetricRequestT = Model::DescribeAlarmsForMetricRequest>
        Model::DescribeAlarmsForMetricOutcomeCallable DescribeAlarmsForMetricCallable(const DescribeAlarmsForMetricRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DescribeAlarmsForMetric, request);
        }

        /**
         * An Async wrapper for DescribeAlarmsForMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlarmsForMetricRequestT = Model::DescribeAlarmsForMetricRequest>
        void DescribeAlarmsForMetricAsync(const DescribeAlarmsForMetricRequestT& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DescribeAlarmsForMetric, request, handler, context);
        }

        /**
         * <p>Lists the anomaly detection models that you have created in your account. For
         * single metric anomaly detectors, you can list all of the models in your account
         * or filter the results to only the models that are related to a certain
         * namespace, metric name, or metric dimension. For metric math anomaly detectors,
         * you can list them by adding <code>METRIC_MATH</code> to the
         * <code>AnomalyDetectorTypes</code> array. This will return all metric math
         * anomaly detectors in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeAnomalyDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyDetectorsOutcome DescribeAnomalyDetectors(const Model::DescribeAnomalyDetectorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnomalyDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAnomalyDetectorsRequestT = Model::DescribeAnomalyDetectorsRequest>
        Model::DescribeAnomalyDetectorsOutcomeCallable DescribeAnomalyDetectorsCallable(const DescribeAnomalyDetectorsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DescribeAnomalyDetectors, request);
        }

        /**
         * An Async wrapper for DescribeAnomalyDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnomalyDetectorsRequestT = Model::DescribeAnomalyDetectorsRequest>
        void DescribeAnomalyDetectorsAsync(const DescribeAnomalyDetectorsRequestT& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DescribeAnomalyDetectors, request, handler, context);
        }

        /**
         * <p>Returns a list of all the Contributor Insights rules in your account.</p>
         * <p>For more information about Contributor Insights, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DescribeInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInsightRulesOutcome DescribeInsightRules(const Model::DescribeInsightRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInsightRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInsightRulesRequestT = Model::DescribeInsightRulesRequest>
        Model::DescribeInsightRulesOutcomeCallable DescribeInsightRulesCallable(const DescribeInsightRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DescribeInsightRules, request);
        }

        /**
         * An Async wrapper for DescribeInsightRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInsightRulesRequestT = Model::DescribeInsightRulesRequest>
        void DescribeInsightRulesAsync(const DescribeInsightRulesRequestT& request, const DescribeInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DescribeInsightRules, request, handler, context);
        }

        /**
         * <p>Disables the actions for the specified alarms. When an alarm's actions are
         * disabled, the alarm actions do not execute when the alarm state
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableAlarmActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAlarmActionsOutcome DisableAlarmActions(const Model::DisableAlarmActionsRequest& request) const;

        /**
         * A Callable wrapper for DisableAlarmActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableAlarmActionsRequestT = Model::DisableAlarmActionsRequest>
        Model::DisableAlarmActionsOutcomeCallable DisableAlarmActionsCallable(const DisableAlarmActionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DisableAlarmActions, request);
        }

        /**
         * An Async wrapper for DisableAlarmActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableAlarmActionsRequestT = Model::DisableAlarmActionsRequest>
        void DisableAlarmActionsAsync(const DisableAlarmActionsRequestT& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DisableAlarmActions, request, handler, context);
        }

        /**
         * <p>Disables the specified Contributor Insights rules. When rules are disabled,
         * they do not analyze log groups and do not incur costs.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DisableInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableInsightRulesOutcome DisableInsightRules(const Model::DisableInsightRulesRequest& request) const;

        /**
         * A Callable wrapper for DisableInsightRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableInsightRulesRequestT = Model::DisableInsightRulesRequest>
        Model::DisableInsightRulesOutcomeCallable DisableInsightRulesCallable(const DisableInsightRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::DisableInsightRules, request);
        }

        /**
         * An Async wrapper for DisableInsightRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableInsightRulesRequestT = Model::DisableInsightRulesRequest>
        void DisableInsightRulesAsync(const DisableInsightRulesRequestT& request, const DisableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::DisableInsightRules, request, handler, context);
        }

        /**
         * <p>Enables the actions for the specified alarms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableAlarmActions">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAlarmActionsOutcome EnableAlarmActions(const Model::EnableAlarmActionsRequest& request) const;

        /**
         * A Callable wrapper for EnableAlarmActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableAlarmActionsRequestT = Model::EnableAlarmActionsRequest>
        Model::EnableAlarmActionsOutcomeCallable EnableAlarmActionsCallable(const EnableAlarmActionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::EnableAlarmActions, request);
        }

        /**
         * An Async wrapper for EnableAlarmActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableAlarmActionsRequestT = Model::EnableAlarmActionsRequest>
        void EnableAlarmActionsAsync(const EnableAlarmActionsRequestT& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::EnableAlarmActions, request, handler, context);
        }

        /**
         * <p>Enables the specified Contributor Insights rules. When rules are enabled,
         * they immediately begin analyzing log data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EnableInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableInsightRulesOutcome EnableInsightRules(const Model::EnableInsightRulesRequest& request) const;

        /**
         * A Callable wrapper for EnableInsightRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableInsightRulesRequestT = Model::EnableInsightRulesRequest>
        Model::EnableInsightRulesOutcomeCallable EnableInsightRulesCallable(const EnableInsightRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::EnableInsightRules, request);
        }

        /**
         * An Async wrapper for EnableInsightRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableInsightRulesRequestT = Model::EnableInsightRulesRequest>
        void EnableInsightRulesAsync(const EnableInsightRulesRequestT& request, const EnableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::EnableInsightRules, request, handler, context);
        }

        /**
         * <p>Displays the details of the dashboard that you specify.</p> <p>To copy an
         * existing dashboard, use <code>GetDashboard</code>, and then use the data
         * returned within <code>DashboardBody</code> as the template for the new dashboard
         * when you call <code>PutDashboard</code> to create the copy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDashboardOutcome GetDashboard(const Model::GetDashboardRequest& request) const;

        /**
         * A Callable wrapper for GetDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDashboardRequestT = Model::GetDashboardRequest>
        Model::GetDashboardOutcomeCallable GetDashboardCallable(const GetDashboardRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::GetDashboard, request);
        }

        /**
         * An Async wrapper for GetDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDashboardRequestT = Model::GetDashboardRequest>
        void GetDashboardAsync(const GetDashboardRequestT& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::GetDashboard, request, handler, context);
        }

        /**
         * <p>This operation returns the time series data collected by a Contributor
         * Insights rule. The data includes the identity and number of contributors to the
         * log group.</p> <p>You can also optionally return one or more statistics about
         * each data point in the time series. These statistics can include the
         * following:</p> <ul> <li> <p> <code>UniqueContributors</code> -- the number of
         * unique contributors for each data point.</p> </li> <li> <p>
         * <code>MaxContributorValue</code> -- the value of the top contributor for each
         * data point. The identity of the contributor might change for each data point in
         * the graph.</p> <p>If this rule aggregates by COUNT, the top contributor for each
         * data point is the contributor with the most occurrences in that period. If the
         * rule aggregates by SUM, the top contributor is the contributor with the highest
         * sum in the log field specified by the rule's <code>Value</code>, during that
         * period.</p> </li> <li> <p> <code>SampleCount</code> -- the number of data points
         * matched by the rule.</p> </li> <li> <p> <code>Sum</code> -- the sum of the
         * values from all contributors during the time period represented by that data
         * point.</p> </li> <li> <p> <code>Minimum</code> -- the minimum value from a
         * single observation during the time period represented by that data point.</p>
         * </li> <li> <p> <code>Maximum</code> -- the maximum value from a single
         * observation during the time period represented by that data point.</p> </li>
         * <li> <p> <code>Average</code> -- the average value from all contributors during
         * the time period represented by that data point.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetInsightRuleReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightRuleReportOutcome GetInsightRuleReport(const Model::GetInsightRuleReportRequest& request) const;

        /**
         * A Callable wrapper for GetInsightRuleReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightRuleReportRequestT = Model::GetInsightRuleReportRequest>
        Model::GetInsightRuleReportOutcomeCallable GetInsightRuleReportCallable(const GetInsightRuleReportRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::GetInsightRuleReport, request);
        }

        /**
         * An Async wrapper for GetInsightRuleReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightRuleReportRequestT = Model::GetInsightRuleReportRequest>
        void GetInsightRuleReportAsync(const GetInsightRuleReportRequestT& request, const GetInsightRuleReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::GetInsightRuleReport, request, handler, context);
        }

        /**
         * <p>You can use the <code>GetMetricData</code> API to retrieve CloudWatch metric
         * values. The operation can also include a CloudWatch Metrics Insights query, and
         * one or more metric math functions.</p> <p>A <code>GetMetricData</code> operation
         * that does not include a query can retrieve as many as 500 different metrics in a
         * single request, with a total of as many as 100,800 data points. You can also
         * optionally perform metric math expressions on the values of the returned
         * statistics, to create new time series that represent new insights into your
         * data. For example, using Lambda metrics, you could divide the Errors metric by
         * the Invocations metric to get an error rate time series. For more information
         * about metric math expressions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
         * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
         * <p>If you include a Metrics Insights query, each <code>GetMetricData</code>
         * operation can include only one query. But the same <code>GetMetricData</code>
         * operation can also retrieve other metrics. Metrics Insights queries can query
         * only the most recent three hours of metric data. For more information about
         * Metrics Insights, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/query_with_cloudwatch-metrics-insights.html">Query
         * your metrics with CloudWatch Metrics Insights</a>.</p> <p>Calls to the
         * <code>GetMetricData</code> API have a different pricing structure than calls to
         * <code>GetMetricStatistics</code>. For more information about pricing, see <a
         * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> <p>Amazon CloudWatch retains metric data as follows:</p> <ul>
         * <li> <p>Data points with a period of less than 60 seconds are available for 3
         * hours. These data points are high-resolution metrics and are available only for
         * custom metrics that have been defined with a <code>StorageResolution</code> of
         * 1.</p> </li> <li> <p>Data points with a period of 60 seconds (1-minute) are
         * available for 15 days.</p> </li> <li> <p>Data points with a period of 300
         * seconds (5-minute) are available for 63 days.</p> </li> <li> <p>Data points with
         * a period of 3600 seconds (1 hour) are available for 455 days (15 months).</p>
         * </li> </ul> <p>Data points that are initially published with a shorter period
         * are aggregated together for long-term storage. For example, if you collect data
         * using a period of 1 minute, the data remains available for 15 days with 1-minute
         * resolution. After 15 days, this data is still available, but is aggregated and
         * retrievable only with a resolution of 5 minutes. After 63 days, the data is
         * further aggregated and is available with a resolution of 1 hour.</p> <p>If you
         * omit <code>Unit</code> in your request, all data that was collected with any
         * unit is returned, along with the corresponding units that were specified when
         * the data was reported to CloudWatch. If you specify a unit, the operation
         * returns only data that was collected with that unit specified. If you specify a
         * unit that does not match the data collected, the results of the operation are
         * null. CloudWatch does not perform unit conversions.</p> <p> <b>Using Metrics
         * Insights queries with metric math</b> </p> <p>You can't mix a Metric Insights
         * query and metric math syntax in the same expression, but you can reference
         * results from a Metrics Insights query within other Metric math expressions. A
         * Metrics Insights query without a <b>GROUP BY</b> clause returns a single
         * time-series (TS), and can be used as input for a metric math expression that
         * expects a single time series. A Metrics Insights query with a <b>GROUP BY</b>
         * clause returns an array of time-series (TS[]), and can be used as input for a
         * metric math expression that expects an array of time series. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricDataRequestT = Model::GetMetricDataRequest>
        Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const GetMetricDataRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::GetMetricData, request);
        }

        /**
         * An Async wrapper for GetMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricDataRequestT = Model::GetMetricDataRequest>
        void GetMetricDataAsync(const GetMetricDataRequestT& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::GetMetricData, request, handler, context);
        }

        /**
         * <p>Gets statistics for the specified metric.</p> <p>The maximum number of data
         * points returned from a single call is 1,440. If you request more than 1,440 data
         * points, CloudWatch returns an error. To reduce the number of data points, you
         * can narrow the specified time range and make multiple requests across adjacent
         * time ranges, or you can increase the specified period. Data points are not
         * returned in chronological order.</p> <p>CloudWatch aggregates data points based
         * on the length of the period that you specify. For example, if you request
         * statistics with a one-hour period, CloudWatch aggregates all data points with
         * time stamps that fall within each one-hour period. Therefore, the number of
         * values aggregated by CloudWatch is larger than the number of data points
         * returned.</p> <p>CloudWatch needs raw data points to calculate percentile
         * statistics. If you publish data using a statistic set instead, you can only
         * retrieve percentile statistics for this data if one of the following conditions
         * is true:</p> <ul> <li> <p>The SampleCount value of the statistic set is 1.</p>
         * </li> <li> <p>The Min and the Max values of the statistic set are equal.</p>
         * </li> </ul> <p>Percentile statistics are not available for metrics when any of
         * the metric values are negative numbers.</p> <p>Amazon CloudWatch retains metric
         * data as follows:</p> <ul> <li> <p>Data points with a period of less than 60
         * seconds are available for 3 hours. These data points are high-resolution metrics
         * and are available only for custom metrics that have been defined with a
         * <code>StorageResolution</code> of 1.</p> </li> <li> <p>Data points with a period
         * of 60 seconds (1-minute) are available for 15 days.</p> </li> <li> <p>Data
         * points with a period of 300 seconds (5-minute) are available for 63 days.</p>
         * </li> <li> <p>Data points with a period of 3600 seconds (1 hour) are available
         * for 455 days (15 months).</p> </li> </ul> <p>Data points that are initially
         * published with a shorter period are aggregated together for long-term storage.
         * For example, if you collect data using a period of 1 minute, the data remains
         * available for 15 days with 1-minute resolution. After 15 days, this data is
         * still available, but is aggregated and retrievable only with a resolution of 5
         * minutes. After 63 days, the data is further aggregated and is available with a
         * resolution of 1 hour.</p> <p>CloudWatch started retaining 5-minute and 1-hour
         * metric data as of July 9, 2016.</p> <p>For information about metrics and
         * dimensions supported by Amazon Web Services services, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon
         * CloudWatch Metrics and Dimensions Reference</a> in the <i>Amazon CloudWatch User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricStatisticsOutcome GetMetricStatistics(const Model::GetMetricStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetMetricStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricStatisticsRequestT = Model::GetMetricStatisticsRequest>
        Model::GetMetricStatisticsOutcomeCallable GetMetricStatisticsCallable(const GetMetricStatisticsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::GetMetricStatistics, request);
        }

        /**
         * An Async wrapper for GetMetricStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricStatisticsRequestT = Model::GetMetricStatisticsRequest>
        void GetMetricStatisticsAsync(const GetMetricStatisticsRequestT& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::GetMetricStatistics, request, handler, context);
        }

        /**
         * <p>Returns information about the metric stream that you specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricStreamOutcome GetMetricStream(const Model::GetMetricStreamRequest& request) const;

        /**
         * A Callable wrapper for GetMetricStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricStreamRequestT = Model::GetMetricStreamRequest>
        Model::GetMetricStreamOutcomeCallable GetMetricStreamCallable(const GetMetricStreamRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::GetMetricStream, request);
        }

        /**
         * An Async wrapper for GetMetricStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricStreamRequestT = Model::GetMetricStreamRequest>
        void GetMetricStreamAsync(const GetMetricStreamRequestT& request, const GetMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::GetMetricStream, request, handler, context);
        }

        /**
         * <p>You can use the <code>GetMetricWidgetImage</code> API to retrieve a snapshot
         * graph of one or more Amazon CloudWatch metrics as a bitmap image. You can then
         * embed this image into your services and products, such as wiki pages, reports,
         * and documents. You could also retrieve images regularly, such as every minute,
         * and create your own custom live dashboard.</p> <p>The graph you retrieve can
         * include all CloudWatch metric graph features, including metric math and
         * horizontal and vertical annotations.</p> <p>There is a limit of 20 transactions
         * per second for this API. Each <code>GetMetricWidgetImage</code> action has the
         * following limits:</p> <ul> <li> <p>As many as 100 metrics in the graph.</p>
         * </li> <li> <p>Up to 100 KB uncompressed payload.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/GetMetricWidgetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricWidgetImageOutcome GetMetricWidgetImage(const Model::GetMetricWidgetImageRequest& request) const;

        /**
         * A Callable wrapper for GetMetricWidgetImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricWidgetImageRequestT = Model::GetMetricWidgetImageRequest>
        Model::GetMetricWidgetImageOutcomeCallable GetMetricWidgetImageCallable(const GetMetricWidgetImageRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::GetMetricWidgetImage, request);
        }

        /**
         * An Async wrapper for GetMetricWidgetImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricWidgetImageRequestT = Model::GetMetricWidgetImageRequest>
        void GetMetricWidgetImageAsync(const GetMetricWidgetImageRequestT& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::GetMetricWidgetImage, request, handler, context);
        }

        /**
         * <p>Returns a list of the dashboards for your account. If you include
         * <code>DashboardNamePrefix</code>, only those dashboards with names starting with
         * the prefix are listed. Otherwise, all dashboards in your account are listed.
         * </p> <p> <code>ListDashboards</code> returns up to 1000 results on one page. If
         * there are more than 1000 dashboards, you can call <code>ListDashboards</code>
         * again and include the value you received for <code>NextToken</code> in the first
         * call, to receive the next 1000 results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListDashboards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDashboardsOutcome ListDashboards(const Model::ListDashboardsRequest& request) const;

        /**
         * A Callable wrapper for ListDashboards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDashboardsRequestT = Model::ListDashboardsRequest>
        Model::ListDashboardsOutcomeCallable ListDashboardsCallable(const ListDashboardsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::ListDashboards, request);
        }

        /**
         * An Async wrapper for ListDashboards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDashboardsRequestT = Model::ListDashboardsRequest>
        void ListDashboardsAsync(const ListDashboardsRequestT& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::ListDashboards, request, handler, context);
        }

        /**
         * <p> Returns a list that contains the number of managed Contributor Insights
         * rules in your account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListManagedInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedInsightRulesOutcome ListManagedInsightRules(const Model::ListManagedInsightRulesRequest& request) const;

        /**
         * A Callable wrapper for ListManagedInsightRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedInsightRulesRequestT = Model::ListManagedInsightRulesRequest>
        Model::ListManagedInsightRulesOutcomeCallable ListManagedInsightRulesCallable(const ListManagedInsightRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::ListManagedInsightRules, request);
        }

        /**
         * An Async wrapper for ListManagedInsightRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedInsightRulesRequestT = Model::ListManagedInsightRulesRequest>
        void ListManagedInsightRulesAsync(const ListManagedInsightRulesRequestT& request, const ListManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::ListManagedInsightRules, request, handler, context);
        }

        /**
         * <p>Returns a list of metric streams in this account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetricStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricStreamsOutcome ListMetricStreams(const Model::ListMetricStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListMetricStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMetricStreamsRequestT = Model::ListMetricStreamsRequest>
        Model::ListMetricStreamsOutcomeCallable ListMetricStreamsCallable(const ListMetricStreamsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::ListMetricStreams, request);
        }

        /**
         * An Async wrapper for ListMetricStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMetricStreamsRequestT = Model::ListMetricStreamsRequest>
        void ListMetricStreamsAsync(const ListMetricStreamsRequestT& request, const ListMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::ListMetricStreams, request, handler, context);
        }

        /**
         * <p>List the specified metrics. You can use the returned metrics with <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * to get statistical data.</p> <p>Up to 500 results are returned for any one call.
         * To retrieve additional results, use the returned token with subsequent
         * calls.</p> <p>After you create a metric, allow up to 15 minutes for the metric
         * to appear. To see metric statistics sooner, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p>If you are using CloudWatch cross-account observability, you can use this
         * operation in a monitoring account and view metrics from the linked source
         * accounts. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p> <p> <code>ListMetrics</code> doesn't return
         * information about metrics if those metrics haven't reported data in the past two
         * weeks. To retrieve those metrics, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricsOutcome ListMetrics(const Model::ListMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMetricsRequestT = Model::ListMetricsRequest>
        Model::ListMetricsOutcomeCallable ListMetricsCallable(const ListMetricsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::ListMetrics, request);
        }

        /**
         * An Async wrapper for ListMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMetricsRequestT = Model::ListMetricsRequest>
        void ListMetricsAsync(const ListMetricsRequestT& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::ListMetrics, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a CloudWatch resource. Currently, alarms
         * and Contributor Insights rules support tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates an anomaly detection model for a CloudWatch metric. You can use the
         * model to display a band of expected normal values when the metric is
         * graphed.</p> <p>If you have enabled unified cross-account observability, and
         * this account is a monitoring account, the metric can be in the same account or a
         * source account. You can specify the account ID in the object you specify in the
         * <code>SingleMetricAnomalyDetector</code> parameter.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Anomaly_Detection.html">CloudWatch
         * Anomaly Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutAnomalyDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAnomalyDetectorOutcome PutAnomalyDetector(const Model::PutAnomalyDetectorRequest& request) const;

        /**
         * A Callable wrapper for PutAnomalyDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAnomalyDetectorRequestT = Model::PutAnomalyDetectorRequest>
        Model::PutAnomalyDetectorOutcomeCallable PutAnomalyDetectorCallable(const PutAnomalyDetectorRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutAnomalyDetector, request);
        }

        /**
         * An Async wrapper for PutAnomalyDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAnomalyDetectorRequestT = Model::PutAnomalyDetectorRequest>
        void PutAnomalyDetectorAsync(const PutAnomalyDetectorRequestT& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutAnomalyDetector, request, handler, context);
        }

        /**
         * <p>Creates or updates a <i>composite alarm</i>. When you create a composite
         * alarm, you specify a rule expression for the alarm that takes into account the
         * alarm states of other alarms that you have created. The composite alarm goes
         * into ALARM state only if all conditions of the rule are met.</p> <p>The alarms
         * specified in a composite alarm's rule expression can include metric alarms and
         * other composite alarms. The rule expression of a composite alarm can include as
         * many as 100 underlying alarms. Any single alarm can be included in the rule
         * expressions of as many as 150 composite alarms.</p> <p>Using composite alarms
         * can reduce alarm noise. You can create multiple metric alarms, and also create a
         * composite alarm and set up alerts only for the composite alarm. For example, you
         * could create a composite alarm that goes into ALARM state only when more than
         * one of the underlying metric alarms are in ALARM state.</p> <p>Composite alarms
         * can take the following actions:</p> <ul> <li> <p>Notify Amazon SNS topics.</p>
         * </li> <li> <p>Invoke Lambda functions.</p> </li> <li> <p>Create OpsItems in
         * Systems Manager Ops Center.</p> </li> <li> <p>Create incidents in Systems
         * Manager Incident Manager.</p> </li> </ul>  <p>It is possible to create a
         * loop or cycle of composite alarms, where composite alarm A depends on composite
         * alarm B, and composite alarm B also depends on composite alarm A. In this
         * scenario, you can't delete any composite alarm that is part of the cycle because
         * there is always still a composite alarm that depends on that alarm that you want
         * to delete.</p> <p>To get out of such a situation, you must break the cycle by
         * changing the rule of one of the composite alarms in the cycle to remove a
         * dependency that creates the cycle. The simplest change to make to break a cycle
         * is to change the <code>AlarmRule</code> of one of the alarms to
         * <code>false</code>. </p> <p>Additionally, the evaluation of composite alarms
         * stops if CloudWatch detects a cycle in the evaluation path. </p>  <p>When
         * this operation creates an alarm, the alarm state is immediately set to
         * <code>INSUFFICIENT_DATA</code>. The alarm is then evaluated and its state is set
         * appropriately. Any actions associated with the new state are then executed. For
         * a composite alarm, this initial time after creation is the only time that the
         * alarm can be in <code>INSUFFICIENT_DATA</code> state.</p> <p>When you update an
         * existing alarm, its state is left unchanged, but the update completely
         * overwrites the previous configuration of the alarm.</p> <p>To use this
         * operation, you must be signed on with the
         * <code>cloudwatch:PutCompositeAlarm</code> permission that is scoped to
         * <code>*</code>. You can't create a composite alarms if your
         * <code>cloudwatch:PutCompositeAlarm</code> permission has a narrower scope.</p>
         * <p>If you are an IAM user, you must have
         * <code>iam:CreateServiceLinkedRole</code> to create a composite alarm that has
         * Systems Manager OpsItem actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutCompositeAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCompositeAlarmOutcome PutCompositeAlarm(const Model::PutCompositeAlarmRequest& request) const;

        /**
         * A Callable wrapper for PutCompositeAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutCompositeAlarmRequestT = Model::PutCompositeAlarmRequest>
        Model::PutCompositeAlarmOutcomeCallable PutCompositeAlarmCallable(const PutCompositeAlarmRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutCompositeAlarm, request);
        }

        /**
         * An Async wrapper for PutCompositeAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutCompositeAlarmRequestT = Model::PutCompositeAlarmRequest>
        void PutCompositeAlarmAsync(const PutCompositeAlarmRequestT& request, const PutCompositeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutCompositeAlarm, request, handler, context);
        }

        /**
         * <p>Creates a dashboard if it does not already exist, or updates an existing
         * dashboard. If you update a dashboard, the entire contents are replaced with what
         * you specify here.</p> <p>All dashboards in your account are global, not
         * region-specific.</p> <p>A simple way to create a dashboard using
         * <code>PutDashboard</code> is to copy an existing dashboard. To copy an existing
         * dashboard using the console, you can load the dashboard and then use the
         * View/edit source command in the Actions menu to display the JSON block for that
         * dashboard. Another way to copy a dashboard is to use <code>GetDashboard</code>,
         * and then use the data returned within <code>DashboardBody</code> as the template
         * for the new dashboard when you call <code>PutDashboard</code>.</p> <p>When you
         * create a dashboard with <code>PutDashboard</code>, a good practice is to add a
         * text widget at the top of the dashboard with a message that the dashboard was
         * created by script and should not be changed in the console. This message could
         * also point console users to the location of the <code>DashboardBody</code>
         * script or the CloudFormation template used to create the
         * dashboard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDashboardOutcome PutDashboard(const Model::PutDashboardRequest& request) const;

        /**
         * A Callable wrapper for PutDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDashboardRequestT = Model::PutDashboardRequest>
        Model::PutDashboardOutcomeCallable PutDashboardCallable(const PutDashboardRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutDashboard, request);
        }

        /**
         * An Async wrapper for PutDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDashboardRequestT = Model::PutDashboardRequest>
        void PutDashboardAsync(const PutDashboardRequestT& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutDashboard, request, handler, context);
        }

        /**
         * <p>Creates a Contributor Insights rule. Rules evaluate log events in a
         * CloudWatch Logs log group, enabling you to find contributor data for the log
         * events in that log group. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using
         * Contributor Insights to Analyze High-Cardinality Data</a>.</p> <p>If you create
         * a rule, delete it, and then re-create it with the same name, historical data
         * from the first time the rule was created might not be available.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutInsightRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInsightRuleOutcome PutInsightRule(const Model::PutInsightRuleRequest& request) const;

        /**
         * A Callable wrapper for PutInsightRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInsightRuleRequestT = Model::PutInsightRuleRequest>
        Model::PutInsightRuleOutcomeCallable PutInsightRuleCallable(const PutInsightRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutInsightRule, request);
        }

        /**
         * An Async wrapper for PutInsightRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInsightRuleRequestT = Model::PutInsightRuleRequest>
        void PutInsightRuleAsync(const PutInsightRuleRequestT& request, const PutInsightRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutInsightRule, request, handler, context);
        }

        /**
         * <p> Creates a managed Contributor Insights rule for a specified Amazon Web
         * Services resource. When you enable a managed rule, you create a Contributor
         * Insights rule that collects data from Amazon Web Services services. You cannot
         * edit these rules with <code>PutInsightRule</code>. The rules can be enabled,
         * disabled, and deleted using <code>EnableInsightRules</code>,
         * <code>DisableInsightRules</code>, and <code>DeleteInsightRules</code>. If a
         * previously created managed rule is currently disabled, a subsequent call to this
         * API will re-enable it. Use <code>ListManagedInsightRules</code> to describe all
         * available rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutManagedInsightRules">AWS
         * API Reference</a></p>
         */
        virtual Model::PutManagedInsightRulesOutcome PutManagedInsightRules(const Model::PutManagedInsightRulesRequest& request) const;

        /**
         * A Callable wrapper for PutManagedInsightRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutManagedInsightRulesRequestT = Model::PutManagedInsightRulesRequest>
        Model::PutManagedInsightRulesOutcomeCallable PutManagedInsightRulesCallable(const PutManagedInsightRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutManagedInsightRules, request);
        }

        /**
         * An Async wrapper for PutManagedInsightRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutManagedInsightRulesRequestT = Model::PutManagedInsightRulesRequest>
        void PutManagedInsightRulesAsync(const PutManagedInsightRulesRequestT& request, const PutManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutManagedInsightRules, request, handler, context);
        }

        /**
         * <p>Creates or updates an alarm and associates it with the specified metric,
         * metric math expression, anomaly detection model, or Metrics Insights query. For
         * more information about using a Metrics Insights query for an alarm, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Create_Metrics_Insights_Alarm.html">Create
         * alarms on Metrics Insights queries</a>.</p> <p>Alarms based on anomaly detection
         * models cannot have Auto Scaling actions.</p> <p>When this operation creates an
         * alarm, the alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The
         * alarm is then evaluated and its state is set appropriately. Any actions
         * associated with the new state are then executed.</p> <p>When you update an
         * existing alarm, its state is left unchanged, but the update completely
         * overwrites the previous configuration of the alarm.</p> <p>If you are an IAM
         * user, you must have Amazon EC2 permissions for some alarm operations:</p> <ul>
         * <li> <p>The <code>iam:CreateServiceLinkedRole</code> permission for all alarms
         * with EC2 actions</p> </li> <li> <p>The <code>iam:CreateServiceLinkedRole</code>
         * permissions to create an alarm with Systems Manager OpsItem or response plan
         * actions.</p> </li> </ul> <p>The first time you create an alarm in the Amazon Web
         * Services Management Console, the CLI, or by using the PutMetricAlarm API,
         * CloudWatch creates the necessary service-linked role for you. The service-linked
         * roles are called <code>AWSServiceRoleForCloudWatchEvents</code> and
         * <code>AWSServiceRoleForCloudWatchAlarms_ActionSSM</code>. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Amazon
         * Web Services service-linked role</a>.</p> <p>Each <code>PutMetricAlarm</code>
         * action has a maximum uncompressed payload of 120 KB.</p> <p> <b>Cross-account
         * alarms</b> </p> <p>You can set an alarm on metrics in the current account, or in
         * another account. To create a cross-account alarm that watches a metric in a
         * different account, you must have completed the following pre-requisites:</p>
         * <ul> <li> <p>The account where the metrics are located (the <i>sharing
         * account</i>) must already have a sharing role named
         * <b>CloudWatch-CrossAccountSharingRole</b>. If it does not already have this
         * role, you must create it using the instructions in <b>Set up a sharing
         * account</b> in <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Cross-Account-Cross-Region.html#enable-cross-account-cross-Region">
         * Cross-account cross-Region CloudWatch console</a>. The policy for that role must
         * grant access to the ID of the account where you are creating the alarm. </p>
         * </li> <li> <p>The account where you are creating the alarm (the <i>monitoring
         * account</i>) must already have a service-linked role named
         * <b>AWSServiceRoleForCloudWatchCrossAccount</b> to allow CloudWatch to assume the
         * sharing role in the sharing account. If it does not, you must create it
         * following the directions in <b>Set up a monitoring account</b> in <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Cross-Account-Cross-Region.html#enable-cross-account-cross-Region">
         * Cross-account cross-Region CloudWatch console</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricAlarmOutcome PutMetricAlarm(const Model::PutMetricAlarmRequest& request) const;

        /**
         * A Callable wrapper for PutMetricAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMetricAlarmRequestT = Model::PutMetricAlarmRequest>
        Model::PutMetricAlarmOutcomeCallable PutMetricAlarmCallable(const PutMetricAlarmRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutMetricAlarm, request);
        }

        /**
         * An Async wrapper for PutMetricAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMetricAlarmRequestT = Model::PutMetricAlarmRequest>
        void PutMetricAlarmAsync(const PutMetricAlarmRequestT& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutMetricAlarm, request, handler, context);
        }

        /**
         * <p>Publishes metric data points to Amazon CloudWatch. CloudWatch associates the
         * data points with the specified metric. If the specified metric does not exist,
         * CloudWatch creates the metric. When CloudWatch creates a metric, it can take up
         * to fifteen minutes for the metric to appear in calls to <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>.</p>
         * <p>You can publish either individual data points in the <code>Value</code>
         * field, or arrays of values and the number of times each value occurred during
         * the period by using the <code>Values</code> and <code>Counts</code> fields in
         * the <code>MetricData</code> structure. Using the <code>Values</code> and
         * <code>Counts</code> method enables you to publish up to 150 values per metric
         * with one <code>PutMetricData</code> request, and supports retrieving percentile
         * statistics on this data.</p> <p>Each <code>PutMetricData</code> request is
         * limited to 1 MB in size for HTTP POST requests. You can send a payload
         * compressed by gzip. Each request is also limited to no more than 1000 different
         * metrics.</p> <p>Although the <code>Value</code> parameter accepts numbers of
         * type <code>Double</code>, CloudWatch rejects values that are either too small or
         * too large. Values must be in the range of -2^360 to 2^360. In addition, special
         * values (for example, NaN, +Infinity, -Infinity) are not supported.</p> <p>You
         * can use up to 30 dimensions per metric to further clarify what data the metric
         * collects. Each dimension consists of a Name and Value pair. For more information
         * about specifying dimensions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing
         * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> <p>You specify the
         * time stamp to be associated with each data point. You can specify time stamps
         * that are as much as two weeks before the current date, and as much as 2 hours
         * after the current day and time.</p> <p>Data points with time stamps from 24
         * hours ago or longer can take at least 48 hours to become available for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
         * from the time they are submitted. Data points with time stamps between 3 and 24
         * hours ago can take as much as 2 hours to become available for for <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>.</p>
         * <p>CloudWatch needs raw data points to calculate percentile statistics. If you
         * publish data using a statistic set instead, you can only retrieve percentile
         * statistics for this data if one of the following conditions is true:</p> <ul>
         * <li> <p>The <code>SampleCount</code> value of the statistic set is 1 and
         * <code>Min</code>, <code>Max</code>, and <code>Sum</code> are all equal.</p>
         * </li> <li> <p>The <code>Min</code> and <code>Max</code> are equal, and
         * <code>Sum</code> is equal to <code>Min</code> multiplied by
         * <code>SampleCount</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricDataOutcome PutMetricData(const Model::PutMetricDataRequest& request) const;

        /**
         * A Callable wrapper for PutMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMetricDataRequestT = Model::PutMetricDataRequest>
        Model::PutMetricDataOutcomeCallable PutMetricDataCallable(const PutMetricDataRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutMetricData, request);
        }

        /**
         * An Async wrapper for PutMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMetricDataRequestT = Model::PutMetricDataRequest>
        void PutMetricDataAsync(const PutMetricDataRequestT& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutMetricData, request, handler, context);
        }

        /**
         * <p>Creates or updates a metric stream. Metric streams can automatically stream
         * CloudWatch metrics to Amazon Web Services destinations, including Amazon S3, and
         * to many third-party solutions.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Metric-Streams.html">
         * Using Metric Streams</a>.</p> <p>To create a metric stream, you must be signed
         * in to an account that has the <code>iam:PassRole</code> permission and either
         * the <code>CloudWatchFullAccess</code> policy or the
         * <code>cloudwatch:PutMetricStream</code> permission.</p> <p>When you create or
         * update a metric stream, you choose one of the following:</p> <ul> <li> <p>Stream
         * metrics from all metric namespaces in the account.</p> </li> <li> <p>Stream
         * metrics from all metric namespaces in the account, except for the namespaces
         * that you list in <code>ExcludeFilters</code>.</p> </li> <li> <p>Stream metrics
         * from only the metric namespaces that you list in
         * <code>IncludeFilters</code>.</p> </li> </ul> <p>By default, a metric stream
         * always sends the <code>MAX</code>, <code>MIN</code>, <code>SUM</code>, and
         * <code>SAMPLECOUNT</code> statistics for each metric that is streamed. You can
         * use the <code>StatisticsConfigurations</code> parameter to have the metric
         * stream send additional statistics in the stream. Streaming additional statistics
         * incurs additional costs. For more information, see <a
         * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch Pricing</a>.
         * </p> <p>When you use <code>PutMetricStream</code> to create a new metric stream,
         * the stream is created in the <code>running</code> state. If you use it to update
         * an existing stream, the state of the stream is not changed.</p> <p>If you are
         * using CloudWatch cross-account observability and you create a metric stream in a
         * monitoring account, you can choose whether to include metrics from source
         * accounts in the stream. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PutMetricStream">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricStreamOutcome PutMetricStream(const Model::PutMetricStreamRequest& request) const;

        /**
         * A Callable wrapper for PutMetricStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMetricStreamRequestT = Model::PutMetricStreamRequest>
        Model::PutMetricStreamOutcomeCallable PutMetricStreamCallable(const PutMetricStreamRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::PutMetricStream, request);
        }

        /**
         * An Async wrapper for PutMetricStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMetricStreamRequestT = Model::PutMetricStreamRequest>
        void PutMetricStreamAsync(const PutMetricStreamRequestT& request, const PutMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::PutMetricStream, request, handler, context);
        }

        /**
         * <p>Temporarily sets the state of an alarm for testing purposes. When the updated
         * state differs from the previous value, the action configured for the appropriate
         * state is invoked. For example, if your alarm is configured to send an Amazon SNS
         * message when an alarm is triggered, temporarily changing the alarm state to
         * <code>ALARM</code> sends an SNS message.</p> <p>Metric alarms returns to their
         * actual state quickly, often within seconds. Because the metric alarm state
         * change happens quickly, it is typically only visible in the alarm's
         * <b>History</b> tab in the Amazon CloudWatch console or through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeAlarmHistory.html">DescribeAlarmHistory</a>.</p>
         * <p>If you use <code>SetAlarmState</code> on a composite alarm, the composite
         * alarm is not guaranteed to return to its actual state. It returns to its actual
         * state only once any of its children alarms change state. It is also reevaluated
         * if you update its configuration.</p> <p>If an alarm triggers EC2 Auto Scaling
         * policies or application Auto Scaling policies, you must include information in
         * the <code>StateReasonData</code> parameter to enable the policy to take the
         * correct action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SetAlarmState">AWS
         * API Reference</a></p>
         */
        virtual Model::SetAlarmStateOutcome SetAlarmState(const Model::SetAlarmStateRequest& request) const;

        /**
         * A Callable wrapper for SetAlarmState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetAlarmStateRequestT = Model::SetAlarmStateRequest>
        Model::SetAlarmStateOutcomeCallable SetAlarmStateCallable(const SetAlarmStateRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::SetAlarmState, request);
        }

        /**
         * An Async wrapper for SetAlarmState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetAlarmStateRequestT = Model::SetAlarmStateRequest>
        void SetAlarmStateAsync(const SetAlarmStateRequestT& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::SetAlarmState, request, handler, context);
        }

        /**
         * <p>Starts the streaming of metrics for one or more of your metric
         * streams.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/StartMetricStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMetricStreamsOutcome StartMetricStreams(const Model::StartMetricStreamsRequest& request) const;

        /**
         * A Callable wrapper for StartMetricStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMetricStreamsRequestT = Model::StartMetricStreamsRequest>
        Model::StartMetricStreamsOutcomeCallable StartMetricStreamsCallable(const StartMetricStreamsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::StartMetricStreams, request);
        }

        /**
         * An Async wrapper for StartMetricStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMetricStreamsRequestT = Model::StartMetricStreamsRequest>
        void StartMetricStreamsAsync(const StartMetricStreamsRequestT& request, const StartMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::StartMetricStreams, request, handler, context);
        }

        /**
         * <p>Stops the streaming of metrics for one or more of your metric
         * streams.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/StopMetricStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMetricStreamsOutcome StopMetricStreams(const Model::StopMetricStreamsRequest& request) const;

        /**
         * A Callable wrapper for StopMetricStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopMetricStreamsRequestT = Model::StopMetricStreamsRequest>
        Model::StopMetricStreamsOutcomeCallable StopMetricStreamsCallable(const StopMetricStreamsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::StopMetricStreams, request);
        }

        /**
         * An Async wrapper for StopMetricStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopMetricStreamsRequestT = Model::StopMetricStreamsRequest>
        void StopMetricStreamsAsync(const StopMetricStreamsRequestT& request, const StopMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::StopMetricStreams, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch
         * resource. Currently, the only CloudWatch resources that can be tagged are alarms
         * and Contributor Insights rules.</p> <p>Tags can help you organize and categorize
         * your resources. You can also use them to scope user permissions by granting a
         * user permission to access or change only resources with certain tag values.</p>
         * <p>Tags don't have any semantic meaning to Amazon Web Services and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with an alarm that already has tags. If you
         * specify a new tag key for the alarm, this tag is appended to the list of tags
         * associated with the alarm. If you specify a tag key that is already associated
         * with the alarm, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a CloudWatch
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchClient::UntagResource, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<CloudWatchEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchClient>;
        void init(const CloudWatchClientConfiguration& clientConfiguration);

        CloudWatchClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<CloudWatchEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudWatch
} // namespace Aws
