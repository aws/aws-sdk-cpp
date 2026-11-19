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
enum class CampaignAssetActivationTaskStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, PARTIAL_FAILURE, FAILED };

namespace CampaignAssetActivationTaskStatusMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetActivationTaskStatus GetCampaignAssetActivationTaskStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetActivationTaskStatus(CampaignAssetActivationTaskStatus value);
}  // namespace CampaignAssetActivationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
