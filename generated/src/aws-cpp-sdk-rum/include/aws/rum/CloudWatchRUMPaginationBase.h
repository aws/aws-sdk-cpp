/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsPaginationTraits.h>
#include <aws/rum/model/GetAppMonitorDataPaginationTraits.h>
#include <aws/rum/model/ListAppMonitorsPaginationTraits.h>
#include <aws/rum/model/ListRumMetricsDestinationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace CloudWatchRUM {

class CloudWatchRUMClient;

template <typename DerivedClient>
class CloudWatchRUMPaginationBase {
 public:
  /**
   * Create a paginator for BatchGetRumMetricDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetRumMetricDefinitionsRequest,
                                    Pagination::BatchGetRumMetricDefinitionsPaginationTraits<DerivedClient>>
  BatchGetRumMetricDefinitionsPaginator(const Model::BatchGetRumMetricDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetRumMetricDefinitionsRequest,
                                             Pagination::BatchGetRumMetricDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAppMonitorData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAppMonitorDataRequest,
                                    Pagination::GetAppMonitorDataPaginationTraits<DerivedClient>>
  GetAppMonitorDataPaginator(const Model::GetAppMonitorDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAppMonitorDataRequest,
                                             Pagination::GetAppMonitorDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppMonitors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppMonitorsRequest,
                                    Pagination::ListAppMonitorsPaginationTraits<DerivedClient>>
  ListAppMonitorsPaginator(const Model::ListAppMonitorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppMonitorsRequest,
                                             Pagination::ListAppMonitorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListRumMetricsDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRumMetricsDestinationsRequest,
                                    Pagination::ListRumMetricsDestinationsPaginationTraits<DerivedClient>>
  ListRumMetricsDestinationsPaginator(const Model::ListRumMetricsDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRumMetricsDestinationsRequest,
                                             Pagination::ListRumMetricsDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CloudWatchRUM
}  // namespace Aws
