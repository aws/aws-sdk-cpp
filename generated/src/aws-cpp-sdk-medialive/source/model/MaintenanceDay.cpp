/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MaintenanceDay.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace MaintenanceDayMapper
      {

        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");
        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");


        MaintenanceDay GetMaintenanceDayForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONDAY_HASH)
          {
            return MaintenanceDay::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return MaintenanceDay::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return MaintenanceDay::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return MaintenanceDay::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return MaintenanceDay::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return MaintenanceDay::SATURDAY;
          }
          else if (hashCode == SUNDAY_HASH)
          {
            return MaintenanceDay::SUNDAY;
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
          case MaintenanceDay::MONDAY:
            return "MONDAY";
          case MaintenanceDay::TUESDAY:
            return "TUESDAY";
          case MaintenanceDay::WEDNESDAY:
            return "WEDNESDAY";
          case MaintenanceDay::THURSDAY:
            return "THURSDAY";
          case MaintenanceDay::FRIDAY:
            return "FRIDAY";
          case MaintenanceDay::SATURDAY:
            return "SATURDAY";
          case MaintenanceDay::SUNDAY:
            return "SUNDAY";
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
  } // namespace MediaLive
} // namespace Aws
