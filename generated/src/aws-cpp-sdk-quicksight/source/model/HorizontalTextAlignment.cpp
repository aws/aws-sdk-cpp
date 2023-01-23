/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HorizontalTextAlignment.h>
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
      namespace HorizontalTextAlignmentMapper
      {

        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int CENTER_HASH = HashingUtils::HashString("CENTER");
        static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        HorizontalTextAlignment GetHorizontalTextAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEFT_HASH)
          {
            return HorizontalTextAlignment::LEFT;
          }
          else if (hashCode == CENTER_HASH)
          {
            return HorizontalTextAlignment::CENTER;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return HorizontalTextAlignment::RIGHT;
          }
          else if (hashCode == AUTO_HASH)
          {
            return HorizontalTextAlignment::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HorizontalTextAlignment>(hashCode);
          }

          return HorizontalTextAlignment::NOT_SET;
        }

        Aws::String GetNameForHorizontalTextAlignment(HorizontalTextAlignment enumValue)
        {
          switch(enumValue)
          {
          case HorizontalTextAlignment::LEFT:
            return "LEFT";
          case HorizontalTextAlignment::CENTER:
            return "CENTER";
          case HorizontalTextAlignment::RIGHT:
            return "RIGHT";
          case HorizontalTextAlignment::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HorizontalTextAlignmentMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
