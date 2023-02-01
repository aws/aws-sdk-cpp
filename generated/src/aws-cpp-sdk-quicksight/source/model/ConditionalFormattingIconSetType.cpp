/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingIconSetType.h>
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
      namespace ConditionalFormattingIconSetTypeMapper
      {

        static const int PLUS_MINUS_HASH = HashingUtils::HashString("PLUS_MINUS");
        static const int CHECK_X_HASH = HashingUtils::HashString("CHECK_X");
        static const int THREE_COLOR_ARROW_HASH = HashingUtils::HashString("THREE_COLOR_ARROW");
        static const int THREE_GRAY_ARROW_HASH = HashingUtils::HashString("THREE_GRAY_ARROW");
        static const int CARET_UP_MINUS_DOWN_HASH = HashingUtils::HashString("CARET_UP_MINUS_DOWN");
        static const int THREE_SHAPE_HASH = HashingUtils::HashString("THREE_SHAPE");
        static const int THREE_CIRCLE_HASH = HashingUtils::HashString("THREE_CIRCLE");
        static const int FLAGS_HASH = HashingUtils::HashString("FLAGS");
        static const int BARS_HASH = HashingUtils::HashString("BARS");
        static const int FOUR_COLOR_ARROW_HASH = HashingUtils::HashString("FOUR_COLOR_ARROW");
        static const int FOUR_GRAY_ARROW_HASH = HashingUtils::HashString("FOUR_GRAY_ARROW");


        ConditionalFormattingIconSetType GetConditionalFormattingIconSetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLUS_MINUS_HASH)
          {
            return ConditionalFormattingIconSetType::PLUS_MINUS;
          }
          else if (hashCode == CHECK_X_HASH)
          {
            return ConditionalFormattingIconSetType::CHECK_X;
          }
          else if (hashCode == THREE_COLOR_ARROW_HASH)
          {
            return ConditionalFormattingIconSetType::THREE_COLOR_ARROW;
          }
          else if (hashCode == THREE_GRAY_ARROW_HASH)
          {
            return ConditionalFormattingIconSetType::THREE_GRAY_ARROW;
          }
          else if (hashCode == CARET_UP_MINUS_DOWN_HASH)
          {
            return ConditionalFormattingIconSetType::CARET_UP_MINUS_DOWN;
          }
          else if (hashCode == THREE_SHAPE_HASH)
          {
            return ConditionalFormattingIconSetType::THREE_SHAPE;
          }
          else if (hashCode == THREE_CIRCLE_HASH)
          {
            return ConditionalFormattingIconSetType::THREE_CIRCLE;
          }
          else if (hashCode == FLAGS_HASH)
          {
            return ConditionalFormattingIconSetType::FLAGS;
          }
          else if (hashCode == BARS_HASH)
          {
            return ConditionalFormattingIconSetType::BARS;
          }
          else if (hashCode == FOUR_COLOR_ARROW_HASH)
          {
            return ConditionalFormattingIconSetType::FOUR_COLOR_ARROW;
          }
          else if (hashCode == FOUR_GRAY_ARROW_HASH)
          {
            return ConditionalFormattingIconSetType::FOUR_GRAY_ARROW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionalFormattingIconSetType>(hashCode);
          }

          return ConditionalFormattingIconSetType::NOT_SET;
        }

        Aws::String GetNameForConditionalFormattingIconSetType(ConditionalFormattingIconSetType enumValue)
        {
          switch(enumValue)
          {
          case ConditionalFormattingIconSetType::PLUS_MINUS:
            return "PLUS_MINUS";
          case ConditionalFormattingIconSetType::CHECK_X:
            return "CHECK_X";
          case ConditionalFormattingIconSetType::THREE_COLOR_ARROW:
            return "THREE_COLOR_ARROW";
          case ConditionalFormattingIconSetType::THREE_GRAY_ARROW:
            return "THREE_GRAY_ARROW";
          case ConditionalFormattingIconSetType::CARET_UP_MINUS_DOWN:
            return "CARET_UP_MINUS_DOWN";
          case ConditionalFormattingIconSetType::THREE_SHAPE:
            return "THREE_SHAPE";
          case ConditionalFormattingIconSetType::THREE_CIRCLE:
            return "THREE_CIRCLE";
          case ConditionalFormattingIconSetType::FLAGS:
            return "FLAGS";
          case ConditionalFormattingIconSetType::BARS:
            return "BARS";
          case ConditionalFormattingIconSetType::FOUR_COLOR_ARROW:
            return "FOUR_COLOR_ARROW";
          case ConditionalFormattingIconSetType::FOUR_GRAY_ARROW:
            return "FOUR_GRAY_ARROW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionalFormattingIconSetTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
