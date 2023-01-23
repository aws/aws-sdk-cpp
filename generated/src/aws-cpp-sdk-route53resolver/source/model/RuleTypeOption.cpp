/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/RuleTypeOption.h>
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
      namespace RuleTypeOptionMapper
      {

        static const int FORWARD_HASH = HashingUtils::HashString("FORWARD");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int RECURSIVE_HASH = HashingUtils::HashString("RECURSIVE");


        RuleTypeOption GetRuleTypeOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORWARD_HASH)
          {
            return RuleTypeOption::FORWARD;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return RuleTypeOption::SYSTEM;
          }
          else if (hashCode == RECURSIVE_HASH)
          {
            return RuleTypeOption::RECURSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleTypeOption>(hashCode);
          }

          return RuleTypeOption::NOT_SET;
        }

        Aws::String GetNameForRuleTypeOption(RuleTypeOption enumValue)
        {
          switch(enumValue)
          {
          case RuleTypeOption::FORWARD:
            return "FORWARD";
          case RuleTypeOption::SYSTEM:
            return "SYSTEM";
          case RuleTypeOption::RECURSIVE:
            return "RECURSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTypeOptionMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
