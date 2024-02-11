/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DisplayFormat.h>
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
      namespace DisplayFormatMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");
        static const int CURRENCY_HASH = HashingUtils::HashString("CURRENCY");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int STRING_HASH = HashingUtils::HashString("STRING");


        DisplayFormat GetDisplayFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return DisplayFormat::AUTO;
          }
          else if (hashCode == PERCENT_HASH)
          {
            return DisplayFormat::PERCENT;
          }
          else if (hashCode == CURRENCY_HASH)
          {
            return DisplayFormat::CURRENCY;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return DisplayFormat::NUMBER;
          }
          else if (hashCode == DATE_HASH)
          {
            return DisplayFormat::DATE;
          }
          else if (hashCode == STRING_HASH)
          {
            return DisplayFormat::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DisplayFormat>(hashCode);
          }

          return DisplayFormat::NOT_SET;
        }

        Aws::String GetNameForDisplayFormat(DisplayFormat enumValue)
        {
          switch(enumValue)
          {
          case DisplayFormat::NOT_SET:
            return {};
          case DisplayFormat::AUTO:
            return "AUTO";
          case DisplayFormat::PERCENT:
            return "PERCENT";
          case DisplayFormat::CURRENCY:
            return "CURRENCY";
          case DisplayFormat::NUMBER:
            return "NUMBER";
          case DisplayFormat::DATE:
            return "DATE";
          case DisplayFormat::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DisplayFormatMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
