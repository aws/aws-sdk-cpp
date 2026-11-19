/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/SearchEngagementScore.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace SearchEngagementScoreMapper {

static const int High_HASH = HashingUtils::HashString("High");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int Low_HASH = HashingUtils::HashString("Low");

SearchEngagementScore GetSearchEngagementScoreForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == High_HASH) {
    return SearchEngagementScore::High;
  } else if (hashCode == Medium_HASH) {
    return SearchEngagementScore::Medium;
  } else if (hashCode == Low_HASH) {
    return SearchEngagementScore::Low;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchEngagementScore>(hashCode);
  }

  return SearchEngagementScore::NOT_SET;
}

Aws::String GetNameForSearchEngagementScore(SearchEngagementScore enumValue) {
  switch (enumValue) {
    case SearchEngagementScore::NOT_SET:
      return {};
    case SearchEngagementScore::High:
      return "High";
    case SearchEngagementScore::Medium:
      return "Medium";
    case SearchEngagementScore::Low:
      return "Low";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchEngagementScoreMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
