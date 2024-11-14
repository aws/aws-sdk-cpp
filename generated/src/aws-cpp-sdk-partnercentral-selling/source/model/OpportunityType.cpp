/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunityType.h>
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
      namespace OpportunityTypeMapper
      {

        static const int Net_New_Business_HASH = HashingUtils::HashString("Net New Business");
        static const int Flat_Renewal_HASH = HashingUtils::HashString("Flat Renewal");
        static const int Expansion_HASH = HashingUtils::HashString("Expansion");


        OpportunityType GetOpportunityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Net_New_Business_HASH)
          {
            return OpportunityType::Net_New_Business;
          }
          else if (hashCode == Flat_Renewal_HASH)
          {
            return OpportunityType::Flat_Renewal;
          }
          else if (hashCode == Expansion_HASH)
          {
            return OpportunityType::Expansion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpportunityType>(hashCode);
          }

          return OpportunityType::NOT_SET;
        }

        Aws::String GetNameForOpportunityType(OpportunityType enumValue)
        {
          switch(enumValue)
          {
          case OpportunityType::NOT_SET:
            return {};
          case OpportunityType::Net_New_Business:
            return "Net New Business";
          case OpportunityType::Flat_Renewal:
            return "Flat Renewal";
          case OpportunityType::Expansion:
            return "Expansion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpportunityTypeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
