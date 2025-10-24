﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class OpportunityType { NOT_SET, Net_New_Business, Flat_Renewal, Expansion };

namespace OpportunityTypeMapper {
AWS_PARTNERCENTRALSELLING_API OpportunityType GetOpportunityTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForOpportunityType(OpportunityType value);
}  // namespace OpportunityTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
