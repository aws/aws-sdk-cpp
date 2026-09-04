/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/service-quotas/model/AdjustableAtLevelEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace ServiceQuotas {
namespace Model {
namespace AdjustableAtLevelEnumMapper {

static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int PER_RESOURCE_HASH = HashingUtils::HashString("PER_RESOURCE");
static const int ALL_HASH = HashingUtils::HashString("ALL");

AdjustableAtLevelEnum GetAdjustableAtLevelEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_HASH) {
    return AdjustableAtLevelEnum::ACCOUNT;
  } else if (hashCode == PER_RESOURCE_HASH) {
    return AdjustableAtLevelEnum::PER_RESOURCE;
  } else if (hashCode == ALL_HASH) {
    return AdjustableAtLevelEnum::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdjustableAtLevelEnum>(hashCode);
  }

  return AdjustableAtLevelEnum::NOT_SET;
}

Aws::String GetNameForAdjustableAtLevelEnum(AdjustableAtLevelEnum enumValue) {
  switch (enumValue) {
    case AdjustableAtLevelEnum::NOT_SET:
      return {};
    case AdjustableAtLevelEnum::ACCOUNT:
      return "ACCOUNT";
    case AdjustableAtLevelEnum::PER_RESOURCE:
      return "PER_RESOURCE";
    case AdjustableAtLevelEnum::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdjustableAtLevelEnumMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
