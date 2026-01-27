/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/ListBucketsPaginationTraits.h>
#include <aws/s3/model/ListDirectoryBucketsPaginationTraits.h>
#include <aws/s3/model/ListObjectsV2PaginationTraits.h>
#include <aws/s3/model/ListPartsPaginationTraits.h>

namespace Aws {
namespace S3 {

using ListBucketsPaginator =
    Aws::Utils::Pagination::PagePaginator<S3Client, Model::ListBucketsRequest, Pagination::ListBucketsPaginationTraits>;
using ListDirectoryBucketsPaginator =
    Aws::Utils::Pagination::PagePaginator<S3Client, Model::ListDirectoryBucketsRequest, Pagination::ListDirectoryBucketsPaginationTraits>;
using ListObjectsV2Paginator =
    Aws::Utils::Pagination::PagePaginator<S3Client, Model::ListObjectsV2Request, Pagination::ListObjectsV2PaginationTraits>;
using ListPartsPaginator = Aws::Utils::Pagination::PagePaginator<S3Client, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits>;

}  // namespace S3
}  // namespace Aws
