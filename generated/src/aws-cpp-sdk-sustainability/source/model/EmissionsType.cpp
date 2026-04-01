/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sustainability/model/EmissionsType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {
namespace EmissionsTypeMapper {

static const int TOTAL_LBM_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_LBM_CARBON_EMISSIONS");
static const int TOTAL_MBM_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_MBM_CARBON_EMISSIONS");
static const int TOTAL_SCOPE_1_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_SCOPE_1_CARBON_EMISSIONS");
static const int TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS");
static const int TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS");
static const int TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS");
static const int TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS_HASH = HashingUtils::HashString("TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS");

EmissionsType GetEmissionsTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOTAL_LBM_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_LBM_CARBON_EMISSIONS;
  } else if (hashCode == TOTAL_MBM_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_MBM_CARBON_EMISSIONS;
  } else if (hashCode == TOTAL_SCOPE_1_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_SCOPE_1_CARBON_EMISSIONS;
  } else if (hashCode == TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS;
  } else if (hashCode == TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS;
  } else if (hashCode == TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS;
  } else if (hashCode == TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS_HASH) {
    return EmissionsType::TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EmissionsType>(hashCode);
  }

  return EmissionsType::NOT_SET;
}

Aws::String GetNameForEmissionsType(EmissionsType enumValue) {
  switch (enumValue) {
    case EmissionsType::NOT_SET:
      return {};
    case EmissionsType::TOTAL_LBM_CARBON_EMISSIONS:
      return "TOTAL_LBM_CARBON_EMISSIONS";
    case EmissionsType::TOTAL_MBM_CARBON_EMISSIONS:
      return "TOTAL_MBM_CARBON_EMISSIONS";
    case EmissionsType::TOTAL_SCOPE_1_CARBON_EMISSIONS:
      return "TOTAL_SCOPE_1_CARBON_EMISSIONS";
    case EmissionsType::TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS:
      return "TOTAL_SCOPE_2_LBM_CARBON_EMISSIONS";
    case EmissionsType::TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS:
      return "TOTAL_SCOPE_2_MBM_CARBON_EMISSIONS";
    case EmissionsType::TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS:
      return "TOTAL_SCOPE_3_LBM_CARBON_EMISSIONS";
    case EmissionsType::TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS:
      return "TOTAL_SCOPE_3_MBM_CARBON_EMISSIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EmissionsTypeMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
