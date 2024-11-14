/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/PrimaryNeedFromAws.h>
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
      namespace PrimaryNeedFromAwsMapper
      {

        static const int Co_Sell_Architectural_Validation_HASH = HashingUtils::HashString("Co-Sell - Architectural Validation");
        static const int Co_Sell_Business_Presentation_HASH = HashingUtils::HashString("Co-Sell - Business Presentation");
        static const int Co_Sell_Competitive_Information_HASH = HashingUtils::HashString("Co-Sell - Competitive Information");
        static const int Co_Sell_Pricing_Assistance_HASH = HashingUtils::HashString("Co-Sell - Pricing Assistance");
        static const int Co_Sell_Technical_Consultation_HASH = HashingUtils::HashString("Co-Sell - Technical Consultation");
        static const int Co_Sell_Total_Cost_of_Ownership_Evaluation_HASH = HashingUtils::HashString("Co-Sell - Total Cost of Ownership Evaluation");
        static const int Co_Sell_Deal_Support_HASH = HashingUtils::HashString("Co-Sell - Deal Support");
        static const int Co_Sell_Support_for_Public_Tender_RFx_HASH = HashingUtils::HashString("Co-Sell - Support for Public Tender / RFx");


        PrimaryNeedFromAws GetPrimaryNeedFromAwsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Co_Sell_Architectural_Validation_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Architectural_Validation;
          }
          else if (hashCode == Co_Sell_Business_Presentation_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Business_Presentation;
          }
          else if (hashCode == Co_Sell_Competitive_Information_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Competitive_Information;
          }
          else if (hashCode == Co_Sell_Pricing_Assistance_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Pricing_Assistance;
          }
          else if (hashCode == Co_Sell_Technical_Consultation_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Technical_Consultation;
          }
          else if (hashCode == Co_Sell_Total_Cost_of_Ownership_Evaluation_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Total_Cost_of_Ownership_Evaluation;
          }
          else if (hashCode == Co_Sell_Deal_Support_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Deal_Support;
          }
          else if (hashCode == Co_Sell_Support_for_Public_Tender_RFx_HASH)
          {
            return PrimaryNeedFromAws::Co_Sell_Support_for_Public_Tender_RFx;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrimaryNeedFromAws>(hashCode);
          }

          return PrimaryNeedFromAws::NOT_SET;
        }

        Aws::String GetNameForPrimaryNeedFromAws(PrimaryNeedFromAws enumValue)
        {
          switch(enumValue)
          {
          case PrimaryNeedFromAws::NOT_SET:
            return {};
          case PrimaryNeedFromAws::Co_Sell_Architectural_Validation:
            return "Co-Sell - Architectural Validation";
          case PrimaryNeedFromAws::Co_Sell_Business_Presentation:
            return "Co-Sell - Business Presentation";
          case PrimaryNeedFromAws::Co_Sell_Competitive_Information:
            return "Co-Sell - Competitive Information";
          case PrimaryNeedFromAws::Co_Sell_Pricing_Assistance:
            return "Co-Sell - Pricing Assistance";
          case PrimaryNeedFromAws::Co_Sell_Technical_Consultation:
            return "Co-Sell - Technical Consultation";
          case PrimaryNeedFromAws::Co_Sell_Total_Cost_of_Ownership_Evaluation:
            return "Co-Sell - Total Cost of Ownership Evaluation";
          case PrimaryNeedFromAws::Co_Sell_Deal_Support:
            return "Co-Sell - Deal Support";
          case PrimaryNeedFromAws::Co_Sell_Support_for_Public_Tender_RFx:
            return "Co-Sell - Support for Public Tender / RFx";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrimaryNeedFromAwsMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
