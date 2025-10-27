/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class OpportunityEngagementInvitationSortName { NOT_SET, InvitationDate };

namespace OpportunityEngagementInvitationSortNameMapper {
AWS_PARTNERCENTRALSELLING_API OpportunityEngagementInvitationSortName
GetOpportunityEngagementInvitationSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForOpportunityEngagementInvitationSortName(OpportunityEngagementInvitationSortName value);
}  // namespace OpportunityEngagementInvitationSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
