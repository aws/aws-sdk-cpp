/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/CspmConnectorStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace CspmConnectorStatusMapper {

static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");
static const int FAILED_TO_CONNECT_HASH = HashingUtils::HashString("FAILED_TO_CONNECT");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

CspmConnectorStatus GetCspmConnectorStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTED_HASH) {
    return CspmConnectorStatus::CONNECTED;
  } else if (hashCode == DEGRADED_HASH) {
    return CspmConnectorStatus::DEGRADED;
  } else if (hashCode == FAILED_TO_CONNECT_HASH) {
    return CspmConnectorStatus::FAILED_TO_CONNECT;
  } else if (hashCode == UNKNOWN_HASH) {
    return CspmConnectorStatus::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CspmConnectorStatus>(hashCode);
  }

  return CspmConnectorStatus::NOT_SET;
}

Aws::String GetNameForCspmConnectorStatus(CspmConnectorStatus enumValue) {
  switch (enumValue) {
    case CspmConnectorStatus::NOT_SET:
      return {};
    case CspmConnectorStatus::CONNECTED:
      return "CONNECTED";
    case CspmConnectorStatus::DEGRADED:
      return "DEGRADED";
    case CspmConnectorStatus::FAILED_TO_CONNECT:
      return "FAILED_TO_CONNECT";
    case CspmConnectorStatus::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CspmConnectorStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
