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
enum class OfferSetStateString { NOT_SET, Draft, Released };

namespace OfferSetStateStringMapper {
AWS_MARKETPLACECATALOG_API OfferSetStateString GetOfferSetStateStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForOfferSetStateString(OfferSetStateString value);
}  // namespace OfferSetStateStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
