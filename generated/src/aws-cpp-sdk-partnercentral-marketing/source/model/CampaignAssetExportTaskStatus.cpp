/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetExportTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetExportTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

CampaignAssetExportTaskStatus GetCampaignAssetExportTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return CampaignAssetExportTaskStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return CampaignAssetExportTaskStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return CampaignAssetExportTaskStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetExportTaskStatus>(hashCode);
  }

  return CampaignAssetExportTaskStatus::NOT_SET;
}

Aws::String GetNameForCampaignAssetExportTaskStatus(CampaignAssetExportTaskStatus enumValue) {
  switch (enumValue) {
    case CampaignAssetExportTaskStatus::NOT_SET:
      return {};
    case CampaignAssetExportTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case CampaignAssetExportTaskStatus::COMPLETED:
      return "COMPLETED";
    case CampaignAssetExportTaskStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetExportTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
