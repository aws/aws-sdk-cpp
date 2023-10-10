/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallRuleGroupAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace FirewallRuleGroupAssociationStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        FirewallRuleGroupAssociationStatus GetFirewallRuleGroupAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return FirewallRuleGroupAssociationStatus::COMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FirewallRuleGroupAssociationStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FirewallRuleGroupAssociationStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallRuleGroupAssociationStatus>(hashCode);
          }

          return FirewallRuleGroupAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForFirewallRuleGroupAssociationStatus(FirewallRuleGroupAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case FirewallRuleGroupAssociationStatus::NOT_SET:
            return {};
          case FirewallRuleGroupAssociationStatus::COMPLETE:
            return "COMPLETE";
          case FirewallRuleGroupAssociationStatus::DELETING:
            return "DELETING";
          case FirewallRuleGroupAssociationStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallRuleGroupAssociationStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
