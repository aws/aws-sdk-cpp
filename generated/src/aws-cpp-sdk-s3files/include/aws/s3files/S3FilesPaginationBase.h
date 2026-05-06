/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3files/model/ListAccessPointsPaginationTraits.h>
#include <aws/s3files/model/ListFileSystemsPaginationTraits.h>
#include <aws/s3files/model/ListMountTargetsPaginationTraits.h>
#include <aws/s3files/model/ListTagsForResourcePaginationTraits.h>

#include <memory>

namespace Aws {
namespace S3Files {

template <typename DerivedClient>
class S3FilesPaginationBase {
 public:
  /**
   * Create a paginator for ListAccessPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsRequest,
                                    Pagination::ListAccessPointsPaginationTraits<DerivedClient>>
  ListAccessPointsPaginator(const Model::ListAccessPointsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPointsRequest,
                                             Pagination::ListAccessPointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFileSystems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileSystemsRequest,
                                    Pagination::ListFileSystemsPaginationTraits<DerivedClient>>
  ListFileSystemsPaginator(const Model::ListFileSystemsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileSystemsRequest,
                                             Pagination::ListFileSystemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMountTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMountTargetsRequest,
                                    Pagination::ListMountTargetsPaginationTraits<DerivedClient>>
  ListMountTargetsPaginator(const Model::ListMountTargetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMountTargetsRequest,
                                             Pagination::ListMountTargetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace S3Files
}  // namespace Aws
