/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/IamRoleStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace IamRoleStatusMapper {

static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
static const int PARTIALLY_CONNECTED_HASH = HashingUtils::HashString("PARTIALLY_CONNECTED");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

IamRoleStatus GetIamRoleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATING_HASH) {
    return IamRoleStatus::ASSOCIATING;
  } else if (hashCode == DISASSOCIATING_HASH) {
    return IamRoleStatus::DISASSOCIATING;
  } else if (hashCode == FAILED_HASH) {
    return IamRoleStatus::FAILED;
  } else if (hashCode == CONNECTED_HASH) {
    return IamRoleStatus::CONNECTED;
  } else if (hashCode == DISCONNECTED_HASH) {
    return IamRoleStatus::DISCONNECTED;
  } else if (hashCode == PARTIALLY_CONNECTED_HASH) {
    return IamRoleStatus::PARTIALLY_CONNECTED;
  } else if (hashCode == UNKNOWN_HASH) {
    return IamRoleStatus::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IamRoleStatus>(hashCode);
  }

  return IamRoleStatus::NOT_SET;
}

Aws::String GetNameForIamRoleStatus(IamRoleStatus enumValue) {
  switch (enumValue) {
    case IamRoleStatus::NOT_SET:
      return {};
    case IamRoleStatus::ASSOCIATING:
      return "ASSOCIATING";
    case IamRoleStatus::DISASSOCIATING:
      return "DISASSOCIATING";
    case IamRoleStatus::FAILED:
      return "FAILED";
    case IamRoleStatus::CONNECTED:
      return "CONNECTED";
    case IamRoleStatus::DISCONNECTED:
      return "DISCONNECTED";
    case IamRoleStatus::PARTIALLY_CONNECTED:
      return "PARTIALLY_CONNECTED";
    case IamRoleStatus::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IamRoleStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
