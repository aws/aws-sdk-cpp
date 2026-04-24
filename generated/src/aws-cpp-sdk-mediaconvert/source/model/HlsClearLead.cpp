/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/HlsClearLead.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace HlsClearLeadMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

HlsClearLead GetHlsClearLeadForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return HlsClearLead::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return HlsClearLead::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HlsClearLead>(hashCode);
  }

  return HlsClearLead::NOT_SET;
}

Aws::String GetNameForHlsClearLead(HlsClearLead enumValue) {
  switch (enumValue) {
    case HlsClearLead::NOT_SET:
      return {};
    case HlsClearLead::ENABLED:
      return "ENABLED";
    case HlsClearLead::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HlsClearLeadMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
