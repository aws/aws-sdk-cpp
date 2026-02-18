/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/timestream-query/model/ListScheduledQueriesPaginationTraits.h>
#include <aws/timestream-query/model/ListTagsForResourcePaginationTraits.h>
#include <aws/timestream-query/model/QueryPaginationTraits.h>

#include <memory>

namespace Aws {
namespace TimestreamQuery {

class TimestreamQueryClient;

template <typename DerivedClient>
class TimestreamQueryPaginationBase {
 public:
  /**
   * Create a paginator for ListScheduledQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledQueriesRequest,
                                    Pagination::ListScheduledQueriesPaginationTraits<DerivedClient>>
  ListScheduledQueriesPaginator(const Model::ListScheduledQueriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledQueriesRequest,
                                             Pagination::ListScheduledQueriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for Query operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::QueryRequest, Pagination::QueryPaginationTraits<DerivedClient>> QueryPaginator(
      const Model::QueryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::QueryRequest, Pagination::QueryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace TimestreamQuery
}  // namespace Aws
