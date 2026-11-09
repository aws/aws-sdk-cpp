/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/PerceptualFilterStrength.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace PerceptualFilterStrengthMapper {

static const int STRENGTH_1_HASH = HashingUtils::HashString("STRENGTH_1");
static const int STRENGTH_2_HASH = HashingUtils::HashString("STRENGTH_2");

PerceptualFilterStrength GetPerceptualFilterStrengthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRENGTH_1_HASH) {
    return PerceptualFilterStrength::STRENGTH_1;
  } else if (hashCode == STRENGTH_2_HASH) {
    return PerceptualFilterStrength::STRENGTH_2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PerceptualFilterStrength>(hashCode);
  }

  return PerceptualFilterStrength::NOT_SET;
}

Aws::String GetNameForPerceptualFilterStrength(PerceptualFilterStrength enumValue) {
  switch (enumValue) {
    case PerceptualFilterStrength::NOT_SET:
      return {};
    case PerceptualFilterStrength::STRENGTH_1:
      return "STRENGTH_1";
    case PerceptualFilterStrength::STRENGTH_2:
      return "STRENGTH_2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PerceptualFilterStrengthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
