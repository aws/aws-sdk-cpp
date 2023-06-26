/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/WafRuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace WafRuleTypeMapper
      {

        static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
        static const int RATE_BASED_HASH = HashingUtils::HashString("RATE_BASED");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");


        WafRuleType GetWafRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGULAR_HASH)
          {
            return WafRuleType::REGULAR;
          }
          else if (hashCode == RATE_BASED_HASH)
          {
            return WafRuleType::RATE_BASED;
          }
          else if (hashCode == GROUP_HASH)
          {
            return WafRuleType::GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WafRuleType>(hashCode);
          }

          return WafRuleType::NOT_SET;
        }

        Aws::String GetNameForWafRuleType(WafRuleType enumValue)
        {
          switch(enumValue)
          {
          case WafRuleType::REGULAR:
            return "REGULAR";
          case WafRuleType::RATE_BASED:
            return "RATE_BASED";
          case WafRuleType::GROUP:
            return "GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WafRuleTypeMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
