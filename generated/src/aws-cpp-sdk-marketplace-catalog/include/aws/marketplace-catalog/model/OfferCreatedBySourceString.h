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
enum class OfferCreatedBySourceString { NOT_SET, Seller, AwsMarketplace };

namespace OfferCreatedBySourceStringMapper {
AWS_MARKETPLACECATALOG_API OfferCreatedBySourceString GetOfferCreatedBySourceStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferCreatedBySourceString(OfferCreatedBySourceString value);
}  // namespace OfferCreatedBySourceStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
