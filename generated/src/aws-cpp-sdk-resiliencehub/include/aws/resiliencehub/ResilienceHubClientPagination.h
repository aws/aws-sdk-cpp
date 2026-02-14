/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resiliencehub/ResilienceHubClient.h>
#include <aws/resiliencehub/model/ListAlarmRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppAssessmentComplianceDriftsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppAssessmentResourceDriftsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppAssessmentsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppComponentCompliancesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppInputSourcesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionAppComponentsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionResourceMappingsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionResourcesPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppVersionsPaginationTraits.h>
#include <aws/resiliencehub/model/ListAppsPaginationTraits.h>
#include <aws/resiliencehub/model/ListMetricsPaginationTraits.h>
#include <aws/resiliencehub/model/ListRecommendationTemplatesPaginationTraits.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesPaginationTraits.h>
#include <aws/resiliencehub/model/ListResourceGroupingRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListSopRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListSuggestedResiliencyPoliciesPaginationTraits.h>
#include <aws/resiliencehub/model/ListTestRecommendationsPaginationTraits.h>
#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesPaginationTraits.h>

namespace Aws {
namespace ResilienceHub {

using ListAlarmRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAlarmRecommendationsRequest,
                                      Pagination::ListAlarmRecommendationsPaginationTraits<ResilienceHubClient>>;
using ListAppAssessmentComplianceDriftsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppAssessmentComplianceDriftsRequest,
                                      Pagination::ListAppAssessmentComplianceDriftsPaginationTraits<ResilienceHubClient>>;
using ListAppAssessmentResourceDriftsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppAssessmentResourceDriftsRequest,
                                      Pagination::ListAppAssessmentResourceDriftsPaginationTraits<ResilienceHubClient>>;
using ListAppAssessmentsPaginator = Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppAssessmentsRequest,
                                                                      Pagination::ListAppAssessmentsPaginationTraits<ResilienceHubClient>>;
using ListAppComponentCompliancesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppComponentCompliancesRequest,
                                      Pagination::ListAppComponentCompliancesPaginationTraits<ResilienceHubClient>>;
using ListAppComponentRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppComponentRecommendationsRequest,
                                      Pagination::ListAppComponentRecommendationsPaginationTraits<ResilienceHubClient>>;
using ListAppInputSourcesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppInputSourcesRequest,
                                      Pagination::ListAppInputSourcesPaginationTraits<ResilienceHubClient>>;
using ListAppsPaginator = Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppsRequest,
                                                            Pagination::ListAppsPaginationTraits<ResilienceHubClient>>;
using ListAppVersionAppComponentsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppVersionAppComponentsRequest,
                                      Pagination::ListAppVersionAppComponentsPaginationTraits<ResilienceHubClient>>;
using ListAppVersionResourceMappingsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppVersionResourceMappingsRequest,
                                      Pagination::ListAppVersionResourceMappingsPaginationTraits<ResilienceHubClient>>;
using ListAppVersionResourcesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppVersionResourcesRequest,
                                      Pagination::ListAppVersionResourcesPaginationTraits<ResilienceHubClient>>;
using ListAppVersionsPaginator = Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListAppVersionsRequest,
                                                                   Pagination::ListAppVersionsPaginationTraits<ResilienceHubClient>>;
using ListMetricsPaginator = Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListMetricsRequest,
                                                               Pagination::ListMetricsPaginationTraits<ResilienceHubClient>>;
using ListRecommendationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListRecommendationTemplatesRequest,
                                      Pagination::ListRecommendationTemplatesPaginationTraits<ResilienceHubClient>>;
using ListResiliencyPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListResiliencyPoliciesRequest,
                                      Pagination::ListResiliencyPoliciesPaginationTraits<ResilienceHubClient>>;
using ListResourceGroupingRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListResourceGroupingRecommendationsRequest,
                                      Pagination::ListResourceGroupingRecommendationsPaginationTraits<ResilienceHubClient>>;
using ListSopRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListSopRecommendationsRequest,
                                      Pagination::ListSopRecommendationsPaginationTraits<ResilienceHubClient>>;
using ListSuggestedResiliencyPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListSuggestedResiliencyPoliciesRequest,
                                      Pagination::ListSuggestedResiliencyPoliciesPaginationTraits<ResilienceHubClient>>;
using ListTestRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListTestRecommendationsRequest,
                                      Pagination::ListTestRecommendationsPaginationTraits<ResilienceHubClient>>;
using ListUnsupportedAppVersionResourcesPaginator =
    Aws::Utils::Pagination::Paginator<ResilienceHubClient, Model::ListUnsupportedAppVersionResourcesRequest,
                                      Pagination::ListUnsupportedAppVersionResourcesPaginationTraits<ResilienceHubClient>>;

}  // namespace ResilienceHub
}  // namespace Aws
