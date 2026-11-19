/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignState.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignStateMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

CampaignState GetCampaignStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRAFT_HASH) {
    return CampaignState::DRAFT;
  } else if (hashCode == ACTIVE_HASH) {
    return CampaignState::ACTIVE;
  } else if (hashCode == COMPLETED_HASH) {
    return CampaignState::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignState>(hashCode);
  }

  return CampaignState::NOT_SET;
}

Aws::String GetNameForCampaignState(CampaignState enumValue) {
  switch (enumValue) {
    case CampaignState::NOT_SET:
      return {};
    case CampaignState::DRAFT:
      return "DRAFT";
    case CampaignState::ACTIVE:
      return "ACTIVE";
    case CampaignState::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignStateMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
