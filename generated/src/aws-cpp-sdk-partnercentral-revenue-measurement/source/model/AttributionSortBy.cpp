/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/AttributionSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace AttributionSortByMapper {

static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");

AttributionSortBy GetAttributionSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LastModifiedDate_HASH) {
    return AttributionSortBy::LastModifiedDate;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttributionSortBy>(hashCode);
  }

  return AttributionSortBy::NOT_SET;
}

Aws::String GetNameForAttributionSortBy(AttributionSortBy enumValue) {
  switch (enumValue) {
    case AttributionSortBy::NOT_SET:
      return {};
    case AttributionSortBy::LastModifiedDate:
      return "LastModifiedDate";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttributionSortByMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
