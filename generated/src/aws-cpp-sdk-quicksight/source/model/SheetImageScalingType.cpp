/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetImageScalingType.h>
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
      namespace SheetImageScalingTypeMapper
      {

        static const int SCALE_TO_WIDTH_HASH = HashingUtils::HashString("SCALE_TO_WIDTH");
        static const int SCALE_TO_HEIGHT_HASH = HashingUtils::HashString("SCALE_TO_HEIGHT");
        static const int SCALE_TO_CONTAINER_HASH = HashingUtils::HashString("SCALE_TO_CONTAINER");
        static const int SCALE_NONE_HASH = HashingUtils::HashString("SCALE_NONE");


        SheetImageScalingType GetSheetImageScalingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCALE_TO_WIDTH_HASH)
          {
            return SheetImageScalingType::SCALE_TO_WIDTH;
          }
          else if (hashCode == SCALE_TO_HEIGHT_HASH)
          {
            return SheetImageScalingType::SCALE_TO_HEIGHT;
          }
          else if (hashCode == SCALE_TO_CONTAINER_HASH)
          {
            return SheetImageScalingType::SCALE_TO_CONTAINER;
          }
          else if (hashCode == SCALE_NONE_HASH)
          {
            return SheetImageScalingType::SCALE_NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SheetImageScalingType>(hashCode);
          }

          return SheetImageScalingType::NOT_SET;
        }

        Aws::String GetNameForSheetImageScalingType(SheetImageScalingType enumValue)
        {
          switch(enumValue)
          {
          case SheetImageScalingType::NOT_SET:
            return {};
          case SheetImageScalingType::SCALE_TO_WIDTH:
            return "SCALE_TO_WIDTH";
          case SheetImageScalingType::SCALE_TO_HEIGHT:
            return "SCALE_TO_HEIGHT";
          case SheetImageScalingType::SCALE_TO_CONTAINER:
            return "SCALE_TO_CONTAINER";
          case SheetImageScalingType::SCALE_NONE:
            return "SCALE_NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SheetImageScalingTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
