/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleGroupType.h>
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
      namespace RuleGroupTypeMapper
      {

        static const int STATELESS_HASH = HashingUtils::HashString("STATELESS");
        static const int STATEFUL_HASH = HashingUtils::HashString("STATEFUL");


        RuleGroupType GetRuleGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATELESS_HASH)
          {
            return RuleGroupType::STATELESS;
          }
          else if (hashCode == STATEFUL_HASH)
          {
            return RuleGroupType::STATEFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleGroupType>(hashCode);
          }

          return RuleGroupType::NOT_SET;
        }

        Aws::String GetNameForRuleGroupType(RuleGroupType enumValue)
        {
          switch(enumValue)
          {
          case RuleGroupType::STATELESS:
            return "STATELESS";
          case RuleGroupType::STATEFUL:
            return "STATEFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleGroupTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
