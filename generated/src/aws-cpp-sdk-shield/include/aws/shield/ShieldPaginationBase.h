/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/shield/model/ListAttacksPaginationTraits.h>
#include <aws/shield/model/ListProtectionGroupsPaginationTraits.h>
#include <aws/shield/model/ListProtectionsPaginationTraits.h>
#include <aws/shield/model/ListResourcesInProtectionGroupPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Shield {

class ShieldClient;

template <typename DerivedClient>
class ShieldPaginationBase {
 public:
  /**
   * Create a paginator for ListAttacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttacksRequest, Pagination::ListAttacksPaginationTraits<DerivedClient>>
  ListAttacksPaginator(const Model::ListAttacksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttacksRequest,
                                             Pagination::ListAttacksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListProtectionGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectionGroupsRequest,
                                    Pagination::ListProtectionGroupsPaginationTraits<DerivedClient>>
  ListProtectionGroupsPaginator(const Model::ListProtectionGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectionGroupsRequest,
                                             Pagination::ListProtectionGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProtections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectionsRequest,
                                    Pagination::ListProtectionsPaginationTraits<DerivedClient>>
  ListProtectionsPaginator(const Model::ListProtectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectionsRequest,
                                             Pagination::ListProtectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListResourcesInProtectionGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesInProtectionGroupRequest,
                                    Pagination::ListResourcesInProtectionGroupPaginationTraits<DerivedClient>>
  ListResourcesInProtectionGroupPaginator(const Model::ListResourcesInProtectionGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesInProtectionGroupRequest,
                                             Pagination::ListResourcesInProtectionGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Shield
}  // namespace Aws
