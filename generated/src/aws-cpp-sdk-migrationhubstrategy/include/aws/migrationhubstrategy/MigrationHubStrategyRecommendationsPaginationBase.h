/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListAnalyzableServersPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListCollectorsPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskPaginationTraits.h>
#include <aws/migrationhubstrategy/model/ListServersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MigrationHubStrategyRecommendations {

class MigrationHubStrategyRecommendationsClient;

template <typename DerivedClient>
class MigrationHubStrategyRecommendationsPaginationBase {
 public:
  /**
   * Create a paginator for GetServerDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetServerDetailsRequest,
                                    Pagination::GetServerDetailsPaginationTraits<DerivedClient>>
  GetServerDetailsPaginator(const Model::GetServerDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetServerDetailsRequest,
                                             Pagination::GetServerDetailsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAnalyzableServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalyzableServersRequest,
                                    Pagination::ListAnalyzableServersPaginationTraits<DerivedClient>>
  ListAnalyzableServersPaginator(const Model::ListAnalyzableServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalyzableServersRequest,
                                             Pagination::ListAnalyzableServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplicationComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationComponentsRequest,
                                    Pagination::ListApplicationComponentsPaginationTraits<DerivedClient>>
  ListApplicationComponentsPaginator(const Model::ListApplicationComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationComponentsRequest,
                                             Pagination::ListApplicationComponentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectorsRequest, Pagination::ListCollectorsPaginationTraits<DerivedClient>>
  ListCollectorsPaginator(const Model::ListCollectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectorsRequest,
                                             Pagination::ListCollectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListImportFileTask operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportFileTaskRequest,
                                    Pagination::ListImportFileTaskPaginationTraits<DerivedClient>>
  ListImportFileTaskPaginator(const Model::ListImportFileTaskRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportFileTaskRequest,
                                             Pagination::ListImportFileTaskPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServersRequest, Pagination::ListServersPaginationTraits<DerivedClient>>
  ListServersPaginator(const Model::ListServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServersRequest,
                                             Pagination::ListServersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
