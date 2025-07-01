/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/MonthName.h>
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
      namespace MonthNameMapper
      {

        static const int JANUARY_HASH = HashingUtils::HashString("JANUARY");
        static const int FEBRUARY_HASH = HashingUtils::HashString("FEBRUARY");
        static const int MARCH_HASH = HashingUtils::HashString("MARCH");
        static const int APRIL_HASH = HashingUtils::HashString("APRIL");
        static const int MAY_HASH = HashingUtils::HashString("MAY");
        static const int JUNE_HASH = HashingUtils::HashString("JUNE");
        static const int JULY_HASH = HashingUtils::HashString("JULY");
        static const int AUGUST_HASH = HashingUtils::HashString("AUGUST");
        static const int SEPTEMBER_HASH = HashingUtils::HashString("SEPTEMBER");
        static const int OCTOBER_HASH = HashingUtils::HashString("OCTOBER");
        static const int NOVEMBER_HASH = HashingUtils::HashString("NOVEMBER");
        static const int DECEMBER_HASH = HashingUtils::HashString("DECEMBER");


        MonthName GetMonthNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JANUARY_HASH)
          {
            return MonthName::JANUARY;
          }
          else if (hashCode == FEBRUARY_HASH)
          {
            return MonthName::FEBRUARY;
          }
          else if (hashCode == MARCH_HASH)
          {
            return MonthName::MARCH;
          }
          else if (hashCode == APRIL_HASH)
          {
            return MonthName::APRIL;
          }
          else if (hashCode == MAY_HASH)
          {
            return MonthName::MAY;
          }
          else if (hashCode == JUNE_HASH)
          {
            return MonthName::JUNE;
          }
          else if (hashCode == JULY_HASH)
          {
            return MonthName::JULY;
          }
          else if (hashCode == AUGUST_HASH)
          {
            return MonthName::AUGUST;
          }
          else if (hashCode == SEPTEMBER_HASH)
          {
            return MonthName::SEPTEMBER;
          }
          else if (hashCode == OCTOBER_HASH)
          {
            return MonthName::OCTOBER;
          }
          else if (hashCode == NOVEMBER_HASH)
          {
            return MonthName::NOVEMBER;
          }
          else if (hashCode == DECEMBER_HASH)
          {
            return MonthName::DECEMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonthName>(hashCode);
          }

          return MonthName::NOT_SET;
        }

        Aws::String GetNameForMonthName(MonthName enumValue)
        {
          switch(enumValue)
          {
          case MonthName::NOT_SET:
            return {};
          case MonthName::JANUARY:
            return "JANUARY";
          case MonthName::FEBRUARY:
            return "FEBRUARY";
          case MonthName::MARCH:
            return "MARCH";
          case MonthName::APRIL:
            return "APRIL";
          case MonthName::MAY:
            return "MAY";
          case MonthName::JUNE:
            return "JUNE";
          case MonthName::JULY:
            return "JULY";
          case MonthName::AUGUST:
            return "AUGUST";
          case MonthName::SEPTEMBER:
            return "SEPTEMBER";
          case MonthName::OCTOBER:
            return "OCTOBER";
          case MonthName::NOVEMBER:
            return "NOVEMBER";
          case MonthName::DECEMBER:
            return "DECEMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonthNameMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
