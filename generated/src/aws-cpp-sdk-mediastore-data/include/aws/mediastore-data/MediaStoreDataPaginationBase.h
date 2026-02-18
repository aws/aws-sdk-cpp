/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediastore-data/model/ListItemsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaStoreData {

class MediaStoreDataClient;

template <typename DerivedClient>
class MediaStoreDataPaginationBase {
 public:
  /**
   * Create a paginator for ListItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListItemsRequest, Pagination::ListItemsPaginationTraits<DerivedClient>>
  ListItemsPaginator(const Model::ListItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListItemsRequest, Pagination::ListItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MediaStoreData
}  // namespace Aws
