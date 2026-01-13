/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesClient;

template <typename DerivedClient>
class MigrationHubRefactorSpacesPaginationBase {
 public:
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
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEnvironmentVpcs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentVpcsRequest,
                                    Pagination::ListEnvironmentVpcsPaginationTraits<DerivedClient>>
  ListEnvironmentVpcsPaginator(const Model::ListEnvironmentVpcsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentVpcsRequest,
                                             Pagination::ListEnvironmentVpcsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutesRequest, Pagination::ListRoutesPaginationTraits<DerivedClient>>
  ListRoutesPaginator(const Model::ListRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutesRequest,
                                             Pagination::ListRoutesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
