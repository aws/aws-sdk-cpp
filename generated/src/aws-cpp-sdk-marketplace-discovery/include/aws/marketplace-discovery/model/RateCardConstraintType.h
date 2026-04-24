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
enum class RateCardConstraintType { NOT_SET, Allowed, Disallowed };

namespace RateCardConstraintTypeMapper {
AWS_MARKETPLACEDISCOVERY_API RateCardConstraintType GetRateCardConstraintTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForRateCardConstraintType(RateCardConstraintType value);
}  // namespace RateCardConstraintTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
