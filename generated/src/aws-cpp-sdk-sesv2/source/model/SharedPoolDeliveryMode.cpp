/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/SharedPoolDeliveryMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace SharedPoolDeliveryModeMapper {

static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");
static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");

SharedPoolDeliveryMode GetSharedPoolDeliveryModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GLOBAL_HASH) {
    return SharedPoolDeliveryMode::GLOBAL;
  } else if (hashCode == REGIONAL_HASH) {
    return SharedPoolDeliveryMode::REGIONAL;
  } else if (hashCode == ACCOUNT_HASH) {
    return SharedPoolDeliveryMode::ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SharedPoolDeliveryMode>(hashCode);
  }

  return SharedPoolDeliveryMode::NOT_SET;
}

Aws::String GetNameForSharedPoolDeliveryMode(SharedPoolDeliveryMode enumValue) {
  switch (enumValue) {
    case SharedPoolDeliveryMode::NOT_SET:
      return {};
    case SharedPoolDeliveryMode::GLOBAL:
      return "GLOBAL";
    case SharedPoolDeliveryMode::REGIONAL:
      return "REGIONAL";
    case SharedPoolDeliveryMode::ACCOUNT:
      return "ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SharedPoolDeliveryModeMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
