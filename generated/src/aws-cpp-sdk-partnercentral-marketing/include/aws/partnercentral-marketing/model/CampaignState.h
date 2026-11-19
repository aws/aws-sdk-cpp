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
enum class CampaignState { NOT_SET, DRAFT, ACTIVE, COMPLETED };

namespace CampaignStateMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignState GetCampaignStateForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignState(CampaignState value);
}  // namespace CampaignStateMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
