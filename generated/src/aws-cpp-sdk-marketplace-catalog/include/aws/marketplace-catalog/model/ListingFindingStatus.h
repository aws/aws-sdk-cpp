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
enum class ListingFindingStatus { NOT_SET, PASS, FAIL };

namespace ListingFindingStatusMapper {
AWS_MARKETPLACECATALOG_API ListingFindingStatus GetListingFindingStatusForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForListingFindingStatus(ListingFindingStatus value);
}  // namespace ListingFindingStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
