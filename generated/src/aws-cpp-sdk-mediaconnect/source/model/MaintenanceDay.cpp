/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MaintenanceDay.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace MaintenanceDayMapper
      {

        static const int Monday_HASH = HashingUtils::HashString("Monday");
        static const int Tuesday_HASH = HashingUtils::HashString("Tuesday");
        static const int Wednesday_HASH = HashingUtils::HashString("Wednesday");
        static const int Thursday_HASH = HashingUtils::HashString("Thursday");
        static const int Friday_HASH = HashingUtils::HashString("Friday");
        static const int Saturday_HASH = HashingUtils::HashString("Saturday");
        static const int Sunday_HASH = HashingUtils::HashString("Sunday");


        MaintenanceDay GetMaintenanceDayForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Monday_HASH)
          {
            return MaintenanceDay::Monday;
          }
          else if (hashCode == Tuesday_HASH)
          {
            return MaintenanceDay::Tuesday;
          }
          else if (hashCode == Wednesday_HASH)
          {
            return MaintenanceDay::Wednesday;
          }
          else if (hashCode == Thursday_HASH)
          {
            return MaintenanceDay::Thursday;
          }
          else if (hashCode == Friday_HASH)
          {
            return MaintenanceDay::Friday;
          }
          else if (hashCode == Saturday_HASH)
          {
            return MaintenanceDay::Saturday;
          }
          else if (hashCode == Sunday_HASH)
          {
            return MaintenanceDay::Sunday;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceDay>(hashCode);
          }

          return MaintenanceDay::NOT_SET;
        }

        Aws::String GetNameForMaintenanceDay(MaintenanceDay enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceDay::NOT_SET:
            return {};
          case MaintenanceDay::Monday:
            return "Monday";
          case MaintenanceDay::Tuesday:
            return "Tuesday";
          case MaintenanceDay::Wednesday:
            return "Wednesday";
          case MaintenanceDay::Thursday:
            return "Thursday";
          case MaintenanceDay::Friday:
            return "Friday";
          case MaintenanceDay::Saturday:
            return "Saturday";
          case MaintenanceDay::Sunday:
            return "Sunday";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceDayMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
