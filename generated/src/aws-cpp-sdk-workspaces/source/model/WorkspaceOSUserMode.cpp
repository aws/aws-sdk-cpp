/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces/model/WorkspaceOSUserMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {
namespace WorkspaceOSUserModeMapper {

static const int LOCAL_USER_HASH = HashingUtils::HashString("LOCAL_USER");
static const int DOMAIN_JOIN_HASH = HashingUtils::HashString("DOMAIN_JOIN");
static const int ENTRA_JOIN_HASH = HashingUtils::HashString("ENTRA_JOIN");
static const int SELF_MANAGED_HASH = HashingUtils::HashString("SELF_MANAGED");

WorkspaceOSUserMode GetWorkspaceOSUserModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOCAL_USER_HASH) {
    return WorkspaceOSUserMode::LOCAL_USER;
  } else if (hashCode == DOMAIN_JOIN_HASH) {
    return WorkspaceOSUserMode::DOMAIN_JOIN;
  } else if (hashCode == ENTRA_JOIN_HASH) {
    return WorkspaceOSUserMode::ENTRA_JOIN;
  } else if (hashCode == SELF_MANAGED_HASH) {
    return WorkspaceOSUserMode::SELF_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkspaceOSUserMode>(hashCode);
  }

  return WorkspaceOSUserMode::NOT_SET;
}

Aws::String GetNameForWorkspaceOSUserMode(WorkspaceOSUserMode enumValue) {
  switch (enumValue) {
    case WorkspaceOSUserMode::NOT_SET:
      return {};
    case WorkspaceOSUserMode::LOCAL_USER:
      return "LOCAL_USER";
    case WorkspaceOSUserMode::DOMAIN_JOIN:
      return "DOMAIN_JOIN";
    case WorkspaceOSUserMode::ENTRA_JOIN:
      return "ENTRA_JOIN";
    case WorkspaceOSUserMode::SELF_MANAGED:
      return "SELF_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkspaceOSUserModeMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
