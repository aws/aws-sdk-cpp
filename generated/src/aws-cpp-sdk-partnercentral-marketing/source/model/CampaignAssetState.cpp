/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetState.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetStateMapper {

static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

CampaignAssetState GetCampaignAssetStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INACTIVE_HASH) {
    return CampaignAssetState::INACTIVE;
  } else if (hashCode == ACTIVE_HASH) {
    return CampaignAssetState::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetState>(hashCode);
  }

  return CampaignAssetState::NOT_SET;
}

Aws::String GetNameForCampaignAssetState(CampaignAssetState enumValue) {
  switch (enumValue) {
    case CampaignAssetState::NOT_SET:
      return {};
    case CampaignAssetState::INACTIVE:
      return "INACTIVE";
    case CampaignAssetState::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetStateMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
