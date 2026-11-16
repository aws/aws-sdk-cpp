/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/SpaceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace SpaceStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SpaceStatus GetSpaceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return SpaceStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return SpaceStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return SpaceStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return SpaceStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return SpaceStatus::DELETED;
  } else if (hashCode == FAILED_HASH) {
    return SpaceStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpaceStatus>(hashCode);
  }

  return SpaceStatus::NOT_SET;
}

Aws::String GetNameForSpaceStatus(SpaceStatus enumValue) {
  switch (enumValue) {
    case SpaceStatus::NOT_SET:
      return {};
    case SpaceStatus::CREATING:
      return "CREATING";
    case SpaceStatus::ACTIVE:
      return "ACTIVE";
    case SpaceStatus::UPDATING:
      return "UPDATING";
    case SpaceStatus::DELETING:
      return "DELETING";
    case SpaceStatus::DELETED:
      return "DELETED";
    case SpaceStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpaceStatusMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
