/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/DescribeAlarmHistoryPaginationTraits.h>
#include <aws/monitoring/model/DescribeAlarmsPaginationTraits.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsPaginationTraits.h>
#include <aws/monitoring/model/DescribeInsightRulesPaginationTraits.h>
#include <aws/monitoring/model/GetMetricDataPaginationTraits.h>
#include <aws/monitoring/model/ListDashboardsPaginationTraits.h>
#include <aws/monitoring/model/ListManagedInsightRulesPaginationTraits.h>
#include <aws/monitoring/model/ListMetricStreamsPaginationTraits.h>
#include <aws/monitoring/model/ListMetricsPaginationTraits.h>

namespace Aws {
namespace CloudWatch {

using DescribeAlarmHistoryPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::DescribeAlarmHistoryRequest,
                                                                        Pagination::DescribeAlarmHistoryPaginationTraits<CloudWatchClient>>;
using DescribeAlarmsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::DescribeAlarmsRequest,
                                                                  Pagination::DescribeAlarmsPaginationTraits<CloudWatchClient>>;
using DescribeAnomalyDetectorsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::DescribeAnomalyDetectorsRequest,
                                      Pagination::DescribeAnomalyDetectorsPaginationTraits<CloudWatchClient>>;
using DescribeInsightRulesPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::DescribeInsightRulesRequest,
                                                                        Pagination::DescribeInsightRulesPaginationTraits<CloudWatchClient>>;
using GetMetricDataPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::GetMetricDataRequest,
                                                                 Pagination::GetMetricDataPaginationTraits<CloudWatchClient>>;
using ListDashboardsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::ListDashboardsRequest,
                                                                  Pagination::ListDashboardsPaginationTraits<CloudWatchClient>>;
using ListManagedInsightRulesPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::ListManagedInsightRulesRequest,
                                      Pagination::ListManagedInsightRulesPaginationTraits<CloudWatchClient>>;
using ListMetricsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::ListMetricsRequest,
                                                               Pagination::ListMetricsPaginationTraits<CloudWatchClient>>;
using ListMetricStreamsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchClient, Model::ListMetricStreamsRequest,
                                                                     Pagination::ListMetricStreamsPaginationTraits<CloudWatchClient>>;

}  // namespace CloudWatch
}  // namespace Aws
