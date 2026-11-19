/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/SocialConnectionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace SocialConnectionStatusMapper {

static const int AUTHORIZED_HASH = HashingUtils::HashString("AUTHORIZED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int PAGE_REQUIRED_HASH = HashingUtils::HashString("PAGE_REQUIRED");

SocialConnectionStatus GetSocialConnectionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTHORIZED_HASH) {
    return SocialConnectionStatus::AUTHORIZED;
  } else if (hashCode == EXPIRED_HASH) {
    return SocialConnectionStatus::EXPIRED;
  } else if (hashCode == PAGE_REQUIRED_HASH) {
    return SocialConnectionStatus::PAGE_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SocialConnectionStatus>(hashCode);
  }

  return SocialConnectionStatus::NOT_SET;
}

Aws::String GetNameForSocialConnectionStatus(SocialConnectionStatus enumValue) {
  switch (enumValue) {
    case SocialConnectionStatus::NOT_SET:
      return {};
    case SocialConnectionStatus::AUTHORIZED:
      return "AUTHORIZED";
    case SocialConnectionStatus::EXPIRED:
      return "EXPIRED";
    case SocialConnectionStatus::PAGE_REQUIRED:
      return "PAGE_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SocialConnectionStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
