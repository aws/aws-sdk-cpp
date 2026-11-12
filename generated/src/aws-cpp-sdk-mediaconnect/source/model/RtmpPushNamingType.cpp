/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RtmpPushNamingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RtmpPushNamingTypeMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");

RtmpPushNamingType GetRtmpPushNamingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return RtmpPushNamingType::MANUAL;
  } else if (hashCode == AUTOMATIC_HASH) {
    return RtmpPushNamingType::AUTOMATIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RtmpPushNamingType>(hashCode);
  }

  return RtmpPushNamingType::NOT_SET;
}

Aws::String GetNameForRtmpPushNamingType(RtmpPushNamingType enumValue) {
  switch (enumValue) {
    case RtmpPushNamingType::NOT_SET:
      return {};
    case RtmpPushNamingType::MANUAL:
      return "MANUAL";
    case RtmpPushNamingType::AUTOMATIC:
      return "AUTOMATIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RtmpPushNamingTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
