/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/ListBucketsPaginationTraits.h>
#include <aws/s3-crt/model/ListDirectoryBucketsPaginationTraits.h>
#include <aws/s3-crt/model/ListObjectsV2PaginationTraits.h>
#include <aws/s3-crt/model/ListPartsPaginationTraits.h>

namespace Aws {
namespace S3Crt {

using ListBucketsPaginator =
    Aws::Utils::Pagination::Paginator<S3CrtClient, Model::ListBucketsRequest, Pagination::ListBucketsPaginationTraits<S3CrtClient>>;
using ListDirectoryBucketsPaginator = Aws::Utils::Pagination::Paginator<S3CrtClient, Model::ListDirectoryBucketsRequest,
                                                                        Pagination::ListDirectoryBucketsPaginationTraits<S3CrtClient>>;
using ListObjectsV2Paginator =
    Aws::Utils::Pagination::Paginator<S3CrtClient, Model::ListObjectsV2Request, Pagination::ListObjectsV2PaginationTraits<S3CrtClient>>;
using ListPartsPaginator =
    Aws::Utils::Pagination::Paginator<S3CrtClient, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits<S3CrtClient>>;

}  // namespace S3Crt
}  // namespace Aws
