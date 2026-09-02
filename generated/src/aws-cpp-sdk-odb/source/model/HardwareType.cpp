/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/HardwareType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace HardwareTypeMapper {

static const int COMPUTE_HASH = HashingUtils::HashString("COMPUTE");
static const int CELL_HASH = HashingUtils::HashString("CELL");

HardwareType GetHardwareTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPUTE_HASH) {
    return HardwareType::COMPUTE;
  } else if (hashCode == CELL_HASH) {
    return HardwareType::CELL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HardwareType>(hashCode);
  }

  return HardwareType::NOT_SET;
}

Aws::String GetNameForHardwareType(HardwareType enumValue) {
  switch (enumValue) {
    case HardwareType::NOT_SET:
      return {};
    case HardwareType::COMPUTE:
      return "COMPUTE";
    case HardwareType::CELL:
      return "CELL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HardwareTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
