/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RetentionPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace RetentionPeriodMapper
      {

        static const int THREE_MONTHS_HASH = HashingUtils::HashString("THREE_MONTHS");
        static const int SIX_MONTHS_HASH = HashingUtils::HashString("SIX_MONTHS");
        static const int NINE_MONTHS_HASH = HashingUtils::HashString("NINE_MONTHS");
        static const int ONE_YEAR_HASH = HashingUtils::HashString("ONE_YEAR");
        static const int EIGHTEEN_MONTHS_HASH = HashingUtils::HashString("EIGHTEEN_MONTHS");
        static const int TWO_YEARS_HASH = HashingUtils::HashString("TWO_YEARS");
        static const int THIRTY_MONTHS_HASH = HashingUtils::HashString("THIRTY_MONTHS");
        static const int THREE_YEARS_HASH = HashingUtils::HashString("THREE_YEARS");
        static const int FOUR_YEARS_HASH = HashingUtils::HashString("FOUR_YEARS");
        static const int FIVE_YEARS_HASH = HashingUtils::HashString("FIVE_YEARS");
        static const int SIX_YEARS_HASH = HashingUtils::HashString("SIX_YEARS");
        static const int SEVEN_YEARS_HASH = HashingUtils::HashString("SEVEN_YEARS");
        static const int EIGHT_YEARS_HASH = HashingUtils::HashString("EIGHT_YEARS");
        static const int NINE_YEARS_HASH = HashingUtils::HashString("NINE_YEARS");
        static const int TEN_YEARS_HASH = HashingUtils::HashString("TEN_YEARS");
        static const int PERMANENT_HASH = HashingUtils::HashString("PERMANENT");


        RetentionPeriod GetRetentionPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == THREE_MONTHS_HASH)
          {
            return RetentionPeriod::THREE_MONTHS;
          }
          else if (hashCode == SIX_MONTHS_HASH)
          {
            return RetentionPeriod::SIX_MONTHS;
          }
          else if (hashCode == NINE_MONTHS_HASH)
          {
            return RetentionPeriod::NINE_MONTHS;
          }
          else if (hashCode == ONE_YEAR_HASH)
          {
            return RetentionPeriod::ONE_YEAR;
          }
          else if (hashCode == EIGHTEEN_MONTHS_HASH)
          {
            return RetentionPeriod::EIGHTEEN_MONTHS;
          }
          else if (hashCode == TWO_YEARS_HASH)
          {
            return RetentionPeriod::TWO_YEARS;
          }
          else if (hashCode == THIRTY_MONTHS_HASH)
          {
            return RetentionPeriod::THIRTY_MONTHS;
          }
          else if (hashCode == THREE_YEARS_HASH)
          {
            return RetentionPeriod::THREE_YEARS;
          }
          else if (hashCode == FOUR_YEARS_HASH)
          {
            return RetentionPeriod::FOUR_YEARS;
          }
          else if (hashCode == FIVE_YEARS_HASH)
          {
            return RetentionPeriod::FIVE_YEARS;
          }
          else if (hashCode == SIX_YEARS_HASH)
          {
            return RetentionPeriod::SIX_YEARS;
          }
          else if (hashCode == SEVEN_YEARS_HASH)
          {
            return RetentionPeriod::SEVEN_YEARS;
          }
          else if (hashCode == EIGHT_YEARS_HASH)
          {
            return RetentionPeriod::EIGHT_YEARS;
          }
          else if (hashCode == NINE_YEARS_HASH)
          {
            return RetentionPeriod::NINE_YEARS;
          }
          else if (hashCode == TEN_YEARS_HASH)
          {
            return RetentionPeriod::TEN_YEARS;
          }
          else if (hashCode == PERMANENT_HASH)
          {
            return RetentionPeriod::PERMANENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionPeriod>(hashCode);
          }

          return RetentionPeriod::NOT_SET;
        }

        Aws::String GetNameForRetentionPeriod(RetentionPeriod enumValue)
        {
          switch(enumValue)
          {
          case RetentionPeriod::NOT_SET:
            return {};
          case RetentionPeriod::THREE_MONTHS:
            return "THREE_MONTHS";
          case RetentionPeriod::SIX_MONTHS:
            return "SIX_MONTHS";
          case RetentionPeriod::NINE_MONTHS:
            return "NINE_MONTHS";
          case RetentionPeriod::ONE_YEAR:
            return "ONE_YEAR";
          case RetentionPeriod::EIGHTEEN_MONTHS:
            return "EIGHTEEN_MONTHS";
          case RetentionPeriod::TWO_YEARS:
            return "TWO_YEARS";
          case RetentionPeriod::THIRTY_MONTHS:
            return "THIRTY_MONTHS";
          case RetentionPeriod::THREE_YEARS:
            return "THREE_YEARS";
          case RetentionPeriod::FOUR_YEARS:
            return "FOUR_YEARS";
          case RetentionPeriod::FIVE_YEARS:
            return "FIVE_YEARS";
          case RetentionPeriod::SIX_YEARS:
            return "SIX_YEARS";
          case RetentionPeriod::SEVEN_YEARS:
            return "SEVEN_YEARS";
          case RetentionPeriod::EIGHT_YEARS:
            return "EIGHT_YEARS";
          case RetentionPeriod::NINE_YEARS:
            return "NINE_YEARS";
          case RetentionPeriod::TEN_YEARS:
            return "TEN_YEARS";
          case RetentionPeriod::PERMANENT:
            return "PERMANENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionPeriodMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
