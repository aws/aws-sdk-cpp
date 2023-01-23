/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlSliderType.h>
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
      namespace SheetControlSliderTypeMapper
      {

        static const int SINGLE_POINT_HASH = HashingUtils::HashString("SINGLE_POINT");
        static const int RANGE_HASH = HashingUtils::HashString("RANGE");


        SheetControlSliderType GetSheetControlSliderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_POINT_HASH)
          {
            return SheetControlSliderType::SINGLE_POINT;
          }
          else if (hashCode == RANGE_HASH)
          {
            return SheetControlSliderType::RANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SheetControlSliderType>(hashCode);
          }

          return SheetControlSliderType::NOT_SET;
        }

        Aws::String GetNameForSheetControlSliderType(SheetControlSliderType enumValue)
        {
          switch(enumValue)
          {
          case SheetControlSliderType::SINGLE_POINT:
            return "SINGLE_POINT";
          case SheetControlSliderType::RANGE:
            return "RANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SheetControlSliderTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
