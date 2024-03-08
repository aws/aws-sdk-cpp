/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallRuleGroupStatus.h>
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
      namespace FirewallRuleGroupStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        FirewallRuleGroupStatus GetFirewallRuleGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return FirewallRuleGroupStatus::COMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FirewallRuleGroupStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FirewallRuleGroupStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallRuleGroupStatus>(hashCode);
          }

          return FirewallRuleGroupStatus::NOT_SET;
        }

        Aws::String GetNameForFirewallRuleGroupStatus(FirewallRuleGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case FirewallRuleGroupStatus::NOT_SET:
            return {};
          case FirewallRuleGroupStatus::COMPLETE:
            return "COMPLETE";
          case FirewallRuleGroupStatus::DELETING:
            return "DELETING";
          case FirewallRuleGroupStatus::UPDATING:
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

      } // namespace FirewallRuleGroupStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
