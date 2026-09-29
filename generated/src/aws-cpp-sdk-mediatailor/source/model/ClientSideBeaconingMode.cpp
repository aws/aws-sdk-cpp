/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/ClientSideBeaconingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace ClientSideBeaconingModeMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int INSIGHTS_HASH = HashingUtils::HashString("INSIGHTS");

ClientSideBeaconingMode GetClientSideBeaconingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return ClientSideBeaconingMode::DISABLED;
  } else if (hashCode == INSIGHTS_HASH) {
    return ClientSideBeaconingMode::INSIGHTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientSideBeaconingMode>(hashCode);
  }

  return ClientSideBeaconingMode::NOT_SET;
}

Aws::String GetNameForClientSideBeaconingMode(ClientSideBeaconingMode enumValue) {
  switch (enumValue) {
    case ClientSideBeaconingMode::NOT_SET:
      return {};
    case ClientSideBeaconingMode::DISABLED:
      return "DISABLED";
    case ClientSideBeaconingMode::INSIGHTS:
      return "INSIGHTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientSideBeaconingModeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
