/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/InboundConnectorStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace InboundConnectorStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

InboundConnectorStatus GetInboundConnectorStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return InboundConnectorStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return InboundConnectorStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InboundConnectorStatus>(hashCode);
  }

  return InboundConnectorStatus::NOT_SET;
}

Aws::String GetNameForInboundConnectorStatus(InboundConnectorStatus enumValue) {
  switch (enumValue) {
    case InboundConnectorStatus::NOT_SET:
      return {};
    case InboundConnectorStatus::ENABLED:
      return "ENABLED";
    case InboundConnectorStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InboundConnectorStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
