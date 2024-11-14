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
  enum class AwsClosedLostReason
  {
    NOT_SET,
    Administrative,
    Business_Associate_Agreement,
    Company_Acquired_Dissolved,
    Competitive_Offering,
    Customer_Data_Requirement,
    Customer_Deficiency,
    Customer_Experience,
    Delay_Cancellation_of_Project,
    Duplicate,
    Duplicate_Opportunity,
    Executive_Blocker,
    Failed_Vetting,
    Feature_Limitation,
    Financial_Commercial,
    Insufficient_Amazon_Value,
    Insufficient_AWS_Value,
    International_Constraints,
    Legal_Tax_Regulatory,
    Legal_Terms_and_Conditions,
    Lost_to_Competitor,
    Lost_to_Competitor_Google,
    Lost_to_Competitor_Microsoft,
    Lost_to_Competitor_Other,
    Lost_to_Competitor_Rackspace,
    Lost_to_Competitor_SoftLayer,
    Lost_to_Competitor_VMWare,
    No_Customer_Reference,
    No_Integration_Resources,
    No_Opportunity,
    No_Perceived_Value_of_MP,
    No_Response,
    Not_Committed_to_AWS,
    No_Update,
    On_Premises_Deployment,
    Other,
    Other_Details_in_Description,
    Partner_Gap,
    Past_Due,
    People_Relationship_Governance,
    Platform_Technology_Limitation,
    Preference_for_Competitor,
    Price,
    Product_Technology,
    Product_Not_on_AWS,
    Security_Compliance,
    Self_Service,
    Technical_Limitations,
    Term_Sheet_Impasse
  };

namespace AwsClosedLostReasonMapper
{
AWS_PARTNERCENTRALSELLING_API AwsClosedLostReason GetAwsClosedLostReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAwsClosedLostReason(AwsClosedLostReason value);
} // namespace AwsClosedLostReasonMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
