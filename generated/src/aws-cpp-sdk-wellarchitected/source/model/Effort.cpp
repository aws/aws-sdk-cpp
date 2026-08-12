/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/Effort.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace EffortMapper {

static const int LARGE_HASH = HashingUtils::HashString("LARGE");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int SMALL_HASH = HashingUtils::HashString("SMALL");

Effort GetEffortForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LARGE_HASH) {
    return Effort::LARGE;
  } else if (hashCode == MEDIUM_HASH) {
    return Effort::MEDIUM;
  } else if (hashCode == SMALL_HASH) {
    return Effort::SMALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Effort>(hashCode);
  }

  return Effort::NOT_SET;
}

Aws::String GetNameForEffort(Effort enumValue) {
  switch (enumValue) {
    case Effort::NOT_SET:
      return {};
    case Effort::LARGE:
      return "LARGE";
    case Effort::MEDIUM:
      return "MEDIUM";
    case Effort::SMALL:
      return "SMALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EffortMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
