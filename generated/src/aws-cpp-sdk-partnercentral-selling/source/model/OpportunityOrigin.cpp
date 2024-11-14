/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunityOrigin.h>
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
      namespace OpportunityOriginMapper
      {

        static const int AWS_Referral_HASH = HashingUtils::HashString("AWS Referral");
        static const int Partner_Referral_HASH = HashingUtils::HashString("Partner Referral");


        OpportunityOrigin GetOpportunityOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_Referral_HASH)
          {
            return OpportunityOrigin::AWS_Referral;
          }
          else if (hashCode == Partner_Referral_HASH)
          {
            return OpportunityOrigin::Partner_Referral;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpportunityOrigin>(hashCode);
          }

          return OpportunityOrigin::NOT_SET;
        }

        Aws::String GetNameForOpportunityOrigin(OpportunityOrigin enumValue)
        {
          switch(enumValue)
          {
          case OpportunityOrigin::NOT_SET:
            return {};
          case OpportunityOrigin::AWS_Referral:
            return "AWS Referral";
          case OpportunityOrigin::Partner_Referral:
            return "Partner Referral";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpportunityOriginMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
