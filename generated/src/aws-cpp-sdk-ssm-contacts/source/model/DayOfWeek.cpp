/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DayOfWeek.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMContacts
  {
    namespace Model
    {
      namespace DayOfWeekMapper
      {

        static const int MON_HASH = HashingUtils::HashString("MON");
        static const int TUE_HASH = HashingUtils::HashString("TUE");
        static const int WED_HASH = HashingUtils::HashString("WED");
        static const int THU_HASH = HashingUtils::HashString("THU");
        static const int FRI_HASH = HashingUtils::HashString("FRI");
        static const int SAT_HASH = HashingUtils::HashString("SAT");
        static const int SUN_HASH = HashingUtils::HashString("SUN");


        DayOfWeek GetDayOfWeekForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MON_HASH)
          {
            return DayOfWeek::MON;
          }
          else if (hashCode == TUE_HASH)
          {
            return DayOfWeek::TUE;
          }
          else if (hashCode == WED_HASH)
          {
            return DayOfWeek::WED;
          }
          else if (hashCode == THU_HASH)
          {
            return DayOfWeek::THU;
          }
          else if (hashCode == FRI_HASH)
          {
            return DayOfWeek::FRI;
          }
          else if (hashCode == SAT_HASH)
          {
            return DayOfWeek::SAT;
          }
          else if (hashCode == SUN_HASH)
          {
            return DayOfWeek::SUN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DayOfWeek>(hashCode);
          }

          return DayOfWeek::NOT_SET;
        }

        Aws::String GetNameForDayOfWeek(DayOfWeek enumValue)
        {
          switch(enumValue)
          {
          case DayOfWeek::NOT_SET:
            return {};
          case DayOfWeek::MON:
            return "MON";
          case DayOfWeek::TUE:
            return "TUE";
          case DayOfWeek::WED:
            return "WED";
          case DayOfWeek::THU:
            return "THU";
          case DayOfWeek::FRI:
            return "FRI";
          case DayOfWeek::SAT:
            return "SAT";
          case DayOfWeek::SUN:
            return "SUN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DayOfWeekMapper
    } // namespace Model
  } // namespace SSMContacts
} // namespace Aws
