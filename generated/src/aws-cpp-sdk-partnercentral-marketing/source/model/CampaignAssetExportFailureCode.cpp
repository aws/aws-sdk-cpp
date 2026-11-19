/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetExportFailureCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetExportFailureCodeMapper {

static const int EXPORT_TIMEOUT_HASH = HashingUtils::HashString("EXPORT_TIMEOUT");
static const int EXPORT_TOO_LARGE_HASH = HashingUtils::HashString("EXPORT_TOO_LARGE");
static const int PACKAGING_ERROR_HASH = HashingUtils::HashString("PACKAGING_ERROR");
static const int SOURCE_OBJECT_MISSING_HASH = HashingUtils::HashString("SOURCE_OBJECT_MISSING");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

CampaignAssetExportFailureCode GetCampaignAssetExportFailureCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXPORT_TIMEOUT_HASH) {
    return CampaignAssetExportFailureCode::EXPORT_TIMEOUT;
  } else if (hashCode == EXPORT_TOO_LARGE_HASH) {
    return CampaignAssetExportFailureCode::EXPORT_TOO_LARGE;
  } else if (hashCode == PACKAGING_ERROR_HASH) {
    return CampaignAssetExportFailureCode::PACKAGING_ERROR;
  } else if (hashCode == SOURCE_OBJECT_MISSING_HASH) {
    return CampaignAssetExportFailureCode::SOURCE_OBJECT_MISSING;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return CampaignAssetExportFailureCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetExportFailureCode>(hashCode);
  }

  return CampaignAssetExportFailureCode::NOT_SET;
}

Aws::String GetNameForCampaignAssetExportFailureCode(CampaignAssetExportFailureCode enumValue) {
  switch (enumValue) {
    case CampaignAssetExportFailureCode::NOT_SET:
      return {};
    case CampaignAssetExportFailureCode::EXPORT_TIMEOUT:
      return "EXPORT_TIMEOUT";
    case CampaignAssetExportFailureCode::EXPORT_TOO_LARGE:
      return "EXPORT_TOO_LARGE";
    case CampaignAssetExportFailureCode::PACKAGING_ERROR:
      return "PACKAGING_ERROR";
    case CampaignAssetExportFailureCode::SOURCE_OBJECT_MISSING:
      return "SOURCE_OBJECT_MISSING";
    case CampaignAssetExportFailureCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetExportFailureCodeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
