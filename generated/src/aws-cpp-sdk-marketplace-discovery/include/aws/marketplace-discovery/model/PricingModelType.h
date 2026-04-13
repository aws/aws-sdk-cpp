/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class PricingModelType { NOT_SET, USAGE, CONTRACT, BYOL, FREE };

namespace PricingModelTypeMapper {
AWS_MARKETPLACEDISCOVERY_API PricingModelType GetPricingModelTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForPricingModelType(PricingModelType value);
}  // namespace PricingModelTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
