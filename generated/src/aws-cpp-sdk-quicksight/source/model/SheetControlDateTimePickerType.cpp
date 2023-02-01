/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlDateTimePickerType.h>
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
      namespace SheetControlDateTimePickerTypeMapper
      {

        static const int SINGLE_VALUED_HASH = HashingUtils::HashString("SINGLE_VALUED");
        static const int DATE_RANGE_HASH = HashingUtils::HashString("DATE_RANGE");


        SheetControlDateTimePickerType GetSheetControlDateTimePickerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_VALUED_HASH)
          {
            return SheetControlDateTimePickerType::SINGLE_VALUED;
          }
          else if (hashCode == DATE_RANGE_HASH)
          {
            return SheetControlDateTimePickerType::DATE_RANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SheetControlDateTimePickerType>(hashCode);
          }

          return SheetControlDateTimePickerType::NOT_SET;
        }

        Aws::String GetNameForSheetControlDateTimePickerType(SheetControlDateTimePickerType enumValue)
        {
          switch(enumValue)
          {
          case SheetControlDateTimePickerType::SINGLE_VALUED:
            return "SINGLE_VALUED";
          case SheetControlDateTimePickerType::DATE_RANGE:
            return "DATE_RANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SheetControlDateTimePickerTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
