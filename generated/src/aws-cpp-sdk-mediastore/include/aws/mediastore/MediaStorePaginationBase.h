/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediastore/model/ListContainersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaStore {

class MediaStoreClient;

template <typename DerivedClient>
class MediaStorePaginationBase {
 public:
  /**
   * Create a paginator for ListContainers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainersRequest, Pagination::ListContainersPaginationTraits<DerivedClient>>
  ListContainersPaginator(const Model::ListContainersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainersRequest,
                                             Pagination::ListContainersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace MediaStore
}  // namespace Aws
