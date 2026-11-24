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
enum class SpecializationType { NOT_SET, USE_CASE, INDUSTRY, SERVICES };

namespace SpecializationTypeMapper {
AWS_MARKETPLACEDISCOVERY_API SpecializationType GetSpecializationTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForSpecializationType(SpecializationType value);
}  // namespace SpecializationTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
