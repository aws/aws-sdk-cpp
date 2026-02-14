/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceClient.h>
#include <aws/marketplace-entitlement/model/GetEntitlementsPaginationTraits.h>

namespace Aws {
namespace MarketplaceEntitlementService {

using GetEntitlementsPaginator =
    Aws::Utils::Pagination::Paginator<MarketplaceEntitlementServiceClient, Model::GetEntitlementsRequest,
                                      Pagination::GetEntitlementsPaginationTraits<MarketplaceEntitlementServiceClient>>;

}  // namespace MarketplaceEntitlementService
}  // namespace Aws
