/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/SubscriptionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace SubscriptionStatusMapper {

static const int NOT_SUBSCRIBED_HASH = HashingUtils::HashString("NOT_SUBSCRIBED");
static const int SUBSCRIBED_HASH = HashingUtils::HashString("SUBSCRIBED");

SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_SUBSCRIBED_HASH) {
    return SubscriptionStatus::NOT_SUBSCRIBED;
  } else if (hashCode == SUBSCRIBED_HASH) {
    return SubscriptionStatus::SUBSCRIBED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubscriptionStatus>(hashCode);
  }

  return SubscriptionStatus::NOT_SET;
}

Aws::String GetNameForSubscriptionStatus(SubscriptionStatus enumValue) {
  switch (enumValue) {
    case SubscriptionStatus::NOT_SET:
      return {};
    case SubscriptionStatus::NOT_SUBSCRIBED:
      return "NOT_SUBSCRIBED";
    case SubscriptionStatus::SUBSCRIBED:
      return "SUBSCRIBED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubscriptionStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
