/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/qapps/model/ListLibraryItemsPaginationTraits.h>
#include <aws/qapps/model/ListQAppsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace QApps {

class QAppsClient;

template <typename DerivedClient>
class QAppsPaginationBase {
 public:
  /**
   * Create a paginator for ListLibraryItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLibraryItemsRequest,
                                    Pagination::ListLibraryItemsPaginationTraits<DerivedClient>>
  ListLibraryItemsPaginator(const Model::ListLibraryItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLibraryItemsRequest,
                                             Pagination::ListLibraryItemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListQApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQAppsRequest, Pagination::ListQAppsPaginationTraits<DerivedClient>>
  ListQAppsPaginator(const Model::ListQAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQAppsRequest, Pagination::ListQAppsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace QApps
}  // namespace Aws
