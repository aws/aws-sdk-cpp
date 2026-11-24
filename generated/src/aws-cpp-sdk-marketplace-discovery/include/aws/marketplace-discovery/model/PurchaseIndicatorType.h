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
enum class PurchaseIndicatorType { NOT_SET, NOT_AVAILABLE_FOR_SUBSCRIPTION, AVAILABLE_FOR_USE_WITHOUT_SUBSCRIPTION };

namespace PurchaseIndicatorTypeMapper {
AWS_MARKETPLACEDISCOVERY_API PurchaseIndicatorType GetPurchaseIndicatorTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForPurchaseIndicatorType(PurchaseIndicatorType value);
}  // namespace PurchaseIndicatorTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
