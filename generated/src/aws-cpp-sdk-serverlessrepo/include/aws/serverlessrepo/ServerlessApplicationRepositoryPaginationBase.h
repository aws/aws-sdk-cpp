/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesPaginationTraits.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/serverlessrepo/model/ListApplicationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryClient;

template <typename DerivedClient>
class ServerlessApplicationRepositoryPaginationBase {
 public:
  /**
   * Create a paginator for ListApplicationDependencies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationDependenciesRequest,
                                    Pagination::ListApplicationDependenciesPaginationTraits<DerivedClient>>
  ListApplicationDependenciesPaginator(const Model::ListApplicationDependenciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationDependenciesRequest,
                                             Pagination::ListApplicationDependenciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListApplicationVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationVersionsRequest,
                                    Pagination::ListApplicationVersionsPaginationTraits<DerivedClient>>
  ListApplicationVersionsPaginator(const Model::ListApplicationVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationVersionsRequest,
                                             Pagination::ListApplicationVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ServerlessApplicationRepository
}  // namespace Aws
