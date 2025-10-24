﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/TrafficShapingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace TrafficShapingTypeMapper {

static const int RETRIEVAL_WINDOW_HASH = HashingUtils::HashString("RETRIEVAL_WINDOW");
static const int TPS_HASH = HashingUtils::HashString("TPS");

TrafficShapingType GetTrafficShapingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RETRIEVAL_WINDOW_HASH) {
    return TrafficShapingType::RETRIEVAL_WINDOW;
  } else if (hashCode == TPS_HASH) {
    return TrafficShapingType::TPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrafficShapingType>(hashCode);
  }

  return TrafficShapingType::NOT_SET;
}

Aws::String GetNameForTrafficShapingType(TrafficShapingType enumValue) {
  switch (enumValue) {
    case TrafficShapingType::NOT_SET:
      return {};
    case TrafficShapingType::RETRIEVAL_WINDOW:
      return "RETRIEVAL_WINDOW";
    case TrafficShapingType::TPS:
      return "TPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrafficShapingTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
