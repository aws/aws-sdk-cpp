/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FirewallStatusValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace FirewallStatusValueMapper
      {

        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");


        FirewallStatusValue GetFirewallStatusValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return FirewallStatusValue::PROVISIONING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FirewallStatusValue::DELETING;
          }
          else if (hashCode == READY_HASH)
          {
            return FirewallStatusValue::READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallStatusValue>(hashCode);
          }

          return FirewallStatusValue::NOT_SET;
        }

        Aws::String GetNameForFirewallStatusValue(FirewallStatusValue enumValue)
        {
          switch(enumValue)
          {
          case FirewallStatusValue::NOT_SET:
            return {};
          case FirewallStatusValue::PROVISIONING:
            return "PROVISIONING";
          case FirewallStatusValue::DELETING:
            return "DELETING";
          case FirewallStatusValue::READY:
            return "READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallStatusValueMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
