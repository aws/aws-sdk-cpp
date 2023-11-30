/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{
  enum class ResaleAuthorizationSortBy
  {
    NOT_SET,
    EntityId,
    Name,
    ProductId,
    ProductName,
    ManufacturerAccountId,
    ManufacturerLegalName,
    ResellerAccountID,
    ResellerLegalName,
    Status,
    OfferExtendedStatus,
    CreatedDate,
    AvailabilityEndDate,
    LastModifiedDate
  };

namespace ResaleAuthorizationSortByMapper
{
AWS_MARKETPLACECATALOG_API ResaleAuthorizationSortBy GetResaleAuthorizationSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForResaleAuthorizationSortBy(ResaleAuthorizationSortBy value);
} // namespace ResaleAuthorizationSortByMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
