/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/AccountSharedPoolDeliveryMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace AccountSharedPoolDeliveryModeMapper {

static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");
static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");

AccountSharedPoolDeliveryMode GetAccountSharedPoolDeliveryModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GLOBAL_HASH) {
    return AccountSharedPoolDeliveryMode::GLOBAL;
  } else if (hashCode == REGIONAL_HASH) {
    return AccountSharedPoolDeliveryMode::REGIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountSharedPoolDeliveryMode>(hashCode);
  }

  return AccountSharedPoolDeliveryMode::NOT_SET;
}

Aws::String GetNameForAccountSharedPoolDeliveryMode(AccountSharedPoolDeliveryMode enumValue) {
  switch (enumValue) {
    case AccountSharedPoolDeliveryMode::NOT_SET:
      return {};
    case AccountSharedPoolDeliveryMode::GLOBAL:
      return "GLOBAL";
    case AccountSharedPoolDeliveryMode::REGIONAL:
      return "REGIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountSharedPoolDeliveryModeMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
