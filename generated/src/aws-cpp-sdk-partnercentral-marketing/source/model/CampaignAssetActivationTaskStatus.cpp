/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetActivationTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetActivationTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int PARTIAL_FAILURE_HASH = HashingUtils::HashString("PARTIAL_FAILURE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

CampaignAssetActivationTaskStatus GetCampaignAssetActivationTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return CampaignAssetActivationTaskStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return CampaignAssetActivationTaskStatus::SUCCEEDED;
  } else if (hashCode == PARTIAL_FAILURE_HASH) {
    return CampaignAssetActivationTaskStatus::PARTIAL_FAILURE;
  } else if (hashCode == FAILED_HASH) {
    return CampaignAssetActivationTaskStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetActivationTaskStatus>(hashCode);
  }

  return CampaignAssetActivationTaskStatus::NOT_SET;
}

Aws::String GetNameForCampaignAssetActivationTaskStatus(CampaignAssetActivationTaskStatus enumValue) {
  switch (enumValue) {
    case CampaignAssetActivationTaskStatus::NOT_SET:
      return {};
    case CampaignAssetActivationTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case CampaignAssetActivationTaskStatus::SUCCEEDED:
      return "SUCCEEDED";
    case CampaignAssetActivationTaskStatus::PARTIAL_FAILURE:
      return "PARTIAL_FAILURE";
    case CampaignAssetActivationTaskStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetActivationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
