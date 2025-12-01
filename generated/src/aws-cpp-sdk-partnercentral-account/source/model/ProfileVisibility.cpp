/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ProfileVisibility.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ProfileVisibilityMapper {

static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");
static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");

ProfileVisibility GetProfileVisibilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIVATE__HASH) {
    return ProfileVisibility::PRIVATE_;
  } else if (hashCode == PUBLIC__HASH) {
    return ProfileVisibility::PUBLIC_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfileVisibility>(hashCode);
  }

  return ProfileVisibility::NOT_SET;
}

Aws::String GetNameForProfileVisibility(ProfileVisibility enumValue) {
  switch (enumValue) {
    case ProfileVisibility::NOT_SET:
      return {};
    case ProfileVisibility::PRIVATE_:
      return "PRIVATE";
    case ProfileVisibility::PUBLIC_:
      return "PUBLIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfileVisibilityMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
