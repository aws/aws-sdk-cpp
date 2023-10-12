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

        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        FirewallRuleGroupAssociationStatus GetFirewallRuleGroupAssociationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
