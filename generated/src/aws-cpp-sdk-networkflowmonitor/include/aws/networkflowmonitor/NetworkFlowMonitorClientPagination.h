/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorClient.h>
#include <aws/networkflowmonitor/model/GetMonitorScopeSuggestionsPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsPerformanceMonitorPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListMonitorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListPerformanceMonitorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListScopesPaginationTraits.h>

namespace Aws {
namespace NetworkFlowMonitor {

using GetMonitorScopeSuggestionsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::GetMonitorScopeSuggestionsRequest,
                                      Pagination::GetMonitorScopeSuggestionsPaginationTraits<NetworkFlowMonitorClient>>;
using GetQueryResultsMonitorTopContributorsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::GetQueryResultsMonitorTopContributorsRequest,
                                      Pagination::GetQueryResultsMonitorTopContributorsPaginationTraits<NetworkFlowMonitorClient>>;
using GetQueryResultsPerformanceMonitorPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::GetQueryResultsPerformanceMonitorRequest,
                                      Pagination::GetQueryResultsPerformanceMonitorPaginationTraits<NetworkFlowMonitorClient>>;
using GetQueryResultsWorkloadInsightsTopContributorsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::GetQueryResultsWorkloadInsightsTopContributorsRequest,
                                      Pagination::GetQueryResultsWorkloadInsightsTopContributorsPaginationTraits<NetworkFlowMonitorClient>>;
using GetQueryResultsWorkloadInsightsTopContributorsDataPaginator = Aws::Utils::Pagination::Paginator<
    NetworkFlowMonitorClient, Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest,
    Pagination::GetQueryResultsWorkloadInsightsTopContributorsDataPaginationTraits<NetworkFlowMonitorClient>>;
using ListMonitorsPaginator = Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::ListMonitorsRequest,
                                                                Pagination::ListMonitorsPaginationTraits<NetworkFlowMonitorClient>>;
using ListPerformanceMonitorsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::ListPerformanceMonitorsRequest,
                                      Pagination::ListPerformanceMonitorsPaginationTraits<NetworkFlowMonitorClient>>;
using ListScopesPaginator = Aws::Utils::Pagination::Paginator<NetworkFlowMonitorClient, Model::ListScopesRequest,
                                                              Pagination::ListScopesPaginationTraits<NetworkFlowMonitorClient>>;

}  // namespace NetworkFlowMonitor
}  // namespace Aws
