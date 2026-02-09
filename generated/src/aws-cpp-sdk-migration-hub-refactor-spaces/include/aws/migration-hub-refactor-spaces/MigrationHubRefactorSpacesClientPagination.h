/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClient.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesPaginationTraits.h>

namespace Aws {
namespace MigrationHubRefactorSpaces {

using ListApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubRefactorSpacesClient, Model::ListApplicationsRequest,
                                      Pagination::ListApplicationsPaginationTraits<MigrationHubRefactorSpacesClient>>;
using ListEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubRefactorSpacesClient, Model::ListEnvironmentsRequest,
                                      Pagination::ListEnvironmentsPaginationTraits<MigrationHubRefactorSpacesClient>>;
using ListEnvironmentVpcsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubRefactorSpacesClient, Model::ListEnvironmentVpcsRequest,
                                      Pagination::ListEnvironmentVpcsPaginationTraits<MigrationHubRefactorSpacesClient>>;
using ListRoutesPaginator = Aws::Utils::Pagination::Paginator<MigrationHubRefactorSpacesClient, Model::ListRoutesRequest,
                                                              Pagination::ListRoutesPaginationTraits<MigrationHubRefactorSpacesClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<MigrationHubRefactorSpacesClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<MigrationHubRefactorSpacesClient>>;

}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
