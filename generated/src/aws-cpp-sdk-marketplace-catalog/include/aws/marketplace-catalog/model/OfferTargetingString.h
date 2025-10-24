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
enum class OfferTargetingString { NOT_SET, BuyerAccounts, ParticipatingPrograms, CountryCodes, None };

namespace OfferTargetingStringMapper {
AWS_MARKETPLACECATALOG_API OfferTargetingString GetOfferTargetingStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferTargetingString(OfferTargetingString value);
}  // namespace OfferTargetingStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
