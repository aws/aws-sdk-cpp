/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsClosedLostReason.h>
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
      namespace AwsClosedLostReasonMapper
      {

        static const int Administrative_HASH = HashingUtils::HashString("Administrative");
        static const int Business_Associate_Agreement_HASH = HashingUtils::HashString("Business Associate Agreement");
        static const int Company_Acquired_Dissolved_HASH = HashingUtils::HashString("Company Acquired/Dissolved");
        static const int Competitive_Offering_HASH = HashingUtils::HashString("Competitive Offering");
        static const int Customer_Data_Requirement_HASH = HashingUtils::HashString("Customer Data Requirement");
        static const int Customer_Deficiency_HASH = HashingUtils::HashString("Customer Deficiency");
        static const int Customer_Experience_HASH = HashingUtils::HashString("Customer Experience");
        static const int Delay_Cancellation_of_Project_HASH = HashingUtils::HashString("Delay / Cancellation of Project");
        static const int Duplicate_HASH = HashingUtils::HashString("Duplicate");
        static const int Duplicate_Opportunity_HASH = HashingUtils::HashString("Duplicate Opportunity");
        static const int Executive_Blocker_HASH = HashingUtils::HashString("Executive Blocker");
        static const int Failed_Vetting_HASH = HashingUtils::HashString("Failed Vetting");
        static const int Feature_Limitation_HASH = HashingUtils::HashString("Feature Limitation");
        static const int Financial_Commercial_HASH = HashingUtils::HashString("Financial/Commercial");
        static const int Insufficient_Amazon_Value_HASH = HashingUtils::HashString("Insufficient Amazon Value");
        static const int Insufficient_AWS_Value_HASH = HashingUtils::HashString("Insufficient AWS Value");
        static const int International_Constraints_HASH = HashingUtils::HashString("International Constraints");
        static const int Legal_Tax_Regulatory_HASH = HashingUtils::HashString("Legal / Tax / Regulatory");
        static const int Legal_Terms_and_Conditions_HASH = HashingUtils::HashString("Legal Terms and Conditions");
        static const int Lost_to_Competitor_HASH = HashingUtils::HashString("Lost to Competitor");
        static const int Lost_to_Competitor_Google_HASH = HashingUtils::HashString("Lost to Competitor - Google");
        static const int Lost_to_Competitor_Microsoft_HASH = HashingUtils::HashString("Lost to Competitor - Microsoft");
        static const int Lost_to_Competitor_Other_HASH = HashingUtils::HashString("Lost to Competitor - Other");
        static const int Lost_to_Competitor_Rackspace_HASH = HashingUtils::HashString("Lost to Competitor - Rackspace");
        static const int Lost_to_Competitor_SoftLayer_HASH = HashingUtils::HashString("Lost to Competitor - SoftLayer");
        static const int Lost_to_Competitor_VMWare_HASH = HashingUtils::HashString("Lost to Competitor - VMWare");
        static const int No_Customer_Reference_HASH = HashingUtils::HashString("No Customer Reference");
        static const int No_Integration_Resources_HASH = HashingUtils::HashString("No Integration Resources");
        static const int No_Opportunity_HASH = HashingUtils::HashString("No Opportunity");
        static const int No_Perceived_Value_of_MP_HASH = HashingUtils::HashString("No Perceived Value of MP");
        static const int No_Response_HASH = HashingUtils::HashString("No Response");
        static const int Not_Committed_to_AWS_HASH = HashingUtils::HashString("Not Committed to AWS");
        static const int No_Update_HASH = HashingUtils::HashString("No Update");
        static const int On_Premises_Deployment_HASH = HashingUtils::HashString("On Premises Deployment");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int Other_Details_in_Description_HASH = HashingUtils::HashString("Other (Details in Description)");
        static const int Partner_Gap_HASH = HashingUtils::HashString("Partner Gap");
        static const int Past_Due_HASH = HashingUtils::HashString("Past Due");
        static const int People_Relationship_Governance_HASH = HashingUtils::HashString("People/Relationship/Governance");
        static const int Platform_Technology_Limitation_HASH = HashingUtils::HashString("Platform Technology Limitation");
        static const int Preference_for_Competitor_HASH = HashingUtils::HashString("Preference for Competitor");
        static const int Price_HASH = HashingUtils::HashString("Price");
        static const int Product_Technology_HASH = HashingUtils::HashString("Product/Technology");
        static const int Product_Not_on_AWS_HASH = HashingUtils::HashString("Product Not on AWS");
        static const int Security_Compliance_HASH = HashingUtils::HashString("Security / Compliance");
        static const int Self_Service_HASH = HashingUtils::HashString("Self-Service");
        static const int Technical_Limitations_HASH = HashingUtils::HashString("Technical Limitations");
        static const int Term_Sheet_Impasse_HASH = HashingUtils::HashString("Term Sheet Impasse");


        AwsClosedLostReason GetAwsClosedLostReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Administrative_HASH)
          {
            return AwsClosedLostReason::Administrative;
          }
          else if (hashCode == Business_Associate_Agreement_HASH)
          {
            return AwsClosedLostReason::Business_Associate_Agreement;
          }
          else if (hashCode == Company_Acquired_Dissolved_HASH)
          {
            return AwsClosedLostReason::Company_Acquired_Dissolved;
          }
          else if (hashCode == Competitive_Offering_HASH)
          {
            return AwsClosedLostReason::Competitive_Offering;
          }
          else if (hashCode == Customer_Data_Requirement_HASH)
          {
            return AwsClosedLostReason::Customer_Data_Requirement;
          }
          else if (hashCode == Customer_Deficiency_HASH)
          {
            return AwsClosedLostReason::Customer_Deficiency;
          }
          else if (hashCode == Customer_Experience_HASH)
          {
            return AwsClosedLostReason::Customer_Experience;
          }
          else if (hashCode == Delay_Cancellation_of_Project_HASH)
          {
            return AwsClosedLostReason::Delay_Cancellation_of_Project;
          }
          else if (hashCode == Duplicate_HASH)
          {
            return AwsClosedLostReason::Duplicate;
          }
          else if (hashCode == Duplicate_Opportunity_HASH)
          {
            return AwsClosedLostReason::Duplicate_Opportunity;
          }
          else if (hashCode == Executive_Blocker_HASH)
          {
            return AwsClosedLostReason::Executive_Blocker;
          }
          else if (hashCode == Failed_Vetting_HASH)
          {
            return AwsClosedLostReason::Failed_Vetting;
          }
          else if (hashCode == Feature_Limitation_HASH)
          {
            return AwsClosedLostReason::Feature_Limitation;
          }
          else if (hashCode == Financial_Commercial_HASH)
          {
            return AwsClosedLostReason::Financial_Commercial;
          }
          else if (hashCode == Insufficient_Amazon_Value_HASH)
          {
            return AwsClosedLostReason::Insufficient_Amazon_Value;
          }
          else if (hashCode == Insufficient_AWS_Value_HASH)
          {
            return AwsClosedLostReason::Insufficient_AWS_Value;
          }
          else if (hashCode == International_Constraints_HASH)
          {
            return AwsClosedLostReason::International_Constraints;
          }
          else if (hashCode == Legal_Tax_Regulatory_HASH)
          {
            return AwsClosedLostReason::Legal_Tax_Regulatory;
          }
          else if (hashCode == Legal_Terms_and_Conditions_HASH)
          {
            return AwsClosedLostReason::Legal_Terms_and_Conditions;
          }
          else if (hashCode == Lost_to_Competitor_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor;
          }
          else if (hashCode == Lost_to_Competitor_Google_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor_Google;
          }
          else if (hashCode == Lost_to_Competitor_Microsoft_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor_Microsoft;
          }
          else if (hashCode == Lost_to_Competitor_Other_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor_Other;
          }
          else if (hashCode == Lost_to_Competitor_Rackspace_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor_Rackspace;
          }
          else if (hashCode == Lost_to_Competitor_SoftLayer_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor_SoftLayer;
          }
          else if (hashCode == Lost_to_Competitor_VMWare_HASH)
          {
            return AwsClosedLostReason::Lost_to_Competitor_VMWare;
          }
          else if (hashCode == No_Customer_Reference_HASH)
          {
            return AwsClosedLostReason::No_Customer_Reference;
          }
          else if (hashCode == No_Integration_Resources_HASH)
          {
            return AwsClosedLostReason::No_Integration_Resources;
          }
          else if (hashCode == No_Opportunity_HASH)
          {
            return AwsClosedLostReason::No_Opportunity;
          }
          else if (hashCode == No_Perceived_Value_of_MP_HASH)
          {
            return AwsClosedLostReason::No_Perceived_Value_of_MP;
          }
          else if (hashCode == No_Response_HASH)
          {
            return AwsClosedLostReason::No_Response;
          }
          else if (hashCode == Not_Committed_to_AWS_HASH)
          {
            return AwsClosedLostReason::Not_Committed_to_AWS;
          }
          else if (hashCode == No_Update_HASH)
          {
            return AwsClosedLostReason::No_Update;
          }
          else if (hashCode == On_Premises_Deployment_HASH)
          {
            return AwsClosedLostReason::On_Premises_Deployment;
          }
          else if (hashCode == Other_HASH)
          {
            return AwsClosedLostReason::Other;
          }
          else if (hashCode == Other_Details_in_Description_HASH)
          {
            return AwsClosedLostReason::Other_Details_in_Description;
          }
          else if (hashCode == Partner_Gap_HASH)
          {
            return AwsClosedLostReason::Partner_Gap;
          }
          else if (hashCode == Past_Due_HASH)
          {
            return AwsClosedLostReason::Past_Due;
          }
          else if (hashCode == People_Relationship_Governance_HASH)
          {
            return AwsClosedLostReason::People_Relationship_Governance;
          }
          else if (hashCode == Platform_Technology_Limitation_HASH)
          {
            return AwsClosedLostReason::Platform_Technology_Limitation;
          }
          else if (hashCode == Preference_for_Competitor_HASH)
          {
            return AwsClosedLostReason::Preference_for_Competitor;
          }
          else if (hashCode == Price_HASH)
          {
            return AwsClosedLostReason::Price;
          }
          else if (hashCode == Product_Technology_HASH)
          {
            return AwsClosedLostReason::Product_Technology;
          }
          else if (hashCode == Product_Not_on_AWS_HASH)
          {
            return AwsClosedLostReason::Product_Not_on_AWS;
          }
          else if (hashCode == Security_Compliance_HASH)
          {
            return AwsClosedLostReason::Security_Compliance;
          }
          else if (hashCode == Self_Service_HASH)
          {
            return AwsClosedLostReason::Self_Service;
          }
          else if (hashCode == Technical_Limitations_HASH)
          {
            return AwsClosedLostReason::Technical_Limitations;
          }
          else if (hashCode == Term_Sheet_Impasse_HASH)
          {
            return AwsClosedLostReason::Term_Sheet_Impasse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsClosedLostReason>(hashCode);
          }

          return AwsClosedLostReason::NOT_SET;
        }

        Aws::String GetNameForAwsClosedLostReason(AwsClosedLostReason enumValue)
        {
          switch(enumValue)
          {
          case AwsClosedLostReason::NOT_SET:
            return {};
          case AwsClosedLostReason::Administrative:
            return "Administrative";
          case AwsClosedLostReason::Business_Associate_Agreement:
            return "Business Associate Agreement";
          case AwsClosedLostReason::Company_Acquired_Dissolved:
            return "Company Acquired/Dissolved";
          case AwsClosedLostReason::Competitive_Offering:
            return "Competitive Offering";
          case AwsClosedLostReason::Customer_Data_Requirement:
            return "Customer Data Requirement";
          case AwsClosedLostReason::Customer_Deficiency:
            return "Customer Deficiency";
          case AwsClosedLostReason::Customer_Experience:
            return "Customer Experience";
          case AwsClosedLostReason::Delay_Cancellation_of_Project:
            return "Delay / Cancellation of Project";
          case AwsClosedLostReason::Duplicate:
            return "Duplicate";
          case AwsClosedLostReason::Duplicate_Opportunity:
            return "Duplicate Opportunity";
          case AwsClosedLostReason::Executive_Blocker:
            return "Executive Blocker";
          case AwsClosedLostReason::Failed_Vetting:
            return "Failed Vetting";
          case AwsClosedLostReason::Feature_Limitation:
            return "Feature Limitation";
          case AwsClosedLostReason::Financial_Commercial:
            return "Financial/Commercial";
          case AwsClosedLostReason::Insufficient_Amazon_Value:
            return "Insufficient Amazon Value";
          case AwsClosedLostReason::Insufficient_AWS_Value:
            return "Insufficient AWS Value";
          case AwsClosedLostReason::International_Constraints:
            return "International Constraints";
          case AwsClosedLostReason::Legal_Tax_Regulatory:
            return "Legal / Tax / Regulatory";
          case AwsClosedLostReason::Legal_Terms_and_Conditions:
            return "Legal Terms and Conditions";
          case AwsClosedLostReason::Lost_to_Competitor:
            return "Lost to Competitor";
          case AwsClosedLostReason::Lost_to_Competitor_Google:
            return "Lost to Competitor - Google";
          case AwsClosedLostReason::Lost_to_Competitor_Microsoft:
            return "Lost to Competitor - Microsoft";
          case AwsClosedLostReason::Lost_to_Competitor_Other:
            return "Lost to Competitor - Other";
          case AwsClosedLostReason::Lost_to_Competitor_Rackspace:
            return "Lost to Competitor - Rackspace";
          case AwsClosedLostReason::Lost_to_Competitor_SoftLayer:
            return "Lost to Competitor - SoftLayer";
          case AwsClosedLostReason::Lost_to_Competitor_VMWare:
            return "Lost to Competitor - VMWare";
          case AwsClosedLostReason::No_Customer_Reference:
            return "No Customer Reference";
          case AwsClosedLostReason::No_Integration_Resources:
            return "No Integration Resources";
          case AwsClosedLostReason::No_Opportunity:
            return "No Opportunity";
          case AwsClosedLostReason::No_Perceived_Value_of_MP:
            return "No Perceived Value of MP";
          case AwsClosedLostReason::No_Response:
            return "No Response";
          case AwsClosedLostReason::Not_Committed_to_AWS:
            return "Not Committed to AWS";
          case AwsClosedLostReason::No_Update:
            return "No Update";
          case AwsClosedLostReason::On_Premises_Deployment:
            return "On Premises Deployment";
          case AwsClosedLostReason::Other:
            return "Other";
          case AwsClosedLostReason::Other_Details_in_Description:
            return "Other (Details in Description)";
          case AwsClosedLostReason::Partner_Gap:
            return "Partner Gap";
          case AwsClosedLostReason::Past_Due:
            return "Past Due";
          case AwsClosedLostReason::People_Relationship_Governance:
            return "People/Relationship/Governance";
          case AwsClosedLostReason::Platform_Technology_Limitation:
            return "Platform Technology Limitation";
          case AwsClosedLostReason::Preference_for_Competitor:
            return "Preference for Competitor";
          case AwsClosedLostReason::Price:
            return "Price";
          case AwsClosedLostReason::Product_Technology:
            return "Product/Technology";
          case AwsClosedLostReason::Product_Not_on_AWS:
            return "Product Not on AWS";
          case AwsClosedLostReason::Security_Compliance:
            return "Security / Compliance";
          case AwsClosedLostReason::Self_Service:
            return "Self-Service";
          case AwsClosedLostReason::Technical_Limitations:
            return "Technical Limitations";
          case AwsClosedLostReason::Term_Sheet_Impasse:
            return "Term Sheet Impasse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsClosedLostReasonMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
