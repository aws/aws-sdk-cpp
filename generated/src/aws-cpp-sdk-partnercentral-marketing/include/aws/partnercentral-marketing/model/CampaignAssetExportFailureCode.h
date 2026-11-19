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
enum class CampaignAssetExportFailureCode {
  NOT_SET,
  EXPORT_TIMEOUT,
  EXPORT_TOO_LARGE,
  PACKAGING_ERROR,
  SOURCE_OBJECT_MISSING,
  INTERNAL_ERROR
};

namespace CampaignAssetExportFailureCodeMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetExportFailureCode GetCampaignAssetExportFailureCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetExportFailureCode(CampaignAssetExportFailureCode value);
}  // namespace CampaignAssetExportFailureCodeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
