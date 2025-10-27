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
enum class OpportunityOrigin { NOT_SET, AWS_Referral, Partner_Referral };

namespace OpportunityOriginMapper {
AWS_PARTNERCENTRALSELLING_API OpportunityOrigin GetOpportunityOriginForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForOpportunityOrigin(OpportunityOrigin value);
}  // namespace OpportunityOriginMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
