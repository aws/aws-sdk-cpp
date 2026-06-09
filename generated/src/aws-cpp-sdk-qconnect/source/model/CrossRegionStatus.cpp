/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/CrossRegionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace CrossRegionStatusMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");

CrossRegionStatus GetCrossRegionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return CrossRegionStatus::NONE;
  } else if (hashCode == REGIONAL_HASH) {
    return CrossRegionStatus::REGIONAL;
  } else if (hashCode == GLOBAL_HASH) {
    return CrossRegionStatus::GLOBAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CrossRegionStatus>(hashCode);
  }

  return CrossRegionStatus::NOT_SET;
}

Aws::String GetNameForCrossRegionStatus(CrossRegionStatus enumValue) {
  switch (enumValue) {
    case CrossRegionStatus::NOT_SET:
      return {};
    case CrossRegionStatus::NONE:
      return "NONE";
    case CrossRegionStatus::REGIONAL:
      return "REGIONAL";
    case CrossRegionStatus::GLOBAL:
      return "GLOBAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CrossRegionStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
