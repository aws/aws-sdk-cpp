/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/personalize/PersonalizeClient.h>
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

namespace Aws {
namespace Personalize {

using ListBatchInferenceJobsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListBatchInferenceJobsRequest,
                                      Pagination::ListBatchInferenceJobsPaginationTraits<PersonalizeClient>>;
using ListBatchSegmentJobsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListBatchSegmentJobsRequest,
                                      Pagination::ListBatchSegmentJobsPaginationTraits<PersonalizeClient>>;
using ListCampaignsPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListCampaignsRequest,
                                                                 Pagination::ListCampaignsPaginationTraits<PersonalizeClient>>;
using ListDatasetExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListDatasetExportJobsRequest,
                                      Pagination::ListDatasetExportJobsPaginationTraits<PersonalizeClient>>;
using ListDatasetGroupsPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListDatasetGroupsRequest,
                                                                     Pagination::ListDatasetGroupsPaginationTraits<PersonalizeClient>>;
using ListDatasetImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListDatasetImportJobsRequest,
                                      Pagination::ListDatasetImportJobsPaginationTraits<PersonalizeClient>>;
using ListDatasetsPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListDatasetsRequest,
                                                                Pagination::ListDatasetsPaginationTraits<PersonalizeClient>>;
using ListEventTrackersPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListEventTrackersRequest,
                                                                     Pagination::ListEventTrackersPaginationTraits<PersonalizeClient>>;
using ListFiltersPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListFiltersRequest,
                                                               Pagination::ListFiltersPaginationTraits<PersonalizeClient>>;
using ListMetricAttributionMetricsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListMetricAttributionMetricsRequest,
                                      Pagination::ListMetricAttributionMetricsPaginationTraits<PersonalizeClient>>;
using ListMetricAttributionsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListMetricAttributionsRequest,
                                      Pagination::ListMetricAttributionsPaginationTraits<PersonalizeClient>>;
using ListRecipesPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListRecipesRequest,
                                                               Pagination::ListRecipesPaginationTraits<PersonalizeClient>>;
using ListRecommendersPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListRecommendersRequest,
                                                                    Pagination::ListRecommendersPaginationTraits<PersonalizeClient>>;
using ListSchemasPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListSchemasRequest,
                                                               Pagination::ListSchemasPaginationTraits<PersonalizeClient>>;
using ListSolutionsPaginator = Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListSolutionsRequest,
                                                                 Pagination::ListSolutionsPaginationTraits<PersonalizeClient>>;
using ListSolutionVersionsPaginator =
    Aws::Utils::Pagination::Paginator<PersonalizeClient, Model::ListSolutionVersionsRequest,
                                      Pagination::ListSolutionVersionsPaginationTraits<PersonalizeClient>>;

}  // namespace Personalize
}  // namespace Aws
