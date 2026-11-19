/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignTemplateCollection.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignTemplateCollectionMapper {

static const int GENERAL_HASH = HashingUtils::HashString("GENERAL");
static const int BUILD_WITH_AI_HASH = HashingUtils::HashString("BUILD_WITH_AI");

CampaignTemplateCollection GetCampaignTemplateCollectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERAL_HASH) {
    return CampaignTemplateCollection::GENERAL;
  } else if (hashCode == BUILD_WITH_AI_HASH) {
    return CampaignTemplateCollection::BUILD_WITH_AI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignTemplateCollection>(hashCode);
  }

  return CampaignTemplateCollection::NOT_SET;
}

Aws::String GetNameForCampaignTemplateCollection(CampaignTemplateCollection enumValue) {
  switch (enumValue) {
    case CampaignTemplateCollection::NOT_SET:
      return {};
    case CampaignTemplateCollection::GENERAL:
      return "GENERAL";
    case CampaignTemplateCollection::BUILD_WITH_AI:
      return "BUILD_WITH_AI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignTemplateCollectionMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
