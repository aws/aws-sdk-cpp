/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/InvolvementTypeChangeReason.h>
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
      namespace InvolvementTypeChangeReasonMapper
      {

        static const int Expansion_Opportunity_HASH = HashingUtils::HashString("Expansion Opportunity");
        static const int Change_in_Deal_Information_HASH = HashingUtils::HashString("Change in Deal Information");
        static const int Customer_Requested_HASH = HashingUtils::HashString("Customer Requested");
        static const int Technical_Complexity_HASH = HashingUtils::HashString("Technical Complexity");
        static const int Risk_Mitigation_HASH = HashingUtils::HashString("Risk Mitigation");


        InvolvementTypeChangeReason GetInvolvementTypeChangeReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Expansion_Opportunity_HASH)
          {
            return InvolvementTypeChangeReason::Expansion_Opportunity;
          }
          else if (hashCode == Change_in_Deal_Information_HASH)
          {
            return InvolvementTypeChangeReason::Change_in_Deal_Information;
          }
          else if (hashCode == Customer_Requested_HASH)
          {
            return InvolvementTypeChangeReason::Customer_Requested;
          }
          else if (hashCode == Technical_Complexity_HASH)
          {
            return InvolvementTypeChangeReason::Technical_Complexity;
          }
          else if (hashCode == Risk_Mitigation_HASH)
          {
            return InvolvementTypeChangeReason::Risk_Mitigation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvolvementTypeChangeReason>(hashCode);
          }

          return InvolvementTypeChangeReason::NOT_SET;
        }

        Aws::String GetNameForInvolvementTypeChangeReason(InvolvementTypeChangeReason enumValue)
        {
          switch(enumValue)
          {
          case InvolvementTypeChangeReason::NOT_SET:
            return {};
          case InvolvementTypeChangeReason::Expansion_Opportunity:
            return "Expansion Opportunity";
          case InvolvementTypeChangeReason::Change_in_Deal_Information:
            return "Change in Deal Information";
          case InvolvementTypeChangeReason::Customer_Requested:
            return "Customer Requested";
          case InvolvementTypeChangeReason::Technical_Complexity:
            return "Technical Complexity";
          case InvolvementTypeChangeReason::Risk_Mitigation:
            return "Risk Mitigation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvolvementTypeChangeReasonMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
