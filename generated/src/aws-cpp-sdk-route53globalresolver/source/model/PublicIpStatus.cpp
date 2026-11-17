/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/PublicIpStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace PublicIpStatusMapper {

static const int ENABLED_RESERVED_HASH = HashingUtils::HashString("ENABLED_RESERVED");
static const int DISABLED_RESERVED_HASH = HashingUtils::HashString("DISABLED_RESERVED");
static const int DISABLED_RELEASED_HASH = HashingUtils::HashString("DISABLED_RELEASED");

PublicIpStatus GetPublicIpStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_RESERVED_HASH) {
    return PublicIpStatus::ENABLED_RESERVED;
  } else if (hashCode == DISABLED_RESERVED_HASH) {
    return PublicIpStatus::DISABLED_RESERVED;
  } else if (hashCode == DISABLED_RELEASED_HASH) {
    return PublicIpStatus::DISABLED_RELEASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PublicIpStatus>(hashCode);
  }

  return PublicIpStatus::NOT_SET;
}

Aws::String GetNameForPublicIpStatus(PublicIpStatus enumValue) {
  switch (enumValue) {
    case PublicIpStatus::NOT_SET:
      return {};
    case PublicIpStatus::ENABLED_RESERVED:
      return "ENABLED_RESERVED";
    case PublicIpStatus::DISABLED_RESERVED:
      return "DISABLED_RESERVED";
    case PublicIpStatus::DISABLED_RELEASED:
      return "DISABLED_RELEASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PublicIpStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
