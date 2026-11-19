/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetTemplateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetTemplateTypeMapper {

static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int SOCIAL_POST_HASH = HashingUtils::HashString("SOCIAL_POST");
static const int LANDING_PAGE_HASH = HashingUtils::HashString("LANDING_PAGE");
static const int BANNER_AD_HASH = HashingUtils::HashString("BANNER_AD");
static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");

CampaignAssetTemplateType GetCampaignAssetTemplateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_HASH) {
    return CampaignAssetTemplateType::EMAIL;
  } else if (hashCode == SOCIAL_POST_HASH) {
    return CampaignAssetTemplateType::SOCIAL_POST;
  } else if (hashCode == LANDING_PAGE_HASH) {
    return CampaignAssetTemplateType::LANDING_PAGE;
  } else if (hashCode == BANNER_AD_HASH) {
    return CampaignAssetTemplateType::BANNER_AD;
  } else if (hashCode == DOCUMENT_HASH) {
    return CampaignAssetTemplateType::DOCUMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetTemplateType>(hashCode);
  }

  return CampaignAssetTemplateType::NOT_SET;
}

Aws::String GetNameForCampaignAssetTemplateType(CampaignAssetTemplateType enumValue) {
  switch (enumValue) {
    case CampaignAssetTemplateType::NOT_SET:
      return {};
    case CampaignAssetTemplateType::EMAIL:
      return "EMAIL";
    case CampaignAssetTemplateType::SOCIAL_POST:
      return "SOCIAL_POST";
    case CampaignAssetTemplateType::LANDING_PAGE:
      return "LANDING_PAGE";
    case CampaignAssetTemplateType::BANNER_AD:
      return "BANNER_AD";
    case CampaignAssetTemplateType::DOCUMENT:
      return "DOCUMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetTemplateTypeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
