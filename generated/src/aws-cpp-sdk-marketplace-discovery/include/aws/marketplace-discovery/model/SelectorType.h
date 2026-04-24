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
enum class SelectorType { NOT_SET, Duration };

namespace SelectorTypeMapper {
AWS_MARKETPLACEDISCOVERY_API SelectorType GetSelectorTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForSelectorType(SelectorType value);
}  // namespace SelectorTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
