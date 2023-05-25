/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulRuleDirection.h>
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
      namespace StatefulRuleDirectionMapper
      {

        static const int FORWARD_HASH = HashingUtils::HashString("FORWARD");
        static const int ANY_HASH = HashingUtils::HashString("ANY");


        StatefulRuleDirection GetStatefulRuleDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORWARD_HASH)
          {
            return StatefulRuleDirection::FORWARD;
          }
          else if (hashCode == ANY_HASH)
          {
            return StatefulRuleDirection::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatefulRuleDirection>(hashCode);
          }

          return StatefulRuleDirection::NOT_SET;
        }

        Aws::String GetNameForStatefulRuleDirection(StatefulRuleDirection enumValue)
        {
          switch(enumValue)
          {
          case StatefulRuleDirection::FORWARD:
            return "FORWARD";
          case StatefulRuleDirection::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatefulRuleDirectionMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
