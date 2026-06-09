/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/QueryGranularity.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace QueryGranularityMapper {

static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
static const int DAILY_HASH = HashingUtils::HashString("DAILY");

QueryGranularity GetQueryGranularityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HOURLY_HASH) {
    return QueryGranularity::HOURLY;
  } else if (hashCode == DAILY_HASH) {
    return QueryGranularity::DAILY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueryGranularity>(hashCode);
  }

  return QueryGranularity::NOT_SET;
}

Aws::String GetNameForQueryGranularity(QueryGranularity enumValue) {
  switch (enumValue) {
    case QueryGranularity::NOT_SET:
      return {};
    case QueryGranularity::HOURLY:
      return "HOURLY";
    case QueryGranularity::DAILY:
      return "DAILY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueryGranularityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
