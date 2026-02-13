/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3/model/ListBucketsPaginationTraits.h>
#include <aws/s3/model/ListDirectoryBucketsPaginationTraits.h>
#include <aws/s3/model/ListObjectsV2PaginationTraits.h>
#include <aws/s3/model/ListPartsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace S3 {

class S3Client;

template <typename DerivedClient>
class S3PaginationBase {
 public:
  /**
   * Create a paginator for ListBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBucketsRequest, Pagination::ListBucketsPaginationTraits<DerivedClient>>
  ListBucketsPaginator(const Model::ListBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBucketsRequest,
                                             Pagination::ListBucketsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListDirectoryBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDirectoryBucketsRequest,
                                    Pagination::ListDirectoryBucketsPaginationTraits<DerivedClient>>
  ListDirectoryBucketsPaginator(const Model::ListDirectoryBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDirectoryBucketsRequest,
                                             Pagination::ListDirectoryBucketsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectsV2Request, Pagination::ListObjectsV2PaginationTraits<DerivedClient>>
  ListObjectsV2Paginator(const Model::ListObjectsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectsV2Request,
                                             Pagination::ListObjectsV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListParts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits<DerivedClient>>
  ListPartsPaginator(const Model::ListPartsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace S3
}  // namespace Aws
