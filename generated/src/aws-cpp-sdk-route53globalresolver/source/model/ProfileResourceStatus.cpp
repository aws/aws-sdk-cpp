/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/ProfileResourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace ProfileResourceStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int OPERATIONAL_HASH = HashingUtils::HashString("OPERATIONAL");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

ProfileResourceStatus GetProfileResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ProfileResourceStatus::CREATING;
  } else if (hashCode == OPERATIONAL_HASH) {
    return ProfileResourceStatus::OPERATIONAL;
  } else if (hashCode == UPDATING_HASH) {
    return ProfileResourceStatus::UPDATING;
  } else if (hashCode == ENABLING_HASH) {
    return ProfileResourceStatus::ENABLING;
  } else if (hashCode == DISABLING_HASH) {
    return ProfileResourceStatus::DISABLING;
  } else if (hashCode == DISABLED_HASH) {
    return ProfileResourceStatus::DISABLED;
  } else if (hashCode == DELETING_HASH) {
    return ProfileResourceStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfileResourceStatus>(hashCode);
  }

  return ProfileResourceStatus::NOT_SET;
}

Aws::String GetNameForProfileResourceStatus(ProfileResourceStatus enumValue) {
  switch (enumValue) {
    case ProfileResourceStatus::NOT_SET:
      return {};
    case ProfileResourceStatus::CREATING:
      return "CREATING";
    case ProfileResourceStatus::OPERATIONAL:
      return "OPERATIONAL";
    case ProfileResourceStatus::UPDATING:
      return "UPDATING";
    case ProfileResourceStatus::ENABLING:
      return "ENABLING";
    case ProfileResourceStatus::DISABLING:
      return "DISABLING";
    case ProfileResourceStatus::DISABLED:
      return "DISABLED";
    case ProfileResourceStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfileResourceStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
