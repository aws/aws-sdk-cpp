/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/SpecializationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace SpecializationTypeMapper {

static const int USE_CASE_HASH = HashingUtils::HashString("USE_CASE");
static const int INDUSTRY_HASH = HashingUtils::HashString("INDUSTRY");
static const int SERVICES_HASH = HashingUtils::HashString("SERVICES");

SpecializationType GetSpecializationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USE_CASE_HASH) {
    return SpecializationType::USE_CASE;
  } else if (hashCode == INDUSTRY_HASH) {
    return SpecializationType::INDUSTRY;
  } else if (hashCode == SERVICES_HASH) {
    return SpecializationType::SERVICES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpecializationType>(hashCode);
  }

  return SpecializationType::NOT_SET;
}

Aws::String GetNameForSpecializationType(SpecializationType enumValue) {
  switch (enumValue) {
    case SpecializationType::NOT_SET:
      return {};
    case SpecializationType::USE_CASE:
      return "USE_CASE";
    case SpecializationType::INDUSTRY:
      return "INDUSTRY";
    case SpecializationType::SERVICES:
      return "SERVICES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpecializationTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
