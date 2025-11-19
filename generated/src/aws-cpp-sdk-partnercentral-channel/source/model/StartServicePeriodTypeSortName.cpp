/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace StartServicePeriodTypeSortNameMapper {

static const int UpdatedAt_HASH = HashingUtils::HashString("UpdatedAt");

StartServicePeriodTypeSortName GetStartServicePeriodTypeSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UpdatedAt_HASH) {
    return StartServicePeriodTypeSortName::UpdatedAt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StartServicePeriodTypeSortName>(hashCode);
  }

  return StartServicePeriodTypeSortName::NOT_SET;
}

Aws::String GetNameForStartServicePeriodTypeSortName(StartServicePeriodTypeSortName enumValue) {
  switch (enumValue) {
    case StartServicePeriodTypeSortName::NOT_SET:
      return {};
    case StartServicePeriodTypeSortName::UpdatedAt:
      return "UpdatedAt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StartServicePeriodTypeSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
