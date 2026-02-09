/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/timestream-write/TimestreamWriteClient.h>
#include <aws/timestream-write/model/ListBatchLoadTasksPaginationTraits.h>
#include <aws/timestream-write/model/ListDatabasesPaginationTraits.h>
#include <aws/timestream-write/model/ListTablesPaginationTraits.h>

namespace Aws {
namespace TimestreamWrite {

using ListBatchLoadTasksPaginator =
    Aws::Utils::Pagination::Paginator<TimestreamWriteClient, Model::ListBatchLoadTasksRequest,
                                      Pagination::ListBatchLoadTasksPaginationTraits<TimestreamWriteClient>>;
using ListDatabasesPaginator = Aws::Utils::Pagination::Paginator<TimestreamWriteClient, Model::ListDatabasesRequest,
                                                                 Pagination::ListDatabasesPaginationTraits<TimestreamWriteClient>>;
using ListTablesPaginator = Aws::Utils::Pagination::Paginator<TimestreamWriteClient, Model::ListTablesRequest,
                                                              Pagination::ListTablesPaginationTraits<TimestreamWriteClient>>;

}  // namespace TimestreamWrite
}  // namespace Aws
