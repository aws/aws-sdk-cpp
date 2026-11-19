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
enum class CampaignAssetCategory { NOT_SET, EMAIL, LANDING_PAGE, SOCIAL_POST, BANNER_AD, DOCUMENT };

namespace CampaignAssetCategoryMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetCategory GetCampaignAssetCategoryForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetCategory(CampaignAssetCategory value);
}  // namespace CampaignAssetCategoryMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
