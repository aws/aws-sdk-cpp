/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
enum class ResourceType { NOT_SET, OPPORTUNITY, BENEFIT_ALLOCATION };

namespace ResourceTypeMapper {
AWS_PARTNERCENTRALBENEFITS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
