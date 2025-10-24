﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/DashIsoSegmentLengthControl.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace DashIsoSegmentLengthControlMapper {

static const int EXACT_HASH = HashingUtils::HashString("EXACT");
static const int GOP_MULTIPLE_HASH = HashingUtils::HashString("GOP_MULTIPLE");
static const int MATCH_HASH = HashingUtils::HashString("MATCH");

DashIsoSegmentLengthControl GetDashIsoSegmentLengthControlForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXACT_HASH) {
    return DashIsoSegmentLengthControl::EXACT;
  } else if (hashCode == GOP_MULTIPLE_HASH) {
    return DashIsoSegmentLengthControl::GOP_MULTIPLE;
  } else if (hashCode == MATCH_HASH) {
    return DashIsoSegmentLengthControl::MATCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DashIsoSegmentLengthControl>(hashCode);
  }

  return DashIsoSegmentLengthControl::NOT_SET;
}

Aws::String GetNameForDashIsoSegmentLengthControl(DashIsoSegmentLengthControl enumValue) {
  switch (enumValue) {
    case DashIsoSegmentLengthControl::NOT_SET:
      return {};
    case DashIsoSegmentLengthControl::EXACT:
      return "EXACT";
    case DashIsoSegmentLengthControl::GOP_MULTIPLE:
      return "GOP_MULTIPLE";
    case DashIsoSegmentLengthControl::MATCH:
      return "MATCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DashIsoSegmentLengthControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
