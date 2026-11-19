/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignSetting.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignSettingMapper {

static const int SENDER_EMAIL_HASH = HashingUtils::HashString("SENDER_EMAIL");
static const int END_ON_HASH = HashingUtils::HashString("END_ON");
static const int EMAIL_TARGET_HASH = HashingUtils::HashString("EMAIL_TARGET");
static const int PRIVACY_POLICY_URL_HASH = HashingUtils::HashString("PRIVACY_POLICY_URL");
static const int PARTNER_ADDRESS_HASH = HashingUtils::HashString("PARTNER_ADDRESS");
static const int PARTNER_BADGE_HASH = HashingUtils::HashString("PARTNER_BADGE");

CampaignSetting GetCampaignSettingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SENDER_EMAIL_HASH) {
    return CampaignSetting::SENDER_EMAIL;
  } else if (hashCode == END_ON_HASH) {
    return CampaignSetting::END_ON;
  } else if (hashCode == EMAIL_TARGET_HASH) {
    return CampaignSetting::EMAIL_TARGET;
  } else if (hashCode == PRIVACY_POLICY_URL_HASH) {
    return CampaignSetting::PRIVACY_POLICY_URL;
  } else if (hashCode == PARTNER_ADDRESS_HASH) {
    return CampaignSetting::PARTNER_ADDRESS;
  } else if (hashCode == PARTNER_BADGE_HASH) {
    return CampaignSetting::PARTNER_BADGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignSetting>(hashCode);
  }

  return CampaignSetting::NOT_SET;
}

Aws::String GetNameForCampaignSetting(CampaignSetting enumValue) {
  switch (enumValue) {
    case CampaignSetting::NOT_SET:
      return {};
    case CampaignSetting::SENDER_EMAIL:
      return "SENDER_EMAIL";
    case CampaignSetting::END_ON:
      return "END_ON";
    case CampaignSetting::EMAIL_TARGET:
      return "EMAIL_TARGET";
    case CampaignSetting::PRIVACY_POLICY_URL:
      return "PRIVACY_POLICY_URL";
    case CampaignSetting::PARTNER_ADDRESS:
      return "PARTNER_ADDRESS";
    case CampaignSetting::PARTNER_BADGE:
      return "PARTNER_BADGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignSettingMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
