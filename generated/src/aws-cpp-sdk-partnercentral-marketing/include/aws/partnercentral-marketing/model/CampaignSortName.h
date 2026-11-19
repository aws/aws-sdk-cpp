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
enum class CampaignSortName { NOT_SET, NAME, STATE, START_ON, CREATED_AT };

namespace CampaignSortNameMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignSortName GetCampaignSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignSortName(CampaignSortName value);
}  // namespace CampaignSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
