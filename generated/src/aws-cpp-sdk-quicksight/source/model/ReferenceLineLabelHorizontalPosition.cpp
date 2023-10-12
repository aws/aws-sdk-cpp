/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineLabelHorizontalPosition.h>
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
      namespace ReferenceLineLabelHorizontalPositionMapper
      {

        static constexpr uint32_t LEFT_HASH = ConstExprHashingUtils::HashString("LEFT");
        static constexpr uint32_t CENTER_HASH = ConstExprHashingUtils::HashString("CENTER");
        static constexpr uint32_t RIGHT_HASH = ConstExprHashingUtils::HashString("RIGHT");


        ReferenceLineLabelHorizontalPosition GetReferenceLineLabelHorizontalPositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEFT_HASH)
          {
            return ReferenceLineLabelHorizontalPosition::LEFT;
          }
          else if (hashCode == CENTER_HASH)
          {
            return ReferenceLineLabelHorizontalPosition::CENTER;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return ReferenceLineLabelHorizontalPosition::RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceLineLabelHorizontalPosition>(hashCode);
          }

          return ReferenceLineLabelHorizontalPosition::NOT_SET;
        }

        Aws::String GetNameForReferenceLineLabelHorizontalPosition(ReferenceLineLabelHorizontalPosition enumValue)
        {
          switch(enumValue)
          {
          case ReferenceLineLabelHorizontalPosition::NOT_SET:
            return {};
          case ReferenceLineLabelHorizontalPosition::LEFT:
            return "LEFT";
          case ReferenceLineLabelHorizontalPosition::CENTER:
            return "CENTER";
          case ReferenceLineLabelHorizontalPosition::RIGHT:
            return "RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceLineLabelHorizontalPositionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
