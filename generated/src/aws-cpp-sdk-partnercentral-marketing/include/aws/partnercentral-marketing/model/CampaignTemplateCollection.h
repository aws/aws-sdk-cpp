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
enum class CampaignTemplateCollection { NOT_SET, GENERAL, BUILD_WITH_AI };

namespace CampaignTemplateCollectionMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignTemplateCollection GetCampaignTemplateCollectionForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignTemplateCollection(CampaignTemplateCollection value);
}  // namespace CampaignTemplateCollectionMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
