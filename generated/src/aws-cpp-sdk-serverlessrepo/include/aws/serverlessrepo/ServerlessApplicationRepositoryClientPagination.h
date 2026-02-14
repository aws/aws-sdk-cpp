/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryClient.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesPaginationTraits.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/serverlessrepo/model/ListApplicationsPaginationTraits.h>

namespace Aws {
namespace ServerlessApplicationRepository {

using ListApplicationDependenciesPaginator =
    Aws::Utils::Pagination::Paginator<ServerlessApplicationRepositoryClient, Model::ListApplicationDependenciesRequest,
                                      Pagination::ListApplicationDependenciesPaginationTraits<ServerlessApplicationRepositoryClient>>;
using ListApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<ServerlessApplicationRepositoryClient, Model::ListApplicationsRequest,
                                      Pagination::ListApplicationsPaginationTraits<ServerlessApplicationRepositoryClient>>;
using ListApplicationVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ServerlessApplicationRepositoryClient, Model::ListApplicationVersionsRequest,
                                      Pagination::ListApplicationVersionsPaginationTraits<ServerlessApplicationRepositoryClient>>;

}  // namespace ServerlessApplicationRepository
}  // namespace Aws
