/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/Av1TimecodeInsertionBehavior.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace Av1TimecodeInsertionBehaviorMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int METADATA_OBU_HASH = HashingUtils::HashString("METADATA_OBU");

Av1TimecodeInsertionBehavior GetAv1TimecodeInsertionBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return Av1TimecodeInsertionBehavior::DISABLED;
  } else if (hashCode == METADATA_OBU_HASH) {
    return Av1TimecodeInsertionBehavior::METADATA_OBU;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Av1TimecodeInsertionBehavior>(hashCode);
  }

  return Av1TimecodeInsertionBehavior::NOT_SET;
}

Aws::String GetNameForAv1TimecodeInsertionBehavior(Av1TimecodeInsertionBehavior enumValue) {
  switch (enumValue) {
    case Av1TimecodeInsertionBehavior::NOT_SET:
      return {};
    case Av1TimecodeInsertionBehavior::DISABLED:
      return "DISABLED";
    case Av1TimecodeInsertionBehavior::METADATA_OBU:
      return "METADATA_OBU";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Av1TimecodeInsertionBehaviorMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
