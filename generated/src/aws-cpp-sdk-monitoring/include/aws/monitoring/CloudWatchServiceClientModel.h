/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/monitoring/CloudWatchErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/monitoring/CloudWatchEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudWatchClient header */
#include <aws/monitoring/model/DeleteAnomalyDetectorResult.h>
#include <aws/monitoring/model/DeleteDashboardsResult.h>
#include <aws/monitoring/model/DeleteInsightRulesResult.h>
#include <aws/monitoring/model/DeleteMetricStreamResult.h>
#include <aws/monitoring/model/DescribeAlarmHistoryResult.h>
#include <aws/monitoring/model/DescribeAlarmsResult.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricResult.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsResult.h>
#include <aws/monitoring/model/DescribeInsightRulesResult.h>
#include <aws/monitoring/model/DisableInsightRulesResult.h>
#include <aws/monitoring/model/EnableInsightRulesResult.h>
#include <aws/monitoring/model/GetDashboardResult.h>
#include <aws/monitoring/model/GetInsightRuleReportResult.h>
#include <aws/monitoring/model/GetMetricDataResult.h>
#include <aws/monitoring/model/GetMetricStatisticsResult.h>
#include <aws/monitoring/model/GetMetricStreamResult.h>
#include <aws/monitoring/model/GetMetricWidgetImageResult.h>
#include <aws/monitoring/model/ListDashboardsResult.h>
#include <aws/monitoring/model/ListManagedInsightRulesResult.h>
#include <aws/monitoring/model/ListMetricStreamsResult.h>
#include <aws/monitoring/model/ListMetricsResult.h>
#include <aws/monitoring/model/ListTagsForResourceResult.h>
#include <aws/monitoring/model/PutAnomalyDetectorResult.h>
#include <aws/monitoring/model/PutDashboardResult.h>
#include <aws/monitoring/model/PutInsightRuleResult.h>
#include <aws/monitoring/model/PutManagedInsightRulesResult.h>
#include <aws/monitoring/model/PutMetricStreamResult.h>
#include <aws/monitoring/model/StartMetricStreamsResult.h>
#include <aws/monitoring/model/StopMetricStreamsResult.h>
#include <aws/monitoring/model/TagResourceResult.h>
#include <aws/monitoring/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CloudWatchClient header */

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

  namespace CloudWatch
  {
    using CloudWatchClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudWatchEndpointProviderBase = Aws::CloudWatch::Endpoint::CloudWatchEndpointProviderBase;
    using CloudWatchEndpointProvider = Aws::CloudWatch::Endpoint::CloudWatchEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudWatchClient header */
      class DeleteAlarmsRequest;
      class DeleteAnomalyDetectorRequest;
      class DeleteDashboardsRequest;
      class DeleteInsightRulesRequest;
      class DeleteMetricStreamRequest;
      class DescribeAlarmHistoryRequest;
      class DescribeAlarmsRequest;
      class DescribeAlarmsForMetricRequest;
      class DescribeAnomalyDetectorsRequest;
      class DescribeInsightRulesRequest;
      class DisableAlarmActionsRequest;
      class DisableInsightRulesRequest;
      class EnableAlarmActionsRequest;
      class EnableInsightRulesRequest;
      class GetDashboardRequest;
      class GetInsightRuleReportRequest;
      class GetMetricDataRequest;
      class GetMetricStatisticsRequest;
      class GetMetricStreamRequest;
      class GetMetricWidgetImageRequest;
      class ListDashboardsRequest;
      class ListManagedInsightRulesRequest;
      class ListMetricStreamsRequest;
      class ListMetricsRequest;
      class ListTagsForResourceRequest;
      class PutAnomalyDetectorRequest;
      class PutCompositeAlarmRequest;
      class PutDashboardRequest;
      class PutInsightRuleRequest;
      class PutManagedInsightRulesRequest;
      class PutMetricAlarmRequest;
      class PutMetricDataRequest;
      class PutMetricStreamRequest;
      class SetAlarmStateRequest;
      class StartMetricStreamsRequest;
      class StopMetricStreamsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in CloudWatchClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> DeleteAlarmsOutcome;
      typedef Aws::Utils::Outcome<DeleteAnomalyDetectorResult, CloudWatchError> DeleteAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<DeleteDashboardsResult, CloudWatchError> DeleteDashboardsOutcome;
      typedef Aws::Utils::Outcome<DeleteInsightRulesResult, CloudWatchError> DeleteInsightRulesOutcome;
      typedef Aws::Utils::Outcome<DeleteMetricStreamResult, CloudWatchError> DeleteMetricStreamOutcome;
      typedef Aws::Utils::Outcome<DescribeAlarmHistoryResult, CloudWatchError> DescribeAlarmHistoryOutcome;
      typedef Aws::Utils::Outcome<DescribeAlarmsResult, CloudWatchError> DescribeAlarmsOutcome;
      typedef Aws::Utils::Outcome<DescribeAlarmsForMetricResult, CloudWatchError> DescribeAlarmsForMetricOutcome;
      typedef Aws::Utils::Outcome<DescribeAnomalyDetectorsResult, CloudWatchError> DescribeAnomalyDetectorsOutcome;
      typedef Aws::Utils::Outcome<DescribeInsightRulesResult, CloudWatchError> DescribeInsightRulesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> DisableAlarmActionsOutcome;
      typedef Aws::Utils::Outcome<DisableInsightRulesResult, CloudWatchError> DisableInsightRulesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> EnableAlarmActionsOutcome;
      typedef Aws::Utils::Outcome<EnableInsightRulesResult, CloudWatchError> EnableInsightRulesOutcome;
      typedef Aws::Utils::Outcome<GetDashboardResult, CloudWatchError> GetDashboardOutcome;
      typedef Aws::Utils::Outcome<GetInsightRuleReportResult, CloudWatchError> GetInsightRuleReportOutcome;
      typedef Aws::Utils::Outcome<GetMetricDataResult, CloudWatchError> GetMetricDataOutcome;
      typedef Aws::Utils::Outcome<GetMetricStatisticsResult, CloudWatchError> GetMetricStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetMetricStreamResult, CloudWatchError> GetMetricStreamOutcome;
      typedef Aws::Utils::Outcome<GetMetricWidgetImageResult, CloudWatchError> GetMetricWidgetImageOutcome;
      typedef Aws::Utils::Outcome<ListDashboardsResult, CloudWatchError> ListDashboardsOutcome;
      typedef Aws::Utils::Outcome<ListManagedInsightRulesResult, CloudWatchError> ListManagedInsightRulesOutcome;
      typedef Aws::Utils::Outcome<ListMetricStreamsResult, CloudWatchError> ListMetricStreamsOutcome;
      typedef Aws::Utils::Outcome<ListMetricsResult, CloudWatchError> ListMetricsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAnomalyDetectorResult, CloudWatchError> PutAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> PutCompositeAlarmOutcome;
      typedef Aws::Utils::Outcome<PutDashboardResult, CloudWatchError> PutDashboardOutcome;
      typedef Aws::Utils::Outcome<PutInsightRuleResult, CloudWatchError> PutInsightRuleOutcome;
      typedef Aws::Utils::Outcome<PutManagedInsightRulesResult, CloudWatchError> PutManagedInsightRulesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> PutMetricAlarmOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> PutMetricDataOutcome;
      typedef Aws::Utils::Outcome<PutMetricStreamResult, CloudWatchError> PutMetricStreamOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchError> SetAlarmStateOutcome;
      typedef Aws::Utils::Outcome<StartMetricStreamsResult, CloudWatchError> StartMetricStreamsOutcome;
      typedef Aws::Utils::Outcome<StopMetricStreamsResult, CloudWatchError> StopMetricStreamsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CloudWatchError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CloudWatchError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteAlarmsOutcome> DeleteAlarmsOutcomeCallable;
      typedef std::future<DeleteAnomalyDetectorOutcome> DeleteAnomalyDetectorOutcomeCallable;
      typedef std::future<DeleteDashboardsOutcome> DeleteDashboardsOutcomeCallable;
      typedef std::future<DeleteInsightRulesOutcome> DeleteInsightRulesOutcomeCallable;
      typedef std::future<DeleteMetricStreamOutcome> DeleteMetricStreamOutcomeCallable;
      typedef std::future<DescribeAlarmHistoryOutcome> DescribeAlarmHistoryOutcomeCallable;
      typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
      typedef std::future<DescribeAlarmsForMetricOutcome> DescribeAlarmsForMetricOutcomeCallable;
      typedef std::future<DescribeAnomalyDetectorsOutcome> DescribeAnomalyDetectorsOutcomeCallable;
      typedef std::future<DescribeInsightRulesOutcome> DescribeInsightRulesOutcomeCallable;
      typedef std::future<DisableAlarmActionsOutcome> DisableAlarmActionsOutcomeCallable;
      typedef std::future<DisableInsightRulesOutcome> DisableInsightRulesOutcomeCallable;
      typedef std::future<EnableAlarmActionsOutcome> EnableAlarmActionsOutcomeCallable;
      typedef std::future<EnableInsightRulesOutcome> EnableInsightRulesOutcomeCallable;
      typedef std::future<GetDashboardOutcome> GetDashboardOutcomeCallable;
      typedef std::future<GetInsightRuleReportOutcome> GetInsightRuleReportOutcomeCallable;
      typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
      typedef std::future<GetMetricStatisticsOutcome> GetMetricStatisticsOutcomeCallable;
      typedef std::future<GetMetricStreamOutcome> GetMetricStreamOutcomeCallable;
      typedef std::future<GetMetricWidgetImageOutcome> GetMetricWidgetImageOutcomeCallable;
      typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
      typedef std::future<ListManagedInsightRulesOutcome> ListManagedInsightRulesOutcomeCallable;
      typedef std::future<ListMetricStreamsOutcome> ListMetricStreamsOutcomeCallable;
      typedef std::future<ListMetricsOutcome> ListMetricsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAnomalyDetectorOutcome> PutAnomalyDetectorOutcomeCallable;
      typedef std::future<PutCompositeAlarmOutcome> PutCompositeAlarmOutcomeCallable;
      typedef std::future<PutDashboardOutcome> PutDashboardOutcomeCallable;
      typedef std::future<PutInsightRuleOutcome> PutInsightRuleOutcomeCallable;
      typedef std::future<PutManagedInsightRulesOutcome> PutManagedInsightRulesOutcomeCallable;
      typedef std::future<PutMetricAlarmOutcome> PutMetricAlarmOutcomeCallable;
      typedef std::future<PutMetricDataOutcome> PutMetricDataOutcomeCallable;
      typedef std::future<PutMetricStreamOutcome> PutMetricStreamOutcomeCallable;
      typedef std::future<SetAlarmStateOutcome> SetAlarmStateOutcomeCallable;
      typedef std::future<StartMetricStreamsOutcome> StartMetricStreamsOutcomeCallable;
      typedef std::future<StopMetricStreamsOutcome> StopMetricStreamsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudWatchClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteAlarmsRequest&, const Model::DeleteAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteAnomalyDetectorRequest&, const Model::DeleteAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteDashboardsRequest&, const Model::DeleteDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDashboardsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteInsightRulesRequest&, const Model::DeleteInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DeleteMetricStreamRequest&, const Model::DeleteMetricStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMetricStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmHistoryRequest&, const Model::DescribeAlarmHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmHistoryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsRequest&, const Model::DescribeAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAlarmsForMetricRequest&, const Model::DescribeAlarmsForMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlarmsForMetricResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeAnomalyDetectorsRequest&, const Model::DescribeAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DescribeInsightRulesRequest&, const Model::DescribeInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DisableAlarmActionsRequest&, const Model::DisableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::DisableInsightRulesRequest&, const Model::DisableInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::EnableAlarmActionsRequest&, const Model::EnableAlarmActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAlarmActionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::EnableInsightRulesRequest&, const Model::EnableInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetDashboardRequest&, const Model::GetDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetInsightRuleReportRequest&, const Model::GetInsightRuleReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightRuleReportResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricStatisticsRequest&, const Model::GetMetricStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricStatisticsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricStreamRequest&, const Model::GetMetricStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::GetMetricWidgetImageRequest&, const Model::GetMetricWidgetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricWidgetImageResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListDashboardsRequest&, const Model::ListDashboardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDashboardsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListManagedInsightRulesRequest&, const Model::ListManagedInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListMetricStreamsRequest&, const Model::ListMetricStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricStreamsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListMetricsRequest&, const Model::ListMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutAnomalyDetectorRequest&, const Model::PutAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutCompositeAlarmRequest&, const Model::PutCompositeAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCompositeAlarmResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutDashboardRequest&, const Model::PutDashboardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDashboardResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutInsightRuleRequest&, const Model::PutInsightRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInsightRuleResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutManagedInsightRulesRequest&, const Model::PutManagedInsightRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutManagedInsightRulesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricAlarmRequest&, const Model::PutMetricAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricAlarmResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricDataRequest&, const Model::PutMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::PutMetricStreamRequest&, const Model::PutMetricStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::SetAlarmStateRequest&, const Model::SetAlarmStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetAlarmStateResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::StartMetricStreamsRequest&, const Model::StartMetricStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetricStreamsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::StopMetricStreamsRequest&, const Model::StopMetricStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMetricStreamsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudWatch
} // namespace Aws
