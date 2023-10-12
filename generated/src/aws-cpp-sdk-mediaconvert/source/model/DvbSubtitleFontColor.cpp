/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleFontColor.h>
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
      namespace DvbSubtitleFontColorMapper
      {

        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t YELLOW_HASH = ConstExprHashingUtils::HashString("YELLOW");
        static constexpr uint32_t RED_HASH = ConstExprHashingUtils::HashString("RED");
        static constexpr uint32_t GREEN_HASH = ConstExprHashingUtils::HashString("GREEN");
        static constexpr uint32_t BLUE_HASH = ConstExprHashingUtils::HashString("BLUE");
        static constexpr uint32_t HEX_HASH = ConstExprHashingUtils::HashString("HEX");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        DvbSubtitleFontColor GetDvbSubtitleFontColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleFontColor::WHITE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleFontColor::BLACK;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return DvbSubtitleFontColor::YELLOW;
          }
          else if (hashCode == RED_HASH)
          {
            return DvbSubtitleFontColor::RED;
          }
          else if (hashCode == GREEN_HASH)
          {
            return DvbSubtitleFontColor::GREEN;
          }
          else if (hashCode == BLUE_HASH)
          {
            return DvbSubtitleFontColor::BLUE;
          }
          else if (hashCode == HEX_HASH)
          {
            return DvbSubtitleFontColor::HEX;
          }
          else if (hashCode == AUTO_HASH)
          {
            return DvbSubtitleFontColor::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleFontColor>(hashCode);
          }

          return DvbSubtitleFontColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleFontColor(DvbSubtitleFontColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleFontColor::NOT_SET:
            return {};
          case DvbSubtitleFontColor::WHITE:
            return "WHITE";
          case DvbSubtitleFontColor::BLACK:
            return "BLACK";
          case DvbSubtitleFontColor::YELLOW:
            return "YELLOW";
          case DvbSubtitleFontColor::RED:
            return "RED";
          case DvbSubtitleFontColor::GREEN:
            return "GREEN";
          case DvbSubtitleFontColor::BLUE:
            return "BLUE";
          case DvbSubtitleFontColor::HEX:
            return "HEX";
          case DvbSubtitleFontColor::AUTO:
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

      } // namespace DvbSubtitleFontColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
