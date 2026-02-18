/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/xray/model/BatchGetTracesPaginationTraits.h>
#include <aws/xray/model/GetGroupsPaginationTraits.h>
#include <aws/xray/model/GetInsightEventsPaginationTraits.h>
#include <aws/xray/model/GetInsightSummariesPaginationTraits.h>
#include <aws/xray/model/GetSamplingRulesPaginationTraits.h>
#include <aws/xray/model/GetSamplingStatisticSummariesPaginationTraits.h>
#include <aws/xray/model/GetServiceGraphPaginationTraits.h>
#include <aws/xray/model/GetTimeSeriesServiceStatisticsPaginationTraits.h>
#include <aws/xray/model/GetTraceGraphPaginationTraits.h>
#include <aws/xray/model/GetTraceSummariesPaginationTraits.h>
#include <aws/xray/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/xray/model/ListTagsForResourcePaginationTraits.h>

#include <memory>

namespace Aws {
namespace XRay {

class XRayClient;

template <typename DerivedClient>
class XRayPaginationBase {
 public:
  /**
   * Create a paginator for BatchGetTraces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetTracesRequest, Pagination::BatchGetTracesPaginationTraits<DerivedClient>>
  BatchGetTracesPaginator(const Model::BatchGetTracesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetTracesRequest,
                                             Pagination::BatchGetTracesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetGroupsRequest, Pagination::GetGroupsPaginationTraits<DerivedClient>>
  GetGroupsPaginator(const Model::GetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetGroupsRequest, Pagination::GetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetInsightEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInsightEventsRequest,
                                    Pagination::GetInsightEventsPaginationTraits<DerivedClient>>
  GetInsightEventsPaginator(const Model::GetInsightEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInsightEventsRequest,
                                             Pagination::GetInsightEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetInsightSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInsightSummariesRequest,
                                    Pagination::GetInsightSummariesPaginationTraits<DerivedClient>>
  GetInsightSummariesPaginator(const Model::GetInsightSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInsightSummariesRequest,
                                             Pagination::GetInsightSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSamplingRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSamplingRulesRequest,
                                    Pagination::GetSamplingRulesPaginationTraits<DerivedClient>>
  GetSamplingRulesPaginator(const Model::GetSamplingRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSamplingRulesRequest,
                                             Pagination::GetSamplingRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetSamplingStatisticSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSamplingStatisticSummariesRequest,
                                    Pagination::GetSamplingStatisticSummariesPaginationTraits<DerivedClient>>
  GetSamplingStatisticSummariesPaginator(const Model::GetSamplingStatisticSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSamplingStatisticSummariesRequest,
                                             Pagination::GetSamplingStatisticSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetServiceGraph operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetServiceGraphRequest,
                                    Pagination::GetServiceGraphPaginationTraits<DerivedClient>>
  GetServiceGraphPaginator(const Model::GetServiceGraphRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetServiceGraphRequest,
                                             Pagination::GetServiceGraphPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetTimeSeriesServiceStatistics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTimeSeriesServiceStatisticsRequest,
                                    Pagination::GetTimeSeriesServiceStatisticsPaginationTraits<DerivedClient>>
  GetTimeSeriesServiceStatisticsPaginator(const Model::GetTimeSeriesServiceStatisticsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTimeSeriesServiceStatisticsRequest,
                                             Pagination::GetTimeSeriesServiceStatisticsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTraceGraph operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTraceGraphRequest, Pagination::GetTraceGraphPaginationTraits<DerivedClient>>
  GetTraceGraphPaginator(const Model::GetTraceGraphRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTraceGraphRequest,
                                             Pagination::GetTraceGraphPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetTraceSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTraceSummariesRequest,
                                    Pagination::GetTraceSummariesPaginationTraits<DerivedClient>>
  GetTraceSummariesPaginator(const Model::GetTraceSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTraceSummariesRequest,
                                             Pagination::GetTraceSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePoliciesRequest,
                                    Pagination::ListResourcePoliciesPaginationTraits<DerivedClient>>
  ListResourcePoliciesPaginator(const Model::ListResourcePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePoliciesRequest,
                                             Pagination::ListResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace XRay
}  // namespace Aws
