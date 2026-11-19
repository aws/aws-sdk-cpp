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
enum class CampaignAssetActivationStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace CampaignAssetActivationStatusMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetActivationStatus GetCampaignAssetActivationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetActivationStatus(CampaignAssetActivationStatus value);
}  // namespace CampaignAssetActivationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
