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
enum class BillingPeriodType { NOT_SET, Monthly };

namespace BillingPeriodTypeMapper {
AWS_MARKETPLACEDISCOVERY_API BillingPeriodType GetBillingPeriodTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForBillingPeriodType(BillingPeriodType value);
}  // namespace BillingPeriodTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
