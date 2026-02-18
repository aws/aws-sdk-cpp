/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/model/ListScheduledQueriesPaginationTraits.h>
#include <aws/timestream-query/model/ListTagsForResourcePaginationTraits.h>
#include <aws/timestream-query/model/QueryPaginationTraits.h>

namespace Aws {
namespace TimestreamQuery {

using ListScheduledQueriesPaginator =
    Aws::Utils::Pagination::Paginator<TimestreamQueryClient, Model::ListScheduledQueriesRequest,
                                      Pagination::ListScheduledQueriesPaginationTraits<TimestreamQueryClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<TimestreamQueryClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<TimestreamQueryClient>>;
using QueryPaginator =
    Aws::Utils::Pagination::Paginator<TimestreamQueryClient, Model::QueryRequest, Pagination::QueryPaginationTraits<TimestreamQueryClient>>;

}  // namespace TimestreamQuery
}  // namespace Aws
