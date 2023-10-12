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

        static constexpr uint32_t Monday_HASH = ConstExprHashingUtils::HashString("Monday");
        static constexpr uint32_t Tuesday_HASH = ConstExprHashingUtils::HashString("Tuesday");
        static constexpr uint32_t Wednesday_HASH = ConstExprHashingUtils::HashString("Wednesday");
        static constexpr uint32_t Thursday_HASH = ConstExprHashingUtils::HashString("Thursday");
        static constexpr uint32_t Friday_HASH = ConstExprHashingUtils::HashString("Friday");
        static constexpr uint32_t Saturday_HASH = ConstExprHashingUtils::HashString("Saturday");
        static constexpr uint32_t Sunday_HASH = ConstExprHashingUtils::HashString("Sunday");


        MaintenanceDay GetMaintenanceDayForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
