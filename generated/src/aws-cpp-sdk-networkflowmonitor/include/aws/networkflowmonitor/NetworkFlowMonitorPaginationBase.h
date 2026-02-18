/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataPaginationTraits.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListMonitorsPaginationTraits.h>
#include <aws/networkflowmonitor/model/ListScopesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace NetworkFlowMonitor {

class NetworkFlowMonitorClient;

template <typename DerivedClient>
class NetworkFlowMonitorPaginationBase {
 public:
  /**
   * Create a paginator for GetQueryResultsMonitorTopContributors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsMonitorTopContributorsRequest,
                                    Pagination::GetQueryResultsMonitorTopContributorsPaginationTraits<DerivedClient>>
  GetQueryResultsMonitorTopContributorsPaginator(const Model::GetQueryResultsMonitorTopContributorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsMonitorTopContributorsRequest,
                                             Pagination::GetQueryResultsMonitorTopContributorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetQueryResultsWorkloadInsightsTopContributors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsWorkloadInsightsTopContributorsRequest,
                                    Pagination::GetQueryResultsWorkloadInsightsTopContributorsPaginationTraits<DerivedClient>>
  GetQueryResultsWorkloadInsightsTopContributorsPaginator(const Model::GetQueryResultsWorkloadInsightsTopContributorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsWorkloadInsightsTopContributorsRequest,
                                             Pagination::GetQueryResultsWorkloadInsightsTopContributorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetQueryResultsWorkloadInsightsTopContributorsData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest,
                                    Pagination::GetQueryResultsWorkloadInsightsTopContributorsDataPaginationTraits<DerivedClient>>
  GetQueryResultsWorkloadInsightsTopContributorsDataPaginator(
      const Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsWorkloadInsightsTopContributorsDataRequest,
                                             Pagination::GetQueryResultsWorkloadInsightsTopContributorsDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest, Pagination::ListMonitorsPaginationTraits<DerivedClient>>
  ListMonitorsPaginator(const Model::ListMonitorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest,
                                             Pagination::ListMonitorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListScopes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScopesRequest, Pagination::ListScopesPaginationTraits<DerivedClient>>
  ListScopesPaginator(const Model::ListScopesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScopesRequest,
                                             Pagination::ListScopesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace NetworkFlowMonitor
}  // namespace Aws
