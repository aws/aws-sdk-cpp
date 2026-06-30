/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ContainerAssociationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ContainerAssociationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

ContainerAssociationStatus GetContainerAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ContainerAssociationStatus::ACTIVE;
  } else if (hashCode == CREATING_HASH) {
    return ContainerAssociationStatus::CREATING;
  } else if (hashCode == DELETING_HASH) {
    return ContainerAssociationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerAssociationStatus>(hashCode);
  }

  return ContainerAssociationStatus::NOT_SET;
}

Aws::String GetNameForContainerAssociationStatus(ContainerAssociationStatus enumValue) {
  switch (enumValue) {
    case ContainerAssociationStatus::NOT_SET:
      return {};
    case ContainerAssociationStatus::ACTIVE:
      return "ACTIVE";
    case ContainerAssociationStatus::CREATING:
      return "CREATING";
    case ContainerAssociationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerAssociationStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
