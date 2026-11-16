/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkflowmonitor/model/OrgMembershipStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
namespace OrgMembershipStatusMapper {

static const int IN_ORG_HASH = HashingUtils::HashString("IN_ORG");
static const int NOT_IN_ORG_HASH = HashingUtils::HashString("NOT_IN_ORG");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

OrgMembershipStatus GetOrgMembershipStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_ORG_HASH) {
    return OrgMembershipStatus::IN_ORG;
  } else if (hashCode == NOT_IN_ORG_HASH) {
    return OrgMembershipStatus::NOT_IN_ORG;
  } else if (hashCode == UNKNOWN_HASH) {
    return OrgMembershipStatus::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrgMembershipStatus>(hashCode);
  }

  return OrgMembershipStatus::NOT_SET;
}

Aws::String GetNameForOrgMembershipStatus(OrgMembershipStatus enumValue) {
  switch (enumValue) {
    case OrgMembershipStatus::NOT_SET:
      return {};
    case OrgMembershipStatus::IN_ORG:
      return "IN_ORG";
    case OrgMembershipStatus::NOT_IN_ORG:
      return "NOT_IN_ORG";
    case OrgMembershipStatus::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrgMembershipStatusMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
