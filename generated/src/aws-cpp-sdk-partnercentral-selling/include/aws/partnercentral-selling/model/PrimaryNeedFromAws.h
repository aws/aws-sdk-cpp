/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class PrimaryNeedFromAws
  {
    NOT_SET,
    Co_Sell_Architectural_Validation,
    Co_Sell_Business_Presentation,
    Co_Sell_Competitive_Information,
    Co_Sell_Pricing_Assistance,
    Co_Sell_Technical_Consultation,
    Co_Sell_Total_Cost_of_Ownership_Evaluation,
    Co_Sell_Deal_Support,
    Co_Sell_Support_for_Public_Tender_RFx
  };

namespace PrimaryNeedFromAwsMapper
{
AWS_PARTNERCENTRALSELLING_API PrimaryNeedFromAws GetPrimaryNeedFromAwsForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForPrimaryNeedFromAws(PrimaryNeedFromAws value);
} // namespace PrimaryNeedFromAwsMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
