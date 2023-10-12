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

        static constexpr uint32_t MONDAY_HASH = ConstExprHashingUtils::HashString("MONDAY");
        static constexpr uint32_t TUESDAY_HASH = ConstExprHashingUtils::HashString("TUESDAY");
        static constexpr uint32_t WEDNESDAY_HASH = ConstExprHashingUtils::HashString("WEDNESDAY");
        static constexpr uint32_t THURSDAY_HASH = ConstExprHashingUtils::HashString("THURSDAY");
        static constexpr uint32_t FRIDAY_HASH = ConstExprHashingUtils::HashString("FRIDAY");
        static constexpr uint32_t SATURDAY_HASH = ConstExprHashingUtils::HashString("SATURDAY");
        static constexpr uint32_t SUNDAY_HASH = ConstExprHashingUtils::HashString("SUNDAY");


        MaintenanceDay GetMaintenanceDayForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
