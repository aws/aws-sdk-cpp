/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/xray/XRayClient.h>
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

namespace Aws {
namespace XRay {

using BatchGetTracesPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::BatchGetTracesRequest, Pagination::BatchGetTracesPaginationTraits<XRayClient>>;
using GetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetGroupsRequest, Pagination::GetGroupsPaginationTraits<XRayClient>>;
using GetInsightEventsPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetInsightEventsRequest, Pagination::GetInsightEventsPaginationTraits<XRayClient>>;
using GetInsightSummariesPaginator = Aws::Utils::Pagination::Paginator<XRayClient, Model::GetInsightSummariesRequest,
                                                                       Pagination::GetInsightSummariesPaginationTraits<XRayClient>>;
using GetSamplingRulesPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetSamplingRulesRequest, Pagination::GetSamplingRulesPaginationTraits<XRayClient>>;
using GetSamplingStatisticSummariesPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetSamplingStatisticSummariesRequest,
                                      Pagination::GetSamplingStatisticSummariesPaginationTraits<XRayClient>>;
using GetServiceGraphPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetServiceGraphRequest, Pagination::GetServiceGraphPaginationTraits<XRayClient>>;
using GetTimeSeriesServiceStatisticsPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetTimeSeriesServiceStatisticsRequest,
                                      Pagination::GetTimeSeriesServiceStatisticsPaginationTraits<XRayClient>>;
using GetTraceGraphPaginator =
    Aws::Utils::Pagination::Paginator<XRayClient, Model::GetTraceGraphRequest, Pagination::GetTraceGraphPaginationTraits<XRayClient>>;
using GetTraceSummariesPaginator = Aws::Utils::Pagination::Paginator<XRayClient, Model::GetTraceSummariesRequest,
                                                                     Pagination::GetTraceSummariesPaginationTraits<XRayClient>>;
using ListResourcePoliciesPaginator = Aws::Utils::Pagination::Paginator<XRayClient, Model::ListResourcePoliciesRequest,
                                                                        Pagination::ListResourcePoliciesPaginationTraits<XRayClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<XRayClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<XRayClient>>;

}  // namespace XRay
}  // namespace Aws
