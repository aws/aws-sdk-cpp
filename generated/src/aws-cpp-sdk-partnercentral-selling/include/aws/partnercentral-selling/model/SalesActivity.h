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
  enum class SalesActivity
  {
    NOT_SET,
    Initialized_discussions_with_customer,
    Customer_has_shown_interest_in_solution,
    Conducted_POC_Demo,
    In_evaluation_planning_stage,
    Agreed_on_solution_to_Business_Problem,
    Completed_Action_Plan,
    Finalized_Deployment_Need,
    SOW_Signed
  };

namespace SalesActivityMapper
{
AWS_PARTNERCENTRALSELLING_API SalesActivity GetSalesActivityForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSalesActivity(SalesActivity value);
} // namespace SalesActivityMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
