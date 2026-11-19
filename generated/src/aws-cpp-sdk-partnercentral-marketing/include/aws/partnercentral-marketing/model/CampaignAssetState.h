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
enum class CampaignAssetState { NOT_SET, INACTIVE, ACTIVE };

namespace CampaignAssetStateMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetState GetCampaignAssetStateForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetState(CampaignAssetState value);
}  // namespace CampaignAssetStateMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
