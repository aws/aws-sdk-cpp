/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/SubscriptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace SubscriptionTypeMapper {

static const int MARKETPLACE_HASH = HashingUtils::HashString("MARKETPLACE");
static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");
static const int AWS_BUILT_IN_HASH = HashingUtils::HashString("AWS_BUILT_IN");

SubscriptionType GetSubscriptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MARKETPLACE_HASH) {
    return SubscriptionType::MARKETPLACE;
  } else if (hashCode == PRIVATE__HASH) {
    return SubscriptionType::PRIVATE_;
  } else if (hashCode == AWS_BUILT_IN_HASH) {
    return SubscriptionType::AWS_BUILT_IN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubscriptionType>(hashCode);
  }

  return SubscriptionType::NOT_SET;
}

Aws::String GetNameForSubscriptionType(SubscriptionType enumValue) {
  switch (enumValue) {
    case SubscriptionType::NOT_SET:
      return {};
    case SubscriptionType::MARKETPLACE:
      return "MARKETPLACE";
    case SubscriptionType::PRIVATE_:
      return "PRIVATE";
    case SubscriptionType::AWS_BUILT_IN:
      return "AWS_BUILT_IN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubscriptionTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
