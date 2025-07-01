/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DayOfWeekName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace DayOfWeekNameMapper
      {

        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");
        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");


        DayOfWeekName GetDayOfWeekNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONDAY_HASH)
          {
            return DayOfWeekName::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return DayOfWeekName::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return DayOfWeekName::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return DayOfWeekName::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return DayOfWeekName::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return DayOfWeekName::SATURDAY;
          }
          else if (hashCode == SUNDAY_HASH)
          {
            return DayOfWeekName::SUNDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DayOfWeekName>(hashCode);
          }

          return DayOfWeekName::NOT_SET;
        }

        Aws::String GetNameForDayOfWeekName(DayOfWeekName enumValue)
        {
          switch(enumValue)
          {
          case DayOfWeekName::NOT_SET:
            return {};
          case DayOfWeekName::MONDAY:
            return "MONDAY";
          case DayOfWeekName::TUESDAY:
            return "TUESDAY";
          case DayOfWeekName::WEDNESDAY:
            return "WEDNESDAY";
          case DayOfWeekName::THURSDAY:
            return "THURSDAY";
          case DayOfWeekName::FRIDAY:
            return "FRIDAY";
          case DayOfWeekName::SATURDAY:
            return "SATURDAY";
          case DayOfWeekName::SUNDAY:
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

      } // namespace DayOfWeekNameMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
