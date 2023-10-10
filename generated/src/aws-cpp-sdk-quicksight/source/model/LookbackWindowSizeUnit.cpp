/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LookbackWindowSizeUnit.h>
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
      namespace LookbackWindowSizeUnitMapper
      {

        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int WEEK_HASH = HashingUtils::HashString("WEEK");


        LookbackWindowSizeUnit GetLookbackWindowSizeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOUR_HASH)
          {
            return LookbackWindowSizeUnit::HOUR;
          }
          else if (hashCode == DAY_HASH)
          {
            return LookbackWindowSizeUnit::DAY;
          }
          else if (hashCode == WEEK_HASH)
          {
            return LookbackWindowSizeUnit::WEEK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LookbackWindowSizeUnit>(hashCode);
          }

          return LookbackWindowSizeUnit::NOT_SET;
        }

        Aws::String GetNameForLookbackWindowSizeUnit(LookbackWindowSizeUnit enumValue)
        {
          switch(enumValue)
          {
          case LookbackWindowSizeUnit::NOT_SET:
            return {};
          case LookbackWindowSizeUnit::HOUR:
            return "HOUR";
          case LookbackWindowSizeUnit::DAY:
            return "DAY";
          case LookbackWindowSizeUnit::WEEK:
            return "WEEK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LookbackWindowSizeUnitMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
