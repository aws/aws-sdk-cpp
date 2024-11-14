/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ClosedLostReason.h>
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
      namespace ClosedLostReasonMapper
      {

        static const int Customer_Deficiency_HASH = HashingUtils::HashString("Customer Deficiency");
        static const int Delay_Cancellation_of_Project_HASH = HashingUtils::HashString("Delay / Cancellation of Project");
        static const int Legal_Tax_Regulatory_HASH = HashingUtils::HashString("Legal / Tax / Regulatory");
        static const int Lost_to_Competitor_Google_HASH = HashingUtils::HashString("Lost to Competitor - Google");
        static const int Lost_to_Competitor_Microsoft_HASH = HashingUtils::HashString("Lost to Competitor - Microsoft");
        static const int Lost_to_Competitor_SoftLayer_HASH = HashingUtils::HashString("Lost to Competitor - SoftLayer");
        static const int Lost_to_Competitor_VMWare_HASH = HashingUtils::HashString("Lost to Competitor - VMWare");
        static const int Lost_to_Competitor_Other_HASH = HashingUtils::HashString("Lost to Competitor - Other");
        static const int No_Opportunity_HASH = HashingUtils::HashString("No Opportunity");
        static const int On_Premises_Deployment_HASH = HashingUtils::HashString("On Premises Deployment");
        static const int Partner_Gap_HASH = HashingUtils::HashString("Partner Gap");
        static const int Price_HASH = HashingUtils::HashString("Price");
        static const int Security_Compliance_HASH = HashingUtils::HashString("Security / Compliance");
        static const int Technical_Limitations_HASH = HashingUtils::HashString("Technical Limitations");
        static const int Customer_Experience_HASH = HashingUtils::HashString("Customer Experience");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int People_Relationship_Governance_HASH = HashingUtils::HashString("People/Relationship/Governance");
        static const int Product_Technology_HASH = HashingUtils::HashString("Product/Technology");
        static const int Financial_Commercial_HASH = HashingUtils::HashString("Financial/Commercial");


        ClosedLostReason GetClosedLostReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Customer_Deficiency_HASH)
          {
            return ClosedLostReason::Customer_Deficiency;
          }
          else if (hashCode == Delay_Cancellation_of_Project_HASH)
          {
            return ClosedLostReason::Delay_Cancellation_of_Project;
          }
          else if (hashCode == Legal_Tax_Regulatory_HASH)
          {
            return ClosedLostReason::Legal_Tax_Regulatory;
          }
          else if (hashCode == Lost_to_Competitor_Google_HASH)
          {
            return ClosedLostReason::Lost_to_Competitor_Google;
          }
          else if (hashCode == Lost_to_Competitor_Microsoft_HASH)
          {
            return ClosedLostReason::Lost_to_Competitor_Microsoft;
          }
          else if (hashCode == Lost_to_Competitor_SoftLayer_HASH)
          {
            return ClosedLostReason::Lost_to_Competitor_SoftLayer;
          }
          else if (hashCode == Lost_to_Competitor_VMWare_HASH)
          {
            return ClosedLostReason::Lost_to_Competitor_VMWare;
          }
          else if (hashCode == Lost_to_Competitor_Other_HASH)
          {
            return ClosedLostReason::Lost_to_Competitor_Other;
          }
          else if (hashCode == No_Opportunity_HASH)
          {
            return ClosedLostReason::No_Opportunity;
          }
          else if (hashCode == On_Premises_Deployment_HASH)
          {
            return ClosedLostReason::On_Premises_Deployment;
          }
          else if (hashCode == Partner_Gap_HASH)
          {
            return ClosedLostReason::Partner_Gap;
          }
          else if (hashCode == Price_HASH)
          {
            return ClosedLostReason::Price;
          }
          else if (hashCode == Security_Compliance_HASH)
          {
            return ClosedLostReason::Security_Compliance;
          }
          else if (hashCode == Technical_Limitations_HASH)
          {
            return ClosedLostReason::Technical_Limitations;
          }
          else if (hashCode == Customer_Experience_HASH)
          {
            return ClosedLostReason::Customer_Experience;
          }
          else if (hashCode == Other_HASH)
          {
            return ClosedLostReason::Other;
          }
          else if (hashCode == People_Relationship_Governance_HASH)
          {
            return ClosedLostReason::People_Relationship_Governance;
          }
          else if (hashCode == Product_Technology_HASH)
          {
            return ClosedLostReason::Product_Technology;
          }
          else if (hashCode == Financial_Commercial_HASH)
          {
            return ClosedLostReason::Financial_Commercial;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClosedLostReason>(hashCode);
          }

          return ClosedLostReason::NOT_SET;
        }

        Aws::String GetNameForClosedLostReason(ClosedLostReason enumValue)
        {
          switch(enumValue)
          {
          case ClosedLostReason::NOT_SET:
            return {};
          case ClosedLostReason::Customer_Deficiency:
            return "Customer Deficiency";
          case ClosedLostReason::Delay_Cancellation_of_Project:
            return "Delay / Cancellation of Project";
          case ClosedLostReason::Legal_Tax_Regulatory:
            return "Legal / Tax / Regulatory";
          case ClosedLostReason::Lost_to_Competitor_Google:
            return "Lost to Competitor - Google";
          case ClosedLostReason::Lost_to_Competitor_Microsoft:
            return "Lost to Competitor - Microsoft";
          case ClosedLostReason::Lost_to_Competitor_SoftLayer:
            return "Lost to Competitor - SoftLayer";
          case ClosedLostReason::Lost_to_Competitor_VMWare:
            return "Lost to Competitor - VMWare";
          case ClosedLostReason::Lost_to_Competitor_Other:
            return "Lost to Competitor - Other";
          case ClosedLostReason::No_Opportunity:
            return "No Opportunity";
          case ClosedLostReason::On_Premises_Deployment:
            return "On Premises Deployment";
          case ClosedLostReason::Partner_Gap:
            return "Partner Gap";
          case ClosedLostReason::Price:
            return "Price";
          case ClosedLostReason::Security_Compliance:
            return "Security / Compliance";
          case ClosedLostReason::Technical_Limitations:
            return "Technical Limitations";
          case ClosedLostReason::Customer_Experience:
            return "Customer Experience";
          case ClosedLostReason::Other:
            return "Other";
          case ClosedLostReason::People_Relationship_Governance:
            return "People/Relationship/Governance";
          case ClosedLostReason::Product_Technology:
            return "Product/Technology";
          case ClosedLostReason::Financial_Commercial:
            return "Financial/Commercial";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClosedLostReasonMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
