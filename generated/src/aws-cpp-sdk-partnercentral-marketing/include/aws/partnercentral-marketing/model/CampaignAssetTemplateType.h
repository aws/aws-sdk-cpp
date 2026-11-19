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
enum class CampaignAssetTemplateType { NOT_SET, EMAIL, SOCIAL_POST, LANDING_PAGE, BANNER_AD, DOCUMENT };

namespace CampaignAssetTemplateTypeMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetTemplateType GetCampaignAssetTemplateTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetTemplateType(CampaignAssetTemplateType value);
}  // namespace CampaignAssetTemplateTypeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
