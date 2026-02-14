/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resource-groups/ResourceGroupsClient.h>
#include <aws/resource-groups/model/ListGroupResourcesPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupingStatusesPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupsPaginationTraits.h>
#include <aws/resource-groups/model/ListTagSyncTasksPaginationTraits.h>
#include <aws/resource-groups/model/SearchResourcesPaginationTraits.h>

namespace Aws {
namespace ResourceGroups {

using ListGroupingStatusesPaginator =
    Aws::Utils::Pagination::Paginator<ResourceGroupsClient, Model::ListGroupingStatusesRequest,
                                      Pagination::ListGroupingStatusesPaginationTraits<ResourceGroupsClient>>;
using ListGroupResourcesPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsClient, Model::ListGroupResourcesRequest,
                                                                      Pagination::ListGroupResourcesPaginationTraits<ResourceGroupsClient>>;
using ListGroupsPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsClient, Model::ListGroupsRequest,
                                                              Pagination::ListGroupsPaginationTraits<ResourceGroupsClient>>;
using ListTagSyncTasksPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsClient, Model::ListTagSyncTasksRequest,
                                                                    Pagination::ListTagSyncTasksPaginationTraits<ResourceGroupsClient>>;
using SearchResourcesPaginator = Aws::Utils::Pagination::Paginator<ResourceGroupsClient, Model::SearchResourcesRequest,
                                                                   Pagination::SearchResourcesPaginationTraits<ResourceGroupsClient>>;

}  // namespace ResourceGroups
}  // namespace Aws
