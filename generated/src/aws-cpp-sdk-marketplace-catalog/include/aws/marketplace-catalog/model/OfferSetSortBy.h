/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class OfferSetSortBy { NOT_SET, Name, State, ReleaseDate, SolutionId, EntityId, LastModifiedDate };

namespace OfferSetSortByMapper {
AWS_MARKETPLACECATALOG_API OfferSetSortBy GetOfferSetSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferSetSortBy(OfferSetSortBy value);
}  // namespace OfferSetSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
