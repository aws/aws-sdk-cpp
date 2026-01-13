/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3outposts/model/ListEndpointsPaginationTraits.h>
#include <aws/s3outposts/model/ListOutpostsWithS3PaginationTraits.h>
#include <aws/s3outposts/model/ListSharedEndpointsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace S3Outposts {

class S3OutpostsClient;

template <typename DerivedClient>
class S3OutpostsPaginationBase {
 public:
  /**
   * Create a paginator for ListEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsRequest, Pagination::ListEndpointsPaginationTraits<DerivedClient>>
  ListEndpointsPaginator(const Model::ListEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsRequest,
                                             Pagination::ListEndpointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListOutpostsWithS3 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutpostsWithS3Request,
                                    Pagination::ListOutpostsWithS3PaginationTraits<DerivedClient>>
  ListOutpostsWithS3Paginator(const Model::ListOutpostsWithS3Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutpostsWithS3Request,
                                             Pagination::ListOutpostsWithS3PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSharedEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharedEndpointsRequest,
                                    Pagination::ListSharedEndpointsPaginationTraits<DerivedClient>>
  ListSharedEndpointsPaginator(const Model::ListSharedEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharedEndpointsRequest,
                                             Pagination::ListSharedEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace S3Outposts
}  // namespace Aws
