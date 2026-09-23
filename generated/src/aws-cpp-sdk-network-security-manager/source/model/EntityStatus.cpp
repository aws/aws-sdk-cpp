/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/EntityStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace EntityStatusMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

EntityStatus GetEntityStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRAFT_HASH) {
    return EntityStatus::DRAFT;
  } else if (hashCode == ACTIVE_HASH) {
    return EntityStatus::ACTIVE;
  } else if (hashCode == DISABLED_HASH) {
    return EntityStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EntityStatus>(hashCode);
  }

  return EntityStatus::NOT_SET;
}

Aws::String GetNameForEntityStatus(EntityStatus enumValue) {
  switch (enumValue) {
    case EntityStatus::NOT_SET:
      return {};
    case EntityStatus::DRAFT:
      return "DRAFT";
    case EntityStatus::ACTIVE:
      return "ACTIVE";
    case EntityStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EntityStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
