/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignSortNameMapper {

static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int STATE_HASH = HashingUtils::HashString("STATE");
static const int START_ON_HASH = HashingUtils::HashString("START_ON");
static const int CREATED_AT_HASH = HashingUtils::HashString("CREATED_AT");

CampaignSortName GetCampaignSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NAME_HASH) {
    return CampaignSortName::NAME;
  } else if (hashCode == STATE_HASH) {
    return CampaignSortName::STATE;
  } else if (hashCode == START_ON_HASH) {
    return CampaignSortName::START_ON;
  } else if (hashCode == CREATED_AT_HASH) {
    return CampaignSortName::CREATED_AT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignSortName>(hashCode);
  }

  return CampaignSortName::NOT_SET;
}

Aws::String GetNameForCampaignSortName(CampaignSortName enumValue) {
  switch (enumValue) {
    case CampaignSortName::NOT_SET:
      return {};
    case CampaignSortName::NAME:
      return "NAME";
    case CampaignSortName::STATE:
      return "STATE";
    case CampaignSortName::START_ON:
      return "START_ON";
    case CampaignSortName::CREATED_AT:
      return "CREATED_AT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
