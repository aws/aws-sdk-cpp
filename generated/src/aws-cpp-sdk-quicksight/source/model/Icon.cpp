/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Icon.h>
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
      namespace IconMapper
      {

        static constexpr uint32_t CARET_UP_HASH = ConstExprHashingUtils::HashString("CARET_UP");
        static constexpr uint32_t CARET_DOWN_HASH = ConstExprHashingUtils::HashString("CARET_DOWN");
        static constexpr uint32_t PLUS_HASH = ConstExprHashingUtils::HashString("PLUS");
        static constexpr uint32_t MINUS_HASH = ConstExprHashingUtils::HashString("MINUS");
        static constexpr uint32_t ARROW_UP_HASH = ConstExprHashingUtils::HashString("ARROW_UP");
        static constexpr uint32_t ARROW_DOWN_HASH = ConstExprHashingUtils::HashString("ARROW_DOWN");
        static constexpr uint32_t ARROW_LEFT_HASH = ConstExprHashingUtils::HashString("ARROW_LEFT");
        static constexpr uint32_t ARROW_UP_LEFT_HASH = ConstExprHashingUtils::HashString("ARROW_UP_LEFT");
        static constexpr uint32_t ARROW_DOWN_LEFT_HASH = ConstExprHashingUtils::HashString("ARROW_DOWN_LEFT");
        static constexpr uint32_t ARROW_RIGHT_HASH = ConstExprHashingUtils::HashString("ARROW_RIGHT");
        static constexpr uint32_t ARROW_UP_RIGHT_HASH = ConstExprHashingUtils::HashString("ARROW_UP_RIGHT");
        static constexpr uint32_t ARROW_DOWN_RIGHT_HASH = ConstExprHashingUtils::HashString("ARROW_DOWN_RIGHT");
        static constexpr uint32_t FACE_UP_HASH = ConstExprHashingUtils::HashString("FACE_UP");
        static constexpr uint32_t FACE_DOWN_HASH = ConstExprHashingUtils::HashString("FACE_DOWN");
        static constexpr uint32_t FACE_FLAT_HASH = ConstExprHashingUtils::HashString("FACE_FLAT");
        static constexpr uint32_t ONE_BAR_HASH = ConstExprHashingUtils::HashString("ONE_BAR");
        static constexpr uint32_t TWO_BAR_HASH = ConstExprHashingUtils::HashString("TWO_BAR");
        static constexpr uint32_t THREE_BAR_HASH = ConstExprHashingUtils::HashString("THREE_BAR");
        static constexpr uint32_t CIRCLE_HASH = ConstExprHashingUtils::HashString("CIRCLE");
        static constexpr uint32_t TRIANGLE_HASH = ConstExprHashingUtils::HashString("TRIANGLE");
        static constexpr uint32_t SQUARE_HASH = ConstExprHashingUtils::HashString("SQUARE");
        static constexpr uint32_t FLAG_HASH = ConstExprHashingUtils::HashString("FLAG");
        static constexpr uint32_t THUMBS_UP_HASH = ConstExprHashingUtils::HashString("THUMBS_UP");
        static constexpr uint32_t THUMBS_DOWN_HASH = ConstExprHashingUtils::HashString("THUMBS_DOWN");
        static constexpr uint32_t CHECKMARK_HASH = ConstExprHashingUtils::HashString("CHECKMARK");
        static constexpr uint32_t X_HASH = ConstExprHashingUtils::HashString("X");


        Icon GetIconForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CARET_UP_HASH)
          {
            return Icon::CARET_UP;
          }
          else if (hashCode == CARET_DOWN_HASH)
          {
            return Icon::CARET_DOWN;
          }
          else if (hashCode == PLUS_HASH)
          {
            return Icon::PLUS;
          }
          else if (hashCode == MINUS_HASH)
          {
            return Icon::MINUS;
          }
          else if (hashCode == ARROW_UP_HASH)
          {
            return Icon::ARROW_UP;
          }
          else if (hashCode == ARROW_DOWN_HASH)
          {
            return Icon::ARROW_DOWN;
          }
          else if (hashCode == ARROW_LEFT_HASH)
          {
            return Icon::ARROW_LEFT;
          }
          else if (hashCode == ARROW_UP_LEFT_HASH)
          {
            return Icon::ARROW_UP_LEFT;
          }
          else if (hashCode == ARROW_DOWN_LEFT_HASH)
          {
            return Icon::ARROW_DOWN_LEFT;
          }
          else if (hashCode == ARROW_RIGHT_HASH)
          {
            return Icon::ARROW_RIGHT;
          }
          else if (hashCode == ARROW_UP_RIGHT_HASH)
          {
            return Icon::ARROW_UP_RIGHT;
          }
          else if (hashCode == ARROW_DOWN_RIGHT_HASH)
          {
            return Icon::ARROW_DOWN_RIGHT;
          }
          else if (hashCode == FACE_UP_HASH)
          {
            return Icon::FACE_UP;
          }
          else if (hashCode == FACE_DOWN_HASH)
          {
            return Icon::FACE_DOWN;
          }
          else if (hashCode == FACE_FLAT_HASH)
          {
            return Icon::FACE_FLAT;
          }
          else if (hashCode == ONE_BAR_HASH)
          {
            return Icon::ONE_BAR;
          }
          else if (hashCode == TWO_BAR_HASH)
          {
            return Icon::TWO_BAR;
          }
          else if (hashCode == THREE_BAR_HASH)
          {
            return Icon::THREE_BAR;
          }
          else if (hashCode == CIRCLE_HASH)
          {
            return Icon::CIRCLE;
          }
          else if (hashCode == TRIANGLE_HASH)
          {
            return Icon::TRIANGLE;
          }
          else if (hashCode == SQUARE_HASH)
          {
            return Icon::SQUARE;
          }
          else if (hashCode == FLAG_HASH)
          {
            return Icon::FLAG;
          }
          else if (hashCode == THUMBS_UP_HASH)
          {
            return Icon::THUMBS_UP;
          }
          else if (hashCode == THUMBS_DOWN_HASH)
          {
            return Icon::THUMBS_DOWN;
          }
          else if (hashCode == CHECKMARK_HASH)
          {
            return Icon::CHECKMARK;
          }
          else if (hashCode == X_HASH)
          {
            return Icon::X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Icon>(hashCode);
          }

          return Icon::NOT_SET;
        }

        Aws::String GetNameForIcon(Icon enumValue)
        {
          switch(enumValue)
          {
          case Icon::NOT_SET:
            return {};
          case Icon::CARET_UP:
            return "CARET_UP";
          case Icon::CARET_DOWN:
            return "CARET_DOWN";
          case Icon::PLUS:
            return "PLUS";
          case Icon::MINUS:
            return "MINUS";
          case Icon::ARROW_UP:
            return "ARROW_UP";
          case Icon::ARROW_DOWN:
            return "ARROW_DOWN";
          case Icon::ARROW_LEFT:
            return "ARROW_LEFT";
          case Icon::ARROW_UP_LEFT:
            return "ARROW_UP_LEFT";
          case Icon::ARROW_DOWN_LEFT:
            return "ARROW_DOWN_LEFT";
          case Icon::ARROW_RIGHT:
            return "ARROW_RIGHT";
          case Icon::ARROW_UP_RIGHT:
            return "ARROW_UP_RIGHT";
          case Icon::ARROW_DOWN_RIGHT:
            return "ARROW_DOWN_RIGHT";
          case Icon::FACE_UP:
            return "FACE_UP";
          case Icon::FACE_DOWN:
            return "FACE_DOWN";
          case Icon::FACE_FLAT:
            return "FACE_FLAT";
          case Icon::ONE_BAR:
            return "ONE_BAR";
          case Icon::TWO_BAR:
            return "TWO_BAR";
          case Icon::THREE_BAR:
            return "THREE_BAR";
          case Icon::CIRCLE:
            return "CIRCLE";
          case Icon::TRIANGLE:
            return "TRIANGLE";
          case Icon::SQUARE:
            return "SQUARE";
          case Icon::FLAG:
            return "FLAG";
          case Icon::THUMBS_UP:
            return "THUMBS_UP";
          case Icon::THUMBS_DOWN:
            return "THUMBS_DOWN";
          case Icon::CHECKMARK:
            return "CHECKMARK";
          case Icon::X:
            return "X";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IconMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
