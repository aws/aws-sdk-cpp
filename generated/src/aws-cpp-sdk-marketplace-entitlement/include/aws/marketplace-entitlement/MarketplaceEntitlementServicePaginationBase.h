/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MarketplaceEntitlementService {

class MarketplaceEntitlementServiceClient;

template <typename DerivedClient>
class MarketplaceEntitlementServicePaginationBase {
 public:
  /**
   * Create a paginator for GetEntitlements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEntitlementsRequest,
                                    Pagination::GetEntitlementsPaginationTraits<DerivedClient>>
  GetEntitlementsPaginator(const Model::GetEntitlementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEntitlementsRequest,
                                             Pagination::GetEntitlementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace MarketplaceEntitlementService
}  // namespace Aws
