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
  enum class AwsOpportunityStage
  {
    NOT_SET,
    Not_Started,
    In_Progress,
    Prospect,
    Engaged,
    Identified,
    Qualify,
    Research,
    Seller_Engaged,
    Evaluating,
    Seller_Registered,
    Term_Sheet_Negotiation,
    Contract_Negotiation,
    Onboarding,
    Building_Integration,
    Qualified,
    On_hold,
    Technical_Validation,
    Business_Validation,
    Committed,
    Launched,
    Deferred_to_Partner,
    Closed_Lost,
    Completed,
    Closed_Incomplete
  };

namespace AwsOpportunityStageMapper
{
AWS_PARTNERCENTRALSELLING_API AwsOpportunityStage GetAwsOpportunityStageForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAwsOpportunityStage(AwsOpportunityStage value);
} // namespace AwsOpportunityStageMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
