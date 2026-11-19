/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/EngagementGroupSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace EngagementGroupSortNameMapper {

static const int Count_HASH = HashingUtils::HashString("Count");
static const int UpdatedAt_HASH = HashingUtils::HashString("UpdatedAt");

EngagementGroupSortName GetEngagementGroupSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Count_HASH) {
    return EngagementGroupSortName::Count;
  } else if (hashCode == UpdatedAt_HASH) {
    return EngagementGroupSortName::UpdatedAt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EngagementGroupSortName>(hashCode);
  }

  return EngagementGroupSortName::NOT_SET;
}

Aws::String GetNameForEngagementGroupSortName(EngagementGroupSortName enumValue) {
  switch (enumValue) {
    case EngagementGroupSortName::NOT_SET:
      return {};
    case EngagementGroupSortName::Count:
      return "Count";
    case EngagementGroupSortName::UpdatedAt:
      return "UpdatedAt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EngagementGroupSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
