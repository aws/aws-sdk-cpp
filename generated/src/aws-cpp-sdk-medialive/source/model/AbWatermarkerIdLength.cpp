/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/AbWatermarkerIdLength.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace AbWatermarkerIdLengthMapper {

static const int ID_2048_HASH = HashingUtils::HashString("ID_2048");
static const int ID_512_HASH = HashingUtils::HashString("ID_512");

AbWatermarkerIdLength GetAbWatermarkerIdLengthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ID_2048_HASH) {
    return AbWatermarkerIdLength::ID_2048;
  } else if (hashCode == ID_512_HASH) {
    return AbWatermarkerIdLength::ID_512;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AbWatermarkerIdLength>(hashCode);
  }

  return AbWatermarkerIdLength::NOT_SET;
}

Aws::String GetNameForAbWatermarkerIdLength(AbWatermarkerIdLength enumValue) {
  switch (enumValue) {
    case AbWatermarkerIdLength::NOT_SET:
      return {};
    case AbWatermarkerIdLength::ID_2048:
      return "ID_2048";
    case AbWatermarkerIdLength::ID_512:
      return "ID_512";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AbWatermarkerIdLengthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
