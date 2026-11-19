/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetCategoryMapper {

static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int LANDING_PAGE_HASH = HashingUtils::HashString("LANDING_PAGE");
static const int SOCIAL_POST_HASH = HashingUtils::HashString("SOCIAL_POST");
static const int BANNER_AD_HASH = HashingUtils::HashString("BANNER_AD");
static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");

CampaignAssetCategory GetCampaignAssetCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_HASH) {
    return CampaignAssetCategory::EMAIL;
  } else if (hashCode == LANDING_PAGE_HASH) {
    return CampaignAssetCategory::LANDING_PAGE;
  } else if (hashCode == SOCIAL_POST_HASH) {
    return CampaignAssetCategory::SOCIAL_POST;
  } else if (hashCode == BANNER_AD_HASH) {
    return CampaignAssetCategory::BANNER_AD;
  } else if (hashCode == DOCUMENT_HASH) {
    return CampaignAssetCategory::DOCUMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetCategory>(hashCode);
  }

  return CampaignAssetCategory::NOT_SET;
}

Aws::String GetNameForCampaignAssetCategory(CampaignAssetCategory enumValue) {
  switch (enumValue) {
    case CampaignAssetCategory::NOT_SET:
      return {};
    case CampaignAssetCategory::EMAIL:
      return "EMAIL";
    case CampaignAssetCategory::LANDING_PAGE:
      return "LANDING_PAGE";
    case CampaignAssetCategory::SOCIAL_POST:
      return "SOCIAL_POST";
    case CampaignAssetCategory::BANNER_AD:
      return "BANNER_AD";
    case CampaignAssetCategory::DOCUMENT:
      return "DOCUMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetCategoryMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
