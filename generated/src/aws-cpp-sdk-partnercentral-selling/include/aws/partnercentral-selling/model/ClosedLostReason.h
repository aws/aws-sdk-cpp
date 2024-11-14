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
  enum class ClosedLostReason
  {
    NOT_SET,
    Customer_Deficiency,
    Delay_Cancellation_of_Project,
    Legal_Tax_Regulatory,
    Lost_to_Competitor_Google,
    Lost_to_Competitor_Microsoft,
    Lost_to_Competitor_SoftLayer,
    Lost_to_Competitor_VMWare,
    Lost_to_Competitor_Other,
    No_Opportunity,
    On_Premises_Deployment,
    Partner_Gap,
    Price,
    Security_Compliance,
    Technical_Limitations,
    Customer_Experience,
    Other,
    People_Relationship_Governance,
    Product_Technology,
    Financial_Commercial
  };

namespace ClosedLostReasonMapper
{
AWS_PARTNERCENTRALSELLING_API ClosedLostReason GetClosedLostReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForClosedLostReason(ClosedLostReason value);
} // namespace ClosedLostReasonMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
