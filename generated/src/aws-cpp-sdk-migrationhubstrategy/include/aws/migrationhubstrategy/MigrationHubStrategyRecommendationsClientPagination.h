/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClient.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListAnalyzableServersPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListCollectorsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListServersPaginationTraits.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {

using GetServerDetailsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubStrategyRecommendationsClient, Model::GetServerDetailsRequest,
                                      Pagination::GetServerDetailsPaginationTraits<MigrationHubStrategyRecommendationsClient>>;
using ListAnalyzableServersPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubStrategyRecommendationsClient, Model::ListAnalyzableServersRequest,
                                      Pagination::ListAnalyzableServersPaginationTraits<MigrationHubStrategyRecommendationsClient>>;
using ListApplicationComponentsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubStrategyRecommendationsClient, Model::ListApplicationComponentsRequest,
                                      Pagination::ListApplicationComponentsPaginationTraits<MigrationHubStrategyRecommendationsClient>>;
using ListCollectorsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubStrategyRecommendationsClient, Model::ListCollectorsRequest,
                                      Pagination::ListCollectorsPaginationTraits<MigrationHubStrategyRecommendationsClient>>;
using ListImportFileTaskPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubStrategyRecommendationsClient, Model::ListImportFileTaskRequest,
                                      Pagination::ListImportFileTaskPaginationTraits<MigrationHubStrategyRecommendationsClient>>;
using ListServersPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubStrategyRecommendationsClient, Model::ListServersRequest,
                                      Pagination::ListServersPaginationTraits<MigrationHubStrategyRecommendationsClient>>;

}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
