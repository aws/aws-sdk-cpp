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

        static const int daily_HASH = HashingUtils::HashString("daily");
        static const int weekly_HASH = HashingUtils::HashString("weekly");
        static const int monthly_HASH = HashingUtils::HashString("monthly");


        UsageLimitPeriod GetUsageLimitPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
