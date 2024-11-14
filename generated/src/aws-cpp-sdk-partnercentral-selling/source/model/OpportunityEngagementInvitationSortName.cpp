/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunityEngagementInvitationSortName.h>
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
      namespace OpportunityEngagementInvitationSortNameMapper
      {

        static const int InvitationDate_HASH = HashingUtils::HashString("InvitationDate");


        OpportunityEngagementInvitationSortName GetOpportunityEngagementInvitationSortNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvitationDate_HASH)
          {
            return OpportunityEngagementInvitationSortName::InvitationDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpportunityEngagementInvitationSortName>(hashCode);
          }

          return OpportunityEngagementInvitationSortName::NOT_SET;
        }

        Aws::String GetNameForOpportunityEngagementInvitationSortName(OpportunityEngagementInvitationSortName enumValue)
        {
          switch(enumValue)
          {
          case OpportunityEngagementInvitationSortName::NOT_SET:
            return {};
          case OpportunityEngagementInvitationSortName::InvitationDate:
            return "InvitationDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpportunityEngagementInvitationSortNameMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
