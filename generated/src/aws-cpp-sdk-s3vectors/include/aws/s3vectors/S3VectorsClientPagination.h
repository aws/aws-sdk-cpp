/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3vectors/S3VectorsClient.h>
#include <aws/s3vectors/model/ListIndexesPaginationTraits.h>
#include <aws/s3vectors/model/ListVectorBucketsPaginationTraits.h>
#include <aws/s3vectors/model/ListVectorsPaginationTraits.h>

namespace Aws {
namespace S3Vectors {

using ListIndexesPaginator =
    Aws::Utils::Pagination::Paginator<S3VectorsClient, Model::ListIndexesRequest, Pagination::ListIndexesPaginationTraits<S3VectorsClient>>;
using ListVectorBucketsPaginator = Aws::Utils::Pagination::Paginator<S3VectorsClient, Model::ListVectorBucketsRequest,
                                                                     Pagination::ListVectorBucketsPaginationTraits<S3VectorsClient>>;
using ListVectorsPaginator =
    Aws::Utils::Pagination::Paginator<S3VectorsClient, Model::ListVectorsRequest, Pagination::ListVectorsPaginationTraits<S3VectorsClient>>;

}  // namespace S3Vectors
}  // namespace Aws
