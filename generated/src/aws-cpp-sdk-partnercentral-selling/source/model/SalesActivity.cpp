/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SalesActivity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace SalesActivityMapper
      {

        static const int Initialized_discussions_with_customer_HASH = HashingUtils::HashString("Initialized discussions with customer");
        static const int Customer_has_shown_interest_in_solution_HASH = HashingUtils::HashString("Customer has shown interest in solution");
        static const int Conducted_POC_Demo_HASH = HashingUtils::HashString("Conducted POC / Demo");
        static const int In_evaluation_planning_stage_HASH = HashingUtils::HashString("In evaluation / planning stage");
        static const int Agreed_on_solution_to_Business_Problem_HASH = HashingUtils::HashString("Agreed on solution to Business Problem");
        static const int Completed_Action_Plan_HASH = HashingUtils::HashString("Completed Action Plan");
        static const int Finalized_Deployment_Need_HASH = HashingUtils::HashString("Finalized Deployment Need");
        static const int SOW_Signed_HASH = HashingUtils::HashString("SOW Signed");


        SalesActivity GetSalesActivityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initialized_discussions_with_customer_HASH)
          {
            return SalesActivity::Initialized_discussions_with_customer;
          }
          else if (hashCode == Customer_has_shown_interest_in_solution_HASH)
          {
            return SalesActivity::Customer_has_shown_interest_in_solution;
          }
          else if (hashCode == Conducted_POC_Demo_HASH)
          {
            return SalesActivity::Conducted_POC_Demo;
          }
          else if (hashCode == In_evaluation_planning_stage_HASH)
          {
            return SalesActivity::In_evaluation_planning_stage;
          }
          else if (hashCode == Agreed_on_solution_to_Business_Problem_HASH)
          {
            return SalesActivity::Agreed_on_solution_to_Business_Problem;
          }
          else if (hashCode == Completed_Action_Plan_HASH)
          {
            return SalesActivity::Completed_Action_Plan;
          }
          else if (hashCode == Finalized_Deployment_Need_HASH)
          {
            return SalesActivity::Finalized_Deployment_Need;
          }
          else if (hashCode == SOW_Signed_HASH)
          {
            return SalesActivity::SOW_Signed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesActivity>(hashCode);
          }

          return SalesActivity::NOT_SET;
        }

        Aws::String GetNameForSalesActivity(SalesActivity enumValue)
        {
          switch(enumValue)
          {
          case SalesActivity::NOT_SET:
            return {};
          case SalesActivity::Initialized_discussions_with_customer:
            return "Initialized discussions with customer";
          case SalesActivity::Customer_has_shown_interest_in_solution:
            return "Customer has shown interest in solution";
          case SalesActivity::Conducted_POC_Demo:
            return "Conducted POC / Demo";
          case SalesActivity::In_evaluation_planning_stage:
            return "In evaluation / planning stage";
          case SalesActivity::Agreed_on_solution_to_Business_Problem:
            return "Agreed on solution to Business Problem";
          case SalesActivity::Completed_Action_Plan:
            return "Completed Action Plan";
          case SalesActivity::Finalized_Deployment_Need:
            return "Finalized Deployment Need";
          case SalesActivity::SOW_Signed:
            return "SOW Signed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesActivityMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
