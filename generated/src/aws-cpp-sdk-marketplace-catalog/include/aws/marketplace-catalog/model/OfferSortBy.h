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
  enum class OfferSortBy
  {
    NOT_SET,
    EntityId,
    Name,
    ProductId,
    ReleaseDate,
    AvailabilityEndDate,
    BuyerAccounts,
    State,
    Targeting,
    LastModifiedDate
  };

namespace OfferSortByMapper
{
AWS_MARKETPLACECATALOG_API OfferSortBy GetOfferSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferSortBy(OfferSortBy value);
} // namespace OfferSortByMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
