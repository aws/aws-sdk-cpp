/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace ResilienceHub {

class ResilienceHubClient;

template <typename DerivedClient>
class ResilienceHubPaginationBase {
 public:
  /**
   * Create a paginator for ListAlarmRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlarmRecommendationsRequest,
                                    Pagination::ListAlarmRecommendationsPaginationTraits<DerivedClient>>
  ListAlarmRecommendationsPaginator(const Model::ListAlarmRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlarmRecommendationsRequest,
                                             Pagination::ListAlarmRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppAssessmentComplianceDrifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAssessmentComplianceDriftsRequest,
                                    Pagination::ListAppAssessmentComplianceDriftsPaginationTraits<DerivedClient>>
  ListAppAssessmentComplianceDriftsPaginator(const Model::ListAppAssessmentComplianceDriftsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAssessmentComplianceDriftsRequest,
                                             Pagination::ListAppAssessmentComplianceDriftsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppAssessmentResourceDrifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAssessmentResourceDriftsRequest,
                                    Pagination::ListAppAssessmentResourceDriftsPaginationTraits<DerivedClient>>
  ListAppAssessmentResourceDriftsPaginator(const Model::ListAppAssessmentResourceDriftsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAssessmentResourceDriftsRequest,
                                             Pagination::ListAppAssessmentResourceDriftsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAssessmentsRequest,
                                    Pagination::ListAppAssessmentsPaginationTraits<DerivedClient>>
  ListAppAssessmentsPaginator(const Model::ListAppAssessmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAssessmentsRequest,
                                             Pagination::ListAppAssessmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppComponentCompliances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppComponentCompliancesRequest,
                                    Pagination::ListAppComponentCompliancesPaginationTraits<DerivedClient>>
  ListAppComponentCompliancesPaginator(const Model::ListAppComponentCompliancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppComponentCompliancesRequest,
                                             Pagination::ListAppComponentCompliancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppComponentRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppComponentRecommendationsRequest,
                                    Pagination::ListAppComponentRecommendationsPaginationTraits<DerivedClient>>
  ListAppComponentRecommendationsPaginator(const Model::ListAppComponentRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppComponentRecommendationsRequest,
                                             Pagination::ListAppComponentRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppInputSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInputSourcesRequest,
                                    Pagination::ListAppInputSourcesPaginationTraits<DerivedClient>>
  ListAppInputSourcesPaginator(const Model::ListAppInputSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInputSourcesRequest,
                                             Pagination::ListAppInputSourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>
  ListAppsPaginator(const Model::ListAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppVersionAppComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionAppComponentsRequest,
                                    Pagination::ListAppVersionAppComponentsPaginationTraits<DerivedClient>>
  ListAppVersionAppComponentsPaginator(const Model::ListAppVersionAppComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionAppComponentsRequest,
                                             Pagination::ListAppVersionAppComponentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppVersionResourceMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionResourceMappingsRequest,
                                    Pagination::ListAppVersionResourceMappingsPaginationTraits<DerivedClient>>
  ListAppVersionResourceMappingsPaginator(const Model::ListAppVersionResourceMappingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionResourceMappingsRequest,
                                             Pagination::ListAppVersionResourceMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppVersionResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionResourcesRequest,
                                    Pagination::ListAppVersionResourcesPaginationTraits<DerivedClient>>
  ListAppVersionResourcesPaginator(const Model::ListAppVersionResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionResourcesRequest,
                                             Pagination::ListAppVersionResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionsRequest,
                                    Pagination::ListAppVersionsPaginationTraits<DerivedClient>>
  ListAppVersionsPaginator(const Model::ListAppVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppVersionsRequest,
                                             Pagination::ListAppVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricsRequest, Pagination::ListMetricsPaginationTraits<DerivedClient>>
  ListMetricsPaginator(const Model::ListMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricsRequest,
                                             Pagination::ListMetricsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListRecommendationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationTemplatesRequest,
                                    Pagination::ListRecommendationTemplatesPaginationTraits<DerivedClient>>
  ListRecommendationTemplatesPaginator(const Model::ListRecommendationTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationTemplatesRequest,
                                             Pagination::ListRecommendationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResiliencyPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResiliencyPoliciesRequest,
                                    Pagination::ListResiliencyPoliciesPaginationTraits<DerivedClient>>
  ListResiliencyPoliciesPaginator(const Model::ListResiliencyPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResiliencyPoliciesRequest,
                                             Pagination::ListResiliencyPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceGroupingRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceGroupingRecommendationsRequest,
                                    Pagination::ListResourceGroupingRecommendationsPaginationTraits<DerivedClient>>
  ListResourceGroupingRecommendationsPaginator(const Model::ListResourceGroupingRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceGroupingRecommendationsRequest,
                                             Pagination::ListResourceGroupingRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSopRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSopRecommendationsRequest,
                                    Pagination::ListSopRecommendationsPaginationTraits<DerivedClient>>
  ListSopRecommendationsPaginator(const Model::ListSopRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSopRecommendationsRequest,
                                             Pagination::ListSopRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSuggestedResiliencyPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuggestedResiliencyPoliciesRequest,
                                    Pagination::ListSuggestedResiliencyPoliciesPaginationTraits<DerivedClient>>
  ListSuggestedResiliencyPoliciesPaginator(const Model::ListSuggestedResiliencyPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuggestedResiliencyPoliciesRequest,
                                             Pagination::ListSuggestedResiliencyPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestRecommendationsRequest,
                                    Pagination::ListTestRecommendationsPaginationTraits<DerivedClient>>
  ListTestRecommendationsPaginator(const Model::ListTestRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestRecommendationsRequest,
                                             Pagination::ListTestRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUnsupportedAppVersionResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUnsupportedAppVersionResourcesRequest,
                                    Pagination::ListUnsupportedAppVersionResourcesPaginationTraits<DerivedClient>>
  ListUnsupportedAppVersionResourcesPaginator(const Model::ListUnsupportedAppVersionResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUnsupportedAppVersionResourcesRequest,
                                             Pagination::ListUnsupportedAppVersionResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ResilienceHub
}  // namespace Aws
