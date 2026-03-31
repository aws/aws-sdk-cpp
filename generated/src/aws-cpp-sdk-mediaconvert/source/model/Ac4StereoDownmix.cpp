/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/Ac4StereoDownmix.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace Ac4StereoDownmixMapper {

static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");
static const int LO_RO_HASH = HashingUtils::HashString("LO_RO");
static const int LT_RT_HASH = HashingUtils::HashString("LT_RT");
static const int DPL2_HASH = HashingUtils::HashString("DPL2");

Ac4StereoDownmix GetAc4StereoDownmixForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_INDICATED_HASH) {
    return Ac4StereoDownmix::NOT_INDICATED;
  } else if (hashCode == LO_RO_HASH) {
    return Ac4StereoDownmix::LO_RO;
  } else if (hashCode == LT_RT_HASH) {
    return Ac4StereoDownmix::LT_RT;
  } else if (hashCode == DPL2_HASH) {
    return Ac4StereoDownmix::DPL2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Ac4StereoDownmix>(hashCode);
  }

  return Ac4StereoDownmix::NOT_SET;
}

Aws::String GetNameForAc4StereoDownmix(Ac4StereoDownmix enumValue) {
  switch (enumValue) {
    case Ac4StereoDownmix::NOT_SET:
      return {};
    case Ac4StereoDownmix::NOT_INDICATED:
      return "NOT_INDICATED";
    case Ac4StereoDownmix::LO_RO:
      return "LO_RO";
    case Ac4StereoDownmix::LT_RT:
      return "LT_RT";
    case Ac4StereoDownmix::DPL2:
      return "DPL2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Ac4StereoDownmixMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
