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
enum class CampaignAssetExportTaskStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED };

namespace CampaignAssetExportTaskStatusMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetExportTaskStatus GetCampaignAssetExportTaskStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetExportTaskStatus(CampaignAssetExportTaskStatus value);
}  // namespace CampaignAssetExportTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
