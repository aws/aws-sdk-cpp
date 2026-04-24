/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pi/PIClient.h>
#include <aws/pi/model/DescribeDimensionKeysPaginationTraits.h>
#include <aws/pi/model/GetResourceMetricsPaginationTraits.h>
#include <aws/pi/model/ListAvailableResourceDimensionsPaginationTraits.h>
#include <aws/pi/model/ListAvailableResourceMetricsPaginationTraits.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsPaginationTraits.h>

namespace Aws {
namespace PI {

using DescribeDimensionKeysPaginator = Aws::Utils::Pagination::Paginator<PIClient, Model::DescribeDimensionKeysRequest,
                                                                         Pagination::DescribeDimensionKeysPaginationTraits<PIClient>>;
using GetResourceMetricsPaginator =
    Aws::Utils::Pagination::Paginator<PIClient, Model::GetResourceMetricsRequest, Pagination::GetResourceMetricsPaginationTraits<PIClient>>;
using ListAvailableResourceDimensionsPaginator =
    Aws::Utils::Pagination::Paginator<PIClient, Model::ListAvailableResourceDimensionsRequest,
                                      Pagination::ListAvailableResourceDimensionsPaginationTraits<PIClient>>;
using ListAvailableResourceMetricsPaginator =
    Aws::Utils::Pagination::Paginator<PIClient, Model::ListAvailableResourceMetricsRequest,
                                      Pagination::ListAvailableResourceMetricsPaginationTraits<PIClient>>;
using ListPerformanceAnalysisReportsPaginator =
    Aws::Utils::Pagination::Paginator<PIClient, Model::ListPerformanceAnalysisReportsRequest,
                                      Pagination::ListPerformanceAnalysisReportsPaginationTraits<PIClient>>;

}  // namespace PI
}  // namespace Aws
