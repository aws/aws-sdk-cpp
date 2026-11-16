/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/ProfileType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace ProfileTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int ORGANIZATIONAL_HASH = HashingUtils::HashString("ORGANIZATIONAL");

ProfileType GetProfileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return ProfileType::STANDARD;
  } else if (hashCode == BASIC_HASH) {
    return ProfileType::BASIC;
  } else if (hashCode == ORGANIZATIONAL_HASH) {
    return ProfileType::ORGANIZATIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfileType>(hashCode);
  }

  return ProfileType::NOT_SET;
}

Aws::String GetNameForProfileType(ProfileType enumValue) {
  switch (enumValue) {
    case ProfileType::NOT_SET:
      return {};
    case ProfileType::STANDARD:
      return "STANDARD";
    case ProfileType::BASIC:
      return "BASIC";
    case ProfileType::ORGANIZATIONAL:
      return "ORGANIZATIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfileTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
