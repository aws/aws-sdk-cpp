/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace ResourceTypeMapper {

static const int OPPORTUNITY_HASH = HashingUtils::HashString("OPPORTUNITY");
static const int BENEFIT_ALLOCATION_HASH = HashingUtils::HashString("BENEFIT_ALLOCATION");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPPORTUNITY_HASH) {
    return ResourceType::OPPORTUNITY;
  } else if (hashCode == BENEFIT_ALLOCATION_HASH) {
    return ResourceType::BENEFIT_ALLOCATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::OPPORTUNITY:
      return "OPPORTUNITY";
    case ResourceType::BENEFIT_ALLOCATION:
      return "BENEFIT_ALLOCATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
