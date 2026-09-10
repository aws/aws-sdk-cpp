/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/OutputUsage.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace OutputUsageMapper {

static const int MULTIVIEW_EQUAL_SIZE_VIEW_HASH = HashingUtils::HashString("MULTIVIEW_EQUAL_SIZE_VIEW");
static const int MULTIVIEW_PRIMARY_VIEW_HASH = HashingUtils::HashString("MULTIVIEW_PRIMARY_VIEW");
static const int MULTIVIEW_SECONDARY_VIEW_HASH = HashingUtils::HashString("MULTIVIEW_SECONDARY_VIEW");

OutputUsage GetOutputUsageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MULTIVIEW_EQUAL_SIZE_VIEW_HASH) {
    return OutputUsage::MULTIVIEW_EQUAL_SIZE_VIEW;
  } else if (hashCode == MULTIVIEW_PRIMARY_VIEW_HASH) {
    return OutputUsage::MULTIVIEW_PRIMARY_VIEW;
  } else if (hashCode == MULTIVIEW_SECONDARY_VIEW_HASH) {
    return OutputUsage::MULTIVIEW_SECONDARY_VIEW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutputUsage>(hashCode);
  }

  return OutputUsage::NOT_SET;
}

Aws::String GetNameForOutputUsage(OutputUsage enumValue) {
  switch (enumValue) {
    case OutputUsage::NOT_SET:
      return {};
    case OutputUsage::MULTIVIEW_EQUAL_SIZE_VIEW:
      return "MULTIVIEW_EQUAL_SIZE_VIEW";
    case OutputUsage::MULTIVIEW_PRIMARY_VIEW:
      return "MULTIVIEW_PRIMARY_VIEW";
    case OutputUsage::MULTIVIEW_SECONDARY_VIEW:
      return "MULTIVIEW_SECONDARY_VIEW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutputUsageMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
