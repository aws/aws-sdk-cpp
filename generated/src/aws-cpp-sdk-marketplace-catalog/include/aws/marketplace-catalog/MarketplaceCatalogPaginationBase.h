/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-catalog/model/ListChangeSetsPaginationTraits.h>
#include <aws/marketplace-catalog/model/ListEntitiesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MarketplaceCatalog {

class MarketplaceCatalogClient;

template <typename DerivedClient>
class MarketplaceCatalogPaginationBase {
 public:
  /**
   * Create a paginator for ListChangeSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChangeSetsRequest, Pagination::ListChangeSetsPaginationTraits<DerivedClient>>
  ListChangeSetsPaginator(const Model::ListChangeSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChangeSetsRequest,
                                             Pagination::ListChangeSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListEntities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesRequest, Pagination::ListEntitiesPaginationTraits<DerivedClient>>
  ListEntitiesPaginator(const Model::ListEntitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesRequest,
                                             Pagination::ListEntitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace MarketplaceCatalog
}  // namespace Aws
