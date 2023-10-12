/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UsageLimitPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace UsageLimitPeriodMapper
      {

        static constexpr uint32_t daily_HASH = ConstExprHashingUtils::HashString("daily");
        static constexpr uint32_t weekly_HASH = ConstExprHashingUtils::HashString("weekly");
        static constexpr uint32_t monthly_HASH = ConstExprHashingUtils::HashString("monthly");


        UsageLimitPeriod GetUsageLimitPeriodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == daily_HASH)
          {
            return UsageLimitPeriod::daily;
          }
          else if (hashCode == weekly_HASH)
          {
            return UsageLimitPeriod::weekly;
          }
          else if (hashCode == monthly_HASH)
          {
            return UsageLimitPeriod::monthly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitPeriod>(hashCode);
          }

          return UsageLimitPeriod::NOT_SET;
        }

        Aws::String GetNameForUsageLimitPeriod(UsageLimitPeriod enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitPeriod::NOT_SET:
            return {};
          case UsageLimitPeriod::daily:
            return "daily";
          case UsageLimitPeriod::weekly:
            return "weekly";
          case UsageLimitPeriod::monthly:
            return "monthly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageLimitPeriodMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
