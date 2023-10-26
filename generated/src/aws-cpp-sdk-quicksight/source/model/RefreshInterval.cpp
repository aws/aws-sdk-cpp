/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshInterval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace RefreshIntervalMapper
      {

        static const int MINUTE15_HASH = HashingUtils::HashString("MINUTE15");
        static const int MINUTE30_HASH = HashingUtils::HashString("MINUTE30");
        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        RefreshInterval GetRefreshIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MINUTE15_HASH)
          {
            return RefreshInterval::MINUTE15;
          }
          else if (hashCode == MINUTE30_HASH)
          {
            return RefreshInterval::MINUTE30;
          }
          else if (hashCode == HOURLY_HASH)
          {
            return RefreshInterval::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return RefreshInterval::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return RefreshInterval::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return RefreshInterval::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RefreshInterval>(hashCode);
          }

          return RefreshInterval::NOT_SET;
        }

        Aws::String GetNameForRefreshInterval(RefreshInterval enumValue)
        {
          switch(enumValue)
          {
          case RefreshInterval::NOT_SET:
            return {};
          case RefreshInterval::MINUTE15:
            return "MINUTE15";
          case RefreshInterval::MINUTE30:
            return "MINUTE30";
          case RefreshInterval::HOURLY:
            return "HOURLY";
          case RefreshInterval::DAILY:
            return "DAILY";
          case RefreshInterval::WEEKLY:
            return "WEEKLY";
          case RefreshInterval::MONTHLY:
            return "MONTHLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RefreshIntervalMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
