/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleOutlineColor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace BurninSubtitleOutlineColorMapper
      {

        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t YELLOW_HASH = ConstExprHashingUtils::HashString("YELLOW");
        static constexpr uint32_t RED_HASH = ConstExprHashingUtils::HashString("RED");
        static constexpr uint32_t GREEN_HASH = ConstExprHashingUtils::HashString("GREEN");
        static constexpr uint32_t BLUE_HASH = ConstExprHashingUtils::HashString("BLUE");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        BurninSubtitleOutlineColor GetBurninSubtitleOutlineColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurninSubtitleOutlineColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurninSubtitleOutlineColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return BurninSubtitleOutlineColor::YELLOW;
          }
          else if (hashCode == RED_HASH)
          {
            return BurninSubtitleOutlineColor::RED;
          }
          else if (hashCode == GREEN_HASH)
          {
            return BurninSubtitleOutlineColor::GREEN;
          }
          else if (hashCode == BLUE_HASH)
          {
            return BurninSubtitleOutlineColor::BLUE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return BurninSubtitleOutlineColor::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleOutlineColor>(hashCode);
          }

          return BurninSubtitleOutlineColor::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleOutlineColor(BurninSubtitleOutlineColor enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleOutlineColor::NOT_SET:
            return {};
          case BurninSubtitleOutlineColor::BLACK:
            return "BLACK";
          case BurninSubtitleOutlineColor::WHITE:
            return "WHITE";
          case BurninSubtitleOutlineColor::YELLOW:
            return "YELLOW";
          case BurninSubtitleOutlineColor::RED:
            return "RED";
          case BurninSubtitleOutlineColor::GREEN:
            return "GREEN";
          case BurninSubtitleOutlineColor::BLUE:
            return "BLUE";
          case BurninSubtitleOutlineColor::AUTO:
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

      } // namespace BurninSubtitleOutlineColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
