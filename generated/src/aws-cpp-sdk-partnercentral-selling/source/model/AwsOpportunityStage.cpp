/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsOpportunityStage.h>
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
      namespace AwsOpportunityStageMapper
      {

        static const int Not_Started_HASH = HashingUtils::HashString("Not Started");
        static const int In_Progress_HASH = HashingUtils::HashString("In Progress");
        static const int Prospect_HASH = HashingUtils::HashString("Prospect");
        static const int Engaged_HASH = HashingUtils::HashString("Engaged");
        static const int Identified_HASH = HashingUtils::HashString("Identified");
        static const int Qualify_HASH = HashingUtils::HashString("Qualify");
        static const int Research_HASH = HashingUtils::HashString("Research");
        static const int Seller_Engaged_HASH = HashingUtils::HashString("Seller Engaged");
        static const int Evaluating_HASH = HashingUtils::HashString("Evaluating");
        static const int Seller_Registered_HASH = HashingUtils::HashString("Seller Registered");
        static const int Term_Sheet_Negotiation_HASH = HashingUtils::HashString("Term Sheet Negotiation");
        static const int Contract_Negotiation_HASH = HashingUtils::HashString("Contract Negotiation");
        static const int Onboarding_HASH = HashingUtils::HashString("Onboarding");
        static const int Building_Integration_HASH = HashingUtils::HashString("Building Integration");
        static const int Qualified_HASH = HashingUtils::HashString("Qualified");
        static const int On_hold_HASH = HashingUtils::HashString("On-hold");
        static const int Technical_Validation_HASH = HashingUtils::HashString("Technical Validation");
        static const int Business_Validation_HASH = HashingUtils::HashString("Business Validation");
        static const int Committed_HASH = HashingUtils::HashString("Committed");
        static const int Launched_HASH = HashingUtils::HashString("Launched");
        static const int Deferred_to_Partner_HASH = HashingUtils::HashString("Deferred to Partner");
        static const int Closed_Lost_HASH = HashingUtils::HashString("Closed Lost");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Closed_Incomplete_HASH = HashingUtils::HashString("Closed Incomplete");


        AwsOpportunityStage GetAwsOpportunityStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Not_Started_HASH)
          {
            return AwsOpportunityStage::Not_Started;
          }
          else if (hashCode == In_Progress_HASH)
          {
            return AwsOpportunityStage::In_Progress;
          }
          else if (hashCode == Prospect_HASH)
          {
            return AwsOpportunityStage::Prospect;
          }
          else if (hashCode == Engaged_HASH)
          {
            return AwsOpportunityStage::Engaged;
          }
          else if (hashCode == Identified_HASH)
          {
            return AwsOpportunityStage::Identified;
          }
          else if (hashCode == Qualify_HASH)
          {
            return AwsOpportunityStage::Qualify;
          }
          else if (hashCode == Research_HASH)
          {
            return AwsOpportunityStage::Research;
          }
          else if (hashCode == Seller_Engaged_HASH)
          {
            return AwsOpportunityStage::Seller_Engaged;
          }
          else if (hashCode == Evaluating_HASH)
          {
            return AwsOpportunityStage::Evaluating;
          }
          else if (hashCode == Seller_Registered_HASH)
          {
            return AwsOpportunityStage::Seller_Registered;
          }
          else if (hashCode == Term_Sheet_Negotiation_HASH)
          {
            return AwsOpportunityStage::Term_Sheet_Negotiation;
          }
          else if (hashCode == Contract_Negotiation_HASH)
          {
            return AwsOpportunityStage::Contract_Negotiation;
          }
          else if (hashCode == Onboarding_HASH)
          {
            return AwsOpportunityStage::Onboarding;
          }
          else if (hashCode == Building_Integration_HASH)
          {
            return AwsOpportunityStage::Building_Integration;
          }
          else if (hashCode == Qualified_HASH)
          {
            return AwsOpportunityStage::Qualified;
          }
          else if (hashCode == On_hold_HASH)
          {
            return AwsOpportunityStage::On_hold;
          }
          else if (hashCode == Technical_Validation_HASH)
          {
            return AwsOpportunityStage::Technical_Validation;
          }
          else if (hashCode == Business_Validation_HASH)
          {
            return AwsOpportunityStage::Business_Validation;
          }
          else if (hashCode == Committed_HASH)
          {
            return AwsOpportunityStage::Committed;
          }
          else if (hashCode == Launched_HASH)
          {
            return AwsOpportunityStage::Launched;
          }
          else if (hashCode == Deferred_to_Partner_HASH)
          {
            return AwsOpportunityStage::Deferred_to_Partner;
          }
          else if (hashCode == Closed_Lost_HASH)
          {
            return AwsOpportunityStage::Closed_Lost;
          }
          else if (hashCode == Completed_HASH)
          {
            return AwsOpportunityStage::Completed;
          }
          else if (hashCode == Closed_Incomplete_HASH)
          {
            return AwsOpportunityStage::Closed_Incomplete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsOpportunityStage>(hashCode);
          }

          return AwsOpportunityStage::NOT_SET;
        }

        Aws::String GetNameForAwsOpportunityStage(AwsOpportunityStage enumValue)
        {
          switch(enumValue)
          {
          case AwsOpportunityStage::NOT_SET:
            return {};
          case AwsOpportunityStage::Not_Started:
            return "Not Started";
          case AwsOpportunityStage::In_Progress:
            return "In Progress";
          case AwsOpportunityStage::Prospect:
            return "Prospect";
          case AwsOpportunityStage::Engaged:
            return "Engaged";
          case AwsOpportunityStage::Identified:
            return "Identified";
          case AwsOpportunityStage::Qualify:
            return "Qualify";
          case AwsOpportunityStage::Research:
            return "Research";
          case AwsOpportunityStage::Seller_Engaged:
            return "Seller Engaged";
          case AwsOpportunityStage::Evaluating:
            return "Evaluating";
          case AwsOpportunityStage::Seller_Registered:
            return "Seller Registered";
          case AwsOpportunityStage::Term_Sheet_Negotiation:
            return "Term Sheet Negotiation";
          case AwsOpportunityStage::Contract_Negotiation:
            return "Contract Negotiation";
          case AwsOpportunityStage::Onboarding:
            return "Onboarding";
          case AwsOpportunityStage::Building_Integration:
            return "Building Integration";
          case AwsOpportunityStage::Qualified:
            return "Qualified";
          case AwsOpportunityStage::On_hold:
            return "On-hold";
          case AwsOpportunityStage::Technical_Validation:
            return "Technical Validation";
          case AwsOpportunityStage::Business_Validation:
            return "Business Validation";
          case AwsOpportunityStage::Committed:
            return "Committed";
          case AwsOpportunityStage::Launched:
            return "Launched";
          case AwsOpportunityStage::Deferred_to_Partner:
            return "Deferred to Partner";
          case AwsOpportunityStage::Closed_Lost:
            return "Closed Lost";
          case AwsOpportunityStage::Completed:
            return "Completed";
          case AwsOpportunityStage::Closed_Incomplete:
            return "Closed Incomplete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsOpportunityStageMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
