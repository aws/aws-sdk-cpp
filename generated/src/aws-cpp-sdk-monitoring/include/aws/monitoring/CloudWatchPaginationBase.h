/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/monitoring/model/DescribeAlarmHistoryPaginationTraits.h>
#include <aws/monitoring/model/DescribeAlarmsPaginationTraits.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsPaginationTraits.h>
#include <aws/monitoring/model/DescribeInsightRulesPaginationTraits.h>
#include <aws/monitoring/model/GetMetricDataPaginationTraits.h>
#include <aws/monitoring/model/ListAlarmMuteRulesPaginationTraits.h>
#include <aws/monitoring/model/ListDashboardsPaginationTraits.h>
#include <aws/monitoring/model/ListManagedInsightRulesPaginationTraits.h>
#include <aws/monitoring/model/ListMetricStreamsPaginationTraits.h>
#include <aws/monitoring/model/ListMetricsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace CloudWatch {

class CloudWatchClient;

template <typename DerivedClient>
class CloudWatchPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAlarmHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAlarmHistoryRequest,
                                    Pagination::DescribeAlarmHistoryPaginationTraits<DerivedClient>>
  DescribeAlarmHistoryPaginator(const Model::DescribeAlarmHistoryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAlarmHistoryRequest,
                                             Pagination::DescribeAlarmHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAlarms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAlarmsRequest, Pagination::DescribeAlarmsPaginationTraits<DerivedClient>>
  DescribeAlarmsPaginator(const Model::DescribeAlarmsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAlarmsRequest,
                                             Pagination::DescribeAlarmsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeAnomalyDetectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAnomalyDetectorsRequest,
                                    Pagination::DescribeAnomalyDetectorsPaginationTraits<DerivedClient>>
  DescribeAnomalyDetectorsPaginator(const Model::DescribeAnomalyDetectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAnomalyDetectorsRequest,
                                             Pagination::DescribeAnomalyDetectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInsightRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInsightRulesRequest,
                                    Pagination::DescribeInsightRulesPaginationTraits<DerivedClient>>
  DescribeInsightRulesPaginator(const Model::DescribeInsightRulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInsightRulesRequest,
                                             Pagination::DescribeInsightRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetMetricData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMetricDataRequest, Pagination::GetMetricDataPaginationTraits<DerivedClient>>
  GetMetricDataPaginator(const Model::GetMetricDataRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMetricDataRequest,
                                             Pagination::GetMetricDataPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListAlarmMuteRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlarmMuteRulesRequest,
                                    Pagination::ListAlarmMuteRulesPaginationTraits<DerivedClient>>
  ListAlarmMuteRulesPaginator(const Model::ListAlarmMuteRulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlarmMuteRulesRequest,
                                             Pagination::ListAlarmMuteRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDashboards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest, Pagination::ListDashboardsPaginationTraits<DerivedClient>>
  ListDashboardsPaginator(const Model::ListDashboardsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest,
                                             Pagination::ListDashboardsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListManagedInsightRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedInsightRulesRequest,
                                    Pagination::ListManagedInsightRulesPaginationTraits<DerivedClient>>
  ListManagedInsightRulesPaginator(const Model::ListManagedInsightRulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedInsightRulesRequest,
                                             Pagination::ListManagedInsightRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricsRequest, Pagination::ListMetricsPaginationTraits<DerivedClient>>
  ListMetricsPaginator(const Model::ListMetricsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricsRequest,
                                             Pagination::ListMetricsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListMetricStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricStreamsRequest,
                                    Pagination::ListMetricStreamsPaginationTraits<DerivedClient>>
  ListMetricStreamsPaginator(const Model::ListMetricStreamsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricStreamsRequest,
                                             Pagination::ListMetricStreamsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CloudWatch
}  // namespace Aws
