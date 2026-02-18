/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resource-groups/model/ListGroupResourcesPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupingStatusesPaginationTraits.h>
#include <aws/resource-groups/model/ListGroupsPaginationTraits.h>
#include <aws/resource-groups/model/ListTagSyncTasksPaginationTraits.h>
#include <aws/resource-groups/model/SearchResourcesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ResourceGroups {

class ResourceGroupsClient;

template <typename DerivedClient>
class ResourceGroupsPaginationBase {
 public:
  /**
   * Create a paginator for ListGroupingStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupingStatusesRequest,
                                    Pagination::ListGroupingStatusesPaginationTraits<DerivedClient>>
  ListGroupingStatusesPaginator(const Model::ListGroupingStatusesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupingStatusesRequest,
                                             Pagination::ListGroupingStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupResourcesRequest,
                                    Pagination::ListGroupResourcesPaginationTraits<DerivedClient>>
  ListGroupResourcesPaginator(const Model::ListGroupResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupResourcesRequest,
                                             Pagination::ListGroupResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListTagSyncTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagSyncTasksRequest,
                                    Pagination::ListTagSyncTasksPaginationTraits<DerivedClient>>
  ListTagSyncTasksPaginator(const Model::ListTagSyncTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagSyncTasksRequest,
                                             Pagination::ListTagSyncTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for SearchResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourcesRequest,
                                    Pagination::SearchResourcesPaginationTraits<DerivedClient>>
  SearchResourcesPaginator(const Model::SearchResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourcesRequest,
                                             Pagination::SearchResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace ResourceGroups
}  // namespace Aws
