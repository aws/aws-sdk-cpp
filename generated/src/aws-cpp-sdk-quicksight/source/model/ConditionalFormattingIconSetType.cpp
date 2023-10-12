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

        static constexpr uint32_t PLUS_MINUS_HASH = ConstExprHashingUtils::HashString("PLUS_MINUS");
        static constexpr uint32_t CHECK_X_HASH = ConstExprHashingUtils::HashString("CHECK_X");
        static constexpr uint32_t THREE_COLOR_ARROW_HASH = ConstExprHashingUtils::HashString("THREE_COLOR_ARROW");
        static constexpr uint32_t THREE_GRAY_ARROW_HASH = ConstExprHashingUtils::HashString("THREE_GRAY_ARROW");
        static constexpr uint32_t CARET_UP_MINUS_DOWN_HASH = ConstExprHashingUtils::HashString("CARET_UP_MINUS_DOWN");
        static constexpr uint32_t THREE_SHAPE_HASH = ConstExprHashingUtils::HashString("THREE_SHAPE");
        static constexpr uint32_t THREE_CIRCLE_HASH = ConstExprHashingUtils::HashString("THREE_CIRCLE");
        static constexpr uint32_t FLAGS_HASH = ConstExprHashingUtils::HashString("FLAGS");
        static constexpr uint32_t BARS_HASH = ConstExprHashingUtils::HashString("BARS");
        static constexpr uint32_t FOUR_COLOR_ARROW_HASH = ConstExprHashingUtils::HashString("FOUR_COLOR_ARROW");
        static constexpr uint32_t FOUR_GRAY_ARROW_HASH = ConstExprHashingUtils::HashString("FOUR_GRAY_ARROW");


        ConditionalFormattingIconSetType GetConditionalFormattingIconSetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConditionalFormattingIconSetType::NOT_SET:
            return {};
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
