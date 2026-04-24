/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Ac4CodingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Ac4CodingModeMapper {

static const int CODING_MODE_2_0_HASH = HashingUtils::HashString("CODING_MODE_2_0");
static const int CODING_MODE_3_2_LFE_HASH = HashingUtils::HashString("CODING_MODE_3_2_LFE");
static const int CODING_MODE_5_1_4_HASH = HashingUtils::HashString("CODING_MODE_5_1_4");

Ac4CodingMode GetAc4CodingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CODING_MODE_2_0_HASH) {
    return Ac4CodingMode::CODING_MODE_2_0;
  } else if (hashCode == CODING_MODE_3_2_LFE_HASH) {
    return Ac4CodingMode::CODING_MODE_3_2_LFE;
  } else if (hashCode == CODING_MODE_5_1_4_HASH) {
    return Ac4CodingMode::CODING_MODE_5_1_4;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Ac4CodingMode>(hashCode);
  }

  return Ac4CodingMode::NOT_SET;
}

Aws::String GetNameForAc4CodingMode(Ac4CodingMode enumValue) {
  switch (enumValue) {
    case Ac4CodingMode::NOT_SET:
      return {};
    case Ac4CodingMode::CODING_MODE_2_0:
      return "CODING_MODE_2_0";
    case Ac4CodingMode::CODING_MODE_3_2_LFE:
      return "CODING_MODE_3_2_LFE";
    case Ac4CodingMode::CODING_MODE_5_1_4:
      return "CODING_MODE_5_1_4";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Ac4CodingModeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
