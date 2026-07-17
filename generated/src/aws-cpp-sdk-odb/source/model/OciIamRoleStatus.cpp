/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/OciIamRoleStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace OciIamRoleStatusMapper {

static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int PROVISION_FAILED_HASH = HashingUtils::HashString("PROVISION_FAILED");
static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
static const int TERMINATE_FAILED_HASH = HashingUtils::HashString("TERMINATE_FAILED");

OciIamRoleStatus GetOciIamRoleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVISIONING_HASH) {
    return OciIamRoleStatus::PROVISIONING;
  } else if (hashCode == AVAILABLE_HASH) {
    return OciIamRoleStatus::AVAILABLE;
  } else if (hashCode == PROVISION_FAILED_HASH) {
    return OciIamRoleStatus::PROVISION_FAILED;
  } else if (hashCode == TERMINATING_HASH) {
    return OciIamRoleStatus::TERMINATING;
  } else if (hashCode == TERMINATE_FAILED_HASH) {
    return OciIamRoleStatus::TERMINATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OciIamRoleStatus>(hashCode);
  }

  return OciIamRoleStatus::NOT_SET;
}

Aws::String GetNameForOciIamRoleStatus(OciIamRoleStatus enumValue) {
  switch (enumValue) {
    case OciIamRoleStatus::NOT_SET:
      return {};
    case OciIamRoleStatus::PROVISIONING:
      return "PROVISIONING";
    case OciIamRoleStatus::AVAILABLE:
      return "AVAILABLE";
    case OciIamRoleStatus::PROVISION_FAILED:
      return "PROVISION_FAILED";
    case OciIamRoleStatus::TERMINATING:
      return "TERMINATING";
    case OciIamRoleStatus::TERMINATE_FAILED:
      return "TERMINATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OciIamRoleStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
