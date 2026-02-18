/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3vectors/model/ListIndexesPaginationTraits.h>
#include <aws/s3vectors/model/ListVectorBucketsPaginationTraits.h>
#include <aws/s3vectors/model/ListVectorsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace S3Vectors {

class S3VectorsClient;

template <typename DerivedClient>
class S3VectorsPaginationBase {
 public:
  /**
   * Create a paginator for ListIndexes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexesRequest, Pagination::ListIndexesPaginationTraits<DerivedClient>>
  ListIndexesPaginator(const Model::ListIndexesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexesRequest,
                                             Pagination::ListIndexesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListVectorBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVectorBucketsRequest,
                                    Pagination::ListVectorBucketsPaginationTraits<DerivedClient>>
  ListVectorBucketsPaginator(const Model::ListVectorBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVectorBucketsRequest,
                                             Pagination::ListVectorBucketsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVectorsRequest, Pagination::ListVectorsPaginationTraits<DerivedClient>>
  ListVectorsPaginator(const Model::ListVectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVectorsRequest,
                                             Pagination::ListVectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace S3Vectors
}  // namespace Aws
