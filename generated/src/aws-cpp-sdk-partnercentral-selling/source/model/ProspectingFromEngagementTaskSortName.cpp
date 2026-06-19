/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/ProspectingFromEngagementTaskSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace ProspectingFromEngagementTaskSortNameMapper {

static const int StartTime_HASH = HashingUtils::HashString("StartTime");
static const int TaskName_HASH = HashingUtils::HashString("TaskName");
static const int FailedEngagementCount_HASH = HashingUtils::HashString("FailedEngagementCount");

ProspectingFromEngagementTaskSortName GetProspectingFromEngagementTaskSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StartTime_HASH) {
    return ProspectingFromEngagementTaskSortName::StartTime;
  } else if (hashCode == TaskName_HASH) {
    return ProspectingFromEngagementTaskSortName::TaskName;
  } else if (hashCode == FailedEngagementCount_HASH) {
    return ProspectingFromEngagementTaskSortName::FailedEngagementCount;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProspectingFromEngagementTaskSortName>(hashCode);
  }

  return ProspectingFromEngagementTaskSortName::NOT_SET;
}

Aws::String GetNameForProspectingFromEngagementTaskSortName(ProspectingFromEngagementTaskSortName enumValue) {
  switch (enumValue) {
    case ProspectingFromEngagementTaskSortName::NOT_SET:
      return {};
    case ProspectingFromEngagementTaskSortName::StartTime:
      return "StartTime";
    case ProspectingFromEngagementTaskSortName::TaskName:
      return "TaskName";
    case ProspectingFromEngagementTaskSortName::FailedEngagementCount:
      return "FailedEngagementCount";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProspectingFromEngagementTaskSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
