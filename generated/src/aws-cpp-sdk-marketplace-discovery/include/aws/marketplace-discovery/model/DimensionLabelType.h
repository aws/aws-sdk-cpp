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
enum class DimensionLabelType { NOT_SET, Region, SagemakerOption };

namespace DimensionLabelTypeMapper {
AWS_MARKETPLACEDISCOVERY_API DimensionLabelType GetDimensionLabelTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForDimensionLabelType(DimensionLabelType value);
}  // namespace DimensionLabelTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
