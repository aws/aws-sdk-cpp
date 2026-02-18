/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3tables/S3TablesClient.h>
#include <aws/s3tables/model/ListNamespacesPaginationTraits.h>
#include <aws/s3tables/model/ListTableBucketsPaginationTraits.h>
#include <aws/s3tables/model/ListTablesPaginationTraits.h>

namespace Aws {
namespace S3Tables {

using ListNamespacesPaginator = Aws::Utils::Pagination::Paginator<S3TablesClient, Model::ListNamespacesRequest,
                                                                  Pagination::ListNamespacesPaginationTraits<S3TablesClient>>;
using ListTableBucketsPaginator = Aws::Utils::Pagination::Paginator<S3TablesClient, Model::ListTableBucketsRequest,
                                                                    Pagination::ListTableBucketsPaginationTraits<S3TablesClient>>;
using ListTablesPaginator =
    Aws::Utils::Pagination::Paginator<S3TablesClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<S3TablesClient>>;

}  // namespace S3Tables
}  // namespace Aws
