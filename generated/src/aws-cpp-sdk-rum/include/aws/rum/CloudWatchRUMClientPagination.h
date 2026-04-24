/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rum/CloudWatchRUMClient.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsPaginationTraits.h>
#include <aws/rum/model/GetAppMonitorDataPaginationTraits.h>
#include <aws/rum/model/ListAppMonitorsPaginationTraits.h>
#include <aws/rum/model/ListRumMetricsDestinationsPaginationTraits.h>

namespace Aws {
namespace CloudWatchRUM {

using BatchGetRumMetricDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchRUMClient, Model::BatchGetRumMetricDefinitionsRequest,
                                      Pagination::BatchGetRumMetricDefinitionsPaginationTraits<CloudWatchRUMClient>>;
using GetAppMonitorDataPaginator = Aws::Utils::Pagination::Paginator<CloudWatchRUMClient, Model::GetAppMonitorDataRequest,
                                                                     Pagination::GetAppMonitorDataPaginationTraits<CloudWatchRUMClient>>;
using ListAppMonitorsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchRUMClient, Model::ListAppMonitorsRequest,
                                                                   Pagination::ListAppMonitorsPaginationTraits<CloudWatchRUMClient>>;
using ListRumMetricsDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchRUMClient, Model::ListRumMetricsDestinationsRequest,
                                      Pagination::ListRumMetricsDestinationsPaginationTraits<CloudWatchRUMClient>>;

}  // namespace CloudWatchRUM
}  // namespace Aws
