/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodTypeSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace RevokeServicePeriodTypeSortNameMapper {

static const int UpdatedAt_HASH = HashingUtils::HashString("UpdatedAt");

RevokeServicePeriodTypeSortName GetRevokeServicePeriodTypeSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UpdatedAt_HASH) {
    return RevokeServicePeriodTypeSortName::UpdatedAt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevokeServicePeriodTypeSortName>(hashCode);
  }

  return RevokeServicePeriodTypeSortName::NOT_SET;
}

Aws::String GetNameForRevokeServicePeriodTypeSortName(RevokeServicePeriodTypeSortName enumValue) {
  switch (enumValue) {
    case RevokeServicePeriodTypeSortName::NOT_SET:
      return {};
    case RevokeServicePeriodTypeSortName::UpdatedAt:
      return "UpdatedAt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevokeServicePeriodTypeSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
