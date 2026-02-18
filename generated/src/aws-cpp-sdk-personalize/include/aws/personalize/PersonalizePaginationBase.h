/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/personalize/model/ListBatchInferenceJobsPaginationTraits.h>
#include <aws/personalize/model/ListBatchSegmentJobsPaginationTraits.h>
#include <aws/personalize/model/ListCampaignsPaginationTraits.h>
#include <aws/personalize/model/ListDatasetExportJobsPaginationTraits.h>
#include <aws/personalize/model/ListDatasetGroupsPaginationTraits.h>
#include <aws/personalize/model/ListDatasetImportJobsPaginationTraits.h>
#include <aws/personalize/model/ListDatasetsPaginationTraits.h>
#include <aws/personalize/model/ListEventTrackersPaginationTraits.h>
#include <aws/personalize/model/ListFiltersPaginationTraits.h>
#include <aws/personalize/model/ListMetricAttributionMetricsPaginationTraits.h>
#include <aws/personalize/model/ListMetricAttributionsPaginationTraits.h>
#include <aws/personalize/model/ListRecipesPaginationTraits.h>
#include <aws/personalize/model/ListRecommendersPaginationTraits.h>
#include <aws/personalize/model/ListSchemasPaginationTraits.h>
#include <aws/personalize/model/ListSolutionVersionsPaginationTraits.h>
#include <aws/personalize/model/ListSolutionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Personalize {

class PersonalizeClient;

template <typename DerivedClient>
class PersonalizePaginationBase {
 public:
  /**
   * Create a paginator for ListBatchInferenceJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchInferenceJobsRequest,
                                    Pagination::ListBatchInferenceJobsPaginationTraits<DerivedClient>>
  ListBatchInferenceJobsPaginator(const Model::ListBatchInferenceJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchInferenceJobsRequest,
                                             Pagination::ListBatchInferenceJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBatchSegmentJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchSegmentJobsRequest,
                                    Pagination::ListBatchSegmentJobsPaginationTraits<DerivedClient>>
  ListBatchSegmentJobsPaginator(const Model::ListBatchSegmentJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchSegmentJobsRequest,
                                             Pagination::ListBatchSegmentJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCampaigns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest, Pagination::ListCampaignsPaginationTraits<DerivedClient>>
  ListCampaignsPaginator(const Model::ListCampaignsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest,
                                             Pagination::ListCampaignsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListDatasetExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetExportJobsRequest,
                                    Pagination::ListDatasetExportJobsPaginationTraits<DerivedClient>>
  ListDatasetExportJobsPaginator(const Model::ListDatasetExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetExportJobsRequest,
                                             Pagination::ListDatasetExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetGroupsRequest,
                                    Pagination::ListDatasetGroupsPaginationTraits<DerivedClient>>
  ListDatasetGroupsPaginator(const Model::ListDatasetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetGroupsRequest,
                                             Pagination::ListDatasetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasetImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetImportJobsRequest,
                                    Pagination::ListDatasetImportJobsPaginationTraits<DerivedClient>>
  ListDatasetImportJobsPaginator(const Model::ListDatasetImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetImportJobsRequest,
                                             Pagination::ListDatasetImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest, Pagination::ListDatasetsPaginationTraits<DerivedClient>>
  ListDatasetsPaginator(const Model::ListDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest,
                                             Pagination::ListDatasetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEventTrackers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventTrackersRequest,
                                    Pagination::ListEventTrackersPaginationTraits<DerivedClient>>
  ListEventTrackersPaginator(const Model::ListEventTrackersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventTrackersRequest,
                                             Pagination::ListEventTrackersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFiltersRequest, Pagination::ListFiltersPaginationTraits<DerivedClient>>
  ListFiltersPaginator(const Model::ListFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFiltersRequest,
                                             Pagination::ListFiltersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListMetricAttributionMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricAttributionMetricsRequest,
                                    Pagination::ListMetricAttributionMetricsPaginationTraits<DerivedClient>>
  ListMetricAttributionMetricsPaginator(const Model::ListMetricAttributionMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricAttributionMetricsRequest,
                                             Pagination::ListMetricAttributionMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMetricAttributions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricAttributionsRequest,
                                    Pagination::ListMetricAttributionsPaginationTraits<DerivedClient>>
  ListMetricAttributionsPaginator(const Model::ListMetricAttributionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetricAttributionsRequest,
                                             Pagination::ListMetricAttributionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecipesRequest, Pagination::ListRecipesPaginationTraits<DerivedClient>>
  ListRecipesPaginator(const Model::ListRecipesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecipesRequest,
                                             Pagination::ListRecipesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListRecommenders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendersRequest,
                                    Pagination::ListRecommendersPaginationTraits<DerivedClient>>
  ListRecommendersPaginator(const Model::ListRecommendersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendersRequest,
                                             Pagination::ListRecommendersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<DerivedClient>>
  ListSchemasPaginator(const Model::ListSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest,
                                             Pagination::ListSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSolutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolutionsRequest, Pagination::ListSolutionsPaginationTraits<DerivedClient>>
  ListSolutionsPaginator(const Model::ListSolutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolutionsRequest,
                                             Pagination::ListSolutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListSolutionVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolutionVersionsRequest,
                                    Pagination::ListSolutionVersionsPaginationTraits<DerivedClient>>
  ListSolutionVersionsPaginator(const Model::ListSolutionVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSolutionVersionsRequest,
                                             Pagination::ListSolutionVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Personalize
}  // namespace Aws
