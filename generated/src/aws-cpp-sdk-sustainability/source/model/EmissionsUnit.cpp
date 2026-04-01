/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sustainability/model/EmissionsUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {
namespace EmissionsUnitMapper {

static const int MTCO2e_HASH = HashingUtils::HashString("MTCO2e");

EmissionsUnit GetEmissionsUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MTCO2e_HASH) {
    return EmissionsUnit::MTCO2e;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EmissionsUnit>(hashCode);
  }

  return EmissionsUnit::NOT_SET;
}

Aws::String GetNameForEmissionsUnit(EmissionsUnit enumValue) {
  switch (enumValue) {
    case EmissionsUnit::NOT_SET:
      return {};
    case EmissionsUnit::MTCO2e:
      return "MTCO2e";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EmissionsUnitMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
