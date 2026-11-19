/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class CampaignSetting { NOT_SET, SENDER_EMAIL, END_ON, EMAIL_TARGET, PRIVACY_POLICY_URL, PARTNER_ADDRESS, PARTNER_BADGE };

namespace CampaignSettingMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignSetting GetCampaignSettingForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignSetting(CampaignSetting value);
}  // namespace CampaignSettingMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
