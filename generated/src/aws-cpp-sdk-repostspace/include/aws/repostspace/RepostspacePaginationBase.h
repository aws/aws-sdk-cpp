/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/repostspace/model/ListChannelsPaginationTraits.h>
#include <aws/repostspace/model/ListSpacesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace repostspace {

class RepostspaceClient;

template <typename DerivedClient>
class RepostspacePaginationBase {
 public:
  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest, Pagination::ListSpacesPaginationTraits<DerivedClient>>
  ListSpacesPaginator(const Model::ListSpacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest,
                                             Pagination::ListSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace repostspace
}  // namespace Aws
