/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pi/model/DescribeDimensionKeysPaginationTraits.h>
#include <aws/pi/model/GetResourceMetricsPaginationTraits.h>
#include <aws/pi/model/ListAvailableResourceDimensionsPaginationTraits.h>
#include <aws/pi/model/ListAvailableResourceMetricsPaginationTraits.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PI {

class PIClient;

template <typename DerivedClient>
class PIPaginationBase {
 public:
  /**
   * Create a paginator for DescribeDimensionKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDimensionKeysRequest,
                                    Pagination::DescribeDimensionKeysPaginationTraits<DerivedClient>>
  DescribeDimensionKeysPaginator(const Model::DescribeDimensionKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDimensionKeysRequest,
                                             Pagination::DescribeDimensionKeysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourceMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceMetricsRequest,
                                    Pagination::GetResourceMetricsPaginationTraits<DerivedClient>>
  GetResourceMetricsPaginator(const Model::GetResourceMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceMetricsRequest,
                                             Pagination::GetResourceMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAvailableResourceDimensions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableResourceDimensionsRequest,
                                    Pagination::ListAvailableResourceDimensionsPaginationTraits<DerivedClient>>
  ListAvailableResourceDimensionsPaginator(const Model::ListAvailableResourceDimensionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableResourceDimensionsRequest,
                                             Pagination::ListAvailableResourceDimensionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAvailableResourceMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableResourceMetricsRequest,
                                    Pagination::ListAvailableResourceMetricsPaginationTraits<DerivedClient>>
  ListAvailableResourceMetricsPaginator(const Model::ListAvailableResourceMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableResourceMetricsRequest,
                                             Pagination::ListAvailableResourceMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPerformanceAnalysisReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPerformanceAnalysisReportsRequest,
                                    Pagination::ListPerformanceAnalysisReportsPaginationTraits<DerivedClient>>
  ListPerformanceAnalysisReportsPaginator(const Model::ListPerformanceAnalysisReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPerformanceAnalysisReportsRequest,
                                             Pagination::ListPerformanceAnalysisReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PI
}  // namespace Aws
