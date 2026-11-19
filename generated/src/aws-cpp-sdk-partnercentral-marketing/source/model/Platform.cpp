/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/Platform.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace PlatformMapper {

static const int FACEBOOK_HASH = HashingUtils::HashString("FACEBOOK");
static const int LINKEDIN_HASH = HashingUtils::HashString("LINKEDIN");
static const int X_HASH = HashingUtils::HashString("X");

Platform GetPlatformForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FACEBOOK_HASH) {
    return Platform::FACEBOOK;
  } else if (hashCode == LINKEDIN_HASH) {
    return Platform::LINKEDIN;
  } else if (hashCode == X_HASH) {
    return Platform::X;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Platform>(hashCode);
  }

  return Platform::NOT_SET;
}

Aws::String GetNameForPlatform(Platform enumValue) {
  switch (enumValue) {
    case Platform::NOT_SET:
      return {};
    case Platform::FACEBOOK:
      return "FACEBOOK";
    case Platform::LINKEDIN:
      return "LINKEDIN";
    case Platform::X:
      return "X";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PlatformMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
